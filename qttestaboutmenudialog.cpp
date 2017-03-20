#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Weffc++"
#include "qttestaboutmenudialog.h"

#include <cassert>

#include "testaboutmenudialog.h"
#include "qtaboutdialog.h"
#include "ui_qttestaboutmenudialog.h"
#pragma GCC diagnostic pop

ribi::QtTestAboutMenuDialog::QtTestAboutMenuDialog(QWidget *parent) :
  QtHideAndShowDialog(parent),
  ui(new Ui::QtTestAboutMenuDialog)
{
  ui->setupUi(this);
}

ribi::QtTestAboutMenuDialog::~QtTestAboutMenuDialog() noexcept
{
  delete ui;
}

void ribi::QtTestAboutMenuDialog::on_button_about_clicked()
{
  QtAboutDialog d(TestAboutMenuDialog().GetAbout());
  this->ShowChild(&d);
}

void ribi::QtTestAboutMenuDialog::on_button_quit_clicked()
{
  this->close();
}
