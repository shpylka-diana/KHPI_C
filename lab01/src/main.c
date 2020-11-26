
#include "lib.h"

/**
 * Головна функція.
 *
 * Послідовність дій:
 * - створення масиву із {@link ANIMAL_COUNT} тварин
 * - генерація даних для кожної тварини шляхом виклика функції
 * {@link generate_animal}
 * - вивід даних про всіх тварин на екран за допомогою функції
 * {@link show_animals}
 * @return успішний код повернення з програми (0)
 */
int main()
{
	srand((unsigned int)time(0));
	struct animal animals[ANIMAL_COUNT];

	for (unsigned int i = 0; i < ANIMAL_COUNT; i++) {
		generate_animal(&animals[i]);
	}
	show_animals(animals, ANIMAL_COUNT);

	return 0;
}
