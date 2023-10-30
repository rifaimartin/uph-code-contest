class Account():
    def __init__(self, name,balance,password) :
        self.name = name
        self.balance = int(balance)
        self.password = password
        
    
    def deposit (self, amountToDeposit, password) :
        if password != self.password:
            print('Sorry, incorrect password')
            return None
        if amountToDeposit < 0:
             print('You cannot deposit a negative amount')
             return None
        self.balance = self.balance + amountToDeposit
        return self.balance
    
    def withdraw(self, amountToWithdraw, password) :
        if password != self.password:
            print('Incorret password')
            return None
        
        if amountToWithdraw < 0 :
            print('Cannot withdraw negative balance')
            return None
        if amountToWithdraw > self.balance:
            print('Insufficent Balance')
            return None
        
        self.balance = self.balance-amountToWithdraw
        return self.balance
    
    
    def getBalance(self, password):
        if password != self.password:
            print('Incorret Password')
            return None
        return self.balance
    
    
    def show(self) : 
        print(' Name:', self.name)
        print(' Balance:',self.balance)
        print(' Password:',self.password)
        print()