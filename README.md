# 🚀 C++ Modules 00 – 04

This repository contains my implementation of **C++ Modules 00 to 04** from the 42 / 1337 curriculum.

These modules establish the foundations of modern C++ programming.  
They introduce object-oriented principles, memory management, polymorphism, and abstraction — forming the core mindset required for advanced C++ development.

---

# 📚 Modules Overview

---

## 📦 CPP00 – Introduction to C++ & Classes

Module 00 introduces the transition from C to C++ and the core concepts of Object-Oriented Programming.

### 🔹 From C to C++
- Namespaces
- Streams (`std::cout`, `std::cin`)
- Classes and member functions
- Encapsulation

### 🔹 Classes & Objects
- Defining classes
- Public vs private access specifiers
- Member initialization
- Method implementation

### 🔹 Encapsulation
Data protection through access control is introduced as a key design principle.

This module builds the foundation of thinking in terms of objects rather than procedural functions.

---

## 📦 CPP01 – Memory Allocation & References

This module focuses on dynamic memory and resource handling.

### 🔹 Stack vs Heap
- Automatic storage duration
- Dynamic allocation with `new` and `delete`
- Understanding object lifetime

### 🔹 References & Pointers
- Difference between pointers and references
- Address manipulation
- Memory safety awareness

### 🔹 File Streams
- Reading from and writing to files
- Using `std::ifstream` and `std::ofstream`

Key concepts:
- Deterministic destruction
- Avoiding memory leaks
- Proper resource ownership

This module strengthens understanding of memory management fundamentals.

---

## 📦 CPP02 – Ad-hoc Polymorphism & Operator Overloading

Module 02 introduces operator overloading and canonical form.

### 🔹 Orthodox Canonical Form (Rule of Three)
- Constructor
- Copy constructor
- Copy assignment operator
- Destructor

### 🔹 Operator Overloading
- Arithmetic operators
- Comparison operators
- Increment/decrement operators

Concepts developed:
- Deep vs shallow copy
- Object duplication correctness
- Implementing custom numeric-like types

This module enforces discipline in class design and object behavior consistency.

---

## 📦 CPP03 – Inheritance & Classical Polymorphism

This module introduces inheritance and runtime polymorphism.

### 🔹 Inheritance
- Base and derived classes
- Access control in inheritance
- Method overriding

### 🔹 Polymorphism
- Virtual functions
- Dynamic binding
- Function overriding

### 🔹 Diamond Problem
- Multiple inheritance
- Virtual inheritance
- Ambiguity resolution

This module teaches how C++ handles object memory layout and method resolution at runtime.

It marks the shift toward true object-oriented architecture.

---

## 📦 CPP04 – Abstract Classes & Interfaces

Module 04 focuses on abstraction and interface design.

### 🔹 Abstract Classes
- Pure virtual functions
- Interface-like behavior
- Enforcing implementation in derived classes

### 🔹 Deep Copy & Resource Management
- Correct copy semantics
- Handling dynamically allocated members

### 🔹 Polymorphic Behavior
- Using base class pointers/references
- Runtime dispatch

This module emphasizes:
- Designing extensible architectures
- Separation of interface and implementation
- Writing flexible and maintainable object hierarchies

---

# 🛠 Compilation

Each module includes its own `Makefile`.

To compile:

```bash
make