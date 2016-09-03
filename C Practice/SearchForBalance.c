/* Searches a sorted list for banlances */
#include <stdio.h>
int main()
{
    int ctr;      /* Loop counter */
    int idSearch; /* Customer to look for (the key) */
    int found = 0;

    /* Defines the ten elements in each of the parallel arrays */
    int custID[10] = {313, 453, 502, 101, 892, 475, 792, 912, 343, 633};
    float custBal[10] = {0.00, 45.43, 71.23, 301.56, 9.08, 192.41, 389.00, 229.67, 18.31, 59.54};
    int tempID, inner, outer, didSwap; /* For sorting and swapping */
    float tempBal;

    /* First ,sort the arrays by customer ID */
    for (outer = 0; outer < 9; outer++)
    {
        didSwap = 0; /* Become 1 (true) if list is not yet ordered */
        for (inner = outer; inner < 10; inner++)
        {
            if (custID[inner] < custID[outer])
            {
                tempID = custID[inner];
                tempBal = custBal[inner];
                custID[inner] = custID[outer];
                custBal[inner] = custBal[outer];
                custID[outer] = tempID;
                custBal[outer] = tempBal;
                didSwap = 1; /* True because a swap took place */
            }
            if (didSwap == 0)
                break;
        }
        /* Interact with the user looking for balance */
        printf("\n\n*** Customer Balance Lookup ***\n");
        printf("What is the customer number: ");
        scanf("%d", &idSearch);

        /* Now, look for the balance in the arrays */
        for(ctr = 0; ctr < 10; ctr++) /*Search maximum of 10 values */
        {
            if(idSearch == custID[ctr]) /* Found? */
            {
                found = 1;          /* Yes, found is true */
                break;              /* No, more search needed */
            }
            if(custID[ctr] > idSearch) /* Don't go too far */
                break;
        }
    } /* Not found yet, loop again to try another match */

    /* If the for-loop finishes, the customer ID was found or all customers were searched unsuccessfully */
        if(found)           /* Cleaner than if (found == 1) */
        {
            if(custBal[ctr]>100.00)
            {
                printf("\n** That customer's banlance is $%.2f.\n",custBal[ctr]);
            }
        }

}