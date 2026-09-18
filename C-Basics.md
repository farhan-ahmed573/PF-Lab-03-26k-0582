# C Basics

## 1. Data Types

Data types specify the type of data that a variable can store.

| Data Type | Description |
|---|---|
| `int` | Used to store whole numbers (integers). |
| `float` | Used to store single-precision floating-point numbers. |
| `double` | Used to store double-precision floating-point numbers. |
| `char` | Used to store a single character. |
| `bool` | Used to store a Boolean value such as true or false. |
| `void` | Represents the absence of a value or type. |

---

## 2. Format Specifiers

Format specifiers are used with functions such as `printf()` and `scanf()` to specify the type of data being displayed or read.

| Format Specifier | Description |
|---|---|
| `%d` | Signed decimal integer |
| `%u` | Unsigned decimal integer |
| `%o` | Octal integer |
| `%x` | Hexadecimal integer in lowercase |
| `%X` | Hexadecimal integer in uppercase |
| `%f` | Floating-point value |
| `%e` | Floating-point value in exponential notation |
| `%c` | Single character |
| `%s` | String |
| `%ld` | Long integer |

---

## 3. Input/Output Functions

### `scanf()`

`scanf()` is used to take formatted input from the user.

Example:

```c
int age;
scanf("%d", &age);
