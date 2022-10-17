Most Important part of the problem is the function which checks if the weights(array) can be shipped with the given ax capacity withing given days.
​
Thus the problem gets reduced to:
1) given a weights array and the capacity of the ship, in how many days can the weights be shipped? Weights have to be shipped in order and the weights on the ship must not be greater than capacity.
2) Binary search for the capacity in range lowerLimit=1, upperLimit = sum of all the weights
3) Optimization: least possible capacity will always be greater than sum of all the weights /  given number of days(days)