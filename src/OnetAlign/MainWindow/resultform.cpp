#include "resultform.h"
#include "ui_resultform.h"

ResultForm::ResultForm(QWidget *parent) :
	QWidget(parent),
	ui(new Ui::ResultForm)
{
	ui->setupUi(this);
}

ResultForm::~ResultForm()
{
	delete ui;
}
