set(DIR ${CMAKE_CURRENT_LIST_DIR})
target_sources(example
    PRIVATE
		"${DIR}/game.h"
        "${DIR}/main.h"
        "${DIR}/cube.h"
        "${DIR}/gamecamera.h"
        "${DIR}/plane.h"
)
target_include_directories(example PRIVATE "${example_SOURCE_DIR}/include")
