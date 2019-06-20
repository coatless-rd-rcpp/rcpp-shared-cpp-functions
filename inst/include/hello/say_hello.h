// Create a header inclusion guard
// The inclusion guard is named using package name and then header name.
#ifndef RcppHeaderSharing_say_hello_H
#define RcppHeaderSharing_say_hello_H

// Sandbox the function within a namespace, e.g.
// We can access it in the other package with RcppHeaderSharing::say_hello().
namespace RcppHeaderSharing {

// Appended to the traditional function definition is the `inline` keyword.
inline void say_hello() {
  Rcpp::Rcout << "hello!" << std::endl;
}

}

#endif
