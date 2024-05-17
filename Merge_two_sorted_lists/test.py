import subprocess
import unittest
import json

json_file = open("unittest.json")

data = json.load(json_file)

list1 = data['problem']["unittest"]["test_cases"][0]["input"]["list1"]
list2 = data['problem']["unittest"]["test_cases"][0]["input"]["list2"]

input =list1 + " " +list2
# print(list1)
 
# Closing file
json_file.close()

class TestMainProgram(unittest.TestCase):

    def setUp(self):
        print("Compiling main.exe...")
        # move_out = subprocess.Popen(["cd.."],shell=True)
        # move_out.wait()

        # print(process.returncode)
        process = subprocess.run(["mingw32-make", "main"],cwd="../", shell=True, check = True)


        

    def test_output(self):

        result = subprocess.run(["../main","6"],input=input.encode())

        # for input_args, input_data, expected_output in test_cases:
        #     with self.subTest(input_args=input_args, input_data=input_data):
        #         # Chạy chương trình C++ với input từ test case
        #         result = subprocess.run(['../main'] + input_args, input=input_data, capture_output=True, text=True)
        #         # Kiểm tra output thực tế với output mong muốn
        #         self.assertEqual(result.stdout, expected_output, f"Test case for input_args {input_args} and input_data {input_data} failed")
if __name__ == '__main__':
    unittest.main()