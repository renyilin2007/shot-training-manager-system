#ifndef DISTRIBUTIONSCHEME_H
#define DISTRIBUTIONSCHEME_H

#include <QWidget>

namespace Ui {
class DistributionScheme;
}

class DistributionScheme : public QWidget
{
    Q_OBJECT

public:
    explicit DistributionScheme(QWidget *parent = 0);
    ~DistributionScheme();

private:
    Ui::DistributionScheme *ui;
};

#endif // DISTRIBUTIONSCHEME_H
