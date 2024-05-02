LIB = Valid_Parentheses/valid_parentheses.cpp
LIB += Two_sum/two_sum.cpp
LIB += Roman_to_Interger/roman_to_interger.cpp
LIB += Palindrome_number/palindrome_number.cpp
LIB += Longest_common_prefix/longest_common_prefix.cpp

main:
	g++ $(LIB) main.h main.cpp -o main 
