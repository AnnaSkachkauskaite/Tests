--5
data Products = Book {  
				name :: string
				writer :: string
				price :: Int
				}|
				Magazine {
				name :: string
				year :: Int
				number :: Int
				price :: Int
				}
total :: [Products] -> Int
total [] = 0
total (x:xs) = price x + total(xs)
				