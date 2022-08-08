**Introduction:**

In C++, the template system was designed to simplify the process of creating functions (or classes) that are able to work with different data types.

Instead of manually creating a bunch of mostly-identical functions or classes (one for each set of different types), we instead create a single `template`. Just like a normal definition, a **template** describes what a function or class looks like. Unlike a normal definition (where all types must be specified), in a template, we can use one or more placeholder types. A placeholder type represents some type that is not known at the time the template is written, but that will be provided later.

<aside>
⚠️ remember a template is not the actual cake it’s just the cake mold. It’s a pattern.

</aside>

Once a template is defined, the compiler can use the template to generate as many overloaded functions (or classes) as needed, each using different actual types!

 Note:

Templates can work with types that didn’t even exist when the template was written. This helps make template code both flexible and future-proof!

## **Template definition:**

```cpp
template <typename T> // this is the template parameter declaration
T max(T x, T y) // this is the function template definition for max<T>
{
    return (x > y) ? x : y;
}
```

## Instantiation:

Instantiation is the process by which a C++ compiler creates a usable function or object from a template. The C++ compiler uses compile-time instantiation, which forces instantiations to occur when the reference to the template is being compiled.

### **implicit instantiation:**

```cpp
std::cout << max<int>(1, 2) << '\n';
```

### explicit instantiation:

```cpp
std::cout << max(1, 2) << '\n';
```

**Function templates with non-template parameters:**

It’s possible to create function templates that have both template types and non-template type parameters. The template parameters can be matched to any type, and the non-template parameters work like the parameters of normal functions.

```cpp
template <typename T>
int someFcn (T x, double y)
{
    return 5;
}
```

we can use functions templates with multiple template type parameters:

```cpp
template <typename T, typename U> 
T max(T x, U y) 
{
    return (x > y) ? x : y;
}
```

> **Using function templates in multiple files**
> 

In order to instantiate a template, the compiler needs to see the full definition of the template. This means that if we want to use a function template in multiple code files, each code file needs a copy of the definition of the function template. For this reason, templates are typically written in header files, where they can be #included in any code file that wants to use them.

### **Default type:**

```cpp
template <typename T = float>
int someFcn (T x, double y)
{
    return 5;
}
```

→ By doing this we are telling the compiler: “if I don’t tell what type is it, assume that it’s a float”.

### Specialization:

Often it is required that special types or non-types must be treated special. Therefore, you can fully specialize templates.

The compiler prefers fully specialized to partially specialized templates, and partially specialized templates to primary templates.

```cpp
template <typename T, int Line, int Column>     // (1)
class Matrix;

template <typename T>                           // (2)
class Matrix<T, 3, 3>{};

template <>                                     // (3)
class Matrix<int, 3, 3>{};
```

- Primary Template

Line 1 is the primary or general template. The primary template has to be declared before the partially or fully specialized templates. If the primary template is not needed, a declaration such as in line 1 is fine.

- Partial Specialization

Line 2 follows with the partial specialization. Only class templates support partial specialization. A partial specialization has template parameters and explicitly specified template arguments. In the concrete case`, class Matrix<T, 3, 3> T` is the template parameter and the numbers are the template arguments.

- Full Specialization

Line 3 is the full specialization. Full means that all template arguments are specified and the template parameter list is empty: `template <>` in line 3.

<aside>
⚠️ If a specialized version is present, the compiler first checks with the specialized version and then the main template. The compiler first checks with the most specialized version by matching the passed parameter with the data type(s) specified in a specialized version.

</aside>
