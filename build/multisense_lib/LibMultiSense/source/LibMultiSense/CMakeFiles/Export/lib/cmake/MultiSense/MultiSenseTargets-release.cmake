#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "MultiSense" for configuration "Release"
set_property(TARGET MultiSense APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(MultiSense PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libMultiSense.so.6.1.0"
  IMPORTED_SONAME_RELEASE "libMultiSense.so.6.1.0"
  )

list(APPEND _IMPORT_CHECK_TARGETS MultiSense )
list(APPEND _IMPORT_CHECK_FILES_FOR_MultiSense "${_IMPORT_PREFIX}/lib/libMultiSense.so.6.1.0" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
