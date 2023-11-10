from Account import *

accountDiscts = {}

nextAccountNumber = 0

oAccount = Account('Joe', 100, 'JoePassword')
joesAccountNumber = nextAccountNumber
accountDiscts[joesAccountNumber] = oAccount
print("Account Number for Joe is:", joesAccountNumber)

nextAccountNumber += 1
oAccount = Account('Marry', 12345, 'MarryPassword')
marrysAccountNumber = nextAccountNumber
accountDiscts[marrysAccountNumber] = oAccount
print("Account Number for Marry is:", marrysAccountNumber)
nextAccountNumber += 1

accountDiscts[joesAccountNumber].show()
accountDiscts[marrysAccountNumber].show()
print()


# call some method on the different accounts
print('Calling methods of the different accounts  ...')
accountDiscts[joesAccountNumber].deposit(50, 'JoePassword')
accountDiscts[marrysAccountNumber].withdraw(345, 'MarryPassword')
accountDiscts[marrysAccountNumber].deposit(100, 'MarryPassword')

# Loop through the accountDiscts dictionary to display all the accounts
print("\nList of all accounts:")
for account in accountDiscts.values():
    account.show()


print()
userName = input('What is the name for the nwe user account? ')
userBalance = input('What is the starting balance for this account? ')
userBalance = int(userBalance)
userPassword = input('What is the password you want to use for this account? ')
oAccount = Account(userName, userBalance, userPassword)
newAccountNumber = nextAccountNumber
accountDiscts[newAccountNumber] = oAccount
print("Account Number for new account is:" , newAccountNumber)
nextAccountNumber = nextAccountNumber + 1

accountDiscts[newAccountNumber].show()

accountDiscts[newAccountNumber].deposit(100, userPassword)
usersBalance = accountDiscts[newAccountNumber].getBalance(userPassword)
print()
print("After Depositing 100, the user's balance is: ", userBalance)
#show the nwe account
accountDiscts[newAccountNumber].show()

