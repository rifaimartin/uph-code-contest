from Product import *

product_list = []

product1 = Product("Keyboard", 300000, 10, "available", "computer accessories")
product_list.append(product1)

product2 = Electronics("Smartphone", 5000000, 5, "available", "electronics", "Samsung")
product_list.append(product2)

name = input("Enter product name: ")
price = int(input("Enter product price: "))
quantity = int(input("Enter product quantity: "))
status = input("Enter product status: ")
category = input("Enter product category: ")
brand = input("Enter product brand (if applicable): ")

if brand != "":
    product = Electronics(name, price, quantity, status, category, brand)
else:
    product = Product(name, price, quantity, status, category)

product_list.append(product)

for product in product_list:
    print(product.get_product_info())
    print(product.calculate_discount(15))
    print(product.check_availability())
    print(product.update_quantity(15))
    print()