
//#include <iostream>
//using std::cin;
//using std::cout;
//using std::endl;
//
//#include <iterator>
//#include <algorithm>
//
//#include <string>
//using std::string;
//using std::getline;
//
//#include <boost/lambda/lambda.hpp>
//using namespace boost::lambda;
////using std::for_each;
//
//#include <boost/regex.hpp>
//using boost::regex;
//using boost::smatch;
//using boost::regex_match;
//
//#include <boost/foreach.hpp>
//
//int ForEachDemo() {
//
//  string lines[5] = {
//    "To: George Shmidlap", 
//    "From: Rita Marlowe", 
//    "Subject: Will Success Spoil Rock Hunter?", 
//    "---",
//    "See subject."};
//
//  string line;
//
//  // Proof that we can connect to a header-only Boost library (foreach). This 
//  // should work with just the Boost header files, without any compiled libs.
//  BOOST_FOREACH(line, lines) { cout << line << endl; }
//
//  // Proof that we can connect to a compiled Boost library. In Visual Studio, you have 
//  // to specify the directory of the binary library for the linker. However, you don't 
//  // have to specify the library itself, because it auto-links to appropriate version. 
//  // This would be more convenient if all of the Boost libraries are in a single directory.
//
//  regex pattern("^Subject: (Re: |Aw: )*(.*)");
//
//  for (int i = 0; i < 5; i++) {
//    line = lines[i];
//    smatch matches;
//    if (regex_match(line, matches, pattern)) { cout << matches[2] << endl; }
//  }
//
//  typedef std::istream_iterator<int> input;
//  cout << "\nEnter a number, and I'll triple it each time." << endl;
//  for_each(input(cin), input(), cout << (3 * _1) << " ");
//  
//  return 0;
//}