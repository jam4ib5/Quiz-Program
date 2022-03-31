#pragma once

#include "Question.h"

class MultipleChoiceQuestion : public Question
{
public:
	std::vector<std::string> possibleAnswers;

	MultipleChoiceQuestion(const std::string& questionText, std::vector<std::string> newAnwers,
		const std::string& correctAnswer);

	virtual bool IsThisAnswerCorrect(const std::string& answer) override;
	virtual std::string GetPossibleAnswersText() override;

private:
	// Nothing to add to the class
};