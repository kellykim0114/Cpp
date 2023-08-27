#include <iostream>
#include <vector>
using namespace std;

void selectionSorting(vector<int> &target) {
  for (int i = 0; i < target.size()-1; i++) {
    int idx = i;
    for (int j = i+1; j < target.size(); j++) {
      if (target[j] < target[idx]) {
        idx = j;
      }
    }
    swap(target[i], target[idx]);
  }

}

int main() {
  vector<int> target = {1, 113, 23, 97, 45, 63, 79, 24, 120};
  cout << "Array before Selection Sorting: ";
  for (int i = 0; i < target.size(); i++) {
    cout << target[i] << " ";
  }
  cout << "\n";

  selectionSorting(target);

  cout << "Array after Selection Sorting (ascending): ";
  for (int i = 0; i < target.size(); i++) {
    cout << target[i] << " ";
  }
  return 0;
}