from Account import *

accountDict = {}

nextAccountNumber = 0

while True:
    print()
    print('Press b to get the Balance')
    print('Press d to make a deposit')
    print('Press o to open a new account')
    print('Press w to make a withdrawal')
    print('Press s to show all accounts')
    print('Press q to quit')
    print()
    
    action = input('What do you want to do? ')
    action = action.lower()
    action = action[0] # grab the first letter
    print()
    
    if action == 'b':
        print('***Get Balance ***')
        userAccountNumber = input('Please enter your account number: ')
        userAccountNumber = int(userAccountNumber)
        userAccountPassword = input('Please enter the password: ')
        if userAccountNumber in accountDict:
            oAccount = accountDict[userAccountNumber]
            theBalance = oAccount.getBalance(userAccountPassword)
            if theBalance is not None:
                print('The balance for account number {} is: ${}'.format(
                    userAccountNumber, theBalance))
        else:
            print('Error: Account number {} does not exist'.format(userAccountNumber))
    
    elif action == 'd':
        print('***Make Deposit***')
        userAccountNumber = input('Please enter your account number: ')
        userAccountNumber = int(userAccountNumber)
        userAccountPassword = input('Please enter the password: ')
        if userAccountNumber in accountDict:
            oAccount = accountDict[userAccountNumber]
            deposit_Amount = input('How much would you like to deposit? ')
            deposit_Amount = float(deposit_Amount)
            oAccount.deposit(deposit_Amount, userAccountPassword)
            print('Deposit was successful')
            print('The new balance is: $ {}'.format(oAccount.getBalance(userAccountPassword)))
        else:
            print('Error: Account number {} does not exist'.format(userAccountNumber))
            
    elif action == 'o':
        print('***Open a new account ***')
        userName = input("What's your name? ")
        startingDeposit = input('How much do you want to deposit to start your account? ')
        startingDeposit = float(startingDeposit)
        password = input("Enter a password for your account: ")
        nextAccountNumber += 1
        cAccount = Account(userName, startingDeposit, password)
        cAccount.accountNumber = nextAccountNumber
        accountDict[nextAccountNumber] = cAccount
        print('Your account number is: {}'.format(nextAccountNumber))
        
    elif action == 'w':
        print('***Make a withdrawal***')
        userAccountNumber = input('Please enter your account number: ')
        userAccountNumber = int(userAccountNumber)
        userAccountPassword = input('Please enter the password: ')
        if userAccountNumber in accountDict:
            oAccount = accountDict[userAccountNumber]
            withdrawal_Amount = input('How much would you like to withdraw? ')
            withdrawal_Amount = float(withdrawal_Amount)
            success = oAccount.withdraw(withdrawal_Amount, userAccountPassword)
            if success:
                print('Withdrawal was successful')
                print('The new balance is: $ {}'.format(oAccount.getBalance(userAccountPassword)))
            else:
                print('Error: Insufficient balance or incorrect password')
        else:
            print('Error: Account number {} does not exist'.format(userAccountNumber))
        
    elif action == 's':
        print('***Show all accounts***')
        for account in accountDict.values():
         account.show()
        
    elif action == 'q':
        print('Quit')
        break
    
    else:
        print('Please enter a valid option.')