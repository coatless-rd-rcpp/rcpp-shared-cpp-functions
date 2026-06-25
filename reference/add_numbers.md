# Export Header-only Function into R

Retrieve a function defined inline from the package's header and surface
it into *R*.

## Usage

``` r
add_numbers(x, y)
```

## Arguments

- x:

  A `numeric` vector.

- y:

  A single `numeric` value.

## Value

A `numeric vector` that is incremented by a single value.

## Examples

``` r
x = 1:5
y = add_numbers(x, 2)
y
#> [1] 3 4 5 6 7
```
