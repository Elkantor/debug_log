[![Language](https://img.shields.io/badge/language-C-blue.svg)](https://isocpp.org/)
[![Standard](https://img.shields.io/badge/C-89-blue.svg)](https://en.wikipedia.org/wiki/C%2B%2B17)

# debug_log
> debug_log is a really small C utility, contained in a single header file.
It's juste a #define which enable you to keep trace of your debug information (print the file and the function name where the debug information is printed).
[IMPORTANT] : this #define declaration will work only in a Debug configuration (without the NDEBUG compiler flag). 

## Installing

Copy/past the single header file named ***debug_log.h***, or use the [clib](https://github.com/clibs/clib) package manager to add it to your project with the following command :

```shell
clib instal Elkantor/debug_log
```

Then, include this header file which will be contained under **deps/debug_log/include/debug_log.h***


## Getting started

These are some examples to use this small utility :

```C
// in main.c file
#include "deps/debug_log/include/debug_log.h"

int main(int argc, char** argv){
  DEBUG_LOG("hello world");
  return 0;
}
```

The result : 

```shell
[DEBUG_LOG]: hello world 
In function main, from main.c, line 4
```


Or to print an integer value (or whatever type you want, in a classical way) :

```C
// in main.c file
#include "deps/debug_log/include/debug_log.h"

int main(int argc, char** argv){
  int test_value = 4;
  DEBUG_LOG("Test value : %d", test_value);
  return 0;
}
```

Which prints :
```shell
[DEBUG_LOG]: Test value : 4 
In function main, from main.c, line 5
```
