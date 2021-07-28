#include "main.h"
#include "mainwindow.h"

/* Macro which creates the application instance and starts it. */
IMPLEMENT_APP(MyApp)

bool MyApp::OnInit()
{
  /* Create and show the application's main window. */
  MainWindow *mainWindow = new MainWindow(wxT("MyApp"));
  mainWindow->Show(true);

  return true;
}
