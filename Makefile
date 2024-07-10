LIB = Valid_Parentheses/valid_parentheses.cpp
LIB += Two_sum/two_sum.cpp
LIB += Roman_to_Interger/roman_to_interger.cpp
LIB += Palindrome_number/palindrome_number.cpp
LIB += Longest_common_prefix/longest_common_prefix.cpp
LIB += Merge_two_sorted_lists/merge_two_sorted_lists.cpp
LIB += Add_Two_Number/add_two_number.cpp
LIB += Longest_Substring_Without_Repeating_Characters/longest_substring_without_repeating_characters.cpp

main:
	g++ $(LIB) main.hpp main.cpp -o main 
