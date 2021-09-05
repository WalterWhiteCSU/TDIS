# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\TDIS_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\TDIS_autogen.dir\\ParseCache.txt"
  "TDIS_autogen"
  )
endif()
