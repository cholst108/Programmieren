class Person:
    __name = ""
    
    #Konstruktor
    def __init__(self):
        name = "Max Muster"        
    
    # Destruktor
    def __del__(self):
        print("Nicht nötig")
        
    def setName(self, name):
        self.name = name
    
    def getName(self):
        print(self.name)
     
     
class Lehrer(Person):
    Fach = ""
    

# Instanziierung
P = Person()

# Verwendung
P.setName('Fritz');
P.getName()