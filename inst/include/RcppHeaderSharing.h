// Create a header inclusion guard
// Inclusion guard is named using package name and then header name.

#ifndef RcppHeaderSharing_RcppHeaderSharing_H
#define RcppHeaderSharing_RcppHeaderSharing_H

// Include the Rcpp Header
#include <Rcpp.h>

// Include other header files relative to this path
// Here we use `""` instead of `<>`

#include "hello/say_hello.h"
#include "rcpp_math/add_numbers.h"

#endif
