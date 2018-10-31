add_executable(arma_no
  timer.cc
  arma_no.cc)

target_link_libraries(arma_no
  ${ARMADILLO_LIBRARIES})


add_executable(arma_opt1
  timer.cc
  arma_opt1.cc)

target_link_libraries(arma_opt1
  ${ARMADILLO_LIBRARIES})

add_executable(arma_opt2
  timer.cc
  arma_opt2.cc)

target_link_libraries(arma_opt2
  ${ARMADILLO_LIBRARIES})
