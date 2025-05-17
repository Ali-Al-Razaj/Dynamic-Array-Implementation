# clsDynamicArray<T>

A generic, dynamically resizable array class implemented in C++ using templates. It provides basic array operations such as insertion, deletion, searching, resizing, reversing, and more — similar to dynamic array structures like `std::vector` but with manual memory management for educational purposes.

## 📦 Features

- Generic (templated) support for any data type `T`.
- Manual memory management using `new` and `delete`.
- Insertion at beginning, end, before/after index.
- Deletion by index or value.
- Dynamic resizing and clearing.
- Reverse array order.
- Print array contents.

## 🔧 Constructor

```cpp
clsDynamicArray<T> arr(int size = 0);
```

## 🧪 Example Usage

```cpp
clsDynamicArray<int> arr(5);
arr.SetItem(0, 10);
arr.SetItem(1, 20);
arr.InsertAtEnd(30);
arr.PrintList(); // Output: 10 20 0 0 0 30

arr.DeleteItem(20);
arr.PrintList(); // Output: 10 0 0 0 30

arr.Reverse();
arr.PrintList(); // Output: 30 0 0 0 10
```

## 🔍 Methods

- bool SetItem(int index, T value):	Sets value at index. Returns false if out of bounds.
- T GetItem(int index):	Returns value at index. Assumes index is valid.
- int Size():	Returns current size of array.
- bool IsEmpty():	Returns true if size is 0.
- void PrintList():	Prints all elements in array.
- void Resize(int newSize):	Resizes array and preserves data (up to new size).
- void Reverse():	Reverses array in-place.
- void Clear():	Clears the array (size becomes 0).
- bool DeleteItemAt(int index):	Deletes item at index.
- bool DeleteFirstItem():	Deletes the first item.
- bool DeleteLastItem():	Deletes the last item.
- int Find(T value):	Returns index of first match; -1 if not found.
- bool DeleteItem(T value):	Deletes first occurrence of a value.
- bool InsertAt(int index, T value):	Inserts value at specific index.
- void InsertAtBeginning(T value):	Inserts value at the start.
- bool InsertAtEnd(T value):	Appends value to the end.
- bool InsertAfter(int index, T value):	Inserts value after index.
- bool InsertBefore(int index, T value):	Inserts value before index.

## ⚠️ Notes

- This class does not perform bounds checking in GetItem() — ensure the index is valid.

- Manual memory management is used; ensure proper usage to avoid memory leaks.

- This class is mainly for educational use.