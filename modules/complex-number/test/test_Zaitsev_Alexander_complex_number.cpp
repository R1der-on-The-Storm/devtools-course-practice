// Copyright 2022 Zaitsev Alexander

#include <gtest/gtest.h>

#include "include/complex_number.h"

TEST(Zaitsev_Alexander_ComplexNumberTest, Can_Create_Zero) {
  double re = 0.0;
  double im = 0.0;
  ComplexNumber z(re, im);

  EXPECT_EQ(re, z.getRe());
  EXPECT_EQ(im, z.getIm());
}

TEST(Zaitsev_Alexander_ComplexNumberTest, Can_Create_Imaginary_Nubmer) {
  double re = 0.0;
  double im = 7.0;

  ComplexNumber z(re, im);

  EXPECT_EQ(re, z.getRe());
  EXPECT_EQ(im, z.getIm());
}

TEST(Zaitsev_Alexander_ComplexNumberTest, Can_Create_Real_Nubmer) {
  double re = 14.0;
  double im = 0.0;

  ComplexNumber z(re, im);

  EXPECT_EQ(re, z.getRe());
  EXPECT_EQ(im, z.getIm());
}

TEST(Zaitsev_Alexander_ComplexNumberTest, Complex_Equals) {
  double re = 10.0;
  double im = 7.0;

  ComplexNumber z(re, im);

  EXPECT_EQ(10.0, z.getRe());
  EXPECT_EQ(7.0, z.getIm());
}

TEST(Zaitsev_Alexander_ComplexNumberTest, Complex_Minus) {
  double re = 10.0;
  double im = 7.0;

  double re2 = 20.0;
  double im2 = 10.0;

  ComplexNumber z(re, im);
  ComplexNumber z2(re2, im2);
  ComplexNumber s = z2 - z;

  EXPECT_EQ(10.0, s.getRe());
  EXPECT_EQ(3.0, s.getIm());
}

TEST(Zaitsev_Alexander_ComplexNumberTest, Complex_Sum) {
  double re = 10.0;
  double im = 7.0;

  double re2 = 20.0;
  double im2 = 10.0;

  ComplexNumber z(re, im);
  ComplexNumber z2(re2, im2);
  ComplexNumber s = z2 + z;

  EXPECT_EQ(30.0, s.getRe());
  EXPECT_EQ(17.0, s.getIm());
}

TEST(Zaitsev_Alexander_ComplexNumberTest, Complex_Multiply) {
  double re = 5.0;
  double im = 2.0;

  double re2 = 3.0;
  double im2 = 1.0;

  ComplexNumber z(re, im);
  ComplexNumber z2(re2, im2);
  ComplexNumber m = z * z2;

  EXPECT_EQ(13.0, m.getRe());
  EXPECT_EQ(11.0, m.getIm());
}