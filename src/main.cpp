#include <cppgen/fileoutputs.hpp>
#include <cppgen/util_messages.hpp>

#include <typedef.hpp>

#include <iostream>
#include <fstream>


#define DEBUG 0
#define STR_EQ(str1, str2) (std::strcmp(str1, str2) == 0)


void
generate_file(
  char const *file_name,
  char const *content
) {
  std::ofstream output_file{ file_name };

  if (output_file.is_open()) {
    output_file << content;
    output_file.close();
  }
}


void
print_args(
  int   argc,
  char *argv[]
) {
  for (int i{}; i < argc; i++)
    std::cout << i + 1 << ": " << argv[i] << NLC;
}


int
main(
  int   argc,
  char *argv[]
) {
  if (argc < 2) {
    std::cout << g_HELP_MESSAGE;
    return 0;
  }

  bool generate_tdef{ false };
  bool generate_cdef{ false };

  #if DEBUG
    print_args(argc, argv);
  #endif

  for (i32 i{ 1 }; i < argc; i++) {
    if (STR_EQ(argv[i], "tdef"))
      generate_tdef = true;
    else if (STR_EQ(argv[i], "cdef"))
      generate_cdef = true;
  }

  if (generate_tdef)
    generate_file("typedef.hpp", g_TYPEDEF_HPP);

  if (generate_cdef)
    generate_file("containerdef.hpp", g_CONTAINERDEF_HPP);

  #if DEBUG
    std::cout << "Finished" NL;
  #endif
}
