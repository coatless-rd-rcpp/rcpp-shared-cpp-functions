// Create a header inclusion guard
// The inclusion guard is named using package name and then header name.
#ifndef RcppHeaderSharing_add_numbers_H
#define RcppHeaderSharing_add_numbers_H

// Sandbox the add_numbers() function within a namespace, e.g.
// Other packages may retrieve it with RcppHeaderSharing::add_numbers().
namespace RcppHeaderSharing {

// Appended to the traditional function definition is the `inline` keyword.
inline Rcpp::NumericVector add_numbers(Rcpp::NumericVector x, double y) {
  return x + y;
}

}

#endif
