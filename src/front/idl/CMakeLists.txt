
add_library(idl-front
    hare-idl.tab.cpp
    hare-idl.tab.h
    lex.h
    lex.yy.cpp
    parser.h
    parser_helper.cpp
    parser_helper.h
    ../../front-back/idl_tree.h
    ../../front-back/idl_tree_serializer.h
    ../../front-back/idl_tree_serializer.cpp
    ../../front-back/raiistdiofile.h
)

target_link_libraries(idl-front
  cppformat
  tiny-process-library
)

set_property(TARGET idl-front PROPERTY CXX_STANDARD 11)
set_property(TARGET idl-front PROPERTY CXX_STANDARD_REQUIRED ON)
