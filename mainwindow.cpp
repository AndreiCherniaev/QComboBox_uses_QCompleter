#include <QCompleter>
#include <QComboBox>
#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QStringList wordList;
    wordList << "a1" << "a2" << "a3" << "a4";

    QComboBox *combobox = new QComboBox(this);
    foreach(QString str, wordList){
        combobox->addItem(str);
    }
    combobox->setEditable(true);

    QCompleter *completer = new QCompleter(wordList, this);
    completer->setCaseSensitivity(Qt::CaseInsensitive);
    combobox->setCompleter(completer);
}

MainWindow::~MainWindow()
{
    delete ui;
}
