--1
primeNums = 2 : [n | n <- [3..], isPrime n]
isPrime n = foldr (\p r-> p*p>n || (rem n p /= 0 && r)) True primeNums