
add_executable(xrif2shmim xrif2shmim.cpp)
target_link_libraries(xrif2shmim PRIVATE XWCTK
                                        common
                                        telnet
                                        lilxml                                        
                                        ${CFITSIO_LIB}
                                        ${XRIFLIB}
                                        ${LIBUDEV_LIBRARIES}
                                        milk::ImageStreamIO
                                        OpenMP::OpenMP_CXX
                                        Eigen3::Eigen)
target_include_directories(xrif2shmim PRIVATE 
                            ${XRIF_HEADERS}
                            ${LIBUDEV_INCLUDE_DIRS} 
                            ${CMAKE_CURRENT_SOURCE_DIR}                 
                            )