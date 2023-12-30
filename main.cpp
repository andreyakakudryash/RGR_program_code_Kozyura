#include <iostream>
#include <cstdlib> 
#include <windows.h>
#include "controller.h"

using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    controller ctrl;
    ctrl.execute();
}