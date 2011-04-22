# options which affect the way Firebreath is built
message("FB Projects dir: ${FB_PROJECTS_DIR}")
if(NOT FB_PROJECTS_DIR)
  message("Setting new projects dir")
  #set(FB_PROJECTS_DIR "${FB_ROOT}/projects" CACHE STRING "Location to search for project directories")
endif(NOT FB_PROJECTS_DIR)
set(FB_CONFIG_DIR "${FB_ROOT}/src/config" CACHE STRING "Location to find global project configuration files (.h files, etc)" )

option(BUILD_EXAMPLES "Build example projects" OFF)

# Vars that can be set by cmake that includes FB scripts
if(NOT DEFINED WITH_DYNAMIC_MSVC_RUNTIME)
  option(WITH_DYNAMIC_MSVC_RUNTIME "Build with dynamic MSVC runtime (/MD)" OFF)
endif()
if(NOT DEFINED WITH_SYSTEM_BOOST )
  option(WITH_SYSTEM_BOOST "Build with system Boost" OFF)
endif()