# ##################################################################################################
# Create the rsn-vm interpreter driver.
# ##################################################################################################
add_executable(rsn-vm-interp ${CMAKE_CURRENT_SOURCE_DIR}/interp.cpp)
target_link_libraries(rsn-vm-interp rsn-vm)

add_executable(bench-interp ${CMAKE_CURRENT_SOURCE_DIR}/bench_interp.cpp)
target_link_libraries(bench-interp rsn-vm)

add_executable(hello-driver ${CMAKE_CURRENT_SOURCE_DIR}/hello_driver.cpp)
target_link_libraries(hello-driver rsn-vm)
