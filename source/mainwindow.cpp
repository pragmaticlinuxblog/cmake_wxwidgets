/************************************************************************************//**
* \file         mainwindow.cpp
* \brief        Application's main window source file.
*
****************************************************************************************/

/****************************************************************************************
* Include files
****************************************************************************************/
#include "mainwindow.h"


/************************************************************************************//**
** \brief     Constructor of the application's main window.
** \param     title Window title.
** \param     width Width of the window in pixels.
** \param     height Height of the window in pixels.
**
****************************************************************************************/
MainWindow::MainWindow(const wxString& title, int width, int height)
  : wxFrame(NULL, wxID_ANY, title, wxDefaultPosition, wxSize(width, height))
{
  /* Center the window on the screen. */
  Centre();
} /*** end of MainWindow ***/


/*********************************** end of mainwindow.cpp *****************************/

