#ifndef PERSONNELMANAGE_H
#define PERSONNELMANAGE_H

#include <QWidget>

namespace Ui {
class PersonnelManage;
}

class PersonnelManage : public QWidget
{
    Q_OBJECT

public:
    explicit PersonnelManage(QWidget *parent = 0);
    ~PersonnelManage();

private slots:
    void on_pushButton_6_clicked();

    void on_GroupMngBtn_PersonMngUI_clicked();

    void on_AddPersonBtn_PersonMngUI_clicked();

    void on_ImportListBtn_PersonMngUI_clicked();

    void on_ExportListBtn_PersonMngUI_clicked();

private:
    Ui::PersonnelManage *ui;
};

#endif // PERSONNELMANAGE_H
