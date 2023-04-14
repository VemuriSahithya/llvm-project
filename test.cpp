#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  vector<string> words;
  string word;

  // Read input words from standard input
  while (cin >> word) {
    words.push_back(word);
  }

  // Print the input words in reverse order
  for (int i = words.size() - 1; i >= 0; i--) {
    cout << words[i] << " ";
  }
  cout << endl;

  return 0;
}

class Shape {
public:
  virtual double area() const = 0;
  virtual double perimeter() const = 0;
};

class Rectangle : public Shape {
public:
  Rectangle(double width, double height)
    : width_(width), height_(height) {}

  double area() const override { return width_ * height_; }
  double perimeter() const override { return 2 * (width_ + height_); }

private:
  double width_;
  double height_;
};

class Circle : public Shape {
public:
  Circle(double radius) : radius_(radius) {}

  double area() const override { return 3.14 * radius_ * radius_; }
  double perimeter() const override { return 2 * 3.14 * radius_; }

private:
  double radius_;
};

class Square : public Rectangle {
public:
  Square(double side) : Rectangle(side, side) {}
};

int fibonacci(int n) {
  if (n <= 1) {
    return n;
  }

  return fibonacci(n - 1) + fibonacci(n - 2);
}

template <typename T>
T max(T a, T b) {
  return (a > b) ? a : b;
}

template <typename T>
T min(T a, T b) {
  return (a < b) ? a : b;
}

template <typename T>
class Stack {
public:
  Stack() {}

  void push(const T& value) {
    data_.push_back(value);
  }

  T pop() {
    if (data_.empty()) {
      throw std::runtime_error("Stack is empty");
    }

    T value = data_.back();
    data_.pop_back();
    return value;
  }

  bool empty() const {
    return data_.empty();
  }

private:
  vector<T> data_;
};

template <typename T>
class Queue {
public:
  Queue() {}

  void push(const T& value) {
    data_.push_back(value);
  }

  T pop() {
    if (data_.empty()) {
      throw std::runtime_error("Queue is empty");
    }

    T value = data_.front();
    data_.erase(data_.begin());
    return value;
  }

  bool empty() const {
    return data_.empty();
  }

private:
  vector<T> data_;
};

int main() {
  // Test the Stack class
  Stack<int> int_stack;
  int_stack.push(1);
  int_stack.push(2);
  int_stack.push(3);
  cout << int_stack.pop() << endl;
  cout << int_stack.pop() << endl;
  cout << int_stack.pop() << endl;

  // Test the Queue class
  Queue<string> string_queue;
  string_queue.push("hello");
  string_queue.push("world");
  string_queue.push("!");
  cout << string_queue.pop() << endl;
  cout << string_queue.pop() << endl;
  cout << string_queue.pop() << endl;

  // Test the fibonacci function
  for (int i = 0; i < 10; i++){
    int test = 0;
    if(test2 == 0){
      cout << test2 << endl;
      cout << test << endl;
    }
  }
}
