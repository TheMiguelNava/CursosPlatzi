from car import Car
from account import Account

if __name__=="__main__":
    print("Hola mundo")
    
car = Car("AMS523",Account("Andrés Herrera","El INE"))
print(vars(car))
print(vars(car.driver))

"""
Sin el método constructor de python

car2 = Car()
car2.license="PWD2539"
car2.driver="Anita Platzi"
print(vars(car2))
"""