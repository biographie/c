
# Formatted Input/Output 
`scanf` and `printf`, which support formatted string reading and writing, are two of the most frequently used functions in C  

## The `printf` Function

The `printf` function is designed to display the contents of a string, known as **format string**, with values possibly inserted at specified points in the string. When it is called, `printf` must be supplied with the format string, followed by any values that are to be inserted into the string during printing:

```
    print(string, expr1, expr2, ...)
```

The values displayed can be constants, variables, or more complicated expressions. There's no limit on the number of values that can be printed in a single call of `printf`.

The format string may contain both ordinary character and *conversion specifications*, which begin with the `%` character. A conversion specification is a place-holder representing a value to be filled during printing. The information that follows the `%` character *specifies* how the value is *converted* from its internal form (binary) to printed form (characters) - thus the term "conversion specification". For example, the conversion specification `%d` specifies that `printf` is to convert and `int` value from binary to a string of decimal digits, while `%f` does the same for a `float` value.

Ordinary characters in a format string are printed exactly as they appear in the string; conversion specifications are replaced by the values to be printed.


    