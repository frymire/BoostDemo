
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <iterator>
#include <algorithm>

#include <string>
using std::string;
using std::getline;

#include <boost/foreach.hpp>

#include <boost/regex.hpp>
using boost::regex;
using boost::smatch;
using boost::regex_match;

#include <boost/lambda/lambda.hpp>
using namespace boost::lambda;

void ForEachDemo() {
  BOOST_FOREACH(char c, string("Hello.")) { cout << c << endl; }
}

void RegexDemo() {

  string email[5] = {
    "To: George Shmidlap",
    "From: Rita Marlowe",
    "Subject: Will Success Spoil Rock Hunter?",
    "---",
    "See subject." };

  regex pattern("^Subject: (Re: |Aw: )*(.*)");

  BOOST_FOREACH(string line, email) {
    smatch matches;
    if (regex_match(line, matches, pattern)) { cout << matches[2] << endl; }
  }

}

void LambdaDemo() {
  typedef std::istream_iterator<int> input;
  cout << "\nEnter a number, and I'll triple it each time." << endl;
  for_each(input(cin), input(), cout << (3 * _1) << " ");
}


void main() {

  // Proof that we can connect to a header-only Boost library (foreach). This 
  // should work with just the Boost header files, without any compiled libs.
  ForEachDemo();

  // Proof that we can connect to a compiled Boost library. In Visual Studio, you have 
  // to specify the directory of the binary library for the linker. However, you don't 
  // have to specify the library itself, because it auto-links to appropriate version. 
  // This would be more convenient if all of the Boost libraries are in a single directory.
  RegexDemo();
  
  LambdaDemo();

}