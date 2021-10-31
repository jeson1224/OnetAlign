#ifndef DISPLAYFORM_H
#define DISPLAYFORM_H

#include "resultform.h"
#include <QWidget>

namespace Ui {
class CentralForm;
}

class CentralForm : public QWidget
{
	Q_OBJECT

public:
	explicit CentralForm(QWidget *parent = nullptr);
	~CentralForm();

private:
	Ui::CentralForm *ui;
	QSharedPointer<ResultForm> m_resultForm;
};

#endif // DISPLAYFORM_H
