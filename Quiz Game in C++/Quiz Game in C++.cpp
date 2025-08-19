#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main()
{
	setlocale(LC_ALL, "RUS");

	std::vector<bool> itsCorrect = { false, false, false, false, false, false, false, false, false, false };
	std::vector<std::string> questions = { "1. Какой заголовочный файл нужен для работы с std::vector?", "2. Чему равна сумма чисел от 1 до 100?", "3. Столица Австралии?", "4. Кто сформулировал три закона движения?",
										  "5. Автор романа \"Преступление и наказание\"?", "6. Сколько углов у правильного 8-угольника?", "7. Химический символ элемента натрий?", "8. Что выведет выражение std::cout << 3 / 2; в С++?",
										  "9. Как называется процесс перехода жидкости в газ по всей массе при достижении точки кипения?", "10. Язык с наибольшим числом носителей как родного?" };
	std::vector<std::string> ::iterator iter;
	const int MAX = 10;
	std::string results[MAX]; //хранит правильные ответы
	int choice; //выбор вопроса
	char quit;
	int answerOption; //выбор ответа
	int ancorrectAnswer = 5; //кол-во ошибок
	int correctAnswers = 0; //правильные ответы

	std::cout << "\t\tДобро пожаловать в Quiz Game!";
	std::cout << "\n\t\t-----------------------------";


	std::cout << "\nПеред вами есть 10 вопросов на которые вы должны ответить, в каждом вопросе только один правильный ответ!";
	std::cout << "\nВы имеете право допустить только 5 ошибок, в противном случае, вы проиграете.\n";
	std::cout << "\n";
	for (iter = questions.begin(); iter != questions.end(); ++iter)
	{
		std::cout << *iter << std::endl;
	}


	std::cout << "\n----------------------------------------------------";

	//основной игровой цикл
	while (correctAnswers < 10 && ancorrectAnswer > 0)
	{

		std::cout << "\nХотите выйти? (q/Q - выйти из игры): ";
		std::cin >> quit;

		if (quit == 'q' || quit == 'Q')
		{
			std::cout << "\nВы вышли из игры!\n";
			return 0;
		}

		std::cout << "\nКол-во ошибок, которые вы имеете право совершить - " << ancorrectAnswer;
		std::cout << "\nВыберите вопрос на который хотите ответить (0-9): ";

		while (!(std::cin >> choice) || choice < 0 || choice > 9)
		{
			std::cout << "Ошибка! Выберите вопрос (0-9): ";
			std::cin.clear();
			std::cin.ignore(10000, '\n');
		}

		//цикл на верный ответ внутри switch-case с флагом
		while (!itsCorrect[choice])
		{
			switch (choice)
			{

			case 0:

				iter = questions.begin();
				std::cout << "\n" << *iter << std::endl;
				std::cout << "\n1 - <array>";
				std::cout << "\n2 - <vector>";
				std::cout << "\n3 - <list>";
				std::cout << "\n4 - <map>";

				std::cout << "\nВвведите свой ответ: ";
				while (!(std::cin >> answerOption) || answerOption < 1 || answerOption > 4)
				{
					std::cout << "Ошибка! Ввведите свой ответ (1-4): ";
					std::cin.clear();
					std::cin.ignore(10000, '\n');
				}

				if (answerOption == 2)
				{
					std::cout << "\nВерно,правильный ответ - 2!";
					++correctAnswers;
					itsCorrect[choice] = true;
					results[choice] += "<vector>";
					break;
				}
				else
				{
					std::cout << "\nОтвет неверный! Попробуйте ещё раз.";
					--ancorrectAnswer;
					std::cout << "\nКол-во ошибок, которые вы имеете право совершить - " << ancorrectAnswer;
					if (ancorrectAnswer > 0)
					{
						continue;
					}
					else
					{
						itsCorrect[choice] = true;
						break;
					}

				}

			case 1:

				iter = questions.begin() + 1;
				std::cout << "\n" << *iter << std::endl;
				std::cout << "\n1 - 5000.";
				std::cout << "\n2 - 5050.";
				std::cout << "\n3 - 5151.";
				std::cout << "\n4 - 10100.";

				std::cout << "\nВвведите свой ответ: ";
				while (!(std::cin >> answerOption) || answerOption < 1 || answerOption > 4)
				{
					std::cout << "Ошибка! Ввведите свой ответ (1-4): ";
					std::cin.clear();
					std::cin.ignore(10000, '\n');
				}

				if (answerOption == 2)
				{
					std::cout << "\nВерно,правильный ответ - 2!";
					++correctAnswers;
					itsCorrect[choice] = true;
					results[choice] += "5050.";
					break;
				}
				else
				{
					std::cout << "\nОтвет неверный! Попробуйте ещё раз.";
					--ancorrectAnswer;
					std::cout << "\nКол-во ошибок, которые вы имеете право совершить - " << ancorrectAnswer;
					if (ancorrectAnswer > 0)
					{
						continue;
					}
					else
					{
						itsCorrect[choice] = true;
						break;
					}
				}

			case 2:

				iter = questions.begin() + 2;
				std::cout << "\n" << *iter << std::endl;
				std::cout << "\n1 - Сидней.";
				std::cout << "\n2 - Мельбурн.";
				std::cout << "\n3 - Канберра.";
				std::cout << "\n4 - Перт.";

				std::cout << "\nВвведите свой ответ: ";
				while (!(std::cin >> answerOption) || answerOption < 1 || answerOption > 4)
				{
					std::cout << "Ошибка! Ввведите свой ответ (1-4): ";
					std::cin.clear();
					std::cin.ignore(10000, '\n');
				}

				if (answerOption == 3)
				{
					std::cout << "\nВерно,правильный ответ - 3!";
					++correctAnswers;
					itsCorrect[choice] = true;
					results[choice] += "Канберра.";
					break;
				}
				else
				{
					std::cout << "\nОтвет неверный! Попробуйте ещё раз.";
					--ancorrectAnswer;
					std::cout << "\nКол-во ошибок, которые вы имеете право совершить - " << ancorrectAnswer;
					if (ancorrectAnswer > 0)
					{
						continue;
					}
					else
					{
						itsCorrect[choice] = true;
						break;
					}
				}
			case 3:

				iter = questions.begin() + 3;
				std::cout << "\n" << *iter << std::endl;
				std::cout << "\n1 - Альберт Эйнштейн.";
				std::cout << "\n2 - Исаак Ньютон.";
				std::cout << "\n3 - Галилео Галилей.";
				std::cout << "\n4 - Иоганн Кеплер.";

				std::cout << "\nВвведите свой ответ: ";
				while (!(std::cin >> answerOption) || answerOption < 1 || answerOption > 4)
				{
					std::cout << "Ошибка! Ввведите свой ответ (1-4): ";
					std::cin.clear();
					std::cin.ignore(10000, '\n');
				}

				if (answerOption == 2)
				{
					std::cout << "\nВерно,правильный ответ - 2!";
					++correctAnswers;
					itsCorrect[choice] = true;
					results[choice] += "Исаак Ньютон.";
					break;
				}
				else
				{
					std::cout << "\nОтвет неверный! Попробуйте ещё раз.";
					--ancorrectAnswer;
					std::cout << "\nКол-во ошибок, которые вы имеете право совершить - " << ancorrectAnswer;
					if (ancorrectAnswer > 0)
					{
						continue;
					}
					else
					{
						itsCorrect[choice] = true;
						break;
					}
				}
			case 4:

				iter = questions.begin() + 4;
				std::cout << "\n" << *iter << std::endl;
				std::cout << "\n1 - Лев Толстой.";
				std::cout << "\n2 - Фёдор Достоевский.";
				std::cout << "\n3 - Антон Чехов.";
				std::cout << "\n4 - Николай Гоголь.";

				std::cout << "\nВвведите свой ответ: ";
				while (!(std::cin >> answerOption) || answerOption < 1 || answerOption > 4)
				{
					std::cout << "Ошибка! Ввведите свой ответ (1-4): ";
					std::cin.clear();
					std::cin.ignore(10000, '\n');
				}

				if (answerOption == 2)
				{
					std::cout << "\nВерно,правильный ответ - 2!";
					++correctAnswers;
					itsCorrect[choice] = true;
					results[choice] += "Фёдор Достоевский.";
					break;
				}
				else
				{
					std::cout << "\nОтвет неверный! Попробуйте ещё раз.";
					--ancorrectAnswer;
					std::cout << "\nКол-во ошибок, которые вы имеете право совершить - " << ancorrectAnswer;
					if (ancorrectAnswer > 0)
					{
						continue;
					}
					else
					{
						itsCorrect[choice] = true;
						break;
					}
				}
			case 5:

				iter = questions.begin() + 5;
				std::cout << "\n" << *iter << std::endl;
				std::cout << "\n1 - 6.";
				std::cout << "\n2 - 7.";
				std::cout << "\n3 - 8.";
				std::cout << "\n4 - 10.";

				std::cout << "\nВвведите свой ответ: ";
				while (!(std::cin >> answerOption) || answerOption < 1 || answerOption > 4)
				{
					std::cout << "Ошибка! Ввведите свой ответ (1-4): ";
					std::cin.clear();
					std::cin.ignore(10000, '\n');
				}

				if (answerOption == 3)
				{
					std::cout << "\nВерно,правильный ответ - 3!";
					++correctAnswers;
					itsCorrect[choice] = true;
					results[choice] += "8.";
					break;
				}
				else
				{
					std::cout << "\nОтвет неверный! Попробуйте ещё раз.";
					--ancorrectAnswer;
					std::cout << "\nКол-во ошибок, которые вы имеете право совершить - " << ancorrectAnswer;
					if (ancorrectAnswer > 0)
					{
						continue;
					}
					else
					{
						itsCorrect[choice] = true;
						break;
					}
				}
			case 6:

				iter = questions.begin() + 6;
				std::cout << "\n" << *iter << std::endl;
				std::cout << "\n1 - Na.";
				std::cout << "\n2 - N.";
				std::cout << "\n3 - S.";
				std::cout << "\n4 - K.";

				std::cout << "\nВвведите свой ответ: ";
				while (!(std::cin >> answerOption) || answerOption < 1 || answerOption > 4)
				{
					std::cout << "Ошибка! Ввведите свой ответ (1-4): ";
					std::cin.clear();
					std::cin.ignore(10000, '\n');
				}

				if (answerOption == 1)
				{
					std::cout << "\nВерно,правильный ответ - 1!";
					++correctAnswers;
					itsCorrect[choice] = true;
					results[choice] += "Na.";
					break;
				}
				else
				{
					std::cout << "\nОтвет неверный! Попробуйте ещё раз.";
					--ancorrectAnswer;
					std::cout << "\nКол-во ошибок, которые вы имеете право совершить - " << ancorrectAnswer;
					if (ancorrectAnswer > 0)
					{
						continue;
					}
					else
					{
						itsCorrect[choice] = true;
						break;
					}
				}
			case 7:

				iter = questions.begin() + 7;
				std::cout << "\n" << *iter << std::endl;
				std::cout << "\n1 - 1.";
				std::cout << "\n2 - 1,5.";
				std::cout << "\n3 - 2.";
				std::cout << "\n4 - 0.";

				std::cout << "\nВвведите свой ответ: ";
				while (!(std::cin >> answerOption) || answerOption < 1 || answerOption > 4)
				{
					std::cout << "Ошибка! Ввведите свой ответ (1-4): ";
					std::cin.clear();
					std::cin.ignore(10000, '\n');
				}

				if (answerOption == 1)
				{
					std::cout << "\nВерно,правильный ответ - 1!";
					++correctAnswers;
					itsCorrect[choice] = true;
					results[choice] += "1.";
					break;
				}
				else
				{
					std::cout << "\nОтвет неверный! Попробуйте ещё раз.";
					--ancorrectAnswer;
					std::cout << "\nКол-во ошибок, которые вы имеете право совершить - " << ancorrectAnswer;
					if (ancorrectAnswer > 0)
					{
						continue;
					}
					else
					{
						itsCorrect[choice] = true;
						break;
					}
				}
			case 8:

				iter = questions.begin() + 8;
				std::cout << "\n" << *iter << std::endl;
				std::cout << "\n1 - Испарение.";
				std::cout << "\n2 - Конденсация.";
				std::cout << "\n3 - Кипение.";
				std::cout << "\n4 - Сублимация.";

				std::cout << "\nВвведите свой ответ: ";
				while (!(std::cin >> answerOption) || answerOption < 1 || answerOption > 4)
				{
					std::cout << "Ошибка! Ввведите свой ответ (1-4): ";
					std::cin.clear();
					std::cin.ignore(10000, '\n');
				}

				if (answerOption == 3)
				{
					std::cout << "\nВерно,правильный ответ - 3!";
					++correctAnswers;
					itsCorrect[choice] = true;
					results[choice] += "Кипение.";
					break;
				}
				else
				{
					std::cout << "\nОтвет неверный! Попробуйте ещё раз.";
					--ancorrectAnswer;
					std::cout << "\nКол-во ошибок, которые вы имеете право совершить - " << ancorrectAnswer;
					if (ancorrectAnswer > 0)
					{
						continue;
					}
					else
					{
						itsCorrect[choice] = true;
						break;
					}
				}
			case 9:

				iter = questions.begin() + 9;
				std::cout << "\n" << *iter << std::endl;
				std::cout << "\n1 - Английский.";
				std::cout << "\n2 - Испанский.";
				std::cout << "\n3 - Хинди.";
				std::cout << "\n4 - Китайский.";

				std::cout << "\nВвведите свой ответ: ";
				while (!(std::cin >> answerOption) || answerOption < 1 || answerOption > 4)
				{
					std::cout << "Ошибка! Ввведите свой ответ (1-4): ";
					std::cin.clear();
					std::cin.ignore(10000, '\n');
				}

				if (answerOption == 4)
				{
					std::cout << "\nВерно,правильный ответ - 4!";
					++correctAnswers;
					itsCorrect[choice] = true;
					results[choice] += "Китайский.";
					break;
				}
				else
				{
					std::cout << "\nОтвет неверный! Попробуйте ещё раз.";
					--ancorrectAnswer;
					std::cout << "\nКол-во ошибок, которые вы имеете право совершить - " << ancorrectAnswer;
					if (ancorrectAnswer > 0)
					{
						continue;
					}
					else
					{
						itsCorrect[choice] = true;
						break;
					}
				}
			}
		}

		questions[choice] = '-'; //вопрос на который пользователь уже ответил зачеркивается

		if (correctAnswers < 10)
		{
			std::cout << "\nДоступные вопросы: \n";
			for (iter = questions.begin(); iter != questions.end(); ++iter)
			{
				std::cout << *iter << std::endl;
			}
		}

	}

	if (correctAnswers == 10)
	{
		std::cout << "\nПоздравляем вы прошли тест и ответили правильно на все вопросы!";
		std::cout << "\nВаши ответы: \n";
		for (int i = 0; i < MAX; ++i)
		{
			std::cout << i + 1 << " - " << results[i] << std::endl;
		}
	}
	else
	{
		std::cout << "\nВы проиграли! Вы допустили слишком много ошибок.";
		std::cout << "\nВаши ответы: \n";
		for (int i = 0; i < MAX; ++i)
		{
			std::cout << i + 1 << " - " << results[i] << std::endl;
		}
	}


	//выход из программы
	std::cout << "\nВведите Enter, чтобы выйти.";
	std::cin.clear();
	std::cin.get();

	return 0;
}