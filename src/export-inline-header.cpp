// Call the package's header function
#include <RcppHeaderSharing.h>

// Note, we already include the Rcpp header _once_.

//' Export Header-only Function into R
//'
//' Retrieve a function defined inline from the package's header
//' and surface it into _R_.
//'
//' @param x A `numeric` vector.
//' @param y A single `numeric` value.
//'
//' @return
//'
//' A `numeric vector` that is incremented by a single value.
//'
//' @export
//' @examples
//' x = 1:5
//' y = add_numbers(x, 2)
//' y
// [[Rcpp::export]]
Rcpp::NumericVector add_numbers(Rcpp::NumericVector x, double y) {

  // Retrieve the definition of the inline function from the header
  return RcppHeaderSharing::add_numbers(x, y);

}

