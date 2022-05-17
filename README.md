**_<h1>0x19. C - Stacks, Queues - LIFO, FIFO</h1>_**

<p><img src="https://pbs.twimg.com/media/CFYYWy6UEAE9Ow-.png"><br><br></p>

**<p><big>This project was made to manipulate Monty byte codes, understand the use of data structures such as FIFO, LIFO (Stacks and Queues), and practice a proper way to use global variables.</big></p>**<br>

**<big><h2>Requirements</h2></big>**

<pre><code><big><h3>General</h3></big><ul>
<li>Allowed editors: vi, vim, emacs</li>
<li>All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89</li>
<li>All your files should end with a new line</li>
<li>A README.md file, at the root of the folder of the project is mandatory</li>
<li>Your code should use the Betty style. It will be checked using <a href="https://github.com/holbertonschool/Betty/blob/master/betty-style.pl" title="betty-style.pl" target="_blank">betty-style.pl</a> and <a href="https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl" title="betty-doc.pl" target="_blank">betty-doc.pl</a></li>
<li>You allowed to use a maximum of one global variable</li>
<li>No more than 5 functions per file</li>
<li>You are allowed to use the C standard library</li>
<li>The prototypes of all your functions should be included in your header file called monty.h</li>
<li>Don’t forget to push your header file</li>
<li>All your header files should be include guarded</li>
<li>You are expected to do the tasks in the order shown in the project</li></ul></code></pre><br>

**<big><h2>Structures used</h2></big>**

<pre><code>/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;
</code></pre>

<pre><code>/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
</code></pre><br>

**<big><h2>Compilation & Output</h2></big>**

<pre><code>$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o monty
</code></pre>
