#include <iostream>
#include <string>
#include <vector>

using namespace std;



class customerData {

	private:
		string surname, name, number;
	public:

		string getSurname() {
			return surname;
		}
		string getName() {
			return name;
		}
		string getNumber() {
			return number;
		}

		customerData() {
			surname = "Козюра";
			name = "Андрей";
			number = "89134323453";
		}

		customerData(const string& surname, const string& name, const string& number) {
			this->surname = surname;
			this->name = name;
			this->number = number;
		}

		void print() {
			cout << surname << " " << name << " " << number << endl;
		}
};


class cargoData {

	private:
		int weight;
		float volume;
		string cargo;

		vector <string> type_cargo = { "Спорттовары", "Оргтехника", "Компьютерная и мобильная техника",
			"Детские товары", "Авто/Мототехника", "Сантехника", "Одежда", "Косметика", "Мебель", "Строй материалы", "Другое"
		};

	public:

		int getWeight() {
			return weight;
		}

		float getVolume() {
			return volume;
		}

		string getCargo() {
			return cargo;
		}

		void setCargo(const string& cargo) {
			this->cargo = cargo;
		}

		vector<string> getType_cargo() {
			return type_cargo;
		}

		cargoData() {
			cargo = "Строй материалы";
			weight = 1000;
			volume = 0.66;
		}

		cargoData(const string& cargo, const int& weight, const float& volume) {
			this->cargo = cargo;
			this->weight = weight;
			this->volume = volume;
		}

		void print() {
			cout << "Характер груза и его параметры: " << cargo << " — " << weight << " кг." << "  " << volume << " м. куб."<< endl;
		}

};


class transportData {

private:

	string transport;
	vector <string> type_transport = {"Грузовик", "Судно", "Грузовой самолёт"};


public:

	string getTransport() {
		return transport;
	}

	vector<string> get_vector_transport() {
		return type_transport;
	}

	transportData() {
		transport = "Грузовик";
	}

	transportData(const string& transport) {
		this->transport = transport;
	}

	void print() {
		cout << "Тип транспорта, осуществляющий перевозку: " << transport << endl;
	}


};