import unittest 
from snmp_mac import sagHallo

class TestStringMethods(unittest.TestCase):

    def test_sagHallo(self):
        self.assertEqual(sagHallo(),"Hallo")

if __name__ == '__main__':
    unittest.main()

