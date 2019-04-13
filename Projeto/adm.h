#ifndef ADM_H
#define ADM_H

#include <QDialog>

namespace Ui {
class adm;
}

class adm : public QDialog
{
    Q_OBJECT

public:
    explicit adm(QWidget *parent = nullptr);
    ~adm();

private:
    Ui::adm *ui;
};

#endif // ADM_H
