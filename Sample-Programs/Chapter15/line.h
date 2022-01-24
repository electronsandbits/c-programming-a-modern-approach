/*
 * File:line.h
 * -----------
 *
 */

#ifndef LINE_H
#define LINE_H

/*
 * clearLine
 * ----------
 * Clears the current line.
 */

void clearLine(void);


/*
 * addWord
 * -------
 * Adds word to the end of the current line.
 * If this is not  the first word on the line, puts one space before word.
 */ 

void addWord(const char *word);
