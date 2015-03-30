/* This file is generated automatically by convert.pl from global/manual.in. */
const char *progname = "global";
const char *usage_const = "Usage: global [-adGilnqrstTvx][-e] pattern\n\
       global -c[diIoOPrsT] prefix\n\
       global -f[adlnqrstvx][-L file-list] files\n\
       global -g[aGilnoOqtvVx][-L file-list][-e] pattern [files]\n\
       global -I[ailnqtvx][-e] pattern\n\
       global -P[aGilnoOqtvVx][-e] pattern\n\
       global -p[qrv]\n\
       global -u[qv]\n";
const char *help_const = "Commands:\n\
<no command> pattern\n\
       Print tags of symbols which match to the pattern.\n\
       By default, print definition tags.\n\
-c, --completion [prefix]\n\
       Print symbols which start with the prefix.\n\
       If prefix is not given, print all symbols.\n\
-f, --file files\n\
       Print all tags in the files.\n\
       This option implies the -x option.\n\
-g, --grep pattern [files]\n\
       Print all lines which match to the pattern.\n\
       If files are given, this command searches in the files.\n\
--help\n\
       Print a usage message.\n\
-I, --idutils pattern\n\
       Print all lines which match to the pattern.\n\
       This function use idutils(1) as a search engine.\n\
       To use this command, you need to install idutils(1)\n\
       in your system and execute gtags(1) with the -I option.\n\
-P, --path [pattern]\n\
       Print path names which match to the pattern.\n\
       If no pattern is given, print all paths in the project.\n\
-p, --print-dbpath\n\
       Print location of GTAGS.\n\
-u, --update\n\
       Update tag files incrementally.\n\
       This command internally invokes gtags(1).\n\
       You can execute this command anywhere in the project\n\
       differing from gtags(1).\n\
--version\n\
       Show version number.\n\
Options:\n\
-a, --absolute\n\
       Print absolute path name. By default, print relative path name.\n\
-d, --definition\n\
       Print locations of definitions.\n\
--from-here context\n\
       Decide tag type by the context. The context must be 'lineno:path'.\n\
       If this option is specified then the -s and -r\n\
       are ignored.\n\
       Regular expression is not allowed for the pattern.\n\
       This option assumes use in conversational environments such as\n\
       editors and IDEs.\n\
-e, --regexp pattern\n\
       Use pattern as the pattern; useful to protect patterns\n\
       beginning with -.\n\
--encode-path chars\n\
       Convert path characters in chars into a '%' symbol, followed by the\n\
       two-digit hexadecimal representation of the character.\n\
       A blank will be converted to '%20'.\n\
-G, --basic-regexp\n\
       Interpret pattern as a basic regular expression.\n\
       The default is extended regular expression.\n\
-i, --ignore-case\n\
       Ignore case distinctions in the pattern.\n\
-l, --local\n\
       Print only tags which exist under the current directory.\n\
-L, --file-list file-list\n\
       Obtain files from file-list in addition to the arguments.\n\
--literal\n\
       Execute literal search instead of regular expression search.\n\
       This option is only valid when the -g command is specified.\n\
--match-part part\n\
       Specify the matched part of path name.\n\
       Possible values are as follows: first, last, all. The default is all.\n\
       This option is valid only with the -c command with the -P option.\n\
-n, --nofilter\n\
       Suppress sort filter and path conversion filter.\n\
-O, --only-other\n\
       Treat only text files: README, ChangeLog, or etc.\n\
       This option is valid only with the -g or -P command.\n\
       This option overrides the -o option.\n\
-o, --other\n\
       Treat not only source files but also text files: README, ChangeLog, or etc.\n\
       This option is valid only with the -g or -P command.\n\
--path-style format\n\
       Print path names using the specified format.\n\
       format may be relative, absolute, shorter, abslib or through.\n\
       The --path-style option is given more priority than the -a options.\n\
--print0\n\
       Print each record followed by a null character instead of a newline.\n\
-q, --quiet\n\
       Quiet mode.\n\
-r, --reference, --rootdir\n\
       Print reference tags.\n\
       Reference means the reference to a symbol which has definitions.\n\
       With the -p option, print the root directory of the project.\n\
--result format\n\
       Print out using the specified format.\n\
       format may be path, ctags, ctags-x, grep or cscope.\n\
       The default is path.\n\
       The --result=ctags and --result=ctags-x are\n\
       equivalent to the -t and -x respectively.\n\
       The --result option is given more priority than the -t and -x options.\n\
--single-update file\n\
       Update tag files incrementally using gtags(1) with --single-update option.\n\
       It is considered that file was added or updated,\n\
       and there is no change in other files.\n\
       This option implies the -u option.\n\
-s, --symbol\n\
       Print other symbol tags.\n\
       Other symbol means the reference to a symbol which has no definition.\n\
-T, --through\n\
       Go through all the tag files listed in GTAGSLIBPATH.\n\
       By default, stop searching when tag is found.\n\
       This option is ignored when either -s, -r\n\
       or -l option is specified.\n\
-t, --tags\n\
       Use standard ctags format.\n\
-v, --verbose\n\
       Verbose mode.\n\
-V, --invert-match\n\
       Invert the sense of matching, to select non-matching lines.\n\
       This option is valid only with the -g or -P command.\n\
-x, --cxref\n\
       Use standard ctags cxref (with the -x) format.\n\
See also:\n\
       GNU GLOBAL web site: http://www.gnu.org/software/global/\n\
";
