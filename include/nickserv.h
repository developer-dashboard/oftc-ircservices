#ifndef NICKSERV_H
#define NICKSERV_H

struct Nick
{
  dlink_node node;
  
  unsigned int id;
  char nick[NICKLEN+1];
  char pass[PASSLEN+1];
  char salt[PASSLEN+1];
  char *email;
  char *url;
  char cloak[HOSTLEN+1];
  unsigned int status;
  unsigned int flags;
  unsigned int language;
  time_t reg_time;
  time_t last_seen;
  time_t last_used;
  time_t last_quit_time;
};

/* Nick flags */
#define NS_FLAG_ADMIN     0x1

#define IsServAdmin(x)    (x)->nickname->flags & NS_FLAG_ADMIN

/* Language defines */

#define NS_HELP_SHORT           1   
#define NS_HELP_LONG            2
#define NS_HELP_REG_SHORT       3
#define NS_HELP_REG_LONG        4
#define NS_HELP_ID_SHORT        5
#define NS_HELP_ID_LONG         6
#define NS_HELP_DROP_SHORT      7
#define NS_HELP_DROP_LONG       8
#define NS_HELP_ACCESS_SHORT    9
#define NS_HELP_ACCESS_LONG     10
#define NS_HELP_SET_SHORT       11
#define NS_HELP_SET_LONG        12
#define NS_HELP_GHOST_SHORT     13
#define NS_HELP_GHOST_LONG      14
#define NS_HELP_LINK_SHORT      15
#define NS_HELP_LINK_LONG       16
#define NS_HELP_UNLINK_SHORT    17
#define NS_HELP_UNLINK_LONG     18
#define NS_HELP_RECOVER_SHORT   19
#define NS_HELP_RECOVER_LONG    20
#define NS_HELP_RELEASE_SHORT   21
#define NS_HELP_RELEASE_LONG    22
#define NS_HELP_SUSPEND_SHORT   23
#define NS_HELP_SUSPENT_LONG    24
#define NS_HELP_FORBID_SHORT    25
#define NS_HELP_FORBID_LONG     26
#define NS_HELP_INFO_SHORT      27
#define NS_HELP_INFO_LONG       28
#define NS_HELP_SENDPASS_SHORT  29
#define NS_HELP_SENDPASS_LONG   30
#define NS_ALREADY_REG          31
#define NS_REG_COMPLETE         32
#define NS_REG_FAIL             33
#define NS_REG_FIRST            34
#define NS_IDENTIFIED           35
#define NS_IDENT_FAIL           36
#define NS_CURR_LANGUAGE        37
#define NS_AVAIL_LANGUAGE       38
#define NS_LANGUAGE_SET         39
#define NS_SET_SUCCESS          40
#define NS_SET_FAILED           41
#define NS_SET_VALUE            42
#define NS_NEED_IDENTIFY        43
#define NS_NICK_DROPPED         44
#define NS_NICK_DROPFAIL        45
#define NS_ACCESS_ADD           46
#define NS_ACCESS_ADDFAIL       47
#define NS_ACCESS_INVALID       48
#define NS_ACCESS_START         49
#define NS_ACCESS_ENTRY         50
#define NS_ACCESS_DEL           51
#define NS_GHOST_SUCCESS        52
#define NS_GHOST_FAILED         53
#define NS_GHOST_NOSELF         54
#define NS_LINK_NOMASTER        55
#define NS_LINK_BADPASS         56
#define NS_LINK_FAIL            57
#define NS_LINK_OK              58
#define NS_UNLINK_FAILED        59
#define NS_UNLINK_OK            60
#define NS_UNLINK_NOLINK        61
  
#endif
