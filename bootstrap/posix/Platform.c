/* Automatically generated file. Don't edit! */
#include "refal05rts.h"


R05_DECLARE_ENTRY_FUNCTION(Platform)
R05_DECLARE_ENTRY_FUNCTION(DirectorySeparator)
R05_DECLARE_ENTRY_FUNCTION(IsDirectorySeparator)
R05_DECLARE_ENTRY_FUNCTION(PathSeparator)
R05_DEFINE_LOCAL_ENUM(POSIX, "POSIX")
R05_DEFINE_LOCAL_ENUM(True, "True")
R05_DEFINE_LOCAL_ENUM(False, "False")

R05_DEFINE_ENTRY_FUNCTION(Platform, "Platform") {
  struct r05_node *p[3] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /*  */
    if (! r05_empty_hole(p[1], p[2]))
      continue;

    r05_reset_allocator();
    r05_alloc_function(&r05f_POSIX);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_ENTRY_FUNCTION(DirectorySeparator, "DirectorySeparator") {
  struct r05_node *p[3] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /*  */
    if (! r05_empty_hole(p[1], p[2]))
      continue;

    r05_reset_allocator();
    r05_alloc_char('/');
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_ENTRY_FUNCTION(IsDirectorySeparator, "IsDirectorySeparator") {
  struct r05_node *p[4] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /* '/' */
    if (! r05_char_left(p+3, p[1], p[2], '/'))
      continue;
    if (! r05_empty_hole(p[3], p[2]))
      continue;

    r05_reset_allocator();
    r05_alloc_function(&r05f_True);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  do {
    /* s.Other: 3 */
    /* s.Other */
    if (! r05_svar_left(p+3, p[1], p[2]))
      continue;
    if (! r05_empty_hole(p[3], p[2]))
      continue;

    r05_reset_allocator();
    r05_alloc_function(&r05f_False);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_ENTRY_FUNCTION(PathSeparator, "PathSeparator") {
  struct r05_node *p[3] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /*  */
    if (! r05_empty_hole(p[1], p[2]))
      continue;

    r05_reset_allocator();
    r05_alloc_char(':');
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  r05_recognition_impossible();
}


/* End of file */
