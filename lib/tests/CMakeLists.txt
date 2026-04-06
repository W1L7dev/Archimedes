set(UNIT_TEST_SOURCES test_main.c)
set(INTEGRATION_TEST_SOURCES test_ncurses.c)

foreach(test_src ${UNIT_TEST_SOURCES})
  get_filename_component(test_name ${test_src} NAME_WE)

  add_executable(${test_name} ${test_src})
  target_link_libraries(${test_name} PRIVATE archimedes)

  add_test(NAME ${test_name} COMMAND ${test_name})
  set_tests_properties(${test_name} PROPERTIES LABELS "unit")
endforeach()

find_package(Curses REQUIRED)

foreach(test_src ${INTEGRATION_TEST_SOURCES})
  get_filename_component(test_name ${test_src} NAME_WE)

  add_executable(${test_name} ${test_src})
  target_link_libraries(${test_name} PRIVATE archimedes curses)

  add_test(NAME ${test_name} COMMAND ${test_name})
  set_tests_properties(${test_name} PROPERTIES LABELS "integration")
endforeach()
