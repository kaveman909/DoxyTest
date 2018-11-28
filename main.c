/**
 * \file main.c
 * \brief main function
 * 
 * \author David
 * \date 2018-11-28
 * \copyright (c) 2018
 */

/** definition of something */
#define SOMETHING 1

/** evil global (no, really) */
int malware = 47;

/** western struct */
typedef struct
{
    int good; /**< the good */
    int bad;  /**< the bad */
    int ugly; /**< and the ugly */
} Western_t;

/** function that does nothing 
 * \param none
 * \return none
 */
static void DoNothing(void) {}

/** function that does something 
 * \param[in] a this just gets returned
 * \return a gets returned
 */
int DoSomething(int a) { return a; }

/** main function
 * \return 0 if success 
 */
int main(void)
{
    DoNothing();
    DoSomething(1);

    return 0;
}
