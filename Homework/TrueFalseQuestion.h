#pragma once

#include "Question.h"

class TrueFalseQuestion : public Question
{
public:
	TrueFalseQuestion(const std::string& questionText,
		const std::string& correctAnswer);

	virtual bool IsThisAnswerCorrect(const std::string& answer) override;
	virtual std::string GetPossibleAnswersText() override;

private:
	// Nothing to add to the class
};