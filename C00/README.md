# C00 - FINISHED!

## EX00 - Putchar

### About

Print a character.

### Method
Function:
```void ft_putchar (char c) ```

Use ```write```:

```write(1, &c, 1);```

- Store the character in c
- Write the character in c
- Function has no type
## EX01 - Print Alphabet

### About
Print the alphabet in C.
### Method
```void ft_print_alphabet(void)```

Use the ASCII table that represents letters.

```a = 97;```

```while (a <= 122)```

Write and increment

```write(1, &a, 1);```

```a++;```


## EX02 - Print Reverse Alphabet

This one speaks for itself. You know what we did in EX01? Now just start at Z and go backwards. Simple!

## EX03 - Print Numbers

This, again, is exactly the same as above. Instead, we're just using the ASCII values for 0 to 9. It's kind of weird to imagine that a number can have an ASCII number that represents it in C, but it can't be helped, it is what it is.

## EX04 - Is It Negative?

This may look intimidating, but you're really dealing with something pretty simple here. You know how we talked about storing values in something? Well here, I'm using "n". All I'm doing is saying that if n is less than 0 (making it a negative number), then we'll class that result as "negative" and print the letter 'N'. If the number is more than 0, the number stored in n is "positive", and so we'll print a 'P' for positive.

That's it! You're learning a lot here about how to represent values with something else, like a word or a phrase, based upon whether something is true or false. This simple idea is most of what code is, to be honest.

## EX05 - Print Combine

The difficulty rating spikes a bit here, but again - it's made to look intimidating to scare you. With while loops, I recommend we start reading the code with whichever while loop is the furtherst to the left - in this case, that's the bit that starts "while c <= '9'". I've dispensed with using ASCII here for the sake of time, but some examples I've seen still use it.

The aim of this program is just to print every possible combination without doing any twice. I'm just telling it here that as long as we're not up to 7 8 9, we should keep increasing the third number. It's just like counting - when we get to 10, 11, 12, 13...we're changing the second number but not the first. Here, we're telling it to keep increasing the third number. When it hits enough that the second number has to change - change it by one (or b++, if you like), and then go back in and keep changing the third number. Repeat this until we need to change the first number, as we would if we got to 699 and then went to 700.

Exactly what we did in Print Numbers, exactly what we've been doing this whole time. If it's not the maximum number: keep adding. Then stop when we've reached the maximum! The (1, ", ", 2) is just about how we're spacing the numbers, and telling it to format properly.

Looks scary, not scary. Deep breaths.
