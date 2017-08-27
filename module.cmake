message(STATUS "Loading math module...")

if (NOT CONFIGURED_ONCE)
	set(MODULE_MATH_SOURCE_DIR ${MODULE_MATH_DIR}/src)
endif()

include_directories(${MODULE_MATH_DIR}/include)

add_library(aurora-math SHARED ${MODULE_MATH_SOURCE_DIR}/2DVector.cpp
                               ${MODULE_MATH_SOURCE_DIR}/3DVector.cpp
                               ${MODULE_MATH_SOURCE_DIR}/4DVector.cpp)

set_target_properties(aurora-math PROPERTIES OUTPUT_NAME aurora-math)
