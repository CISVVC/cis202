# Implementing a Hash Table

In these sections, you will see how hash tables are implemented and how efficient their operations are.

## Hash Function
```cpp
int hash_code(const string& str) {
   int h = 0;
   for (int i = 0; i < str.length(); i++) {
      h = 31 * h + str[i];
   }
   return h;
}
```


## Hash Tables

[Operations](./operations)

[Special Topic: Multi-Set Example](./example_code/multi)

