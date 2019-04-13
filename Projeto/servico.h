#ifndef SERVICO_H
#define SERVICO_H

#include <QDialog>

namespace Ui {
class Servico;
}

class Servico : public QDialog
{
    Q_OBJECT

public:
    explicit Servico(QWidget *parent = nullptr);
    ~Servico();

private:
    Ui::Servico *ui;
};

#endif // SERVICO_H
