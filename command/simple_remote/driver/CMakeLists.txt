
#http://www-flc.desy.de/ldcoptimization/documents/talks/CMake_Tutorial.pdf

# Make sure the compiler can find include files from our library simpleremote.
INCLUDE_DIRECTORIES(${simpleremote_SOURCE_DIR}/include)

# Add binary called "testsimpleremote" that is built from the source file
# "simple_remote.cpp".
# The extension is automatically found.
ADD_EXECUTABLE(testsimpleremote simple_remote)

foreach(flag ${CXX11_FEATURE_LIST})
  set_property(TARGET testsimpleremote
	APPEND PROPERTY COMPILE_DEFINITIONS ${flag}
	)
endforeach()

# Link the executable to the library simpleremote.
TARGET_LINK_LIBRARIES(testsimpleremote simpleremote)

