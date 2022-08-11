# Type Conversion in c++.

**Definition:** the process of converting a value from a data type to another is called **type conversion,** there are two ways for this last to be invoked: either implicitly (when needed by the compiler), or explicitly (when requested by the programmer).

## Implicit type conversion/coercion:

It’s performed when one data type is required, but a different data type is supplied.

examples:

- When initializing (or assigning a value to) a variable with a value of a different data type.
- When the type of the return value is different from the function’s declared return type.
- When using certain binary operators with operands of different types.
- When using a non-Boolean value in an if-statement.
- When an argument passed to a function is a different type than the function parameter.

<aside>
❗ when a type conversion is invoked the compiler determines if it’s possible, if not the compilation fails with an error.

</aside>

## Numeric Promotions:

converting from a **narrower** numeric type *(such as char)* to a **wider** numeric type*( such as int or double)* is called **numeric promotion**, it can be processed efficiently and it's less likely to have a result that overflows. There are two types: **integral promotions** *(ex: char to int)* and **floating point promotions***(ex: float to double)*

<aside>
❗ while the integral promotion is `value-preserving`, it is not necessarily `sign-preserving.`

</aside>

## Numeric conversion:

There are five basic types:

1. Converting an integral type to any other integral type (excluding integral promotions).
2. Converting a floating point type to any other floating point type (excluding floating-point promotions).
3. Converting a floating point type to any integral type.
4. Converting an integral type to any floating point type.
5. Converting an integral type or a floating point type to a bool.

<aside>
💡 It’s good to know more about data representation in memory.

</aside>

[How data is stored in computer memory] (https://www.log2base2.com/storage/how-data-is-stored-in-computer-memory.html)

## Reinterpretation:

it’s an identity cast where the base value keeps the same bits after conversion in the same order, so there is no actual conversion(such as from a float to a void pointer).

## Upcasting:

 is converting a derived-class reference or pointer to a base-class. It is always allowed for **public**
 inheritance, without an explicit type cast.

## Downcasting:

The opposite process, converting a base-class pointer (reference) to a derived-class pointer (reference) is called **downcasting, it is not allowed without an explicit type cast.

## Static_cast:

we use the static_cast in the simple conversions; like narrowing conversion. By doing that we inform the compiler that we are aware of this conversion and it’s meant to be, not just a programming mistake.

<aside>
❗ static cast allows us to convert between addresses belonging to the same inheritance tree otherwise it’s not possible, and it’ll cause a compilation error.

</aside>

## Dynamic_cast:

Safely converts pointers and references to classes up, down, and sideways along the inheritance hierarchy.
Assuming this inheritance tree (the dreaded diamond):

```
        BaseClass
       /         \
      V           V
   Left          Right
       \        /
        V      V
       MostDerived

```

## Cross cast

A **cross cast** or **side cast** is when dynamic_cast<Left*>(pRight) returns a Left* that properly behaves as a Left*. This happens when pRight points to a MostDerived object. Cross casts only work with dynamic_cast, not reinterpret_cast or static_cast. (we talked about up/down casts previously)

It has two particularities:

- It takes place at run-time, so the program may compile, and then the dynamic cast may fail at run-time(so we must implement a complete architecture to detect the case and handle it properly).
- Dynamic cast only works with polymorphic classes; at least one of the member functions has to be virtual.

<aside>
❗ - when converting pointers the dynamic cast either returns the converted address(success), or NULL (failure), so we need to check the result.          
  - when converting references NULL pointer can not be returned on failure, an exception (bad_cast) is thrown instead.

</aside>
<hr>

```cpp
dynamic_cast<Type *>(ptr);
```

converts the pointer **ptr** to a pointer of type **Type*** if the pointer-to object (*ptr) is of type **Type** or else derived directly or indirectly from type **Type**. Otherwise, the expression evaluates to 0, the null pointer.

**Note:** dynamic cast works since the actual type hidden is the same one we want to convert to, this allows us to identify the real type pointer/reference.

## Reinterpret_cast:

converts any pointer type to any other pointer type, even of unrelated classes. The operation result is a simple binary copy of the value from one pointer to the other. All pointer conversions are allowed: neither the content pointed nor the pointer type itself is checked.

<aside>
❗ since we can turn anything into anything, we better know what we want, cause making a mistake it’ll have dramatic consequences.

</aside>

## Const_cast:

This type of casting manipulates the constness of an object, either to be set or to be removed. For example, in order to pass a const argument to a function that expects a non-constant parameter.
