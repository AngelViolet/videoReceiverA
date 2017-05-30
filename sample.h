#ifndef SAMPLE_H
#define SAMPLE_H

#include <QDialog>
#include <QDir>


namespace Ui {
class Sample;
}

class Sample : public QDialog
{
    Q_OBJECT

public:
    explicit Sample(QWidget *parent = 0);
    ~Sample();
    QString getPath();

private slots:
    void on_pushButton_clicked();


private:
    Ui::Sample *ui;
    QDir *dir;
    QString photopath;

};

#endif // SAMPLE_H
