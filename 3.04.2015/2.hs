--2
data Tree a = Leaf a | Branch (Tree a) a (Tree a)

find' :: Tree Int -> [Int] -> [Int]
find' (Leaf a) buf = if (a < 0) then a : buf else buf
find' (Branch left a right) buf = if (a < 0) then find' right (a : (find' left buf))
else find' right (find' left buf)

findNegative :: Tree Int -> [Int]
findNegative tree = find' tree []