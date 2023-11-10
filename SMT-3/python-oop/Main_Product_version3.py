from Product import *

product_dict = {}

while True:
    add_product = input("Add new product? (y/n) ")
    if add_product.lower() == "n":
        break

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

    product_dict[name] = product

for name, product in product_dict.items():
    print(product.get_product_info())
    print(product.calculate_discount(15))
    print(product.check_availability())
    print(product.update_quantity(15))
    print()