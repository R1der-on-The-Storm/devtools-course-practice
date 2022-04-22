// Copyright 2022 Zaitsev Alexander

#ifndef MODULES_ZAITSEV_A_NUMBER_TRANSLATION_INCLUDE_NUMBER_TRANSLATION_H_
#define MODULES_ZAITSEV_A_NUMBER_TRANSLATION_INCLUDE_NUMBER_TRANSLATION_H_

#include <map>
#include <string>
#include <vector>
std::map<int, std::string> write_numbers();
std::map<std::string, int> write_words();
std::vector<int> digits_of_number(const int& number);
std::string translating_a_number_into_a_word(const int& value);
int translating_a_word_into_a_number(std::string word);
#endif  // MODULES_ZAITSEV_A_NUMBER_TRANSLATION_INCLUDE_NUMBER_TRANSLATION_H_
