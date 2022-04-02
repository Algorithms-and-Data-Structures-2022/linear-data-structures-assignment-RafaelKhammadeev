#include <iostream>  // cout

#include "assignment/dynamic_array.hpp"  // DynamicArray
#include "assignment/linked_list.hpp"    // LinkedList
#include "assignment/array_stack.hpp"    // ArrayStack
#include "assignment/linked_queue.hpp"   // LinkedQueue

using std::cout;

int main(int argc, char **argv) {
  // Пример. Создание пустого динамического массива.
//    assignment::DynamicArray array(-1);
    assignment::DynamicArray array1(4);
    cout << array1.capacity() << "\n";
  int size = 5;
  int *massive = new int[size]{1, 2, 3, 4, 5};
  size--;  // так удаляем элемент
  int index = 2;
  for (int i = index; i < size; i++) {
    massive[i] = massive[i + 1];
  }
  int *data_ = new int[size];
  std::copy(&massive[0], &massive[size], data_);
  for (int i = 0; i < size; ++i) {
    cout << data_[i] << "\n";
  }
}
