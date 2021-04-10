# Practice
Отчет о практической работе № 1 на тему «Использование стандартной библиотеки Си++ при работе со строками»
1  Цель: Научиться использовать стандартные библиотеки Си++ при работе со строками.

2  Задания: 

2.1  Разработайте программу, запрашивающую у пользователя целое число в диапазоне от 1 до 100, а затем выводящую фразу «В караване было X верблюдов», где вместо X вывести введенное число. Программа должна использовать корректные падежные окончания в слове «верблюд». Программа должна быть реализована с использованием строк Си++.

2.2  Разработайте программу, заменяющую в тексте из приложения Д слово mephi на слово yandex. Программа должна быть реализована с использованием строк Си++.

2.3  Реализовать функцию, выполняющую зашифрование методом Цезаря [7]. Функция должна иметь следующий прототип std::wstring encrypt(const std::wstring& text, const int key), где text — открытый текст на русском языке, key — величина сдвига (ключ). Функция должна перед зашифрованием удалить из текста все символы, кроме русских букв, и привести их к верхнему регистру. Функция должна вернуть строку с зашифрованным текстом.

2.4  Реализовать функцию, выполняющую расшифрование методом Цезаря [7]. Функция должна иметь следующий прототип std::wstring decrypt(const std::wstring& text, const int key), где text — зашифрованный текст на русском языке, key — величина сдвига (ключ). Функция должна вернуть строку с расшифрованным текстом в случае успеха или строку со словом ОШИБКА при невозможности расшифровать текст (в зашифрованном тексте есть недопустимые символы) .

3  Ход работы:

3.1  Код для задания находится в Task_1.cpp

3.2  Код для задания находится в Task_2_var_1.cpp и Task_2_var_2.cpp

//Для заданий 2.3 и 2.4 лучше сразу смотреть Task_3_4.cpp. Так как там уже находится готовый шифр Цезаря. После введения строки, можно указать, какое действие будет выполнно со строкой.

3.3  Код для задания находится в Task_3.cpp

3.4  Код для задания находится в Task_4.cpp

