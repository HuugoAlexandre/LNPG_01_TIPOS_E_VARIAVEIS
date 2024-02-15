module Main where

import System.IO

main :: IO ()

main = do
    putStrLn "Informe sua idade: "
    idade <- getLine
    let real_idade = read idade :: Int
    if real_idade < 0
    then putStrLn "Uma pessoa não pode ter idade negativa!"
    else if real_idade >= 18
        then putStrLn (show real_idade ++ " anos: Maior de idade!")
        else putStrLn (show real_idade ++ " anos: Menor de idade!")

    

