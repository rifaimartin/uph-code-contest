class Product:
    # Class 
    product_count = 0

    def __init__(self, name, price):
        # Instance attributes
        self.name = name
        self.price = price
        Product.product_count += 1

    def get_product_info(self):
        return f"Product: {self.name}, Price: Rp{self.price}"

    def calculate_discount(self, discount_percentage):
        discounted_price = self.price * (1 - discount_percentage / 100)
        return f"The discounted price of {self.name} is Rp{discounted_price:.2f}"

# Inheritance: Electronics class inherits from Product class
class Electronics(Product):
    def __init__(self, name, price, brand):
        super().__init__(name, price)
        self.brand = brand

    def get_product_info(self):
        return f"Product: {self.name}, Price: ${self.price}, Brand: {self.brand}"

# Creating instances
product1 = Product("Laptop", 800)
product2 = Electronics("Smartphone", 500, "Apple")

# Accessing attributes and methods
print(product1.get_product_info()) 
print(product2.get_product_info())  
print(product1.calculate_discount(10)) 
print(product2.calculate_discount(5))  
print(f"Total number of products: {Product.product_count}") 