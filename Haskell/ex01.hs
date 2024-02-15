module Main where

import System.IO ()

main :: IO ()
main = do
    putStrLn "Digite o primeiro número:"
    num1 <- getLine
    putStrLn "Digite o segundo número:"
    num2 <- getLine

    let n1 = read num1 :: Float
    let n2 = read num2 :: Float

    putStrLn ("Adição: " ++ show (n1 + n2))
    putStrLn ("Subtração: " ++ show (n1 - n2))
    putStrLn ("Multiplicação: " ++ show (n1 * n2))
    if n2 /= 0
        then putStrLn ("Divisão: " ++ show (n1 / n2))
        else putStrLn "Não é possível dividir por zero."
