#include <ctype.h>
#include <stdio.h> 
#include <stdlib.h> 
#include <unistd.h>

int main (int argc, char **argv) {
    int c;
    char *ip_addr = NULL;
    char *port = NULL;

    opterr = 0;

    while ((c = getopt (argc, argv, "a:p:")) != -1)
        switch (c)
        {
            case 'a':
                ip_addr = optarg;
                break;
            case 'p':
                port = optarg;
                break;
            case '?':
                if ((optopt == 'a')&&(optopt == 'p'))
                    fprintf (stderr, "Option -%c requires an argument.\n", optopt);
                else if (isprint (optopt))
                    fprintf (stderr, "Unknown option `-%c'.\n", optopt);
                else
                    fprintf (stderr,
                            "Unknown option character `\\x%x'.\n",
                            optopt);
                return 1;
            default:
                abort ();
        }

    printf("ip_addr : %s, port : %s \n", ip_addr, port);

    for (int index = optind; index < argc; index++)
        printf ("Non-option argument %s\n", argv[index]);

    return 0;
}
