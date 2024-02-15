module Main where

import System.IO ()

mediaPonderada :: Float -> Float -> Float -> Float -> Float -> Float -> Float
mediaPonderada nota1 peso1 nota2 peso2 nota3 peso3 =
    (nota1 * peso1 + nota2 * peso2 + nota3 * peso3) / (peso1 + peso2 + peso3)

main :: IO ()
main = do
    putStrLn "Digite a primeira nota:"
    nota1 <- readLn
    putStrLn "Digite o peso da primeira nota:"
    peso1 <- readLn

    putStrLn "Digite a segunda nota:"
    nota2 <- readLn
    putStrLn "Digite o peso da segunda nota:"
    peso2 <- readLn

    putStrLn "Digite a terceira nota:"
    nota3 <- readLn
    putStrLn "Digite o peso da terceira nota:"
    peso3 <- readLn

    let media = mediaPonderada nota1 peso1 nota2 peso2 nota3 peso3
    putStrLn ("A média ponderada das notas é: " ++ show media)
