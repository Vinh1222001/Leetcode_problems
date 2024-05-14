import subprocess
import unittest

class TestMainProgram(unittest.TestCase):
    def test_output(self):
        # Chạy chương trình C++
        result = subprocess.run(['../main','6'], capture_output=True, text=True)
        # Output mong muốn
        expected_output = "You entered problem id = 6\n"
        expected_output += "You are viewing MERGE_TWO_SORTED_LIST problem\n"
        expected_output += "Difficult Level: EASY\n"
        expected_output += "\n1\n"
        # Kiểm tra output thực tế với output mong muốn

        message = "wrong!"
        self.assertEqual(result.stdout, expected_output,message)

if __name__ == '__main__':
    unittest.main()