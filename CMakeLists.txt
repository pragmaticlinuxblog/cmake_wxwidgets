# Specify the minimum version.
cmake_minimum_required(VERSION 3.7)

# Specify the project name.
project(myapp)

# Add sources.
set(
  PROG_SRCS
  source/main.cpp
  source/mainwindow.cpp
)

# Request the required wxWidgets libs.
find_package(wxWidgets COMPONENTS core base REQUIRED)

# Include the wxWidgets use file to initialize various settings.
include(${wxWidgets_USE_FILE})

# Specify what is needed to create the main target.
add_executable(${PROJECT_NAME} ${PROG_SRCS})

# Link required libraries to the executable
target_link_libraries(${PROJECT_NAME} ${wxWidgets_LIBRARIES})

# Specify how to install the binary.
install (TARGETS ${PROJECT_NAME} RUNTIME DESTINATION bin)

