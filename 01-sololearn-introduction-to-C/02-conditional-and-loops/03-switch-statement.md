### The Switch Statement
#

> - `Switch` statement branches program control by matching
    the result of an expression with a constant `case` value.

> - An `alternative` of `if-else-if` statement.

> - The optional `default` case is executed when no other matches are made.

> - A `break` statement to end the switch after match is made.

```c
switch (expression) {
    case val1:
        statements;
        break;
    case val2:
        statements;
        break;
    default:
        statements;
}
```

> - Note: `switch` statement will only evaluate integral data type.