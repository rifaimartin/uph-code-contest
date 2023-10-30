from Account import *

rifaiAccount = Account('rifai', 1000000, 'kalkulus')
print('Created account')


amountToDeposit = 50000
password = 'kalkulus'
rifaiAccount.deposit(amountToDeposit, password)
print('Deposited:', amountToDeposit)


amountToWithdraw = 20000
password = 'kalkulus'
rifaiAccount.withdraw(amountToWithdraw, password)
print('Withdrawn:', amountToWithdraw)


password = 'kalkulus'
balance = rifaiAccount.getBalance(password)
print('Current balance:', balance)


rifaiAccount.show()