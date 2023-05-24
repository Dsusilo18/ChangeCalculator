# ChangeCalculator

**Change Calculator**

Users are able to enter the amount of purchase and the amount tendered in order to get the amount still owed or the change that is to be given in specific bills or coins. 

**Project Difficulties:**
- It was difficult to figure out an algorithm that would return the specific amount of bills and coins needed for the change without giving out too many bills and coins.

**My Solution:** 
-For twenty dollar bills, convert the change in dollars into change in pennies and divide this amount by the amount of pennies in a twenty dollar bill. Since, the change in pennies is a long data type, if the amount after division is a 0 then the application will show 0 twenty dollar bills are needed for the change. Next, count how much is left after the number of twenties in pennies have been subtracted from the change in pennies and divide this amount by the number of pennies in the next smaller bill, in this case ten dollar bills, to find how many of those bills are needed for the change. This process continues for fives, ones, quarters, dimes, nickles and pennies.

**Usage:**
- ChangeCounter.exe

**Technology Used:**
- Microsoft Visual Studio.net
- C
 
