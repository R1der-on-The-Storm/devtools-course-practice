// Copyright 2022 Zaitsev Alexander

#include <gtest/gtest.h>

#include <map>
#include <string>
#include <vector>

#include "include/number_translation.h"

TEST(zaitsev_alexander_translating_a_number_into_a_word, translate_zero) {
  int answer = 0;
  std::string word(translating_a_number_into_a_word(digit));
  std::string number("zero ");
  ASSERT_EQ(answer, number);
}

TEST(zaitsev_alexander_translating_a_number_into_a_word, translate_eleven) {
  int number = 11;
  std::string word(translating_a_number_into_a_word(number));
  std::string answer("eleven  ");
  ASSERT_EQ(word, answer);
}

TEST(zaitsev_alexander_translating_a_number_into_a_word,
     translate_minus_thirty_nine) {
  int number = -39;
  std::string word(translating_a_number_into_a_word(number));
  std::string answer("minus thirty nine ");
  ASSERT_EQ(word, answer);
}

TEST(zaitsev_alexander_translating_a_number_into_a_word, translate_fifty) {
  int answer = 50;
  std::string word("fifty ");
  int number(translating_a_word_into_a_number(word));
  ASSERT_EQ(answer, number);
}

TEST(zaitsev_alexander_translating_a_number_into_a_word,
     translate_minus_ninety) {
  int answer = -90;
  std::string word("minus ninety ");
  int number(translating_a_word_into_a_number(word));
  ASSERT_EQ(answer, number);
}

TEST(zaitsev_alexander_translating_a_number_into_a_word,
     translate_three_hundred_thousand) {
  int answer = 300000;
  std::string word("three hundred thousand ");
  int number(translating_a_word_into_a_number(word));
  ASSERT_EQ(answer, number);
}

TEST(zaitsev_alexander_translating_a_number_into_a_word,
     translate_one_thousand_ninety_and_translate_back) {
  int answer = 1090;
  std::string word(translating_a_number_into_a_word(answer));
  int number(translating_a_word_into_a_number(word));
  ASSERT_EQ(answer, number);
}

TEST(zaitsev_alexander_translating_a_number_into_a_word,
     translate_ten_thousand_fifty_seven_and_translate_back) {
  std::string answer("ten  thousand fifty seven ");
  int number(translating_a_word_into_a_number(answer));
  std::string word(translating_a_number_into_a_word(number));
  ASSERT_EQ(answer, word);
}
