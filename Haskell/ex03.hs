module Main where

import System.IO ()

main :: IO ()

main = do
    putStrLn "Digite a temperatura em Celsius: "
    celsius <- getLine
    let real_celsius = read celsius :: Float
    
    let fahrenheit = (real_celsius * 1.8) + 32

    putStrLn (show real_celsius ++ " °C em F é: " ++ show fahrenheit)