from Product import *

product1 = Product("Keyboard", 300000, 10, "available", "computer accessories")
product2 = Electronics("Smartphone", 5000000, 5, "available", "electronics", "Samsung")

print(product1.check_availability())
print(product2.check_availability())

print(product1.update_quantity(15))
print(product2.update_quantity(-2))

print(product1.update_status("limited stock"))
print(product2.update_status("sold out"))

print(product1.get_product_info())
print(product2.get_product_info())

print(product2.update_brand("Apple"))
print(product2.get_product_info())

