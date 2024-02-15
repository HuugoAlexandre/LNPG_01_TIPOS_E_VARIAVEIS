module Main where

import System.IO ()

main :: IO ()
main = do
    putStrLn "Digite um número: "
    num <- getLine
    let n = read num :: Int

    if even n
        then putStrLn ("O número " ++ show n ++ " é par!")
        else putStrLn ("O número " ++ show n ++ " é impar!")