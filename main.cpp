#include <stdio.h>
#include <list>
#include <iostream>

using namespace std;

int main(void) {
	//���߂�1970�N�̉w�����X�g
	list <const char*> eki_list{
		"Tokyo", "Kanda", "Akihabara", "Okachimachi", "Ueno", "Uguisudani", "Nippori", "Tabata", "Komagome", "Sugamo", "Otsuka", "Ikebukuro", "Mejiro", "Takadanobaba", "Sin-Okubo", "Shinjuku", "Yoyogi", "Harajuku", "Shibuya", "Ebisu", "Meguro", "Gotanda", "Osaki", "Sinagawa", "Tamachi", "Hamamatsucho", "Shimbashi", "Yurakucho"
	};


	printf("1970�N\n");
	for (list<const char*>::iterator it_f = eki_list.begin(); it_f != eki_list.end(); it_f++) {
		std::cout << *it_f << endl;
	}

	printf("\n2019�N\n");
	list<const char*>::iterator it_f;
	for (auto it_f = eki_list.begin(); it_f != eki_list.end(); ++it_f) {
		if (strcmp(*it_f, "Nippori") == 0) {
			it_f = eki_list.insert(it_f, "Nishi-Nippori");
			std::cout << *it_f << endl;
			++it_f;
		}
		std::cout << *it_f << endl;
	}

	printf("\n2022�N\n");
	for (auto it_f = eki_list.begin(); it_f != eki_list.end(); ++it_f) {

		if (strcmp(*it_f, "Sinagawa") == 0) {
			it_f = eki_list.insert(it_f, "Takanawa Gateway");
			std::cout << *it_f << endl;
			++it_f;
		}
		std::cout << *it_f << endl;
	}

	return 0;
}