
#http://www-flc.desy.de/ldcoptimization/documents/talks/CMake_Tutorial.pdf

# CmakeLists.txt in lib dir
include_directories(${remotes_SOURCE_DIR}/include/remotes)
if (USE_UTILS)
  include_directories(${remotes_SOURCE_DIR}/include/utils)
endif (USE_UTILS)

# Adds a library called remotes (libremotes.a under Linux) from the source files under lib/
add_library( remotes rca rca_control remote_control sony sony_control)

foreach(flag ${CXX11_FEATURE_LIST})
  set_property(TARGET remotes
	APPEND PROPERTY COMPILE_DEFINITIONS ${flag}
	)
endforeach()

