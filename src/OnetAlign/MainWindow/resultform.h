#ifndef RESULTFORM_H
#define RESULTFORM_H

#include <QWidget>

namespace Ui {
class ResultForm;
}

class ResultForm : public QWidget
{
	Q_OBJECT

public:
	explicit ResultForm(QWidget *parent = nullptr);
	~ResultForm();

private:
	Ui::ResultForm *ui;
};

#endif // RESULTFORM_H
