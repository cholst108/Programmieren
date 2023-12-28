#!/usr/bin/python3

class Roboter:
    def __init__(self, name, jahr):
        self.Name = name
        self.Baujahr = jahr

    def sagHallo(self):
        str = "Mein Name ist {0} und ich wurde {1} erbaut!".format(
            self.Name, self.Baujahr
        )
        print(str)

    def setzeNamen(self, name):
        self.Name = name

    def setzeBaujahr(self, jahr):
        self.Baujahr = jahr


x = Roboter("Kuni", 1980)
x.sagHallo()
