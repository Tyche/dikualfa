/* ************************************************************************
*  file: Interpreter.h , Command interpreter module.      Part of DIKUMUD *
*  Usage: Procedures interpreting user command                            *
************************************************************************* */

extern void command_interpreter (struct char_data *ch, char *argument);
extern int search_block (char *arg, char **list, bool exact);
extern int old_search_block (char *argument, int begin, int length, char **list,
  int mode);
extern char lower (char c);
extern void argument_interpreter (char *argument, char *first_arg, char *second_arg);
extern char *one_argument (char *argument, char *first_arg);
extern int fill_word (char *argument);
extern void half_chop (char *string, char *arg1, char *arg2);
extern void nanny (struct descriptor_data *d, char *arg);
extern int is_abbrev (char *arg1, char *arg2);
extern int is_number (char *str);


struct command_info {
  void (*command_pointer) (struct char_data * ch, char *argument, int cmd);
  byte minimum_position;
  byte minimum_level;
};

extern void do_move (struct char_data *ch, char *argument, int cmd);
extern void do_look (struct char_data *ch, char *argument, int cmd);
extern void do_read (struct char_data *ch, char *argument, int cmd);
extern void do_say (struct char_data *ch, char *argument, int cmd);
extern void do_exit (struct char_data *ch, char *argument, int cmd);
extern void do_snoop (struct char_data *ch, char *argument, int cmd);
extern void do_insult (struct char_data *ch, char *argument, int cmd);
extern void do_quit (struct char_data *ch, char *argument, int cmd);
extern void do_qui (struct char_data *ch, char *argument, int cmd);
extern void do_help (struct char_data *ch, char *argument, int cmd);
extern void do_who (struct char_data *ch, char *argument, int cmd);
extern void do_emote (struct char_data *ch, char *argument, int cmd);
extern void do_echo (struct char_data *ch, char *argument, int cmd);
extern void do_trans (struct char_data *ch, char *argument, int cmd);
extern void do_kill (struct char_data *ch, char *argument, int cmd);
extern void do_stand (struct char_data *ch, char *argument, int cmd);
extern void do_sit (struct char_data *ch, char *argument, int cmd);
extern void do_rest (struct char_data *ch, char *argument, int cmd);
extern void do_sleep (struct char_data *ch, char *argument, int cmd);
extern void do_wake (struct char_data *ch, char *argument, int cmd);
extern void do_force (struct char_data *ch, char *argument, int cmd);
extern void do_get (struct char_data *ch, char *argument, int cmd);
extern void do_drop (struct char_data *ch, char *argument, int cmd);
extern void do_news (struct char_data *ch, char *argument, int cmd);
extern void do_score (struct char_data *ch, char *argument, int cmd);
extern void do_inventory (struct char_data *ch, char *argument, int cmd);
extern void do_equipment (struct char_data *ch, char *argument, int cmd);
extern void do_shout (struct char_data *ch, char *argument, int cmd);
extern void do_not_here (struct char_data *ch, char *argument, int cmd);
extern void do_tell (struct char_data *ch, char *argument, int cmd);
extern void do_wear (struct char_data *ch, char *argument, int cmd);
extern void do_wield (struct char_data *ch, char *argument, int cmd);
extern void do_grab (struct char_data *ch, char *argument, int cmd);
extern void do_remove (struct char_data *ch, char *argument, int cmd);
extern void do_put (struct char_data *ch, char *argument, int cmd);
extern void do_shutdown (struct char_data *ch, char *argument, int cmd);
extern void do_save (struct char_data *ch, char *argument, int cmd);
extern void do_hit (struct char_data *ch, char *argument, int cmd);
extern void do_string (struct char_data *ch, char *arg, int cmd);
extern void do_give (struct char_data *ch, char *arg, int cmd);
extern void do_stat (struct char_data *ch, char *arg, int cmd);
extern void do_set (struct char_data *ch, char *arg, int cmd);
extern void do_time (struct char_data *ch, char *arg, int cmd);
extern void do_weather (struct char_data *ch, char *arg, int cmd);
extern void do_load (struct char_data *ch, char *arg, int cmd);
extern void do_purge (struct char_data *ch, char *arg, int cmd);
extern void do_shutdow (struct char_data *ch, char *arg, int cmd);
extern void do_idea (struct char_data *ch, char *arg, int cmd);
extern void do_typo (struct char_data *ch, char *arg, int cmd);
extern void do_bug (struct char_data *ch, char *arg, int cmd);
extern void do_whisper (struct char_data *ch, char *arg, int cmd);
extern void do_cast (struct char_data *ch, char *arg, int cmd);
extern void do_at (struct char_data *ch, char *arg, int cmd);
extern void do_goto (struct char_data *ch, char *arg, int cmd);
extern void do_ask (struct char_data *ch, char *arg, int cmd);
extern void do_drink (struct char_data *ch, char *arg, int cmd);
extern void do_eat (struct char_data *ch, char *arg, int cmd);
extern void do_pour (struct char_data *ch, char *arg, int cmd);
extern void do_sip (struct char_data *ch, char *arg, int cmd);
extern void do_taste (struct char_data *ch, char *arg, int cmd);
extern void do_order (struct char_data *ch, char *arg, int cmd);
extern void do_follow (struct char_data *ch, char *arg, int cmd);
extern void do_rent (struct char_data *ch, char *arg, int cmd);
extern void do_offer (struct char_data *ch, char *arg, int cmd);
extern void do_advance (struct char_data *ch, char *arg, int cmd);
extern void do_close (struct char_data *ch, char *arg, int cmd);
extern void do_open (struct char_data *ch, char *arg, int cmd);
extern void do_lock (struct char_data *ch, char *arg, int cmd);
extern void do_unlock (struct char_data *ch, char *arg, int cmd);
extern void do_exits (struct char_data *ch, char *arg, int cmd);
extern void do_enter (struct char_data *ch, char *arg, int cmd);
extern void do_leave (struct char_data *ch, char *arg, int cmd);
extern void do_write (struct char_data *ch, char *arg, int cmd);
extern void do_flee (struct char_data *ch, char *arg, int cmd);
extern void do_sneak (struct char_data *ch, char *arg, int cmd);
extern void do_hide (struct char_data *ch, char *arg, int cmd);
extern void do_backstab (struct char_data *ch, char *arg, int cmd);
extern void do_pick (struct char_data *ch, char *arg, int cmd);
extern void do_steal (struct char_data *ch, char *arg, int cmd);
extern void do_bash (struct char_data *ch, char *arg, int cmd);
extern void do_rescue (struct char_data *ch, char *arg, int cmd);
extern void do_kick (struct char_data *ch, char *arg, int cmd);
extern void do_examine (struct char_data *ch, char *arg, int cmd);
extern void do_info (struct char_data *ch, char *arg, int cmd);
extern void do_users (struct char_data *ch, char *arg, int cmd);
extern void do_where (struct char_data *ch, char *arg, int cmd);
extern void do_levels (struct char_data *ch, char *arg, int cmd);
extern void do_reroll (struct char_data *ch, char *arg, int cmd);
extern void do_brief (struct char_data *ch, char *arg, int cmd);
extern void do_wizlist (struct char_data *ch, char *arg, int cmd);
extern void do_consider (struct char_data *ch, char *arg, int cmd);
extern void do_group (struct char_data *ch, char *arg, int cmd);
extern void do_restore (struct char_data *ch, char *arg, int cmd);
extern void do_return (struct char_data *ch, char *argument, int cmd);
extern void do_switch (struct char_data *ch, char *argument, int cmd);
extern void do_quaff (struct char_data *ch, char *argument, int cmd);
extern void do_recite (struct char_data *ch, char *argument, int cmd);
extern void do_use (struct char_data *ch, char *argument, int cmd);
extern void do_pose (struct char_data *ch, char *argument, int cmd);
extern void do_noshout (struct char_data *ch, char *argument, int cmd);
extern void do_wizhelp (struct char_data *ch, char *argument, int cmd);
extern void do_credits (struct char_data *ch, char *argument, int cmd);
extern void do_compact (struct char_data *ch, char *argument, int cmd);
extern void do_wizlock (struct char_data *ch, char *argument, int cmd);
extern void do_notell (struct char_data *ch, char *argument, int cmd);
extern void do_noemote (struct char_data *ch, char *argument, int cmd);
extern void do_freeze (struct char_data *ch, char *arg, int cmd);
extern void do_log (struct char_data *ch, char *arg, int cmd);
extern void do_wiz (struct char_data *ch, char *argument, int cmd);
