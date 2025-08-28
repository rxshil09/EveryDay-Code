class Car:
    total_cars = 0
    
    def __init__(self, brand, model):
        self.__brand = brand
        self.__model = model
        
        Car.total_cars += 1
    
    def full_name(self):
        return f"{self.__brand} {self.__model}"
    
    def get_brand(self):
        return self.__brand + " !"
    
    def fuel_type(self):
        return "Petrol or diesel"
    
    @staticmethod
    def general_description():
        return "cars are means of transport"
    
    @property
    def model(self):
        return self.__model


    
class ElectricCar(Car):
    def __init__(self, brand, model, battery_size):
        super().__init__(brand, model)
        self.battery_size = battery_size
    
    def fuel_type(self):
        return "Electricity"
        
    
my_car_1 = Car("toyota", "corolla")
# print(my_car_1.brand) 
# print(my_car_1.model)
# print(my_car_1.fuel_type())

my_new_car = Car("tata", "safari")
# print(my_new_car.brand) 
# print(my_new_car.model)
# my_new_car.model = "Nexon"
# print(my_new_car.model)


my_car_2 = Car("porche", "GT")
# print(my_car_2.full_name())

my_tesla = ElectricCar("tesla", "Model-S", "85 Kwh")
# print(my_tesla.full_name())
# print(my_tesla.get_brand())
# print(my_tesla.__brand())
# print(my_tesla.fuel_type())

# print(isinstance(my_tesla, ElectricCar))
# print(isinstance(my_tesla, Car))

# print(Car.total_cars)

# print(Car.general_description())
# print(my_car_1.general_description())


class Battery:
    def battery_info(self):
        return "this is battery"

class Engine:
    def engine_info(self):
        return "this is engine"

class ElectricCarTwo(Battery, Engine, Car):
    pass

my_new_tesla = ElectricCarTwo("tesla", "model x")
print(my_new_tesla.engine_info())
print(my_new_tesla.battery_info())