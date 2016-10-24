/**
 * Takes a key and a string plaintext as command-line arguments, encrypts the plaintext 
 * using Vigenère’s cipher and reports the resulting ciphertext via printf.
 *
 * @author salman hashmi
 */  
#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void encipher(string key, string plaintext);

int main(int argc, string argv[])
{
    return 0;
}

/**
 * Enciphers plaintext with key using vigenere cipher and prints to screen
 * 
 */ 
void encipher(string key, string plaintext)
{
    // lengths of key and plaintext
    int k_len = strlen(key);
    int p_len = strlen(plaintext);
	
    // iterate over plaintext and key, converting p to ciphertext
    for (int i = 0, j = 0; i < p_len; i++)
    {
    }
}