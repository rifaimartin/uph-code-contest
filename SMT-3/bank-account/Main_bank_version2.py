from Account import *

accountList = []

oAccount = Account('Joe', 100, 'JoePassword')
accountList.append(oAccount)
print("Joe's account number 0")
oAccount = Account('Marry', 100, 'MarryPassword')
accountList.append(oAccount)

#Call method on the different accounts
print('Calling methods of the two accounts  ...')
accountList[0].deposit(50, 'JoePassword')
accountList[1].withdraw(345, 'MarryPassword')
accountList[1].deposit(100, 'MarryPassword')

accountList[0].show()
accountList[1].show()


#create another accounr with information from the user

print()
userName = input('What is the name for the nwe user account? ')
userBalance = input('What is the starting balance for this account? ')
userBalance = int(userBalance)
userPassword = input('What is the password you want to use for this account? ')
oAccount = Account(userName, userBalance, userPassword)
accountList.append(oAccount)

print("\nList of all accounts:")
for account in accountList:
    account.show()