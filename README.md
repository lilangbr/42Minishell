# 42Minishell
The existence of shells is linked to the very existence of IT. At the time, all developers agreed that communicating with a computer using aligned 1/0 switches was seriously irritating. It was only logical that they came up with the idea of creating a software to communicate with a computer using interactive lines of commands in a language somewhat close to the human language. Thanks to Minishell, we’ll be able to travel through time and come back to problems people faced when Windows didn’t exist.<br/><br/>
This project is about creating a simple shell.
Yes, a little bash. Here you´ll see about processes and file descriptors.
## Contents:
✔ A prompt when waiting for a new command.<br/>
✔ Have a working history.<br/>
✔ Search and launch the right executable (based on the PATH variable or using a
relative or an absolute path).<br/>
✔ Not use more than one global variable.<br/>
✔ Not interpret unclosed quotes or special characters which are not required by the
subject such as \ (backslash) or ; (semicolon).<br/>
✔ Handle ’ (single quote) which should prevent the shell from interpreting the metacharacters in the quoted sequence.<br/>
✔ Handle " (double quote) which should prevent the shell from interpreting the metacharacters in the quoted sequence except for $ (dollar sign).<br/>
✔ Redirections:
- < should redirect input.
- \> should redirect output.
- \<\< should be given a delimiter, then read the input until a line containing the
delimiter is seen. However, it doesn’t have to update the history!<br/>
- \>\> should redirect output in append mode.

✔ Implement pipes (| character). The output of each command in the pipeline is
connected to the input of the next command via a pipe.<br/>
✔ Handle environment variables ($ followed by a sequence of characters) which
should expand to their values.<br/>
✔ Handle $? which should expand to the exit status of the most recently executed
foreground pipeline.<br/>
✔ Handle ctrl-C, ctrl-D and ctrl-\ which should behave like in bash.<br/>
✔ In interactive mode:
- ctrl-C displays a new prompt on a new line.
- ctrl-D exits the shell.
- ctrl-\ does nothing.

✔ The shell must implement the following builtins:
- echo with option -n
- cd with only a relative or absolute path
- pwd with no options
- export with no options
- unset with no options
- env with no options or arguments
- exit with no options


## Use:

🚧 project:<br/>
```
42Minishell $ make
```
🚿 Clean Obj files:<br/>
```
42Minishell $ make clean
```
🚿 🚿 Clean All (obj files + binary):<br/>
```
42Minishell $ make fclean
```
🚿 🚿 🚧 Clean All + build:<br/>
```
42Minishell $ make re
```
🏍 RUN:<br/>
```
42Minishell $ ./minishell
```

![mini](./mini.png)

Enjoy!<br/>
