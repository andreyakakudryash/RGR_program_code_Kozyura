#include <iostream>
#include <vector>
#include <string>
#include "operations.h"

using namespace std;

class controller {

private:
	int state;
	main_operations current_order;

public:

	controller() {

	}

	~controller() {

	}



	void execute() {
		int run = 1;
		while (run) {
			menu();
			int var;
			cin >> var;
			while (var < 1 || var > 8) {
				cout << "Был введён номер,который не входит в диапазон предоставленных команд. Пожалуйста, попробуйте ещё раз!\n";
				cin >> var;
			}

			if (var == 1) {
				current_order.print();
			}

			if (var == 2) {
				run = 0;
			}

			if (var == 3) {
				current_order.addOrder();
			}

			if (var == 4) {
				current_order.print();
				cout << "Выберите номер заказа, который хотите удалить ";
				int index;
				cin >> index;
				current_order.deleteOrder(index);
				cout << "Выбранный заказ успешно удалён"<< endl;
			}

			if (var == 5) {
				current_order.print();
				cout << "Выберите заказ, который необходимо отредактировать ";
				int index;
				cin >> index;
				current_order.editOrder(index);
			}

			if (var == 6) {
				current_order.saveToFile();
				cout << "Заказы были успешно сохранены в файл"<< endl;
			}

			if (var == 7) {
				current_order.deleteFromFile();
				cout << "Содержимое файла успешно удалено" << endl;
			}

			if (var == 8) {
				current_order.loadFromFile();
				cout << "Заказ из файла загружен" << endl;

			}


		}
	}


	void menu() {
		cout << "Меню команд:\n";
		cout << "1. Вывести все заказы\n";
		cout << "2. Выйти из программы\n";
		cout << "3. Добавить новый заказ\n";
		cout << "4. Удалить заказ\n";
		cout << "5. Отредактировать заказ\n";
		cout << "6. Сохранить заказы в файл\n";
		cout << "7. Удалить данные из файла\n";
		cout << "8. Загрузить заказ из файла\n";
	}
};


