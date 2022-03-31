#include "Question.h"

// Set up the question
Question::Question(const std::string& questionText,
	               const std::string& correctAnswer)
	: QuestionText(questionText),
	  CorrectAnswer(correctAnswer)
{
	// Blank...
}

Question::~Question()
{
	// Blank...
}

std::string Question::GetQuestionText()
{
	return QuestionText;
}

std::string Question::GetPossibleAnswersText()
{
	return std::string();
}