#include "searchdialog.h"

SearchDialog::SearchDialog(QWidget *parent)
    : QDialog(parent)
{
    setWindowTitle(tr("Поиск и замена"));

    QLabel *findLabel = new QLabel(tr("Найти:"));
    QLabel *replaceLabel = new QLabel(tr("Заменить на:"));

    findLineEdit = new QLineEdit(this);
    replaceLineEdit = new QLineEdit(this);

    findButton = new QPushButton(tr("Найти далее"));
    replaceButton = new QPushButton(tr("Заменить"));
    replaceAllButton = new QPushButton(tr("Заменить все"));

    QHBoxLayout *findLayout = new QHBoxLayout;
    findLayout->addWidget(findLabel);
    findLayout->addWidget(findLineEdit);

    QHBoxLayout *replaceLayout = new QHBoxLayout;
    replaceLayout->addWidget(replaceLabel);
    replaceLayout->addWidget(replaceLineEdit);

    QHBoxLayout *buttonsLayout = new QHBoxLayout;
    buttonsLayout->addWidget(findButton);
    buttonsLayout->addWidget(replaceButton);
    buttonsLayout->addWidget(replaceAllButton);

    QVBoxLayout *mainLayout = new QVBoxLayout;
    mainLayout->addLayout(findLayout);
    mainLayout->addLayout(replaceLayout);
    mainLayout->addLayout(buttonsLayout);

    setLayout(mainLayout);

    // связи кнопок со слотами
    connect(findButton, &QPushButton::clicked, this, &SearchDialog::on_findButton_clicked);
    connect(replaceButton, &QPushButton::clicked, this, &SearchDialog::on_replaceButton_clicked);
    connect(replaceAllButton, &QPushButton::clicked, this, &SearchDialog::on_replaceAllButton_clicked);
}

void SearchDialog::on_findButton_clicked()
{
    emit findNext(findLineEdit->text());
}

void SearchDialog::on_replaceButton_clicked()
{
    emit replaceText(findLineEdit->text(), replaceLineEdit->text());
}

void SearchDialog::on_replaceAllButton_clicked()
{
    emit replaceAll(findLineEdit->text(), replaceLineEdit->text());
}
