class Product:
    product_count = 0

    def __init__(self, name, price, qty, status, category):
        self.name = name
        self.price = price
        self.qty = qty
        self.status = status
        self.category = category
        Product.product_count += 1

    def get_product_info(self):
        return f"Product: {self.name}, Price: Rp{self.price}, Quantity: {self.qty}, Status: {self.status}, Category: {self.category}"

    def calculate_discount(self, discount_percentage):
        discounted_price = self.price * (1 - discount_percentage / 100)
        return f"The discounted price of {self.name} is Rp{discounted_price:.2f}"

    def check_availability(self):
        if self.qty > 0 and self.status == "available":
            return f"{self.name} is available for purchase"
        else:
            return f"{self.name} is currently not available"

    def update_quantity(self, new_qty):
        if new_qty >= 0:
            self.qty = new_qty
            return f"Quantity for {self.name} has been updated to {self.qty}"
        else:
            return "Quantity cannot be negative"

    def update_status(self, new_status):
        valid_status = ["available", "limited stock", "out of stock"]
        if new_status in valid_status:
            self.status = new_status
            return f"The status for {self.name} has been updated to {self.status}"
        else:
            return "Invalid status, please choose from available, limited stock, or out of stock"

class Electronics(Product):
    def __init__(self, name, price, qty, status, category, brand):
        super().__init__(name, price, qty, status, category)
        self.brand = brand

    def get_product_info(self):
        return f"Product: {self.name}, Price: Rp{self.price}, Quantity: {self.qty}, Status: {self.status}, Category: {self.category}, Brand: {self.brand}"

    def update_brand(self, new_brand):
        self.brand = new_brand
        return f"The brand for {self.name} has been updated to {self.brand}"