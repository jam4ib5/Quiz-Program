#include <iostream>
#include "ShortAnswerQuestion.h"
#include "MultipleChoiceQuestion.h"
#include "TrueFalseQuestion.h"


void TestMultipleChoice()
{
	MultipleChoiceQuestion b(" What is the element symbol for chlorine?",
		std::vector<std::string> {"Ne", "Cl", "Na", "Da"},
		"2");
	std::string answer;
	std::cout << b.GetQuestionText() << std::endl;
	std::cout << b.GetPossibleAnswersText() << std::endl;
	do
	{
		std::cout << " ANSWER: ";
		std::getline(std::cin, answer);
	} while (b.IsThisAnswerCorrect(answer) == false);

	std::cout << " CORRECT!" << std::endl << std::endl;
}



void TestTrueFalseAnswer()
{
	TrueFalseQuestion a(" Is C++ a Programming language? ", "True");

	std::string answer;
	std::cout << a.GetQuestionText() << std::endl;
	std::cout << a.GetPossibleAnswersText() << std::endl;
	do
	{
		std::cout << " ANSWER: ";
		std::getline(std::cin, answer);
	} while (a.IsThisAnswerCorrect(answer) == false);

	std::cout << " CORRECT!" << std::endl << std::endl;
}


void TestShortAnswer()
{
	ShortAnswerQuestion a(" What is (9 * 9) - (6 * 6)/ 2 ?", "7.5");
	
	std::string answer;
	std::cout << a.GetQuestionText() << std::endl;
	do
	{
		std::cout << " ANSWER: ";
		std::getline(std::cin, answer);
	} while (a.IsThisAnswerCorrect(answer) == false);

	std::cout << " CORRECT!" << std::endl << std::endl;
}


int main()
{
	TestShortAnswer();
	TestMultipleChoice();
	TestTrueFalseAnswer();

	system("pause");
	return 0;
}

