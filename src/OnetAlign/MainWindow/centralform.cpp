#include "centralform.h"
#include "ui_centralform.h"
#include <QLabel>

CentralForm::CentralForm(QWidget *parent) :
	QWidget(parent),
	ui(new Ui::CentralForm)
{
	ui->setupUi(this);

	m_resultForm = QSharedPointer<ResultForm>(new ResultForm());
	ui->ResultLayout->addWidget(m_resultForm.get());

	QLabel *camDispaly1 = new QLabel();
	QLabel *camDispaly2 = new QLabel();
	QLabel *camDispaly3 = new QLabel();
	QLabel *camDispaly4 = new QLabel();
	QLabel *camDispaly5 = new QLabel();
	QLabel *camDispaly6 = new QLabel();
	QLabel *camDispaly7 = new QLabel();
	QLabel *camDispaly8 = new QLabel();

	QImage *img=new QImage; //新建一个image对象
	img->load(":/new/prefix1/pictrue/1.jpg"); //将图像资源载入对象img，注意路径，可点进图片右键复制路径
	camDispaly1->setPixmap(QPixmap::fromImage(*img)); //将图片放入label，使用setPixmap,注意指针*img
	camDispaly1->setScaledContents(true);

	QImage *img2=new QImage; //新建一个image对象
	img2->load(":/new/prefix1/pictrue/2.jpg"); //将图像资源载入对象img，注意路径，可点进图片右键复制路径
	camDispaly2->setPixmap(QPixmap::fromImage(*img2)); //将图片放入label，使用setPixmap,注意指针*img
	camDispaly2->setScaledContents(true);

	QImage *img3=new QImage; //新建一个image对象
	img3->load(":/new/prefix1/pictrue/3.jpg"); //将图像资源载入对象img，注意路径，可点进图片右键复制路径
	camDispaly3->setPixmap(QPixmap::fromImage(*img3)); //将图片放入label，使用setPixmap,注意指针*img
	camDispaly3->setScaledContents(true);

	QImage *img4=new QImage; //新建一个image对象
	img4->load(":/new/prefix1/pictrue/4.jpg"); //将图像资源载入对象img，注意路径，可点进图片右键复制路径
	camDispaly4->setPixmap(QPixmap::fromImage(*img4)); //将图片放入label，使用setPixmap,注意指针*img
	camDispaly4->setScaledContents(true);

	camDispaly5->setPixmap(QPixmap::fromImage(*img4)); //将图片放入label，使用setPixmap,注意指针*img
	camDispaly5->setScaledContents(true);

	camDispaly6->setPixmap(QPixmap::fromImage(*img3)); //将图片放入label，使用setPixmap,注意指针*img
	camDispaly6->setScaledContents(true);

	camDispaly7->setPixmap(QPixmap::fromImage(*img2)); //将图片放入label，使用setPixmap,注意指针*img
	camDispaly7->setScaledContents(true);

	camDispaly8->setPixmap(QPixmap::fromImage(*img)); //将图片放入label，使用setPixmap,注意指针*img
	camDispaly8->setScaledContents(true);

	ui->gridLayout->addWidget(camDispaly1,0,1);
	ui->gridLayout->addWidget(camDispaly2,0,2);
	ui->gridLayout->addWidget(camDispaly3,0,3);
	ui->gridLayout->addWidget(camDispaly4,0,4);
	ui->gridLayout->addWidget(camDispaly5,1,1);
	ui->gridLayout->addWidget(camDispaly6,1,2);
	ui->gridLayout->addWidget(camDispaly7,1,3);
	ui->gridLayout->addWidget(camDispaly8,1,4);
}

CentralForm::~CentralForm()
{
	delete ui;
}
