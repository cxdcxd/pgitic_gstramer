#ifndef USERLOGIN_H
#define USERLOGIN_H

#include <QDialog>

namespace Ui {
class userlogin;
}

class userlogin : public QDialog
{
    Q_OBJECT
    
public:
    explicit userlogin(QWidget *parent = 0);
    ~userlogin();
    
private slots:
    void on_buttonBox_accepted();

private:
    Ui::userlogin *ui;
};

#endif // USERLOGIN_H
