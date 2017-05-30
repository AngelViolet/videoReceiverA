#include "sample.h"
#include "ui_sample.h"

#include <QDebug>
#include <QFileInfoList>

Sample::Sample(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Sample)
{
    ui->setupUi(this);


}

Sample::~Sample()
{
    delete ui;
}

void Sample::on_pushButton_clicked()
{
    dir = new QDir("./photo");
    qDebug() << ui->lineEdit->text();

    QFileInfoList filelist = dir->entryInfoList();
    int cnt = filelist.size() - 2 + 1;

    char buff[32];
    sprintf(buff, "s%d", cnt);

    dir->mkdir(buff);
    this->ui->lineEdit->clear();


   //QString photopath = dir->absolutePath()+"/"+buff;
    photopath = dir->absolutePath()+"/"+buff;
    qDebug()<< photopath;
    delete dir;
    this->close();

}

QString Sample::getPath()
{
    return photopath;
}

