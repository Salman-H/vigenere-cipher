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
	
	string ciphertext;
	
    // iterate over plaintext and key, converting p to ciphertext
    for (int i = 0, j = 0; i < p_len; i++)
    {
	    // only alphabets in p are enciphered
        if ( isalpha(plaintext[i]) ) 
        {
		    // determine j: current index of key
            j = j % k_len;
			
		    // determine 0-based int value of plaintext char at current index i
            int p_i;
            p_i = tolower(plaintext[i]) - 'a';
                    
            // determine 0-based int value of key char at current index j
            int k_j;
            k_j = tolower(key[j]) - 'a';
		    
		    // determine current cipher shift
            int shift;
            shift = ( p_i + k_j ) % 26;
			
		    // apply shift to get current cipher char while preserving case
            char c_i;
            if ( isupper(plaintext[i]) )
            {
                c_i = shift + 'A';
            }
            else
            {
                c_i = shift + 'a';
            }
			
		    // update ciphertext char
            ciphertext[i] = c_i;
			
		    // update current index of key
		    j++;
	    }
    }
    printf("ciphertext: %s\n", ciphertext);
}