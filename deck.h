#ifndef DECK_H
#define DECK_H

#include <stdlib.h>

/**
 * enum kind_e - Enumeration of card suits.
 * @SPADE:   Spades suit.
 * @HEART:   Hearts suit.
 * @CLUB:    Clubs suit.
 * @DIAMOND: Diamonds suit.
 */
typedef enum kind_e
{
    SPADE = 0,
    HEART,
    CLUB,
    DIAMOND
} kind_t;

/**
 * struct card_s - Playing card.
 *
 * @value: Value of the card (from "Ace" to "King").
 * @kind:  Kind of the card (suit).
 */
typedef struct card_s
{
    const char *value;   /**< Value of the card */
    const kind_t kind;   /**< Kind of the card */
} card_t;

/**
 * struct deck_node_s - Deck of cards.
 *
 * @card: Pointer to the card of the node.
 * @prev: Pointer to the previous node in the list.
 * @next: Pointer to the next node in the list.
 */
typedef struct deck_node_s
{
    const card_t *card;            /**< Pointer to the card of the node */
    struct deck_node_s *prev;      /**< Pointer to the previous node */
    struct deck_node_s *next;      /**< Pointer to the next node */
} deck_node_t;

void sort_deck(deck_node_t **deck);

#endif /* DECK_H */
