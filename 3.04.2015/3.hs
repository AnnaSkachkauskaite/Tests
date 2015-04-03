--3
import Data.Maybe
				
findPos :: (Eq a) => a -> [a] -> Maybe Int
findPos x xs = let a = (length xs) - (length $ dropWhile (/= x) xs) in
						if (a /= 0) then Just a else Nothing where