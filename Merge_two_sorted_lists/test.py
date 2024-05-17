import subprocess
import unittest
import json

json_file = open("unittest.json")

data = json.load(json_file)

for i in data['somthing']:
    print(i)
 
# Closing file
json_file.close()

# class TestMainProgram(unittest.TestCase):
#     def test_output(self):
#         test_cases = [
#             (['6'], "", "You entered problem id = 6\nYou are viewing MERGE_TWO_SORTED_LIST problem\nDifficult Level: EASY\n\n1\n"),
#             # Thêm các test case khác vào đây
#             (['6'], "", "You entered problem id = 1\nYou are viewing SOME_OTHER_PROBLEM problem\nDifficult Level: MEDIUM\n\n42\n"),
#             (['6'], "", "You entered problem id = 2\nYou are viewing ANOTHER_PROBLEM problem\nDifficult Level: HARD\n\n100\n"),
#             # Ví dụ với input từ stdin
#             (['6'], "some input from stdin\n", "Expected output for stdin input\n")
#         ]

#         for input_args, input_data, expected_output in test_cases:
#             with self.subTest(input_args=input_args, input_data=input_data):
#                 # Chạy chương trình C++ với input từ test case
#                 result = subprocess.run(['../main'] + input_args, input=input_data, capture_output=True, text=True)
#                 # Kiểm tra output thực tế với output mong muốn
#                 self.assertEqual(result.stdout, expected_output, f"Test case for input_args {input_args} and input_data {input_data} failed")
# if __name__ == '__main__':
#     unittest.main()