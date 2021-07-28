#include "mainwindow.h"

MainWindow::MainWindow(const wxString& title)
  : wxFrame(NULL, wxID_ANY, title, wxDefaultPosition, wxSize(640, 480))
{
  /* Center the window on the screen. */
  Centre();
}
