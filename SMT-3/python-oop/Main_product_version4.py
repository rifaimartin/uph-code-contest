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

while True:
    print()
    print("Press 1 to view products")
    print("Press 2 to check product availability")
    print("Press 3 to update product quantity")
    print("Press 4 to add a new product")
    print("Press 5 to exit")

    choice = input("Enter choice: ")

    if choice == "1":
        for name, product in product_dict.items():
            print(product.get_product_info())
            print()

    elif choice == "2":
        product_name = input("Enter product name: ")
        if product_name in product_dict:
            product = product_dict[product_name]
            print(product.check_availability())
        else:
            print("Product not found!")

    elif choice == "3":
        product_name = input("Enter product name: ")
        if product_name in product_dict:
            quantity = int(input("Enter new quantity: "))
            product = product_dict[product_name]
            print(product.update_quantity(quantity))
        else:
            print("Product not found!")

    elif choice == "4":
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
        print("Product added successfully!")

    elif choice == "5":
        break

    else:
        print("Invalid choice!")

print("Thank you for using the product management system.")    