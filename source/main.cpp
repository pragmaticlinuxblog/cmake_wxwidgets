/************************************************************************************//**
* \file         main.cpp
* \brief        Application source file.
*
****************************************************************************************/

/****************************************************************************************
* Include files
****************************************************************************************/
#include "main.h"
#include "mainwindow.h"


/****************************************************************************************
* Macro definitions
****************************************************************************************/
/* Macro which creates the application instance and starts it. */
IMPLEMENT_APP(MyApp)


/************************************************************************************//**
** \brief     Called upon application initialization. 
** \return    True if the initialization was successful. False if anything failed, which
**            prevents the application from continuing.
**
****************************************************************************************/
bool MyApp::OnInit()
{
  /* Create and show the application's main window. */
  MainWindow *mainWindow = new MainWindow(wxT("MyApp"), 640, 480);
  mainWindow->Show(true);

  return true;
} /*** end of OnInit ***/


/*********************************** end of main.cpp ***********************************/
