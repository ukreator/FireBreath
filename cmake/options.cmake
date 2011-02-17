# options which affect the way Firebreath is built

set(PROJECTS_DIR "${PROJECT_ROOT}/projects" CACHE STRING "Location to search for project directories")
set(CONFIG_DIR "${PROJECT_ROOT}/src/config"  )

option(BUILD_EXAMPLES "Build example projects" OFF)
option(WITH_DYNAMIC_MSVC_RUNTIME "Build with dynamic MSVC runtime (/MD)" OFF)
option(WITH_SYSTEM_BOOST "Build with system Boost" OFF)
