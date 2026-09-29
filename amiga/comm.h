/*
 * This file is automagically created from comm.c -- DO NOT EDIT
 */

struct comm
{
  char *name;
  int flags;
#ifdef MULTIUSER
  AclBits userbits[ACL_BITS_PER_CMD];
#endif
};

#define ARGS_MASK	(3)

#define ARGS_0	(0)
#define ARGS_1	(1)
#define ARGS_2	(2)
#define ARGS_3	(3)

#define ARGS_PLUS1	(1<<2)
#define ARGS_PLUS2	(1<<3)
#define ARGS_PLUS3	(1<<4)
#define ARGS_ORMORE	(1<<5)

#define NEED_FORE	(1<<6)	/* this command needs a fore window */
#define NEED_DISPLAY	(1<<7)	/* this command needs a display */
#define NEED_LAYER	(1<<8)	/* this command needs a layer */
#define CAN_QUERY	(1<<9)  /* this command can be queried, i.e. used with -Q to
				   get back a result to stdout */

#define ARGS_01		(ARGS_0 | ARGS_PLUS1)
#define ARGS_02		(ARGS_0 | ARGS_PLUS2)
#define ARGS_12		(ARGS_1 | ARGS_PLUS1)
#define ARGS_23		(ARGS_2 | ARGS_PLUS1)
#define ARGS_24		(ARGS_2 | ARGS_PLUS2)
#define ARGS_34		(ARGS_3 | ARGS_PLUS1)
#define ARGS_012	(ARGS_0 | ARGS_PLUS1 | ARGS_PLUS2)
#define ARGS_0123	(ARGS_0 | ARGS_PLUS1 | ARGS_PLUS2 | ARGS_PLUS3)
#define ARGS_123	(ARGS_1 | ARGS_PLUS1 | ARGS_PLUS2)
#define ARGS_124	(ARGS_1 | ARGS_PLUS1 | ARGS_PLUS3)
#define ARGS_1234	(ARGS_1 | ARGS_PLUS1 | ARGS_PLUS2 | ARGS_PLUS3)

struct action
{
  int nr;
  char **args;
  int *argl;
  int quiet;	/* Suppress (currently unused)
		   0x01 - Error message
		   0x02 - Normal message
		*/
};

#define RC_ILLEGAL -1

#define RC_ACTIVITY 0
#define RC_ALLPARTIAL 1
#define RC_ALTSCREEN 2
#define RC_AT 3
#define RC_ATTRCOLOR 4
#define RC_AUTODETACH 5
#define RC_AUTONUKE 6
#define RC_BACKTICK 7
#define RC_BCE 8
#define RC_BELL 9
#define RC_BELL_MSG 10
#define RC_BIND 11
#define RC_BINDKEY 12
#define RC_BLANKER 13
#define RC_BLANKERPRG 14
#define RC_BREAK 15
#define RC_BREAKTYPE 16
#define RC_BUFFERFILE 17
#define RC_BUMPLEFT 18
#define RC_BUMPRIGHT 19
#define RC_C1 20
#define RC_CAPTION 21
#define RC_CHARSET 22
#define RC_CHDIR 23
#define RC_CJKWIDTH 24
#define RC_CLEAR 25
#define RC_COLLAPSE 26
#define RC_COLON 27
#define RC_COMMAND 28
#define RC_COMPACTHIST 29
#define RC_CONSOLE 30
#define RC_COPY 31
#define RC_CRLF 32
#define RC_DEBUG 33
#define RC_DEFAUTONUKE 34
#define RC_DEFBCE 35
#define RC_DEFBREAKTYPE 36
#define RC_DEFC1 37
#define RC_DEFCHARSET 38
#define RC_DEFDYNAMICTITLE 39
#define RC_DEFENCODING 40
#define RC_DEFESCAPE 41
#define RC_DEFFLOW 42
#define RC_DEFGR 43
#define RC_DEFHSTATUS 44
#define RC_DEFKANJI 45
#define RC_DEFLOG 46
#define RC_DEFMODE 47
#define RC_DEFMONITOR 48
#define RC_DEFMOUSETRACK 49
#define RC_DEFNONBLOCK 50
#define RC_DEFOBUFLIMIT 51
#define RC_DEFSCROLLBACK 52
#define RC_DEFSHELL 53
#define RC_DEFSILENCE 54
#define RC_DEFSLOWPASTE 55
#define RC_DEFUTF8 56
#define RC_DEFWRAP 57
#define RC_DEFWRITELOCK 58
#define RC_DETACH 59
#define RC_DIGRAPH 60
#define RC_DINFO 61
#define RC_DISPLAYS 62
#define RC_DUMPTERMCAP 63
#define RC_DYNAMICTITLE 64
#define RC_ECHO 65
#define RC_ENCODING 66
#define RC_ESCAPE 67
#define RC_EVAL 68
#define RC_EXEC 69
#define RC_FIT 70
#define RC_FLOW 71
#define RC_FOCUS 72
#define RC_FOCUSMINSIZE 73
#define RC_GR 74
#define RC_GROUP 75
#define RC_HARDCOPY 76
#define RC_HARDCOPY_APPEND 77
#define RC_HARDCOPYDIR 78
#define RC_HARDSTATUS 79
#define RC_HEIGHT 80
#define RC_HELP 81
#define RC_HISTORY 82
#define RC_HSTATUS 83
#define RC_IDLE 84
#define RC_IGNORECASE 85
#define RC_INFO 86
#define RC_KANJI 87
#define RC_KILL 88
#define RC_LASTMSG 89
#define RC_LAYOUT 90
#define RC_LICENSE 91
#define RC_LOCKSCREEN 92
#define RC_LOG 93
#define RC_LOGFILE 94
#define RC_LOGTSTAMP 95
#define RC_MAPDEFAULT 96
#define RC_MAPNOTNEXT 97
#define RC_MAPTIMEOUT 98
#define RC_MARKKEYS 99
#define RC_MAXWIN 100
#define RC_META 101
#define RC_MONITOR 102
#define RC_MOUSETRACK 103
#define RC_MSGMINWAIT 104
#define RC_MSGWAIT 105
#define RC_NETHACK 106
#define RC_NEXT 107
#define RC_NONBLOCK 108
#define RC_NUMBER 109
#define RC_OBUFLIMIT 110
#define RC_ONLY 111
#define RC_OTHER 112
#define RC_PARTIAL 113
#define RC_PASSWORD 114
#define RC_PASTE 115
#define RC_PASTEFONT 116
#define RC_POW_BREAK 117
#define RC_POW_DETACH 118
#define RC_POW_DETACH_MSG 119
#define RC_PREV 120
#define RC_PRINTCMD 121
#define RC_PROCESS 122
#define RC_QUIT 123
#define RC_READBUF 124
#define RC_READREG 125
#define RC_REDISPLAY 126
#define RC_REGISTER 127
#define RC_REMOVE 128
#define RC_REMOVEBUF 129
#define RC_RENDITION 130
#define RC_RESET 131
#define RC_RESIZE 132
#define RC_SCREEN 133
#define RC_SCROLLBACK 134
#define RC_SELECT 135
#define RC_SESSIONNAME 136
#define RC_SETENV 137
#define RC_SETSID 138
#define RC_SHELL 139
#define RC_SHELLTITLE 140
#define RC_SILENCE 141
#define RC_SILENCEWAIT 142
#define RC_SLEEP 143
#define RC_SLOWPASTE 144
#define RC_SORENDITION 145
#define RC_SORT 146
#define RC_SOURCE 147
#define RC_SPLIT 148
#define RC_STARTUP_MESSAGE 149
#define RC_STUFF 150
#define RC_SUSPEND 151
#define RC_TERM 152
#define RC_TERMCAP 153
#define RC_TERMCAPINFO 154
#define RC_TERMINFO 155
#define RC_TIME 156
#define RC_TITLE 157
#define RC_UMASK 158
#define RC_UNBINDALL 159
#define RC_UNSETENV 160
#define RC_UTF8 161
#define RC_VBELL 162
#define RC_VBELL_MSG 163
#define RC_VBELLWAIT 164
#define RC_VERBOSE 165
#define RC_VERSION 166
#define RC_WALL 167
#define RC_WIDTH 168
#define RC_WINDOWLIST 169
#define RC_WINDOWS 170
#define RC_WRAP 171
#define RC_WRITEBUF 172
#define RC_WRITELOCK 173
#define RC_XOFF 174
#define RC_XON 175
#define RC_ZMODEM 176
#define RC_ZOMBIE 177
#define RC_ZOMBIE_TIMEOUT 178

#define RC_LAST 178
