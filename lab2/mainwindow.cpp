/*
 * Copyright (c) 2019-2020 Waqar Ahmed -- <waqar.17a@gmail.com>
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 *
 */

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "qsourcehighliter.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "searchdialog.h"

#include <QTextCursor>
#include <QTextDocument>
#include <QMessageBox>

#include <QDebug>
#include <QDir>

using namespace QSourceHighlite;

QHash<QString, QSourceHighliter::Language> MainWindow::_langStringToEnum;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    initLangsEnum();
    initLangsComboBox();
    initThemesComboBox();

    //set highlighter
    QFont f = QFontDatabase::systemFont(QFontDatabase::FixedFont);
    ui->plainTextEdit->setFont(f);
    highlighter = new QSourceHighliter(ui->plainTextEdit->document());

    connect(ui->langComboBox,
            static_cast<void (QComboBox::*) (const QString&)>(&QComboBox::currentTextChanged),
            this, &MainWindow::languageChanged);
    connect(ui->themeComboBox,
            static_cast<void (QComboBox::*) (int)>(&QComboBox::currentIndexChanged),
            this, &MainWindow::themeChanged);

    ui->langComboBox->setCurrentText("Asm");
    languageChanged("Asm");
    //    connect(ui->plainTextEdit, &QPlainTextEdit::textChanged, this, &MainWindow::printDebug);
    connect(ui->SaveAs1, &QAction::triggered, this, &MainWindow::onSaveAs);
    connect(ui->OpenAs1,&QAction::triggered,this,&MainWindow::onOpenAs);
    connect(ui->Exit1,&QAction::triggered,this,&MainWindow::onExit);
    connect(ui->Search,&QAction::triggered,this,&MainWindow::on_actionFindReplace_triggered);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::initLangsEnum()
{
    MainWindow::_langStringToEnum = QHash<QString, QSourceHighliter::Language> {
        { QLatin1String("Asm"), QSourceHighliter::CodeAsm },
        { QLatin1String("Bash"), QSourceHighliter::CodeBash },
        { QLatin1String("C"), QSourceHighliter::CodeC },
        { QLatin1String("C++"), QSourceHighliter::CodeCpp },
        { QLatin1String("CMake"), QSourceHighliter::CodeCMake },
        { QLatin1String("CSharp"), QSourceHighliter::CodeCSharp },
        { QLatin1String("Css"), QSourceHighliter::CodeCSS },
        { QLatin1String("Go"), QSourceHighliter::CodeGo },
        { QLatin1String("Html"), QSourceHighliter::CodeXML },
        { QLatin1String("Ini"), QSourceHighliter::CodeINI },
        { QLatin1String("Java"), QSourceHighliter::CodeJava },
        { QLatin1String("Javascript"), QSourceHighliter::CodeJava },
        { QLatin1String("Json"), QSourceHighliter::CodeJSON },
        { QLatin1String("Lua"), QSourceHighliter::CodeLua },
        { QLatin1String("Make"), QSourceHighliter::CodeMake },
        { QLatin1String("Php"), QSourceHighliter::CodePHP },
        { QLatin1String("Python"), QSourceHighliter::CodePython },
        { QLatin1String("Qml"), QSourceHighliter::CodeQML },
        { QLatin1String("Rhai"), QSourceHighliter::CodeRhai },
        { QLatin1String("Rust"), QSourceHighliter::CodeRust },
        { QLatin1String("Sql"), QSourceHighliter::CodeSQL },
        { QLatin1String("Typescript"), QSourceHighliter::CodeTypeScript },
        { QLatin1String("V"), QSourceHighliter::CodeV },
        { QLatin1String("Vex"), QSourceHighliter::CodeVex },
        { QLatin1String("Xml"), QSourceHighliter::CodeXML },
        { QLatin1String("Yaml"), QSourceHighliter::CodeYAML }
    };
}

void MainWindow::initThemesComboBox()
{
    ui->themeComboBox->addItem("Monokai", QSourceHighliter::Themes::Monokai);
    ui->themeComboBox->addItem("debug", QSourceHighliter::Themes::Monokai);
}

void MainWindow::initLangsComboBox() {
    ui->langComboBox->addItem("Asm","asm");
    ui->langComboBox->addItem("Bash","bash");
    ui->langComboBox->addItem("C","c");
    ui->langComboBox->addItem("C++","c++");
    ui->langComboBox->addItem("CMake","cmake");
    ui->langComboBox->addItem("CSharp","csharp");
    ui->langComboBox->addItem("Css","css");
    ui->langComboBox->addItem("Go","go");
    ui->langComboBox->addItem("Html","html");
    ui->langComboBox->addItem("Ini","ini");
    ui->langComboBox->addItem("Javascript","javascript");
    ui->langComboBox->addItem("Java","java");
    ui->langComboBox->addItem("Lua","lua");
    ui->langComboBox->addItem("Make","make");
    ui->langComboBox->addItem("Php","php");
    ui->langComboBox->addItem("Python","python");
    ui->langComboBox->addItem("Qml","qml");
    ui->langComboBox->addItem("Rust","rust");
    ui->langComboBox->addItem("Sql","sql");
    ui->langComboBox->addItem("Typescript","typescript");
    ui->langComboBox->addItem("V","v");
    ui->langComboBox->addItem("Vex","vex");
    ui->langComboBox->addItem("Xml","xml");
    ui->langComboBox->addItem("Yaml","yaml");
}

void MainWindow::themeChanged(int) {
    QSourceHighliter::Themes theme = (QSourceHighliter::Themes)ui->themeComboBox->currentData().toInt();
    highlighter->setTheme(theme);
}

void MainWindow::languageChanged(const QString &lang) {
    highlighter->setCurrentLanguage(_langStringToEnum.value(lang));
    highlighter->rehighlight();
}
void MainWindow::onSaveAs()
{
    QString fileName = QFileDialog::getSaveFileName(this, "Сохранить как", "", "Text Files (*.txt);;JSON Files (*.json)");
    if (fileName.isEmpty()) return;

    QFile file(fileName);
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        statusBar()->showMessage("Ошибка записи файла", 3000);
        return;
    }

    if (fileName.endsWith(".json", Qt::CaseInsensitive)) {
        // Сохранение в JSON
        QJsonObject obj;
        obj["text"] = ui->plainTextEdit->toPlainText();
        obj["language"] = ui->langComboBox->currentData().toString();

        QJsonDocument doc(obj);
        file.write(doc.toJson());
        statusBar()->showMessage(QString("Файл сохранён: %1").arg(fileName), 3000);
    } else {
        // Сохранение как TXT
        QTextStream out(&file);
        out << ui->plainTextEdit->toPlainText();
        statusBar()->showMessage(QString("Текст сохранён: %1").arg(fileName), 3000);
    }
    file.close();
    ui->plainTextEdit->document()->setModified(false);
}
void MainWindow::onOpenAs()
{
    QString fileName = QFileDialog::getOpenFileName(this, "Открыть файл", "", "Text and JSON Files (*.txt *.json)");
    if (fileName.isEmpty()) return;

    QFile file(fileName);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        statusBar()->showMessage("Не удалось открыть файл", 3000);
        return;
    }

    if (fileName.endsWith(".json", Qt::CaseInsensitive)) {
        QByteArray data = file.readAll();
        QJsonParseError error;
        QJsonDocument doc = QJsonDocument::fromJson(data, &error);

        if (error.error != QJsonParseError::NoError) {
            QMessageBox::critical(this, "Ошибка JSON", "Неверный формат JSON-файла");
            return;
        }

        QJsonObject obj = doc.object();
        QString text = obj["text"].toString();
        QString lang = obj["language"].toString();

        ui->plainTextEdit->setPlainText(text);

        // Восстановить язык
        int index = ui->langComboBox->findData(lang);
        if (index != -1) {
            ui->langComboBox->setCurrentIndex(index);
        }

        statusBar()->showMessage(QString("JSON загружен: %1").arg(fileName), 3000);
    } else {
        QTextStream in(&file);
        ui->plainTextEdit->setPlainText(in.readAll());
        statusBar()->showMessage(QString("Текст открыт: %1").arg(fileName), 3000);
    }
    file.close();
    ui->plainTextEdit->document()->setModified(false);
}
void MainWindow::onExit()
{
    if (ui->plainTextEdit->document()->isModified()) {
        QMessageBox::StandardButton reply = QMessageBox::question(
            this, "Выход", "Сохранить изменения перед выходом?",
            QMessageBox::Yes | QMessageBox::No | QMessageBox::Cancel
        );
        if (reply == QMessageBox::Yes) {
            onSaveAs();
            if (!ui->plainTextEdit->document()->isModified()) {
                QApplication::quit();
            }
        } else if (reply == QMessageBox::No) {
            QApplication::quit();
        }
        // Cancel — ничего не делать
    } else {
        QApplication::quit();
    }
}
void MainWindow::on_actionFindReplace_triggered()
{
    SearchDialog dialog(this);
    connect(&dialog, &SearchDialog::findNext, this, &MainWindow::onFindText);
    connect(&dialog, &SearchDialog::replaceText, this, &MainWindow::onReplaceText);
    connect(&dialog, &SearchDialog::replaceAll, this, &MainWindow::onReplaceAll);
    dialog.exec();
}

void MainWindow::onFindText(const QString &text)
{
    QTextCursor cursor = ui->plainTextEdit->textCursor();
    QString content = ui->plainTextEdit->toPlainText();

    int pos = content.indexOf(text, cursor.position(), Qt::CaseSensitive);
    if (pos >= 0) {
        cursor.setPosition(pos);
        cursor.movePosition(QTextCursor::Right, QTextCursor::KeepAnchor, text.length());
        ui->plainTextEdit->setTextCursor(cursor);
        ui->statusbar->showMessage(tr("Найдено: ") + text, 3000);
    } else {
        // повторный поиск с начала
        pos = content.indexOf(text, 0, Qt::CaseSensitive);
        if (pos >= 0) {
            cursor.setPosition(pos);
            cursor.movePosition(QTextCursor::Right, QTextCursor::KeepAnchor, text.length());
            ui->plainTextEdit->setTextCursor(cursor);
            ui->statusbar->showMessage(tr("Начали поиск с начала. Найдено: ") + text, 3000);
        } else {
            QMessageBox::information(this, tr("Поиск"), tr("Совпадений не найдено"));
            ui->statusbar->showMessage(tr("Совпадений не найдено"), 3000);
        }
    }
}

void MainWindow::onReplaceText(const QString &find, const QString &replace)
{
    QTextDocument *doc = ui->plainTextEdit->document();
    QTextCursor cursor = ui->plainTextEdit->textCursor();
    QString selected = cursor.selectedText();

    // Если выделен нужный текст — заменяем
    if (!selected.isEmpty() && selected == find) {
        cursor.insertText(replace);
        ui->plainTextEdit->setTextCursor(cursor);
        return;
    }

    // Ищем следующее вхождение
    QTextCursor found = doc->find(find, cursor.position(), QTextDocument::FindCaseSensitively);
    if (!found.isNull()) {
        int start = found.selectionStart();
        found.insertText(replace);

        QTextCursor newCursor = ui->plainTextEdit->textCursor();
        newCursor.setPosition(start);
        newCursor.movePosition(QTextCursor::Right, QTextCursor::KeepAnchor, replace.length());
        ui->plainTextEdit->setTextCursor(newCursor);
    } else {
        QMessageBox::information(this, tr("Поиск"), tr("Совпадений не найдено"));
    }

    // если есть подсветка — можно обновить
    // highlighter->rehighlight();
}

void MainWindow::onReplaceAll(const QString &find, const QString &replace)
{
    QString content = ui->plainTextEdit->toPlainText();
    QString newContent = content.replace(find, replace, Qt::CaseSensitive);
    ui->plainTextEdit->setPlainText(newContent);

    // если есть подсветка — обновляем
    // highlighter->rehighlight();

    QString message = QString("Все вхождения '%1' заменены на '%2'").arg(find, replace);
    ui->statusbar->showMessage(message, 3000);
}
