/* Automatically generated file. Don't edit! */
#include "refal05rts.h"


R05_DECLARE_ENTRY_FUNCTION(Plain)
R05_DECLARE_LOCAL_FUNCTION(TrimLines)
R05_DECLARE_LOCAL_FUNCTION(UndoubleEmtpyLines)
R05_DECLARE_LOCAL_FUNCTION(Trimm_R)
R05_DECLARE_LOCAL_FUNCTION(DoPlain)
R05_DECLARE_LOCAL_FUNCTION(MAXm_LINE)
R05_DECLARE_LOCAL_FUNCTION(LongLine)
R05_DECLARE_LOCAL_FUNCTION(DoLongLine)
R05_DECLARE_LOCAL_FUNCTION(PlainExtern)
R05_DECLARE_LOCAL_FUNCTION(DoExtern)
R05_DECLARE_LOCAL_FUNCTION(CommaOrSemicolon)
R05_DECLARE_LOCAL_FUNCTION(PlainFunction)
R05_DECLARE_LOCAL_FUNCTION(PlainScope)
R05_DECLARE_LOCAL_FUNCTION(Sentences)
R05_DECLARE_LOCAL_FUNCTION(Sentence)
R05_DECLARE_LOCAL_FUNCTION(PutComment)
R05_DECLARE_LOCAL_FUNCTION(Tail)
R05_DECLARE_LOCAL_FUNCTION(Expression)
R05_DECLARE_LOCAL_FUNCTION(DoExpression)
R05_DECLARE_LOCAL_FUNCTION(AppendTerm)
R05_DECLARE_LOCAL_FUNCTION(InlineTerm)
R05_DECLARE_LOCAL_FUNCTION(MultilineTerm)
R05_DECLARE_LOCAL_FUNCTION(MultilineTermm_Prefix)
R05_DECLARE_LOCAL_FUNCTION(PlainTerm)
R05_DECLARE_LOCAL_FUNCTION(PlainCompound)
R05_DECLARE_LOCAL_FUNCTION(DoCompound)
R05_DECLARE_LOCAL_FUNCTION(IsIdent)
R05_DECLARE_LOCAL_FUNCTION(DoIsIdent)
R05_DECLARE_LOCAL_FUNCTION(PlainNumber)
R05_DECLARE_LOCAL_FUNCTION(PlainChar)
R05_DECLARE_LOCAL_FUNCTION(CharRep)
R05_DECLARE_LOCAL_FUNCTION(HexDigit)
R05_DECLARE_LOCAL_FUNCTION(PlainVariable)
R05_DECLARE_LOCAL_FUNCTION(PlainBrackets)
R05_DECLARE_LOCAL_FUNCTION(PlainCall)
R05_DECLARE_ENTRY_FUNCTION(InlineExpr)
R05_DECLARE_LOCAL_FUNCTION(DoInlineExpr)
R05_DECLARE_ENTRY_FUNCTION(Symb)
R05_DECLARE_ENTRY_FUNCTION(Type)
R05_DECLARE_ENTRY_FUNCTION(Ord)
R05_DECLARE_ENTRY_FUNCTION(Compare)
R05_DECLARE_ENTRY_FUNCTION(k2F_)
R05_DECLARE_ENTRY_FUNCTION(k25_)
R05_DECLARE_ENTRY_FUNCTION(m_)
R05_DECLARE_ENTRY_FUNCTION(First)
R05_DEFINE_LOCAL_ENUM(Extern, "Extern")
R05_DEFINE_LOCAL_ENUM(Function, "Function")
R05_DEFINE_LOCAL_ENUM(SpecialComment, "SpecialComment")
R05_DEFINE_LOCAL_ENUM(Word, "Word")
R05_DEFINE_LOCAL_ENUM(Number, "Number")
R05_DEFINE_LOCAL_ENUM(Symbol, "Symbol")
R05_DEFINE_LOCAL_ENUM(Char, "Char")
R05_DEFINE_LOCAL_ENUM(Variable, "Variable")
R05_DEFINE_LOCAL_ENUM(Call, "Call")
R05_DEFINE_LOCAL_ENUM(Brackets, "Brackets")
R05_DEFINE_LOCAL_ENUM(True, "True")
R05_DEFINE_LOCAL_ENUM(False, "False")
R05_DEFINE_LOCAL_ENUM(Entry, "Entry")
R05_DEFINE_LOCAL_ENUM(Local, "Local")
R05_DEFINE_LOCAL_ENUM(Comment, "Comment")
R05_DEFINE_LOCAL_ENUM(RETURN, "RETURN")
R05_DEFINE_LOCAL_ENUM(FIRST, "FIRST")
R05_DEFINE_LOCAL_ENUM(Condition, "Condition")
R05_DEFINE_LOCAL_ENUM(CALLm_BLOCK, "CALL-BLOCK")
R05_DEFINE_LOCAL_ENUM(NEXT, "NEXT")

R05_DEFINE_ENTRY_FUNCTION(Plain, "Plain") {
  struct r05_node *p[12] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /* e.Units: 3 */
    /* e.Units */
    r05_close_evar(p+3, p[1], p[2]);

    r05_reset_allocator();
    r05_alloc_open_call(p+5);
    r05_alloc_function(&r05f_UndoubleEmtpyLines);
    r05_alloc_open_call(p+6);
    r05_alloc_function(&r05f_TrimLines);
    r05_alloc_open_call(p+7);
    r05_alloc_function(&r05f_DoPlain);
    r05_alloc_insert_pos(p+8);
    r05_alloc_close_call(p+9);
    r05_alloc_close_call(p+10);
    r05_alloc_close_call(p+11);
    r05_push_stack(p[11]);
    r05_push_stack(p[5]);
    r05_push_stack(p[10]);
    r05_push_stack(p[6]);
    r05_push_stack(p[9]);
    r05_push_stack(p[7]);
    r05_splice_evar(p[8], p+3);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);
}

R05_DEFINE_LOCAL_FUNCTION(TrimLines, "TrimLines") {
  struct r05_node *p[17] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /* e.Line: 5 */
    /* e.Lines: 7 */
    /* (e.Line) e.Lines */
    if (! r05_brackets_left(p+3, p[1], p[2]))
      continue;
    r05_close_evar(p+5, p[3], p[4]);
    r05_close_evar(p+7, p[4], p[2]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+9);
    r05_alloc_open_call(p+10);
    r05_alloc_function(&r05f_Trimm_R);
    r05_alloc_insert_pos(p+11);
    r05_alloc_close_call(p+12);
    r05_alloc_close_bracket(p+13);
    r05_alloc_open_call(p+14);
    r05_alloc_function(&r05f_TrimLines);
    r05_alloc_insert_pos(p+15);
    r05_alloc_close_call(p+16);
    r05_push_stack(p[16]);
    r05_push_stack(p[14]);
    r05_link_brackets(p[9], p[13]);
    r05_push_stack(p[12]);
    r05_push_stack(p[10]);
    r05_splice_evar(p[11], p+5);
    r05_splice_evar(p[15], p+7);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  do {
    /*  */
    if (! r05_empty_hole(p[1], p[2]))
      continue;

    r05_reset_allocator();
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(UndoubleEmtpyLines, "UndoubleEmtpyLines") {
  struct r05_node *p[17] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /* e.Lines-B: 3 */
    /* e.Lines-E: 9 */
    /* e.Lines-B () () e.Lines-E */
    p[3] = NULL;
    p[4] = p[1];
    do {
      r05_start_e_loop();
      if (! r05_brackets_left(p+5, p[4], p[2]))
        continue;
      if (! r05_brackets_left(p+7, p[6], p[2]))
        continue;
      if (! r05_empty_hole(p[5], p[6]))
        continue;
      if (! r05_empty_hole(p[7], p[8]))
        continue;
      r05_close_evar(p+9, p[8], p[2]);

      r05_reset_allocator();
      r05_alloc_insert_pos(p+11);
      r05_alloc_open_call(p+12);
      r05_alloc_function(&r05f_UndoubleEmtpyLines);
      r05_alloc_open_bracket(p+13);
      r05_alloc_close_bracket(p+14);
      r05_alloc_insert_pos(p+15);
      r05_alloc_close_call(p+16);
      r05_push_stack(p[16]);
      r05_push_stack(p[12]);
      r05_link_brackets(p[13], p[14]);
      r05_splice_evar(p[11], p+3);
      r05_splice_evar(p[15], p+9);
      r05_splice_from_freelist(p[0]);
      r05_splice_to_freelist(p[0], p[2]);
      return;
    } while (r05_open_evar_advance(p+3, p[2]));
    r05_stop_e_loop();
  } while (0);

  do {
    /* e.Lines: 3 */
    /* e.Lines */
    r05_close_evar(p+3, p[1], p[2]);

    r05_reset_allocator();
    r05_alloc_insert_pos(p+5);
    r05_splice_evar(p[5], p+3);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);
}

R05_DEFINE_LOCAL_FUNCTION(Trimm_R, "Trim-R") {
  struct r05_node *p[9] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /* e.Line: 4 */
    /* e.Line ' ' */
    if (! r05_char_right(p+3, p[1], p[2], ' '))
      continue;
    r05_close_evar(p+4, p[1], p[3]);

    r05_reset_allocator();
    r05_alloc_open_call(p+6);
    r05_alloc_function(&r05f_Trimm_R);
    r05_alloc_insert_pos(p+7);
    r05_alloc_close_call(p+8);
    r05_push_stack(p[8]);
    r05_push_stack(p[6]);
    r05_splice_evar(p[7], p+4);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  do {
    /* e.Line: 3 */
    /* e.Line */
    r05_close_evar(p+3, p[1], p[2]);

    r05_reset_allocator();
    r05_alloc_insert_pos(p+5);
    r05_splice_evar(p[5], p+3);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);
}

R05_DEFINE_LOCAL_FUNCTION(DoPlain, "DoPlain") {
  struct r05_node *p[26] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /* e.Names: 6 */
    /* e.Units: 8 */
    /* (Extern e.Names) e.Units */
    if (! r05_brackets_left(p+3, p[1], p[2]))
      continue;
    if (! r05_function_left(p+5, p[3], p[4], &r05f_Extern))
      continue;
    r05_close_evar(p+6, p[5], p[4]);
    r05_close_evar(p+8, p[4], p[2]);

    r05_reset_allocator();
    r05_alloc_open_call(p+10);
    r05_alloc_function(&r05f_PlainExtern);
    r05_alloc_insert_pos(p+11);
    r05_alloc_close_call(p+12);
    r05_alloc_open_call(p+13);
    r05_alloc_function(&r05f_Plain);
    r05_alloc_insert_pos(p+14);
    r05_alloc_close_call(p+15);
    r05_push_stack(p[15]);
    r05_push_stack(p[13]);
    r05_push_stack(p[12]);
    r05_push_stack(p[10]);
    r05_splice_evar(p[11], p+6);
    r05_splice_evar(p[14], p+8);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  do {
    /* e.Units: 6 */
    /* t.SrcPos: 8 */
    /* e.Name: 12 */
    /* s.Scope: 14 */
    /* e.Sentences: 15 */
    /* (Function t.SrcPos (e.Name) s.Scope e.Sentences) e.Units */
    if (! r05_brackets_left(p+3, p[1], p[2]))
      continue;
    if (! r05_function_left(p+5, p[3], p[4], &r05f_Function))
      continue;
    r05_close_evar(p+6, p[4], p[2]);
    if (! r05_tvar_left(p+8, p[5], p[4]))
      continue;
    if (! r05_brackets_left(p+10, p[9], p[4]))
      continue;
    r05_close_evar(p+12, p[10], p[11]);
    if (! r05_svar_left(p+14, p[11], p[4]))
      continue;
    r05_close_evar(p+15, p[14], p[4]);

    r05_reset_allocator();
    r05_alloc_open_call(p+17);
    r05_alloc_function(&r05f_PlainFunction);
    r05_alloc_open_bracket(p+18);
    r05_alloc_insert_pos(p+19);
    r05_alloc_close_bracket(p+20);
    r05_alloc_svar(p+14);
    r05_alloc_insert_pos(p+21);
    r05_alloc_close_call(p+22);
    r05_alloc_open_call(p+23);
    r05_alloc_function(&r05f_Plain);
    r05_alloc_insert_pos(p+24);
    r05_alloc_close_call(p+25);
    r05_push_stack(p[25]);
    r05_push_stack(p[23]);
    r05_push_stack(p[22]);
    r05_push_stack(p[17]);
    r05_link_brackets(p[18], p[20]);
    r05_splice_evar(p[19], p+12);
    r05_splice_evar(p[21], p+15);
    r05_splice_evar(p[24], p+6);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  do {
    /* e.Units: 6 */
    /* t.SrcPos: 8 */
    /* e.Text: 10 */
    /* (SpecialComment t.SrcPos e.Text) e.Units */
    if (! r05_brackets_left(p+3, p[1], p[2]))
      continue;
    if (! r05_function_left(p+5, p[3], p[4], &r05f_SpecialComment))
      continue;
    r05_close_evar(p+6, p[4], p[2]);
    if (! r05_tvar_left(p+8, p[5], p[4]))
      continue;
    r05_close_evar(p+10, p[9], p[4]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+12);
    r05_alloc_insert_pos(p+13);
    r05_alloc_close_bracket(p+14);
    r05_alloc_open_call(p+15);
    r05_alloc_function(&r05f_Plain);
    r05_alloc_insert_pos(p+16);
    r05_alloc_close_call(p+17);
    r05_push_stack(p[17]);
    r05_push_stack(p[15]);
    r05_link_brackets(p[12], p[14]);
    r05_splice_evar(p[13], p+10);
    r05_splice_evar(p[16], p+6);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  do {
    /*  */
    if (! r05_empty_hole(p[1], p[2]))
      continue;

    r05_reset_allocator();
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(MAXm_LINE, "MAX-LINE") {
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
    r05_alloc_number(79UL);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(LongLine, "LongLine") {
  struct r05_node *p[10] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /* e.Line: 3 */
    /* e.Line */
    r05_close_evar(p+3, p[1], p[2]);

    r05_reset_allocator();
    r05_alloc_open_call(p+5);
    r05_alloc_function(&r05f_DoLongLine);
    r05_alloc_open_call(p+6);
    r05_alloc_function(&r05f_MAXm_LINE);
    r05_alloc_close_call(p+7);
    r05_alloc_insert_pos(p+8);
    r05_alloc_close_call(p+9);
    r05_push_stack(p[9]);
    r05_push_stack(p[5]);
    r05_push_stack(p[7]);
    r05_push_stack(p[6]);
    r05_splice_evar(p[8], p+3);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);
}

R05_DEFINE_LOCAL_FUNCTION(DoLongLine, "DoLongLine") {
  struct r05_node *p[13] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /* s.Len: 3 */
    /* s.Len */
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

  do {
    /* e.Line: 4 */
    /* 0 e.Line */
    if (! r05_number_left(p+3, p[1], p[2], 0UL))
      continue;
    r05_close_evar(p+4, p[3], p[2]);

    r05_reset_allocator();
    r05_alloc_function(&r05f_True);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  do {
    /* s.Len: 3 */
    /* t.Next: 4 */
    /* e.Line: 6 */
    /* s.Len t.Next e.Line */
    if (! r05_svar_left(p+3, p[1], p[2]))
      continue;
    if (! r05_tvar_left(p+4, p[3], p[2]))
      continue;
    r05_close_evar(p+6, p[5], p[2]);

    r05_reset_allocator();
    r05_alloc_open_call(p+8);
    r05_alloc_function(&r05f_DoLongLine);
    r05_alloc_open_call(p+9);
    r05_alloc_function(&r05f_m_);
    r05_alloc_svar(p+3);
    r05_alloc_number(1UL);
    r05_alloc_close_call(p+10);
    r05_alloc_insert_pos(p+11);
    r05_alloc_close_call(p+12);
    r05_push_stack(p[12]);
    r05_push_stack(p[8]);
    r05_push_stack(p[10]);
    r05_push_stack(p[9]);
    r05_splice_evar(p[11], p+6);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(PlainExtern, "PlainExtern") {
  struct r05_node *p[10] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /* e.Names: 3 */
    /* e.Names */
    r05_close_evar(p+3, p[1], p[2]);

    r05_reset_allocator();
    r05_alloc_open_call(p+5);
    r05_alloc_function(&r05f_DoExtern);
    r05_alloc_open_bracket(p+6);
    r05_alloc_chars("$EXTERN ", 8);
    r05_alloc_close_bracket(p+7);
    r05_alloc_insert_pos(p+8);
    r05_alloc_close_call(p+9);
    r05_push_stack(p[9]);
    r05_push_stack(p[5]);
    r05_link_brackets(p[6], p[7]);
    r05_splice_evar(p[8], p+3);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);
}

R05_DEFINE_LOCAL_FUNCTION(DoExtern, "DoExtern") {
  R05_DEFINE_COND_FUNCTION(DoExtern, "DoExtern$1", 1)
  R05_DEFINE_COND_FUNCTION(DoExtern, "DoExtern$2", 2)
  R05_DEFINE_COND_FUNCTION(DoExtern, "DoExtern$3", 3)
  struct r05_node *p[40] = { 0 };

  r05_this_is_generated_function();
  switch (arg_begin->next->info.function->resume_entry >> 1) {
  case 0:
    p[0] = arg_begin;
    p[1] = arg_begin->next;
    p[2] = arg_end;

    do {
      /* e.OutLine: 7 */
      /* e.Names: 9 */
      /* t.Pos: 11 */
      /* e.NextName: 13 */
      /* (e.OutLine) (t.Pos e.NextName) e.Names */
      if (! r05_brackets_left(p+3, p[1], p[2]))
        continue;
      if (! r05_brackets_left(p+5, p[4], p[2]))
        continue;
      r05_close_evar(p+7, p[3], p[4]);
      r05_close_evar(p+9, p[6], p[2]);
      if (! r05_tvar_left(p+11, p[5], p[6]))
        continue;
      r05_close_evar(p+13, p[12], p[6]);

      r05_reset_allocator();
      r05_alloc_open_call(p+15);
      r05_alloc_function(&c1);
      r05_alloc_open_call(p+16);
      r05_alloc_function(&r05f_CommaOrSemicolon);
      r05_alloc_evar(p+9);
      r05_alloc_close_call(p+17);
      r05_alloc_close_call(p+18);
      r05_push_stack(p[18]);
      r05_push_stack(p[15]);
      r05_push_stack(p[17]);
      r05_push_stack(p[16]);
      r05_push_context(p, 15);
      r05_splice_from_freelist(p[2]);
      return;

  case 1:
      r05_pop_context(p, 15);
      p[15] = arg_begin;
      p[16] = arg_begin->next;
      p[17] = arg_end;

      do {
        /* e.OutLine: 7 */
        /* e.Names: 9 */
        /* t.Pos: 11 */
        /* e.NextName: 13 */
        /* e.SEP: 18 */
        /* e.SEP */
        r05_close_evar(p+18, p[16], p[17]);

        r05_reset_allocator();
        r05_alloc_open_call(p+20);
        r05_alloc_function(&c2);
        r05_alloc_evar(p+7);
        r05_alloc_evar(p+13);
        r05_alloc_evar(p+18);
        r05_alloc_close_call(p+21);
        r05_push_stack(p[21]);
        r05_push_stack(p[20]);
        r05_push_context(p, 20);
        r05_splice_from_freelist(p[2]);
        return;

  case 2:
        r05_pop_context(p, 20);
        p[20] = arg_begin;
        p[21] = arg_begin->next;
        p[22] = arg_end;

        do {
          /* e.OutLine: 7 */
          /* e.Names: 9 */
          /* t.Pos: 11 */
          /* e.NextName: 13 */
          /* e.SEP: 18 */
          /* e.NewOutLine: 23 */
          /* e.NewOutLine */
          r05_close_evar(p+23, p[21], p[22]);

          r05_reset_allocator();
          r05_alloc_open_call(p+25);
          r05_alloc_function(&c3);
          r05_alloc_open_call(p+26);
          r05_alloc_function(&r05f_LongLine);
          r05_alloc_evar(p+23);
          r05_alloc_close_call(p+27);
          r05_alloc_close_call(p+28);
          r05_push_stack(p[28]);
          r05_push_stack(p[25]);
          r05_push_stack(p[27]);
          r05_push_stack(p[26]);
          r05_push_context(p, 25);
          r05_splice_from_freelist(p[2]);
          return;

  case 3:
          r05_pop_context(p, 25);
          p[25] = arg_begin;
          p[26] = arg_begin->next;
          p[27] = arg_end;

          do {
            /* e.OutLine: 7 */
            /* e.Names: 9 */
            /* t.Pos: 11 */
            /* e.NextName: 13 */
            /* e.SEP: 18 */
            /* e.NewOutLine: 23 */
            /* True */
            if (! r05_function_left(p+28, p[26], p[27], &r05f_True))
              continue;
            if (! r05_empty_hole(p[28], p[27]))
              continue;

            r05_reset_allocator();
            r05_alloc_open_bracket(p+29);
            r05_alloc_open_call(p+30);
            r05_alloc_function(&r05f_Trimm_R);
            r05_alloc_insert_pos(p+31);
            r05_alloc_close_call(p+32);
            r05_alloc_close_bracket(p+33);
            r05_alloc_open_call(p+34);
            r05_alloc_function(&r05f_DoExtern);
            r05_alloc_open_bracket(p+35);
            r05_alloc_chars("  ", 2);
            r05_alloc_insert_pos(p+36);
            r05_alloc_close_bracket(p+37);
            r05_alloc_insert_pos(p+38);
            r05_alloc_close_call(p+39);
            r05_push_stack(p[39]);
            r05_push_stack(p[34]);
            r05_link_brackets(p[35], p[37]);
            r05_link_brackets(p[29], p[33]);
            r05_push_stack(p[32]);
            r05_push_stack(p[30]);
            r05_splice_evar(p[31], p+7);
            r05_splice_evar(p[36], p+13);
            r05_splice_evar(p[36], p+18);
            r05_splice_evar(p[38], p+9);
            r05_splice_from_freelist(p[0]);
            r05_splice_to_freelist(p[0], p[2]);
            return;
          } while (0);

          do {
            /* e.OutLine: 7 */
            /* e.Names: 9 */
            /* t.Pos: 11 */
            /* e.NextName: 13 */
            /* e.SEP: 18 */
            /* e.NewOutLine: 23 */
            /* False */
            if (! r05_function_left(p+28, p[26], p[27], &r05f_False))
              continue;
            if (! r05_empty_hole(p[28], p[27]))
              continue;

            r05_reset_allocator();
            r05_alloc_open_call(p+29);
            r05_alloc_function(&r05f_DoExtern);
            r05_alloc_open_bracket(p+30);
            r05_alloc_insert_pos(p+31);
            r05_alloc_close_bracket(p+32);
            r05_alloc_insert_pos(p+33);
            r05_alloc_close_call(p+34);
            r05_push_stack(p[34]);
            r05_push_stack(p[29]);
            r05_link_brackets(p[30], p[32]);
            r05_splice_evar(p[31], p+23);
            r05_splice_evar(p[33], p+9);
            r05_splice_from_freelist(p[0]);
            r05_splice_to_freelist(p[0], p[2]);
            return;
          } while (0);

          r05_recognition_impossible();
        } while (0);
        r05_splice_to_freelist(p[20], p[22]);
      } while (0);
      r05_splice_to_freelist(p[15], p[17]);
    } while (0);

    do {
      /* e.OutLine: 5 */
      /* (e.OutLine) */
      if (! r05_brackets_left(p+3, p[1], p[2]))
        continue;
      if (! r05_empty_hole(p[4], p[2]))
        continue;
      r05_close_evar(p+5, p[3], p[4]);

      r05_reset_allocator();
      r05_alloc_open_bracket(p+7);
      r05_alloc_insert_pos(p+8);
      r05_alloc_close_bracket(p+9);
      r05_alloc_open_bracket(p+10);
      r05_alloc_close_bracket(p+11);
      r05_link_brackets(p[10], p[11]);
      r05_link_brackets(p[7], p[9]);
      r05_splice_evar(p[8], p+5);
      r05_splice_from_freelist(p[0]);
      r05_splice_to_freelist(p[0], p[2]);
      return;
    } while (0);

    r05_recognition_impossible();
  }
}

R05_DEFINE_LOCAL_FUNCTION(CommaOrSemicolon, "CommaOrSemicolon") {
  struct r05_node *p[11] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /* e.Names: 5 */
    /* t.Pos: 7 */
    /* e.NextName: 9 */
    /* (t.Pos e.NextName) e.Names */
    if (! r05_brackets_left(p+3, p[1], p[2]))
      continue;
    r05_close_evar(p+5, p[4], p[2]);
    if (! r05_tvar_left(p+7, p[3], p[4]))
      continue;
    r05_close_evar(p+9, p[8], p[4]);

    r05_reset_allocator();
    r05_alloc_chars(", ", 2);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  do {
    /*  */
    if (! r05_empty_hole(p[1], p[2]))
      continue;

    r05_reset_allocator();
    r05_alloc_char(';');
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(PlainFunction, "PlainFunction") {
  struct r05_node *p[24] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /* e.Name: 5 */
    /* s.Scope: 7 */
    /* e.Sentences: 8 */
    /* (e.Name) s.Scope e.Sentences */
    if (! r05_brackets_left(p+3, p[1], p[2]))
      continue;
    r05_close_evar(p+5, p[3], p[4]);
    if (! r05_svar_left(p+7, p[4], p[2]))
      continue;
    r05_close_evar(p+8, p[7], p[2]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+10);
    r05_alloc_open_call(p+11);
    r05_alloc_function(&r05f_PlainScope);
    r05_alloc_svar(p+7);
    r05_alloc_close_call(p+12);
    r05_alloc_insert_pos(p+13);
    r05_alloc_chars(" {", 2);
    r05_alloc_close_bracket(p+14);
    r05_alloc_open_call(p+15);
    r05_alloc_function(&r05f_Sentences);
    r05_alloc_open_bracket(p+16);
    r05_alloc_chars("  ", 2);
    r05_alloc_close_bracket(p+17);
    r05_alloc_insert_pos(p+18);
    r05_alloc_close_call(p+19);
    r05_alloc_open_bracket(p+20);
    r05_alloc_char('}');
    r05_alloc_close_bracket(p+21);
    r05_alloc_open_bracket(p+22);
    r05_alloc_close_bracket(p+23);
    r05_link_brackets(p[22], p[23]);
    r05_link_brackets(p[20], p[21]);
    r05_push_stack(p[19]);
    r05_push_stack(p[15]);
    r05_link_brackets(p[16], p[17]);
    r05_link_brackets(p[10], p[14]);
    r05_push_stack(p[12]);
    r05_push_stack(p[11]);
    r05_splice_evar(p[13], p+5);
    r05_splice_evar(p[18], p+8);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(PlainScope, "PlainScope") {
  struct r05_node *p[4] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /* Entry */
    if (! r05_function_left(p+3, p[1], p[2], &r05f_Entry))
      continue;
    if (! r05_empty_hole(p[3], p[2]))
      continue;

    r05_reset_allocator();
    r05_alloc_chars("$ENTRY ", 7);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  do {
    /* Local */
    if (! r05_function_left(p+3, p[1], p[2], &r05f_Local))
      continue;
    if (! r05_empty_hole(p[3], p[2]))
      continue;

    r05_reset_allocator();
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(Sentences, "Sentences") {
  struct r05_node *p[26] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /* e.Indent: 7 */
    /* e.Sentence: 9 */
    /* (e.Indent) (e.Sentence) */
    if (! r05_brackets_left(p+3, p[1], p[2]))
      continue;
    if (! r05_brackets_left(p+5, p[4], p[2]))
      continue;
    if (! r05_empty_hole(p[6], p[2]))
      continue;
    r05_close_evar(p+7, p[3], p[4]);
    r05_close_evar(p+9, p[5], p[6]);

    r05_reset_allocator();
    r05_alloc_open_call(p+11);
    r05_alloc_function(&r05f_Sentence);
    r05_alloc_open_bracket(p+12);
    r05_alloc_insert_pos(p+13);
    r05_alloc_close_bracket(p+14);
    r05_alloc_insert_pos(p+15);
    r05_alloc_close_call(p+16);
    r05_push_stack(p[16]);
    r05_push_stack(p[11]);
    r05_link_brackets(p[12], p[14]);
    r05_splice_evar(p[13], p+7);
    r05_splice_evar(p[15], p+9);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  do {
    /* e.Indent: 7 */
    /* e.Sentence: 9 */
    /* e.Sentences: 11 */
    /* (e.Indent) (e.Sentence) e.Sentences */
    if (! r05_brackets_left(p+3, p[1], p[2]))
      continue;
    if (! r05_brackets_left(p+5, p[4], p[2]))
      continue;
    r05_close_evar(p+7, p[3], p[4]);
    r05_close_evar(p+9, p[5], p[6]);
    r05_close_evar(p+11, p[6], p[2]);

    r05_reset_allocator();
    r05_alloc_open_call(p+13);
    r05_alloc_function(&r05f_Sentence);
    r05_alloc_open_bracket(p+14);
    r05_alloc_insert_pos(p+15);
    r05_alloc_close_bracket(p+16);
    r05_alloc_insert_pos(p+17);
    r05_alloc_close_call(p+18);
    r05_alloc_open_bracket(p+19);
    r05_alloc_close_bracket(p+20);
    r05_alloc_open_call(p+21);
    r05_alloc_function(&r05f_Sentences);
    r05_alloc_open_bracket(p+22);
    r05_alloc_evar(p+7);
    r05_alloc_close_bracket(p+23);
    r05_alloc_insert_pos(p+24);
    r05_alloc_close_call(p+25);
    r05_push_stack(p[25]);
    r05_push_stack(p[21]);
    r05_link_brackets(p[22], p[23]);
    r05_link_brackets(p[19], p[20]);
    r05_push_stack(p[18]);
    r05_push_stack(p[13]);
    r05_link_brackets(p[14], p[16]);
    r05_splice_evar(p[15], p+7);
    r05_splice_evar(p[17], p+9);
    r05_splice_evar(p[24], p+11);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  do {
    /* e.Indent: 5 */
    /* (e.Indent) */
    if (! r05_brackets_left(p+3, p[1], p[2]))
      continue;
    if (! r05_empty_hole(p[4], p[2]))
      continue;
    r05_close_evar(p+5, p[3], p[4]);

    r05_reset_allocator();
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(Sentence, "Sentence") {
  R05_DEFINE_COND_FUNCTION(Sentence, "Sentence$1", 1)
  R05_DEFINE_COND_FUNCTION(Sentence, "Sentence$2", 2)
  struct r05_node *p[28] = { 0 };

  r05_this_is_generated_function();
  switch (arg_begin->next->info.function->resume_entry >> 1) {
  case 0:
    p[0] = arg_begin;
    p[1] = arg_begin->next;
    p[2] = arg_end;

    do {
      /* e.Text: 6 */
      /* s.Space: 8 */
      /* e.Indent: 9 */
      /* (s.Space e.Indent) Comment e.Text */
      if (! r05_brackets_left(p+3, p[1], p[2]))
        continue;
      if (! r05_function_left(p+5, p[4], p[2], &r05f_Comment))
        continue;
      r05_close_evar(p+6, p[5], p[2]);
      if (! r05_svar_left(p+8, p[3], p[4]))
        continue;
      r05_close_evar(p+9, p[8], p[4]);

      r05_reset_allocator();
      r05_alloc_open_call(p+11);
      r05_alloc_function(&r05f_PutComment);
      r05_alloc_open_bracket(p+12);
      r05_alloc_insert_pos(p+13);
      r05_alloc_close_bracket(p+14);
      r05_alloc_insert_pos(p+15);
      r05_alloc_close_call(p+16);
      r05_push_stack(p[16]);
      r05_push_stack(p[11]);
      r05_link_brackets(p[12], p[14]);
      r05_splice_evar(p[13], p+9);
      r05_splice_evar(p[15], p+6);
      r05_splice_from_freelist(p[0]);
      r05_splice_to_freelist(p[0], p[2]);
      return;
    } while (0);

    do {
      /* e.Indent: 10 */
      /* e.Pattern: 12 */
      /* e.Result: 14 */
      /* (e.Indent) (e.Pattern) RETURN (e.Result) */
      if (! r05_brackets_left(p+3, p[1], p[2]))
        continue;
      if (! r05_brackets_left(p+5, p[4], p[2]))
        continue;
      if (! r05_function_left(p+7, p[6], p[2], &r05f_RETURN))
        continue;
      if (! r05_brackets_left(p+8, p[7], p[2]))
        continue;
      if (! r05_empty_hole(p[9], p[2]))
        continue;
      r05_close_evar(p+10, p[3], p[4]);
      r05_close_evar(p+12, p[5], p[6]);
      r05_close_evar(p+14, p[8], p[9]);

      r05_reset_allocator();
      r05_alloc_open_call(p+16);
      r05_alloc_function(&c1);
      r05_alloc_evar(p+10);
      r05_alloc_open_call(p+17);
      r05_alloc_function(&r05f_InlineExpr);
      r05_alloc_evar(p+12);
      r05_alloc_close_call(p+18);
      r05_alloc_chars(" = ", 3);
      r05_alloc_open_call(p+19);
      r05_alloc_function(&r05f_InlineExpr);
      r05_alloc_evar(p+14);
      r05_alloc_close_call(p+20);
      r05_alloc_char(';');
      r05_alloc_close_call(p+21);
      r05_push_stack(p[21]);
      r05_push_stack(p[16]);
      r05_push_stack(p[20]);
      r05_push_stack(p[19]);
      r05_push_stack(p[18]);
      r05_push_stack(p[17]);
      r05_push_context(p, 16);
      r05_splice_from_freelist(p[2]);
      return;

  case 1:
      r05_pop_context(p, 16);
      p[16] = arg_begin;
      p[17] = arg_begin->next;
      p[18] = arg_end;

      do {
        /* e.Indent: 10 */
        /* e.Pattern: 12 */
        /* e.Result: 14 */
        /* e.OneLineSentence: 19 */
        /* e.OneLineSentence */
        r05_close_evar(p+19, p[17], p[18]);

        r05_reset_allocator();
        r05_alloc_open_call(p+21);
        r05_alloc_function(&c2);
        r05_alloc_open_call(p+22);
        r05_alloc_function(&r05f_LongLine);
        r05_alloc_evar(p+19);
        r05_alloc_close_call(p+23);
        r05_alloc_close_call(p+24);
        r05_push_stack(p[24]);
        r05_push_stack(p[21]);
        r05_push_stack(p[23]);
        r05_push_stack(p[22]);
        r05_push_context(p, 21);
        r05_splice_from_freelist(p[2]);
        return;

  case 2:
        r05_pop_context(p, 21);
        p[21] = arg_begin;
        p[22] = arg_begin->next;
        p[23] = arg_end;

        do {
          /* e.Indent: 10 */
          /* e.Pattern: 12 */
          /* e.Result: 14 */
          /* e.OneLineSentence: 19 */
          /* False */
          if (! r05_function_left(p+24, p[22], p[23], &r05f_False))
            continue;
          if (! r05_empty_hole(p[24], p[23]))
            continue;

          r05_reset_allocator();
          r05_alloc_open_bracket(p+25);
          r05_alloc_insert_pos(p+26);
          r05_alloc_close_bracket(p+27);
          r05_link_brackets(p[25], p[27]);
          r05_splice_evar(p[26], p+19);
          r05_splice_from_freelist(p[0]);
          r05_splice_to_freelist(p[0], p[2]);
          return;
        } while (0);
        r05_splice_to_freelist(p[21], p[23]);
      } while (0);
      r05_splice_to_freelist(p[16], p[18]);
    } while (0);

    do {
      /* e.Indent: 7 */
      /* e.Pattern: 9 */
      /* e.Tail: 11 */
      /* (e.Indent) (e.Pattern) e.Tail */
      if (! r05_brackets_left(p+3, p[1], p[2]))
        continue;
      if (! r05_brackets_left(p+5, p[4], p[2]))
        continue;
      r05_close_evar(p+7, p[3], p[4]);
      r05_close_evar(p+9, p[5], p[6]);
      r05_close_evar(p+11, p[6], p[2]);

      r05_reset_allocator();
      r05_alloc_open_call(p+13);
      r05_alloc_function(&r05f_Expression);
      r05_alloc_open_bracket(p+14);
      r05_alloc_insert_pos(p+15);
      r05_alloc_close_bracket(p+16);
      r05_alloc_open_bracket(p+17);
      r05_alloc_evar(p+7);
      r05_alloc_close_bracket(p+18);
      r05_alloc_insert_pos(p+19);
      r05_alloc_close_call(p+20);
      r05_alloc_open_call(p+21);
      r05_alloc_function(&r05f_Tail);
      r05_alloc_open_bracket(p+22);
      r05_alloc_evar(p+7);
      r05_alloc_chars("  ", 2);
      r05_alloc_close_bracket(p+23);
      r05_alloc_insert_pos(p+24);
      r05_alloc_close_call(p+25);
      r05_push_stack(p[25]);
      r05_push_stack(p[21]);
      r05_link_brackets(p[22], p[23]);
      r05_push_stack(p[20]);
      r05_push_stack(p[13]);
      r05_link_brackets(p[17], p[18]);
      r05_link_brackets(p[14], p[16]);
      r05_splice_evar(p[15], p+7);
      r05_splice_evar(p[19], p+9);
      r05_splice_evar(p[24], p+11);
      r05_splice_from_freelist(p[0]);
      r05_splice_to_freelist(p[0], p[2]);
      return;
    } while (0);

    r05_recognition_impossible();
  }
}

R05_DEFINE_LOCAL_FUNCTION(PutComment, "PutComment") {
  struct r05_node *p[20] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /* e.Indent: 5 */
    /* e.Comment: 7 */
    /* e.Tail: 10 */
    /* (e.Indent) e.Comment '\n' e.Tail */
    if (! r05_brackets_left(p+3, p[1], p[2]))
      continue;
    r05_close_evar(p+5, p[3], p[4]);
    p[7] = NULL;
    p[8] = p[4];
    do {
      r05_start_e_loop();
      if (! r05_char_left(p+9, p[8], p[2], '\n'))
        continue;
      r05_close_evar(p+10, p[9], p[2]);

      r05_reset_allocator();
      r05_alloc_open_bracket(p+12);
      r05_alloc_char('*');
      r05_alloc_insert_pos(p+13);
      r05_alloc_close_bracket(p+14);
      r05_alloc_open_call(p+15);
      r05_alloc_function(&r05f_PutComment);
      r05_alloc_open_bracket(p+16);
      r05_alloc_evar(p+5);
      r05_alloc_close_bracket(p+17);
      r05_alloc_insert_pos(p+18);
      r05_alloc_close_call(p+19);
      r05_push_stack(p[19]);
      r05_push_stack(p[15]);
      r05_link_brackets(p[16], p[17]);
      r05_link_brackets(p[12], p[14]);
      r05_splice_evar(p[13], p+5);
      r05_splice_evar(p[13], p+7);
      r05_splice_evar(p[18], p+10);
      r05_splice_from_freelist(p[0]);
      r05_splice_to_freelist(p[0], p[2]);
      return;
    } while (r05_open_evar_advance(p+7, p[2]));
    r05_stop_e_loop();
  } while (0);

  do {
    /* e.Indent: 5 */
    /* e.Comment: 7 */
    /* (e.Indent) e.Comment */
    if (! r05_brackets_left(p+3, p[1], p[2]))
      continue;
    r05_close_evar(p+5, p[3], p[4]);
    r05_close_evar(p+7, p[4], p[2]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+9);
    r05_alloc_char('*');
    r05_alloc_insert_pos(p+10);
    r05_alloc_close_bracket(p+11);
    r05_link_brackets(p[9], p[11]);
    r05_splice_evar(p[10], p+5);
    r05_splice_evar(p[10], p+7);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(Tail, "Tail") {
  R05_DEFINE_COND_FUNCTION(Tail, "Tail$1", 1)
  R05_DEFINE_COND_FUNCTION(Tail, "Tail$2", 2)
  struct r05_node *p[49] = { 0 };

  r05_this_is_generated_function();
  switch (arg_begin->next->info.function->resume_entry >> 1) {
  case 0:
    p[0] = arg_begin;
    p[1] = arg_begin->next;
    p[2] = arg_end;

    do {
      /* e.Indent: 12 */
      /* e.Result: 14 */
      /* e.Pattern: 16 */
      /* e.Tail: 18 */
      /* (e.Indent) (Condition (e.Result) (e.Pattern)) e.Tail */
      if (! r05_brackets_left(p+3, p[1], p[2]))
        continue;
      if (! r05_brackets_left(p+5, p[4], p[2]))
        continue;
      if (! r05_function_left(p+7, p[5], p[6], &r05f_Condition))
        continue;
      if (! r05_brackets_left(p+8, p[7], p[6]))
        continue;
      if (! r05_brackets_left(p+10, p[9], p[6]))
        continue;
      if (! r05_empty_hole(p[11], p[6]))
        continue;
      r05_close_evar(p+12, p[3], p[4]);
      r05_close_evar(p+14, p[8], p[9]);
      r05_close_evar(p+16, p[10], p[11]);
      r05_close_evar(p+18, p[6], p[2]);

      r05_reset_allocator();
      r05_alloc_open_call(p+20);
      r05_alloc_function(&c1);
      r05_alloc_evar(p+12);
      r05_alloc_chars(", ", 2);
      r05_alloc_open_call(p+21);
      r05_alloc_function(&r05f_InlineExpr);
      r05_alloc_evar(p+14);
      r05_alloc_close_call(p+22);
      r05_alloc_chars(": ", 2);
      r05_alloc_open_call(p+23);
      r05_alloc_function(&r05f_InlineExpr);
      r05_alloc_evar(p+16);
      r05_alloc_close_call(p+24);
      r05_alloc_close_call(p+25);
      r05_push_stack(p[25]);
      r05_push_stack(p[20]);
      r05_push_stack(p[24]);
      r05_push_stack(p[23]);
      r05_push_stack(p[22]);
      r05_push_stack(p[21]);
      r05_push_context(p, 20);
      r05_splice_from_freelist(p[2]);
      return;

  case 1:
      r05_pop_context(p, 20);
      p[20] = arg_begin;
      p[21] = arg_begin->next;
      p[22] = arg_end;

      do {
        /* e.Indent: 12 */
        /* e.Result: 14 */
        /* e.Pattern: 16 */
        /* e.Tail: 18 */
        /* e.OneLineCondition: 23 */
        /* e.OneLineCondition */
        r05_close_evar(p+23, p[21], p[22]);

        r05_reset_allocator();
        r05_alloc_open_call(p+25);
        r05_alloc_function(&c2);
        r05_alloc_open_call(p+26);
        r05_alloc_function(&r05f_LongLine);
        r05_alloc_evar(p+23);
        r05_alloc_close_call(p+27);
        r05_alloc_close_call(p+28);
        r05_push_stack(p[28]);
        r05_push_stack(p[25]);
        r05_push_stack(p[27]);
        r05_push_stack(p[26]);
        r05_push_context(p, 25);
        r05_splice_from_freelist(p[2]);
        return;

  case 2:
        r05_pop_context(p, 25);
        p[25] = arg_begin;
        p[26] = arg_begin->next;
        p[27] = arg_end;

        do {
          /* e.Indent: 12 */
          /* e.Result: 14 */
          /* e.Pattern: 16 */
          /* e.Tail: 18 */
          /* e.OneLineCondition: 23 */
          /* True */
          if (! r05_function_left(p+28, p[26], p[27], &r05f_True))
            continue;
          if (! r05_empty_hole(p[28], p[27]))
            continue;

          r05_reset_allocator();
          r05_alloc_open_call(p+29);
          r05_alloc_function(&r05f_Expression);
          r05_alloc_open_bracket(p+30);
          r05_alloc_insert_pos(p+31);
          r05_alloc_chars(", ", 2);
          r05_alloc_close_bracket(p+32);
          r05_alloc_open_bracket(p+33);
          r05_alloc_evar(p+12);
          r05_alloc_chars("  ", 2);
          r05_alloc_close_bracket(p+34);
          r05_alloc_insert_pos(p+35);
          r05_alloc_close_call(p+36);
          r05_alloc_open_call(p+37);
          r05_alloc_function(&r05f_Expression);
          r05_alloc_open_bracket(p+38);
          r05_alloc_evar(p+12);
          r05_alloc_chars(": ", 2);
          r05_alloc_close_bracket(p+39);
          r05_alloc_open_bracket(p+40);
          r05_alloc_evar(p+12);
          r05_alloc_chars("  ", 2);
          r05_alloc_close_bracket(p+41);
          r05_alloc_insert_pos(p+42);
          r05_alloc_close_call(p+43);
          r05_alloc_open_call(p+44);
          r05_alloc_function(&r05f_Tail);
          r05_alloc_open_bracket(p+45);
          r05_alloc_evar(p+12);
          r05_alloc_close_bracket(p+46);
          r05_alloc_insert_pos(p+47);
          r05_alloc_close_call(p+48);
          r05_push_stack(p[48]);
          r05_push_stack(p[44]);
          r05_link_brackets(p[45], p[46]);
          r05_push_stack(p[43]);
          r05_push_stack(p[37]);
          r05_link_brackets(p[40], p[41]);
          r05_link_brackets(p[38], p[39]);
          r05_push_stack(p[36]);
          r05_push_stack(p[29]);
          r05_link_brackets(p[33], p[34]);
          r05_link_brackets(p[30], p[32]);
          r05_splice_evar(p[31], p+12);
          r05_splice_evar(p[35], p+14);
          r05_splice_evar(p[42], p+16);
          r05_splice_evar(p[47], p+18);
          r05_splice_from_freelist(p[0]);
          r05_splice_to_freelist(p[0], p[2]);
          return;
        } while (0);

        do {
          /* e.Indent: 12 */
          /* e.Result: 14 */
          /* e.Pattern: 16 */
          /* e.Tail: 18 */
          /* e.OneLineCondition: 23 */
          /* False */
          if (! r05_function_left(p+28, p[26], p[27], &r05f_False))
            continue;
          if (! r05_empty_hole(p[28], p[27]))
            continue;

          r05_reset_allocator();
          r05_alloc_open_bracket(p+29);
          r05_alloc_insert_pos(p+30);
          r05_alloc_close_bracket(p+31);
          r05_alloc_open_call(p+32);
          r05_alloc_function(&r05f_Tail);
          r05_alloc_open_bracket(p+33);
          r05_alloc_insert_pos(p+34);
          r05_alloc_close_bracket(p+35);
          r05_alloc_insert_pos(p+36);
          r05_alloc_close_call(p+37);
          r05_push_stack(p[37]);
          r05_push_stack(p[32]);
          r05_link_brackets(p[33], p[35]);
          r05_link_brackets(p[29], p[31]);
          r05_splice_evar(p[30], p+23);
          r05_splice_evar(p[34], p+12);
          r05_splice_evar(p[36], p+18);
          r05_splice_from_freelist(p[0]);
          r05_splice_to_freelist(p[0], p[2]);
          return;
        } while (0);

        r05_recognition_impossible();
      } while (0);
      r05_splice_to_freelist(p[20], p[22]);
    } while (0);

    do {
      /* e.Indent: 8 */
      /* e.Result: 10 */
      /* (e.Indent) RETURN (e.Result) */
      if (! r05_brackets_left(p+3, p[1], p[2]))
        continue;
      if (! r05_function_left(p+5, p[4], p[2], &r05f_RETURN))
        continue;
      if (! r05_brackets_left(p+6, p[5], p[2]))
        continue;
      if (! r05_empty_hole(p[7], p[2]))
        continue;
      r05_close_evar(p+8, p[3], p[4]);
      r05_close_evar(p+10, p[6], p[7]);

      r05_reset_allocator();
      r05_alloc_open_call(p+12);
      r05_alloc_function(&r05f_Expression);
      r05_alloc_open_bracket(p+13);
      r05_alloc_insert_pos(p+14);
      r05_alloc_chars("= ", 2);
      r05_alloc_close_bracket(p+15);
      r05_alloc_open_bracket(p+16);
      r05_alloc_evar(p+8);
      r05_alloc_chars("  ", 2);
      r05_alloc_close_bracket(p+17);
      r05_alloc_insert_pos(p+18);
      r05_alloc_char(';');
      r05_alloc_close_call(p+19);
      r05_push_stack(p[19]);
      r05_push_stack(p[12]);
      r05_link_brackets(p[16], p[17]);
      r05_link_brackets(p[13], p[15]);
      r05_splice_evar(p[14], p+8);
      r05_splice_evar(p[18], p+10);
      r05_splice_from_freelist(p[0]);
      r05_splice_to_freelist(p[0], p[2]);
      return;
    } while (0);

    do {
      /* e.Indent: 8 */
      /* e.Result: 10 */
      /* e.Sentences: 12 */
      /* (e.Indent) CALL-BLOCK (e.Result) e.Sentences */
      if (! r05_brackets_left(p+3, p[1], p[2]))
        continue;
      if (! r05_function_left(p+5, p[4], p[2], &r05f_CALLm_BLOCK))
        continue;
      if (! r05_brackets_left(p+6, p[5], p[2]))
        continue;
      r05_close_evar(p+8, p[3], p[4]);
      r05_close_evar(p+10, p[6], p[7]);
      r05_close_evar(p+12, p[7], p[2]);

      r05_reset_allocator();
      r05_alloc_open_call(p+14);
      r05_alloc_function(&r05f_Expression);
      r05_alloc_open_bracket(p+15);
      r05_alloc_insert_pos(p+16);
      r05_alloc_chars(", ", 2);
      r05_alloc_close_bracket(p+17);
      r05_alloc_open_bracket(p+18);
      r05_alloc_evar(p+8);
      r05_alloc_chars("  ", 2);
      r05_alloc_close_bracket(p+19);
      r05_alloc_insert_pos(p+20);
      r05_alloc_close_call(p+21);
      r05_alloc_open_bracket(p+22);
      r05_alloc_evar(p+8);
      r05_alloc_chars(": {", 3);
      r05_alloc_close_bracket(p+23);
      r05_alloc_open_call(p+24);
      r05_alloc_function(&r05f_Sentences);
      r05_alloc_open_bracket(p+25);
      r05_alloc_evar(p+8);
      r05_alloc_chars("    ", 4);
      r05_alloc_close_bracket(p+26);
      r05_alloc_insert_pos(p+27);
      r05_alloc_close_call(p+28);
      r05_alloc_open_bracket(p+29);
      r05_alloc_evar(p+8);
      r05_alloc_chars("  };", 4);
      r05_alloc_close_bracket(p+30);
      r05_link_brackets(p[29], p[30]);
      r05_push_stack(p[28]);
      r05_push_stack(p[24]);
      r05_link_brackets(p[25], p[26]);
      r05_link_brackets(p[22], p[23]);
      r05_push_stack(p[21]);
      r05_push_stack(p[14]);
      r05_link_brackets(p[18], p[19]);
      r05_link_brackets(p[15], p[17]);
      r05_splice_evar(p[16], p+8);
      r05_splice_evar(p[20], p+10);
      r05_splice_evar(p[27], p+12);
      r05_splice_from_freelist(p[0]);
      r05_splice_to_freelist(p[0], p[2]);
      return;
    } while (0);

    r05_recognition_impossible();
  }
}

R05_DEFINE_LOCAL_FUNCTION(Expression, "Expression") {
  R05_DEFINE_COND_FUNCTION(Expression, "Expression$1", 1)
  struct r05_node *p[22] = { 0 };

  r05_this_is_generated_function();
  switch (arg_begin->next->info.function->resume_entry >> 1) {
  case 0:
    p[0] = arg_begin;
    p[1] = arg_begin->next;
    p[2] = arg_end;

    do {
      /* e.Prefix: 7 */
      /* e.Indent: 9 */
      /* (e.Prefix) (e.Indent) */
      if (! r05_brackets_left(p+3, p[1], p[2]))
        continue;
      if (! r05_brackets_left(p+5, p[4], p[2]))
        continue;
      if (! r05_empty_hole(p[6], p[2]))
        continue;
      r05_close_evar(p+7, p[3], p[4]);
      r05_close_evar(p+9, p[5], p[6]);

      r05_reset_allocator();
      r05_alloc_open_call(p+11);
      r05_alloc_function(&c1);
      r05_alloc_open_call(p+12);
      r05_alloc_function(&r05f_Trimm_R);
      r05_alloc_evar(p+7);
      r05_alloc_close_call(p+13);
      r05_alloc_close_call(p+14);
      r05_push_stack(p[14]);
      r05_push_stack(p[11]);
      r05_push_stack(p[13]);
      r05_push_stack(p[12]);
      r05_push_context(p, 11);
      r05_splice_from_freelist(p[2]);
      return;

  case 1:
      r05_pop_context(p, 11);
      p[11] = arg_begin;
      p[12] = arg_begin->next;
      p[13] = arg_end;

      do {
        /* e.Prefix: 7 */
        /* e.Indent: 9 */
        /*  */
        if (! r05_empty_hole(p[12], p[13]))
          continue;

        r05_reset_allocator();
        r05_splice_from_freelist(p[0]);
        r05_splice_to_freelist(p[0], p[2]);
        return;
      } while (0);
      r05_splice_to_freelist(p[11], p[13]);
    } while (0);

    do {
      /* e.Prefix: 7 */
      /* e.Indent: 9 */
      /* (e.Prefix) (e.Indent) */
      if (! r05_brackets_left(p+3, p[1], p[2]))
        continue;
      if (! r05_brackets_left(p+5, p[4], p[2]))
        continue;
      if (! r05_empty_hole(p[6], p[2]))
        continue;
      r05_close_evar(p+7, p[3], p[4]);
      r05_close_evar(p+9, p[5], p[6]);

      r05_reset_allocator();
      r05_alloc_open_bracket(p+11);
      r05_alloc_insert_pos(p+12);
      r05_alloc_close_bracket(p+13);
      r05_link_brackets(p[11], p[13]);
      r05_splice_evar(p[12], p+7);
      r05_splice_from_freelist(p[0]);
      r05_splice_to_freelist(p[0], p[2]);
      return;
    } while (0);

    do {
      /* e.Prefix: 7 */
      /* e.Indent: 9 */
      /* e.Expression: 11 */
      /* (e.Prefix) (e.Indent) e.Expression */
      if (! r05_brackets_left(p+3, p[1], p[2]))
        continue;
      if (! r05_brackets_left(p+5, p[4], p[2]))
        continue;
      r05_close_evar(p+7, p[3], p[4]);
      r05_close_evar(p+9, p[5], p[6]);
      r05_close_evar(p+11, p[6], p[2]);

      r05_reset_allocator();
      r05_alloc_open_call(p+13);
      r05_alloc_function(&r05f_DoExpression);
      r05_alloc_function(&r05f_FIRST);
      r05_alloc_open_bracket(p+14);
      r05_alloc_insert_pos(p+15);
      r05_alloc_close_bracket(p+16);
      r05_alloc_open_bracket(p+17);
      r05_alloc_insert_pos(p+18);
      r05_alloc_close_bracket(p+19);
      r05_alloc_insert_pos(p+20);
      r05_alloc_close_call(p+21);
      r05_push_stack(p[21]);
      r05_push_stack(p[13]);
      r05_link_brackets(p[17], p[19]);
      r05_link_brackets(p[14], p[16]);
      r05_splice_evar(p[15], p+9);
      r05_splice_evar(p[18], p+7);
      r05_splice_evar(p[20], p+11);
      r05_splice_from_freelist(p[0]);
      r05_splice_to_freelist(p[0], p[2]);
      return;
    } while (0);

    r05_recognition_impossible();
  }
}

R05_DEFINE_LOCAL_FUNCTION(DoExpression, "DoExpression") {
  R05_DEFINE_COND_FUNCTION(DoExpression, "DoExpression$1", 1)
  R05_DEFINE_COND_FUNCTION(DoExpression, "DoExpression$2", 2)
  R05_DEFINE_COND_FUNCTION(DoExpression, "DoExpression$3", 3)
  R05_DEFINE_COND_FUNCTION(DoExpression, "DoExpression$4", 4)
  R05_DEFINE_COND_FUNCTION(DoExpression, "DoExpression$5", 5)
  R05_DEFINE_COND_FUNCTION(DoExpression, "DoExpression$6", 6)
  R05_DEFINE_COND_FUNCTION(DoExpression, "DoExpression$7", 7)
  struct r05_node *p[54] = { 0 };

  r05_this_is_generated_function();
  switch (arg_begin->next->info.function->resume_entry >> 1) {
  case 0:
    p[0] = arg_begin;
    p[1] = arg_begin->next;
    p[2] = arg_end;

    do {
      /* e.Indent: 7 */
      /* e.OutLine: 9 */
      /* s.Pos: 11 */
      /* s.Pos (e.Indent) (e.OutLine) */
      if (! r05_brackets_right(p+3, p[1], p[2]))
        continue;
      if (! r05_brackets_right(p+5, p[1], p[3]))
        continue;
      r05_close_evar(p+7, p[5], p[6]);
      r05_close_evar(p+9, p[3], p[4]);
      if (! r05_svar_left(p+11, p[1], p[5]))
        continue;
      if (! r05_empty_hole(p[11], p[5]))
        continue;

      r05_reset_allocator();
      r05_alloc_open_bracket(p+12);
      r05_alloc_insert_pos(p+13);
      r05_alloc_close_bracket(p+14);
      r05_link_brackets(p[12], p[14]);
      r05_splice_evar(p[13], p+9);
      r05_splice_from_freelist(p[0]);
      r05_splice_to_freelist(p[0], p[2]);
      return;
    } while (0);

    do {
      /* e.Indent: 8 */
      /* e.OutLine: 10 */
      /* s.Pos: 12 */
      /* s.Pos (e.Indent) (e.OutLine) ';' */
      if (! r05_char_right(p+3, p[1], p[2], ';'))
        continue;
      if (! r05_brackets_right(p+4, p[1], p[3]))
        continue;
      if (! r05_brackets_right(p+6, p[1], p[4]))
        continue;
      r05_close_evar(p+8, p[6], p[7]);
      r05_close_evar(p+10, p[4], p[5]);
      if (! r05_svar_left(p+12, p[1], p[6]))
        continue;
      if (! r05_empty_hole(p[12], p[6]))
        continue;

      r05_reset_allocator();
      r05_alloc_open_bracket(p+13);
      r05_alloc_insert_pos(p+14);
      r05_alloc_char(';');
      r05_alloc_close_bracket(p+15);
      r05_link_brackets(p[13], p[15]);
      r05_splice_evar(p[14], p+10);
      r05_splice_from_freelist(p[0]);
      r05_splice_to_freelist(p[0], p[2]);
      return;
    } while (0);

    do {
      /* s.Pos: 3 */
      /* e.Indent: 8 */
      /* e.OutLine: 10 */
      /* t.NextTerm: 12 */
      /* e.Expr: 14 */
      /* s.Pos (e.Indent) (e.OutLine) t.NextTerm e.Expr */
      if (! r05_svar_left(p+3, p[1], p[2]))
        continue;
      if (! r05_brackets_left(p+4, p[3], p[2]))
        continue;
      if (! r05_brackets_left(p+6, p[5], p[2]))
        continue;
      r05_close_evar(p+8, p[4], p[5]);
      r05_close_evar(p+10, p[6], p[7]);
      if (! r05_tvar_left(p+12, p[7], p[2]))
        continue;
      r05_close_evar(p+14, p[13], p[2]);

      r05_reset_allocator();
      r05_alloc_open_call(p+16);
      r05_alloc_function(&c1);
      r05_alloc_open_call(p+17);
      r05_alloc_function(&r05f_InlineTerm);
      r05_alloc_tvar(p+12);
      r05_alloc_close_call(p+18);
      r05_alloc_close_call(p+19);
      r05_push_stack(p[19]);
      r05_push_stack(p[16]);
      r05_push_stack(p[18]);
      r05_push_stack(p[17]);
      r05_push_context(p, 16);
      r05_splice_from_freelist(p[2]);
      return;

  case 1:
      r05_pop_context(p, 16);
      p[16] = arg_begin;
      p[17] = arg_begin->next;
      p[18] = arg_end;

      do {
        /* s.Pos: 3 */
        /* e.Indent: 8 */
        /* e.OutLine: 10 */
        /* t.NextTerm: 12 */
        /* e.Expr: 14 */
        /* e.TextualTerm: 19 */
        /* e.TextualTerm */
        r05_close_evar(p+19, p[17], p[18]);

        r05_reset_allocator();
        r05_alloc_open_call(p+21);
        r05_alloc_function(&c2);
        r05_alloc_open_call(p+22);
        r05_alloc_function(&r05f_AppendTerm);
        r05_alloc_evar(p+10);
        r05_alloc_open_bracket(p+23);
        r05_alloc_evar(p+19);
        r05_alloc_close_bracket(p+24);
        r05_alloc_close_call(p+25);
        r05_alloc_close_call(p+26);
        r05_push_stack(p[26]);
        r05_push_stack(p[21]);
        r05_push_stack(p[25]);
        r05_push_stack(p[22]);
        r05_link_brackets(p[23], p[24]);
        r05_push_context(p, 21);
        r05_splice_from_freelist(p[2]);
        return;

  case 2:
        r05_pop_context(p, 21);
        p[21] = arg_begin;
        p[22] = arg_begin->next;
        p[23] = arg_end;

        do {
          /* s.Pos: 3 */
          /* e.Indent: 8 */
          /* e.OutLine: 10 */
          /* t.NextTerm: 12 */
          /* e.Expr: 14 */
          /* e.TextualTerm: 19 */
          /* e.NewOutLine: 24 */
          /* e.NewOutLine */
          r05_close_evar(p+24, p[22], p[23]);

          r05_reset_allocator();
          r05_alloc_open_call(p+26);
          r05_alloc_function(&c3);
          r05_alloc_open_call(p+27);
          r05_alloc_function(&r05f_LongLine);
          r05_alloc_evar(p+24);
          r05_alloc_close_call(p+28);
          r05_alloc_close_call(p+29);
          r05_push_stack(p[29]);
          r05_push_stack(p[26]);
          r05_push_stack(p[28]);
          r05_push_stack(p[27]);
          r05_push_context(p, 26);
          r05_splice_from_freelist(p[2]);
          return;

  case 3:
          r05_pop_context(p, 26);
          p[26] = arg_begin;
          p[27] = arg_begin->next;
          p[28] = arg_end;

          do {
            /* s.Pos: 3 */
            /* e.Indent: 8 */
            /* e.OutLine: 10 */
            /* t.NextTerm: 12 */
            /* e.Expr: 14 */
            /* e.TextualTerm: 19 */
            /* e.NewOutLine: 24 */
            /* True */
            if (! r05_function_left(p+29, p[27], p[28], &r05f_True))
              continue;
            if (! r05_empty_hole(p[29], p[28]))
              continue;

            r05_reset_allocator();
            r05_alloc_open_call(p+30);
            r05_alloc_function(&c4);
            r05_alloc_evar(p+8);
            r05_alloc_evar(p+19);
            r05_alloc_close_call(p+31);
            r05_push_stack(p[31]);
            r05_push_stack(p[30]);
            r05_push_context(p, 30);
            r05_splice_from_freelist(p[2]);
            return;

  case 4:
            r05_pop_context(p, 30);
            p[30] = arg_begin;
            p[31] = arg_begin->next;
            p[32] = arg_end;

            do {
              /* s.Pos: 3 */
              /* e.Indent: 8 */
              /* e.OutLine: 10 */
              /* t.NextTerm: 12 */
              /* e.Expr: 14 */
              /* e.TextualTerm: 19 */
              /* e.NewOutLine: 24 */
              /* e.OutLineTerm: 33 */
              /* e.OutLineTerm */
              r05_close_evar(p+33, p[31], p[32]);

              r05_reset_allocator();
              r05_alloc_open_call(p+35);
              r05_alloc_function(&c5);
              r05_alloc_open_call(p+36);
              r05_alloc_function(&r05f_LongLine);
              r05_alloc_evar(p+33);
              r05_alloc_close_call(p+37);
              r05_alloc_close_call(p+38);
              r05_push_stack(p[38]);
              r05_push_stack(p[35]);
              r05_push_stack(p[37]);
              r05_push_stack(p[36]);
              r05_push_context(p, 35);
              r05_splice_from_freelist(p[2]);
              return;

  case 5:
              r05_pop_context(p, 35);
              p[35] = arg_begin;
              p[36] = arg_begin->next;
              p[37] = arg_end;

              do {
                /* s.Pos: 3 */
                /* e.Indent: 8 */
                /* e.OutLine: 10 */
                /* t.NextTerm: 12 */
                /* e.Expr: 14 */
                /* e.TextualTerm: 19 */
                /* e.NewOutLine: 24 */
                /* e.OutLineTerm: 33 */
                /* True */
                if (! r05_function_left(p+38, p[36], p[37], &r05f_True))
                  continue;
                if (! r05_empty_hole(p[38], p[37]))
                  continue;

                r05_reset_allocator();
                r05_alloc_open_call(p+39);
                r05_alloc_function(&c6);
                r05_alloc_evar(p+14);
                r05_alloc_close_call(p+40);
                r05_push_stack(p[40]);
                r05_push_stack(p[39]);
                r05_push_context(p, 39);
                r05_splice_from_freelist(p[2]);
                return;

  case 6:
                r05_pop_context(p, 39);
                p[39] = arg_begin;
                p[40] = arg_begin->next;
                p[41] = arg_end;

                do {
                  /* s.Pos: 3 */
                  /* e.Indent: 8 */
                  /* e.OutLine: 10 */
                  /* t.NextTerm: 12 */
                  /* e.Expr: 14 */
                  /* e.TextualTerm: 19 */
                  /* e.NewOutLine: 24 */
                  /* e.OutLineTerm: 33 */
                  /* ';' */
                  if (! r05_char_left(p+42, p[40], p[41], ';'))
                    continue;
                  if (! r05_empty_hole(p[42], p[41]))
                    continue;

                  r05_reset_allocator();
                  r05_alloc_open_call(p+43);
                  r05_alloc_function(&r05f_MultilineTerm);
                  r05_alloc_svar(p+3);
                  r05_alloc_open_bracket(p+44);
                  r05_alloc_insert_pos(p+45);
                  r05_alloc_close_bracket(p+46);
                  r05_alloc_insert_pos(p+47);
                  r05_alloc_open_bracket(p+48);
                  r05_alloc_char(';');
                  r05_alloc_close_bracket(p+49);
                  r05_alloc_close_call(p+50);
                  r05_push_stack(p[50]);
                  r05_push_stack(p[43]);
                  r05_link_brackets(p[48], p[49]);
                  r05_link_brackets(p[44], p[46]);
                  r05_splice_evar(p[45], p+10);
                  r05_splice_evar(p[47], p+8);
                  r05_splice_tvar(p[47], p+12);
                  r05_splice_from_freelist(p[0]);
                  r05_splice_to_freelist(p[0], p[2]);
                  return;
                } while (0);
                r05_splice_to_freelist(p[39], p[41]);
              } while (0);

              do {
                /* s.Pos: 3 */
                /* e.Indent: 8 */
                /* e.OutLine: 10 */
                /* t.NextTerm: 12 */
                /* e.Expr: 14 */
                /* e.TextualTerm: 19 */
                /* e.NewOutLine: 24 */
                /* e.OutLineTerm: 33 */
                /* True */
                if (! r05_function_left(p+38, p[36], p[37], &r05f_True))
                  continue;
                if (! r05_empty_hole(p[38], p[37]))
                  continue;

                r05_reset_allocator();
                r05_alloc_open_call(p+39);
                r05_alloc_function(&c7);
                r05_alloc_evar(p+14);
                r05_alloc_close_call(p+40);
                r05_push_stack(p[40]);
                r05_push_stack(p[39]);
                r05_push_context(p, 39);
                r05_splice_from_freelist(p[2]);
                return;

  case 7:
                r05_pop_context(p, 39);
                p[39] = arg_begin;
                p[40] = arg_begin->next;
                p[41] = arg_end;

                do {
                  /* s.Pos: 3 */
                  /* e.Indent: 8 */
                  /* e.OutLine: 10 */
                  /* t.NextTerm: 12 */
                  /* e.Expr: 14 */
                  /* e.TextualTerm: 19 */
                  /* e.NewOutLine: 24 */
                  /* e.OutLineTerm: 33 */
                  /*  */
                  if (! r05_empty_hole(p[40], p[41]))
                    continue;

                  r05_reset_allocator();
                  r05_alloc_open_call(p+42);
                  r05_alloc_function(&r05f_MultilineTerm);
                  r05_alloc_svar(p+3);
                  r05_alloc_open_bracket(p+43);
                  r05_alloc_insert_pos(p+44);
                  r05_alloc_close_bracket(p+45);
                  r05_alloc_insert_pos(p+46);
                  r05_alloc_open_bracket(p+47);
                  r05_alloc_close_bracket(p+48);
                  r05_alloc_close_call(p+49);
                  r05_push_stack(p[49]);
                  r05_push_stack(p[42]);
                  r05_link_brackets(p[47], p[48]);
                  r05_link_brackets(p[43], p[45]);
                  r05_splice_evar(p[44], p+10);
                  r05_splice_evar(p[46], p+8);
                  r05_splice_tvar(p[46], p+12);
                  r05_splice_from_freelist(p[0]);
                  r05_splice_to_freelist(p[0], p[2]);
                  return;
                } while (0);
                r05_splice_to_freelist(p[39], p[41]);
              } while (0);

              do {
                /* s.Pos: 3 */
                /* e.Indent: 8 */
                /* e.OutLine: 10 */
                /* t.NextTerm: 12 */
                /* e.Expr: 14 */
                /* e.TextualTerm: 19 */
                /* e.NewOutLine: 24 */
                /* e.OutLineTerm: 33 */
                /* True */
                if (! r05_function_left(p+38, p[36], p[37], &r05f_True))
                  continue;
                if (! r05_empty_hole(p[38], p[37]))
                  continue;

                r05_reset_allocator();
                r05_alloc_open_call(p+39);
                r05_alloc_function(&r05f_MultilineTerm);
                r05_alloc_svar(p+3);
                r05_alloc_open_bracket(p+40);
                r05_alloc_insert_pos(p+41);
                r05_alloc_close_bracket(p+42);
                r05_alloc_insert_pos(p+43);
                r05_alloc_open_bracket(p+44);
                r05_alloc_close_bracket(p+45);
                r05_alloc_close_call(p+46);
                r05_alloc_open_call(p+47);
                r05_alloc_function(&r05f_DoExpression);
                r05_alloc_function(&r05f_NEXT);
                r05_alloc_open_bracket(p+48);
                r05_alloc_evar(p+8);
                r05_alloc_close_bracket(p+49);
                r05_alloc_open_bracket(p+50);
                r05_alloc_evar(p+8);
                r05_alloc_close_bracket(p+51);
                r05_alloc_insert_pos(p+52);
                r05_alloc_close_call(p+53);
                r05_push_stack(p[53]);
                r05_push_stack(p[47]);
                r05_link_brackets(p[50], p[51]);
                r05_link_brackets(p[48], p[49]);
                r05_push_stack(p[46]);
                r05_push_stack(p[39]);
                r05_link_brackets(p[44], p[45]);
                r05_link_brackets(p[40], p[42]);
                r05_splice_evar(p[41], p+10);
                r05_splice_evar(p[43], p+8);
                r05_splice_tvar(p[43], p+12);
                r05_splice_evar(p[52], p+14);
                r05_splice_from_freelist(p[0]);
                r05_splice_to_freelist(p[0], p[2]);
                return;
              } while (0);

              do {
                /* s.Pos: 3 */
                /* e.Indent: 8 */
                /* e.OutLine: 10 */
                /* t.NextTerm: 12 */
                /* e.Expr: 14 */
                /* e.TextualTerm: 19 */
                /* e.NewOutLine: 24 */
                /* e.OutLineTerm: 33 */
                /* False */
                if (! r05_function_left(p+38, p[36], p[37], &r05f_False))
                  continue;
                if (! r05_empty_hole(p[38], p[37]))
                  continue;

                r05_reset_allocator();
                r05_alloc_open_bracket(p+39);
                r05_alloc_insert_pos(p+40);
                r05_alloc_close_bracket(p+41);
                r05_alloc_open_call(p+42);
                r05_alloc_function(&r05f_DoExpression);
                r05_alloc_function(&r05f_NEXT);
                r05_alloc_open_bracket(p+43);
                r05_alloc_insert_pos(p+44);
                r05_alloc_close_bracket(p+45);
                r05_alloc_open_bracket(p+46);
                r05_alloc_insert_pos(p+47);
                r05_alloc_close_bracket(p+48);
                r05_alloc_insert_pos(p+49);
                r05_alloc_close_call(p+50);
                r05_push_stack(p[50]);
                r05_push_stack(p[42]);
                r05_link_brackets(p[46], p[48]);
                r05_link_brackets(p[43], p[45]);
                r05_link_brackets(p[39], p[41]);
                r05_splice_evar(p[40], p+10);
                r05_splice_evar(p[44], p+8);
                r05_splice_evar(p[47], p+33);
                r05_splice_evar(p[49], p+14);
                r05_splice_from_freelist(p[0]);
                r05_splice_to_freelist(p[0], p[2]);
                return;
              } while (0);

              r05_recognition_impossible();
            } while (0);
            r05_splice_to_freelist(p[30], p[32]);
          } while (0);

          do {
            /* s.Pos: 3 */
            /* e.Indent: 8 */
            /* e.OutLine: 10 */
            /* t.NextTerm: 12 */
            /* e.Expr: 14 */
            /* e.TextualTerm: 19 */
            /* e.NewOutLine: 24 */
            /* False */
            if (! r05_function_left(p+29, p[27], p[28], &r05f_False))
              continue;
            if (! r05_empty_hole(p[29], p[28]))
              continue;

            r05_reset_allocator();
            r05_alloc_open_call(p+30);
            r05_alloc_function(&r05f_DoExpression);
            r05_alloc_function(&r05f_NEXT);
            r05_alloc_open_bracket(p+31);
            r05_alloc_insert_pos(p+32);
            r05_alloc_close_bracket(p+33);
            r05_alloc_open_bracket(p+34);
            r05_alloc_insert_pos(p+35);
            r05_alloc_close_bracket(p+36);
            r05_alloc_insert_pos(p+37);
            r05_alloc_close_call(p+38);
            r05_push_stack(p[38]);
            r05_push_stack(p[30]);
            r05_link_brackets(p[34], p[36]);
            r05_link_brackets(p[31], p[33]);
            r05_splice_evar(p[32], p+8);
            r05_splice_evar(p[35], p+24);
            r05_splice_evar(p[37], p+14);
            r05_splice_from_freelist(p[0]);
            r05_splice_to_freelist(p[0], p[2]);
            return;
          } while (0);

          r05_recognition_impossible();
        } while (0);
        r05_splice_to_freelist(p[21], p[23]);
      } while (0);
      r05_splice_to_freelist(p[16], p[18]);
    } while (0);

    r05_recognition_impossible();
  }
}

R05_DEFINE_LOCAL_FUNCTION(AppendTerm, "AppendTerm") {
  struct r05_node *p[12] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /* e.String: 7 */
    /* e.Term: 9 */
    /* e.String '\'' ('\'' e.Term) */
    if (! r05_brackets_right(p+3, p[1], p[2]))
      continue;
    if (! r05_char_left(p+5, p[3], p[4], '\''))
      continue;
    if (! r05_char_right(p+6, p[1], p[3], '\''))
      continue;
    r05_close_evar(p+7, p[1], p[6]);
    r05_close_evar(p+9, p[5], p[4]);

    r05_reset_allocator();
    r05_alloc_insert_pos(p+11);
    r05_splice_evar(p[11], p+7);
    r05_splice_evar(p[11], p+9);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  do {
    /* e.String: 6 */
    /* e.Term: 8 */
    /* e.String ' ' (e.Term) */
    if (! r05_brackets_right(p+3, p[1], p[2]))
      continue;
    if (! r05_char_right(p+5, p[1], p[3], ' '))
      continue;
    r05_close_evar(p+6, p[1], p[5]);
    r05_close_evar(p+8, p[3], p[4]);

    r05_reset_allocator();
    r05_alloc_insert_pos(p+10);
    r05_alloc_char(' ');
    r05_alloc_insert_pos(p+11);
    r05_splice_evar(p[10], p+6);
    r05_splice_evar(p[11], p+8);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  do {
    /* e.String: 5 */
    /* e.Term: 7 */
    /* e.String (e.Term) */
    if (! r05_brackets_right(p+3, p[1], p[2]))
      continue;
    r05_close_evar(p+5, p[1], p[3]);
    r05_close_evar(p+7, p[3], p[4]);

    r05_reset_allocator();
    r05_alloc_insert_pos(p+9);
    r05_alloc_char(' ');
    r05_alloc_insert_pos(p+10);
    r05_splice_evar(p[9], p+5);
    r05_splice_evar(p[10], p+7);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(InlineTerm, "InlineTerm") {
  struct r05_node *p[11] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /* s.Type: 5 */
    /* e.Value: 6 */
    /* (s.Type e.Value) */
    if (! r05_brackets_left(p+3, p[1], p[2]))
      continue;
    if (! r05_empty_hole(p[4], p[2]))
      continue;
    if (! r05_svar_left(p+5, p[3], p[4]))
      continue;
    r05_close_evar(p+6, p[5], p[4]);

    r05_reset_allocator();
    r05_alloc_open_call(p+8);
    r05_alloc_function(&r05f_PlainTerm);
    r05_alloc_svar(p+5);
    r05_alloc_insert_pos(p+9);
    r05_alloc_close_call(p+10);
    r05_push_stack(p[10]);
    r05_push_stack(p[8]);
    r05_splice_evar(p[9], p+6);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  do {
    /* ';' */
    if (! r05_char_left(p+3, p[1], p[2], ';'))
      continue;
    if (! r05_empty_hole(p[3], p[2]))
      continue;

    r05_reset_allocator();
    r05_alloc_char(';');
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(MultilineTerm, "MultilineTerm") {
  struct r05_node *p[28] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /* e.Prefix: 8 */
    /* e.Suffix: 10 */
    /* t.Term: 12 */
    /* e.Indent: 14 */
    /* FIRST (e.Prefix) e.Indent t.Term (e.Suffix) */
    if (! r05_function_left(p+3, p[1], p[2], &r05f_FIRST))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[2]))
      continue;
    if (! r05_brackets_right(p+6, p[5], p[2]))
      continue;
    r05_close_evar(p+8, p[4], p[5]);
    r05_close_evar(p+10, p[6], p[7]);
    if (! r05_tvar_right(p+12, p[5], p[6]))
      continue;
    r05_close_evar(p+14, p[5], p[12]);

    r05_reset_allocator();
    r05_alloc_open_call(p+16);
    r05_alloc_function(&r05f_MultilineTermm_Prefix);
    r05_alloc_open_bracket(p+17);
    r05_alloc_insert_pos(p+18);
    r05_alloc_close_bracket(p+19);
    r05_alloc_insert_pos(p+20);
    r05_alloc_open_bracket(p+21);
    r05_alloc_insert_pos(p+22);
    r05_alloc_close_bracket(p+23);
    r05_alloc_close_call(p+24);
    r05_push_stack(p[24]);
    r05_push_stack(p[16]);
    r05_link_brackets(p[21], p[23]);
    r05_link_brackets(p[17], p[19]);
    r05_splice_evar(p[18], p+8);
    r05_splice_evar(p[20], p+14);
    r05_splice_tvar(p[20], p+12);
    r05_splice_evar(p[22], p+10);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  do {
    /* e.Prefix: 8 */
    /* e.Suffix: 10 */
    /* t.Term: 12 */
    /* e.Indent: 14 */
    /* NEXT (e.Prefix) e.Indent t.Term (e.Suffix) */
    if (! r05_function_left(p+3, p[1], p[2], &r05f_NEXT))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[2]))
      continue;
    if (! r05_brackets_right(p+6, p[5], p[2]))
      continue;
    r05_close_evar(p+8, p[4], p[5]);
    r05_close_evar(p+10, p[6], p[7]);
    if (! r05_tvar_right(p+12, p[5], p[6]))
      continue;
    r05_close_evar(p+14, p[5], p[12]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+16);
    r05_alloc_insert_pos(p+17);
    r05_alloc_close_bracket(p+18);
    r05_alloc_open_call(p+19);
    r05_alloc_function(&r05f_MultilineTermm_Prefix);
    r05_alloc_open_bracket(p+20);
    r05_alloc_insert_pos(p+21);
    r05_alloc_close_bracket(p+22);
    r05_alloc_evar(p+14);
    r05_alloc_insert_pos(p+23);
    r05_alloc_open_bracket(p+24);
    r05_alloc_insert_pos(p+25);
    r05_alloc_close_bracket(p+26);
    r05_alloc_close_call(p+27);
    r05_push_stack(p[27]);
    r05_push_stack(p[19]);
    r05_link_brackets(p[24], p[26]);
    r05_link_brackets(p[20], p[22]);
    r05_link_brackets(p[16], p[18]);
    r05_splice_evar(p[17], p+8);
    r05_splice_evar(p[21], p+14);
    r05_splice_tvar(p[23], p+12);
    r05_splice_evar(p[25], p+10);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(MultilineTermm_Prefix, "MultilineTerm-Prefix") {
  R05_DEFINE_COND_FUNCTION(MultilineTermm_Prefix, "MultilineTerm-Prefix$1", 1)
  struct r05_node *p[44] = { 0 };

  r05_this_is_generated_function();
  switch (arg_begin->next->info.function->resume_entry >> 1) {
  case 0:
    p[0] = arg_begin;
    p[1] = arg_begin->next;
    p[2] = arg_end;

    do {
      /* e.Prefix: 7 */
      /* e.Suffix: 9 */
      /* t.Term: 11 */
      /* e.Indent: 13 */
      /* (e.Prefix) e.Indent t.Term (e.Suffix) */
      if (! r05_brackets_left(p+3, p[1], p[2]))
        continue;
      if (! r05_brackets_right(p+5, p[4], p[2]))
        continue;
      r05_close_evar(p+7, p[3], p[4]);
      r05_close_evar(p+9, p[5], p[6]);
      if (! r05_tvar_right(p+11, p[4], p[5]))
        continue;
      r05_close_evar(p+13, p[4], p[11]);

      r05_reset_allocator();
      r05_alloc_open_call(p+15);
      r05_alloc_function(&c1);
      r05_alloc_tvar(p+11);
      r05_alloc_close_call(p+16);
      r05_push_stack(p[16]);
      r05_push_stack(p[15]);
      r05_push_context(p, 15);
      r05_splice_from_freelist(p[2]);
      return;

  case 1:
      r05_pop_context(p, 15);
      p[15] = arg_begin;
      p[16] = arg_begin->next;
      p[17] = arg_end;

      do {
        /* e.Prefix: 7 */
        /* e.Suffix: 9 */
        /* t.Term: 11 */
        /* e.Indent: 13 */
        /* e.Expr: 21 */
        /* (Brackets e.Expr) */
        if (! r05_brackets_left(p+18, p[16], p[17]))
          continue;
        if (! r05_function_left(p+20, p[18], p[19], &r05f_Brackets))
          continue;
        if (! r05_empty_hole(p[19], p[17]))
          continue;
        r05_close_evar(p+21, p[20], p[19]);

        r05_reset_allocator();
        r05_alloc_open_bracket(p+23);
        r05_alloc_insert_pos(p+24);
        r05_alloc_char('(');
        r05_alloc_close_bracket(p+25);
        r05_alloc_open_call(p+26);
        r05_alloc_function(&r05f_Expression);
        r05_alloc_open_bracket(p+27);
        r05_alloc_insert_pos(p+28);
        r05_alloc_chars("  ", 2);
        r05_alloc_close_bracket(p+29);
        r05_alloc_open_bracket(p+30);
        r05_alloc_evar(p+13);
        r05_alloc_chars("  ", 2);
        r05_alloc_close_bracket(p+31);
        r05_alloc_insert_pos(p+32);
        r05_alloc_close_call(p+33);
        r05_alloc_open_bracket(p+34);
        r05_alloc_evar(p+13);
        r05_alloc_char(')');
        r05_alloc_insert_pos(p+35);
        r05_alloc_close_bracket(p+36);
        r05_link_brackets(p[34], p[36]);
        r05_push_stack(p[33]);
        r05_push_stack(p[26]);
        r05_link_brackets(p[30], p[31]);
        r05_link_brackets(p[27], p[29]);
        r05_link_brackets(p[23], p[25]);
        r05_splice_evar(p[24], p+7);
        r05_splice_evar(p[28], p+13);
        r05_splice_evar(p[32], p+21);
        r05_splice_evar(p[35], p+9);
        r05_splice_from_freelist(p[0]);
        r05_splice_to_freelist(p[0], p[2]);
        return;
      } while (0);

      do {
        /* e.Prefix: 7 */
        /* e.Suffix: 9 */
        /* t.Term: 11 */
        /* e.Indent: 13 */
        /* t.SrcPos: 21 */
        /* e.Function: 25 */
        /* e.Expr: 27 */
        /* (Call t.SrcPos (e.Function) e.Expr) */
        if (! r05_brackets_left(p+18, p[16], p[17]))
          continue;
        if (! r05_function_left(p+20, p[18], p[19], &r05f_Call))
          continue;
        if (! r05_empty_hole(p[19], p[17]))
          continue;
        if (! r05_tvar_left(p+21, p[20], p[19]))
          continue;
        if (! r05_brackets_left(p+23, p[22], p[19]))
          continue;
        r05_close_evar(p+25, p[23], p[24]);
        r05_close_evar(p+27, p[24], p[19]);

        r05_reset_allocator();
        r05_alloc_open_bracket(p+29);
        r05_alloc_insert_pos(p+30);
        r05_alloc_char('<');
        r05_alloc_insert_pos(p+31);
        r05_alloc_close_bracket(p+32);
        r05_alloc_open_call(p+33);
        r05_alloc_function(&r05f_Expression);
        r05_alloc_open_bracket(p+34);
        r05_alloc_insert_pos(p+35);
        r05_alloc_chars("  ", 2);
        r05_alloc_close_bracket(p+36);
        r05_alloc_open_bracket(p+37);
        r05_alloc_evar(p+13);
        r05_alloc_chars("  ", 2);
        r05_alloc_close_bracket(p+38);
        r05_alloc_insert_pos(p+39);
        r05_alloc_close_call(p+40);
        r05_alloc_open_bracket(p+41);
        r05_alloc_evar(p+13);
        r05_alloc_char('>');
        r05_alloc_insert_pos(p+42);
        r05_alloc_close_bracket(p+43);
        r05_link_brackets(p[41], p[43]);
        r05_push_stack(p[40]);
        r05_push_stack(p[33]);
        r05_link_brackets(p[37], p[38]);
        r05_link_brackets(p[34], p[36]);
        r05_link_brackets(p[29], p[32]);
        r05_splice_evar(p[30], p+7);
        r05_splice_evar(p[31], p+25);
        r05_splice_evar(p[35], p+13);
        r05_splice_evar(p[39], p+27);
        r05_splice_evar(p[42], p+9);
        r05_splice_from_freelist(p[0]);
        r05_splice_to_freelist(p[0], p[2]);
        return;
      } while (0);

      do {
        /* e.Prefix: 7 */
        /* e.Suffix: 9 */
        /* t.Term: 11 */
        /* e.Indent: 13 */
        /* s.Type: 20 */
        /* e.Value: 21 */
        /* (s.Type e.Value) */
        if (! r05_brackets_left(p+18, p[16], p[17]))
          continue;
        if (! r05_empty_hole(p[19], p[17]))
          continue;
        if (! r05_svar_left(p+20, p[18], p[19]))
          continue;
        r05_close_evar(p+21, p[20], p[19]);

        r05_reset_allocator();
        r05_alloc_open_bracket(p+23);
        r05_alloc_insert_pos(p+24);
        r05_alloc_open_call(p+25);
        r05_alloc_function(&r05f_PlainTerm);
        r05_alloc_svar(p+20);
        r05_alloc_insert_pos(p+26);
        r05_alloc_close_call(p+27);
        r05_alloc_insert_pos(p+28);
        r05_alloc_close_bracket(p+29);
        r05_link_brackets(p[23], p[29]);
        r05_push_stack(p[27]);
        r05_push_stack(p[25]);
        r05_splice_evar(p[24], p+7);
        r05_splice_evar(p[26], p+21);
        r05_splice_evar(p[28], p+9);
        r05_splice_from_freelist(p[0]);
        r05_splice_to_freelist(p[0], p[2]);
        return;
      } while (0);

      r05_recognition_impossible();
    } while (0);

    r05_recognition_impossible();
  }
}

R05_DEFINE_LOCAL_FUNCTION(PlainTerm, "PlainTerm") {
  struct r05_node *p[19] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /* e.Chars: 5 */
    /* Symbol Word e.Chars */
    if (! r05_function_left(p+3, p[1], p[2], &r05f_Symbol))
      continue;
    if (! r05_function_left(p+4, p[3], p[2], &r05f_Word))
      continue;
    r05_close_evar(p+5, p[4], p[2]);

    r05_reset_allocator();
    r05_alloc_open_call(p+7);
    r05_alloc_function(&r05f_PlainCompound);
    r05_alloc_insert_pos(p+8);
    r05_alloc_close_call(p+9);
    r05_push_stack(p[9]);
    r05_push_stack(p[7]);
    r05_splice_evar(p[8], p+5);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  do {
    /* s.Number: 5 */
    /* Symbol Number s.Number */
    if (! r05_function_left(p+3, p[1], p[2], &r05f_Symbol))
      continue;
    if (! r05_function_left(p+4, p[3], p[2], &r05f_Number))
      continue;
    if (! r05_svar_left(p+5, p[4], p[2]))
      continue;
    if (! r05_empty_hole(p[5], p[2]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_call(p+6);
    r05_alloc_function(&r05f_PlainNumber);
    r05_alloc_svar(p+5);
    r05_alloc_close_call(p+7);
    r05_push_stack(p[7]);
    r05_push_stack(p[6]);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  do {
    /* s.Char: 5 */
    /* Symbol Char s.Char */
    if (! r05_function_left(p+3, p[1], p[2], &r05f_Symbol))
      continue;
    if (! r05_function_left(p+4, p[3], p[2], &r05f_Char))
      continue;
    if (! r05_svar_left(p+5, p[4], p[2]))
      continue;
    if (! r05_empty_hole(p[5], p[2]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_call(p+6);
    r05_alloc_function(&r05f_PlainChar);
    r05_alloc_svar(p+5);
    r05_alloc_close_call(p+7);
    r05_push_stack(p[7]);
    r05_push_stack(p[6]);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  do {
    /* t.SrcPos: 4 */
    /* s.Type: 6 */
    /* e.Index: 7 */
    /* Variable t.SrcPos s.Type e.Index */
    if (! r05_function_left(p+3, p[1], p[2], &r05f_Variable))
      continue;
    if (! r05_tvar_left(p+4, p[3], p[2]))
      continue;
    if (! r05_svar_left(p+6, p[5], p[2]))
      continue;
    r05_close_evar(p+7, p[6], p[2]);

    r05_reset_allocator();
    r05_alloc_open_call(p+9);
    r05_alloc_function(&r05f_PlainVariable);
    r05_alloc_insert_pos(p+10);
    r05_alloc_svar(p+6);
    r05_alloc_insert_pos(p+11);
    r05_alloc_close_call(p+12);
    r05_push_stack(p[12]);
    r05_push_stack(p[9]);
    r05_splice_tvar(p[10], p+4);
    r05_splice_evar(p[11], p+7);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  do {
    /* t.SrcPos: 4 */
    /* e.Function: 8 */
    /* e.Arg: 10 */
    /* Call t.SrcPos (e.Function) e.Arg */
    if (! r05_function_left(p+3, p[1], p[2], &r05f_Call))
      continue;
    if (! r05_tvar_left(p+4, p[3], p[2]))
      continue;
    if (! r05_brackets_left(p+6, p[5], p[2]))
      continue;
    r05_close_evar(p+8, p[6], p[7]);
    r05_close_evar(p+10, p[7], p[2]);

    r05_reset_allocator();
    r05_alloc_open_call(p+12);
    r05_alloc_function(&r05f_PlainCall);
    r05_alloc_insert_pos(p+13);
    r05_alloc_open_bracket(p+14);
    r05_alloc_insert_pos(p+15);
    r05_alloc_close_bracket(p+16);
    r05_alloc_insert_pos(p+17);
    r05_alloc_close_call(p+18);
    r05_push_stack(p[18]);
    r05_push_stack(p[12]);
    r05_link_brackets(p[14], p[16]);
    r05_splice_tvar(p[13], p+4);
    r05_splice_evar(p[15], p+8);
    r05_splice_evar(p[17], p+10);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  do {
    /* e.Expr: 4 */
    /* Brackets e.Expr */
    if (! r05_function_left(p+3, p[1], p[2], &r05f_Brackets))
      continue;
    r05_close_evar(p+4, p[3], p[2]);

    r05_reset_allocator();
    r05_alloc_open_call(p+6);
    r05_alloc_function(&r05f_PlainBrackets);
    r05_alloc_insert_pos(p+7);
    r05_alloc_close_call(p+8);
    r05_push_stack(p[8]);
    r05_push_stack(p[6]);
    r05_splice_evar(p[7], p+4);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(PlainCompound, "PlainCompound") {
  R05_DEFINE_COND_FUNCTION(PlainCompound, "PlainCompound$1", 1)
  struct r05_node *p[12] = { 0 };

  r05_this_is_generated_function();
  switch (arg_begin->next->info.function->resume_entry >> 1) {
  case 0:
    p[0] = arg_begin;
    p[1] = arg_begin->next;
    p[2] = arg_end;

    do {
      /* e.Chars: 3 */
      /* e.Chars */
      r05_close_evar(p+3, p[1], p[2]);

      r05_reset_allocator();
      r05_alloc_open_call(p+5);
      r05_alloc_function(&c1);
      r05_alloc_open_call(p+6);
      r05_alloc_function(&r05f_IsIdent);
      r05_alloc_evar(p+3);
      r05_alloc_close_call(p+7);
      r05_alloc_close_call(p+8);
      r05_push_stack(p[8]);
      r05_push_stack(p[5]);
      r05_push_stack(p[7]);
      r05_push_stack(p[6]);
      r05_push_context(p, 5);
      r05_splice_from_freelist(p[2]);
      return;

  case 1:
      r05_pop_context(p, 5);
      p[5] = arg_begin;
      p[6] = arg_begin->next;
      p[7] = arg_end;

      do {
        /* e.Chars: 3 */
        /* e.Textual: 9 */
        /* True e.Textual */
        if (! r05_function_left(p+8, p[6], p[7], &r05f_True))
          continue;
        r05_close_evar(p+9, p[8], p[7]);

        r05_reset_allocator();
        r05_alloc_insert_pos(p+11);
        r05_splice_evar(p[11], p+9);
        r05_splice_from_freelist(p[0]);
        r05_splice_to_freelist(p[0], p[2]);
        return;
      } while (0);
      r05_splice_to_freelist(p[5], p[7]);
    } while (0);

    do {
      /* e.Chars: 3 */
      /* e.Chars */
      r05_close_evar(p+3, p[1], p[2]);

      r05_reset_allocator();
      r05_alloc_char('\"');
      r05_alloc_open_call(p+5);
      r05_alloc_function(&r05f_DoCompound);
      r05_alloc_insert_pos(p+6);
      r05_alloc_close_call(p+7);
      r05_alloc_char('\"');
      r05_push_stack(p[7]);
      r05_push_stack(p[5]);
      r05_splice_evar(p[6], p+3);
      r05_splice_from_freelist(p[0]);
      r05_splice_to_freelist(p[0], p[2]);
      return;
    } while (0);
  }
}

R05_DEFINE_LOCAL_FUNCTION(DoCompound, "DoCompound") {
  struct r05_node *p[11] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /* s.Char: 3 */
    /* e.Chars: 4 */
    /* s.Char e.Chars */
    if (! r05_svar_left(p+3, p[1], p[2]))
      continue;
    r05_close_evar(p+4, p[3], p[2]);

    r05_reset_allocator();
    r05_alloc_open_call(p+6);
    r05_alloc_function(&r05f_CharRep);
    r05_alloc_svar(p+3);
    r05_alloc_close_call(p+7);
    r05_alloc_open_call(p+8);
    r05_alloc_function(&r05f_DoCompound);
    r05_alloc_insert_pos(p+9);
    r05_alloc_close_call(p+10);
    r05_push_stack(p[10]);
    r05_push_stack(p[8]);
    r05_push_stack(p[7]);
    r05_push_stack(p[6]);
    r05_splice_evar(p[9], p+4);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  do {
    /*  */
    if (! r05_empty_hole(p[1], p[2]))
      continue;

    r05_reset_allocator();
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(IsIdent, "IsIdent") {
  R05_DEFINE_COND_FUNCTION(IsIdent, "IsIdent$1", 1)
  struct r05_node *p[17] = { 0 };

  r05_this_is_generated_function();
  switch (arg_begin->next->info.function->resume_entry >> 1) {
  case 0:
    p[0] = arg_begin;
    p[1] = arg_begin->next;
    p[2] = arg_end;

    do {
      /* s.Initial: 3 */
      /* e.Tail: 4 */
      /* s.Initial e.Tail */
      if (! r05_svar_left(p+3, p[1], p[2]))
        continue;
      r05_close_evar(p+4, p[3], p[2]);

      r05_reset_allocator();
      r05_alloc_open_call(p+6);
      r05_alloc_function(&c1);
      r05_alloc_open_call(p+7);
      r05_alloc_function(&r05f_Type);
      r05_alloc_svar(p+3);
      r05_alloc_close_call(p+8);
      r05_alloc_close_call(p+9);
      r05_push_stack(p[9]);
      r05_push_stack(p[6]);
      r05_push_stack(p[8]);
      r05_push_stack(p[7]);
      r05_push_context(p, 6);
      r05_splice_from_freelist(p[2]);
      return;

  case 1:
      r05_pop_context(p, 6);
      p[6] = arg_begin;
      p[7] = arg_begin->next;
      p[8] = arg_end;

      do {
        /* s.Initial: 3, 10 */
        /* e.Tail: 4 */
        /* s.SubType: 11 */
        /* 'L' s.SubType s.Initial */
        if (! r05_char_left(p+9, p[7], p[8], 'L'))
          continue;
        if (! r05_repeated_svar_right(p+10, p[9], p[8], p+3))
          continue;
        if (! r05_svar_left(p+11, p[9], p[10]))
          continue;
        if (! r05_empty_hole(p[11], p[10]))
          continue;

        r05_reset_allocator();
        r05_alloc_open_call(p+12);
        r05_alloc_function(&r05f_DoIsIdent);
        r05_alloc_open_bracket(p+13);
        r05_alloc_svar(p+3);
        r05_alloc_close_bracket(p+14);
        r05_alloc_insert_pos(p+15);
        r05_alloc_close_call(p+16);
        r05_push_stack(p[16]);
        r05_push_stack(p[12]);
        r05_link_brackets(p[13], p[14]);
        r05_splice_evar(p[15], p+4);
        r05_splice_from_freelist(p[0]);
        r05_splice_to_freelist(p[0], p[2]);
        return;
      } while (0);
      r05_splice_to_freelist(p[6], p[8]);
    } while (0);

    do {
      /* e.Other: 3 */
      /* e.Other */
      r05_close_evar(p+3, p[1], p[2]);

      r05_reset_allocator();
      r05_alloc_function(&r05f_False);
      r05_splice_from_freelist(p[0]);
      r05_splice_to_freelist(p[0], p[2]);
      return;
    } while (0);
  }
}

R05_DEFINE_LOCAL_FUNCTION(DoIsIdent, "DoIsIdent") {
  R05_DEFINE_COND_FUNCTION(DoIsIdent, "DoIsIdent$1", 1)
  R05_DEFINE_COND_FUNCTION(DoIsIdent, "DoIsIdent$2", 2)
  struct r05_node *p[22] = { 0 };

  r05_this_is_generated_function();
  switch (arg_begin->next->info.function->resume_entry >> 1) {
  case 0:
    p[0] = arg_begin;
    p[1] = arg_begin->next;
    p[2] = arg_end;

    do {
      /* e.Valid: 6 */
      /* e.Tail: 8 */
      /* (e.Valid) '-' e.Tail */
      if (! r05_brackets_left(p+3, p[1], p[2]))
        continue;
      if (! r05_char_left(p+5, p[4], p[2], '-'))
        continue;
      r05_close_evar(p+6, p[3], p[4]);
      r05_close_evar(p+8, p[5], p[2]);

      r05_reset_allocator();
      r05_alloc_open_call(p+10);
      r05_alloc_function(&r05f_DoIsIdent);
      r05_alloc_open_bracket(p+11);
      r05_alloc_insert_pos(p+12);
      r05_alloc_char('-');
      r05_alloc_close_bracket(p+13);
      r05_alloc_insert_pos(p+14);
      r05_alloc_close_call(p+15);
      r05_push_stack(p[15]);
      r05_push_stack(p[10]);
      r05_link_brackets(p[11], p[13]);
      r05_splice_evar(p[12], p+6);
      r05_splice_evar(p[14], p+8);
      r05_splice_from_freelist(p[0]);
      r05_splice_to_freelist(p[0], p[2]);
      return;
    } while (0);

    do {
      /* e.Valid: 6 */
      /* e.Tail: 8 */
      /* (e.Valid) '_' e.Tail */
      if (! r05_brackets_left(p+3, p[1], p[2]))
        continue;
      if (! r05_char_left(p+5, p[4], p[2], '_'))
        continue;
      r05_close_evar(p+6, p[3], p[4]);
      r05_close_evar(p+8, p[5], p[2]);

      r05_reset_allocator();
      r05_alloc_open_call(p+10);
      r05_alloc_function(&r05f_DoIsIdent);
      r05_alloc_open_bracket(p+11);
      r05_alloc_insert_pos(p+12);
      r05_alloc_char('_');
      r05_alloc_close_bracket(p+13);
      r05_alloc_insert_pos(p+14);
      r05_alloc_close_call(p+15);
      r05_push_stack(p[15]);
      r05_push_stack(p[10]);
      r05_link_brackets(p[11], p[13]);
      r05_splice_evar(p[12], p+6);
      r05_splice_evar(p[14], p+8);
      r05_splice_from_freelist(p[0]);
      r05_splice_to_freelist(p[0], p[2]);
      return;
    } while (0);

    do {
      /* e.Valid: 5 */
      /* s.Next: 7 */
      /* e.Tail: 8 */
      /* (e.Valid) s.Next e.Tail */
      if (! r05_brackets_left(p+3, p[1], p[2]))
        continue;
      r05_close_evar(p+5, p[3], p[4]);
      if (! r05_svar_left(p+7, p[4], p[2]))
        continue;
      r05_close_evar(p+8, p[7], p[2]);

      r05_reset_allocator();
      r05_alloc_open_call(p+10);
      r05_alloc_function(&c1);
      r05_alloc_open_call(p+11);
      r05_alloc_function(&r05f_Type);
      r05_alloc_svar(p+7);
      r05_alloc_close_call(p+12);
      r05_alloc_close_call(p+13);
      r05_push_stack(p[13]);
      r05_push_stack(p[10]);
      r05_push_stack(p[12]);
      r05_push_stack(p[11]);
      r05_push_context(p, 10);
      r05_splice_from_freelist(p[2]);
      return;

  case 1:
      r05_pop_context(p, 10);
      p[10] = arg_begin;
      p[11] = arg_begin->next;
      p[12] = arg_end;

      do {
        /* e.Valid: 5 */
        /* s.Next: 7, 14 */
        /* e.Tail: 8 */
        /* s.Subtype: 15 */
        /* 'L' s.Subtype s.Next */
        if (! r05_char_left(p+13, p[11], p[12], 'L'))
          continue;
        if (! r05_repeated_svar_right(p+14, p[13], p[12], p+7))
          continue;
        if (! r05_svar_left(p+15, p[13], p[14]))
          continue;
        if (! r05_empty_hole(p[15], p[14]))
          continue;

        r05_reset_allocator();
        r05_alloc_open_call(p+16);
        r05_alloc_function(&r05f_DoIsIdent);
        r05_alloc_open_bracket(p+17);
        r05_alloc_insert_pos(p+18);
        r05_alloc_svar(p+7);
        r05_alloc_close_bracket(p+19);
        r05_alloc_insert_pos(p+20);
        r05_alloc_close_call(p+21);
        r05_push_stack(p[21]);
        r05_push_stack(p[16]);
        r05_link_brackets(p[17], p[19]);
        r05_splice_evar(p[18], p+5);
        r05_splice_evar(p[20], p+8);
        r05_splice_from_freelist(p[0]);
        r05_splice_to_freelist(p[0], p[2]);
        return;
      } while (0);
      r05_splice_to_freelist(p[10], p[12]);
    } while (0);

    do {
      /* e.Valid: 5 */
      /* s.Next: 7 */
      /* e.Tail: 8 */
      /* (e.Valid) s.Next e.Tail */
      if (! r05_brackets_left(p+3, p[1], p[2]))
        continue;
      r05_close_evar(p+5, p[3], p[4]);
      if (! r05_svar_left(p+7, p[4], p[2]))
        continue;
      r05_close_evar(p+8, p[7], p[2]);

      r05_reset_allocator();
      r05_alloc_open_call(p+10);
      r05_alloc_function(&c2);
      r05_alloc_open_call(p+11);
      r05_alloc_function(&r05f_Type);
      r05_alloc_svar(p+7);
      r05_alloc_close_call(p+12);
      r05_alloc_close_call(p+13);
      r05_push_stack(p[13]);
      r05_push_stack(p[10]);
      r05_push_stack(p[12]);
      r05_push_stack(p[11]);
      r05_push_context(p, 10);
      r05_splice_from_freelist(p[2]);
      return;

  case 2:
      r05_pop_context(p, 10);
      p[10] = arg_begin;
      p[11] = arg_begin->next;
      p[12] = arg_end;

      do {
        /* e.Valid: 5 */
        /* s.Next: 7, 15 */
        /* e.Tail: 8 */
        /* 'D0' s.Next */
        if (! r05_char_left(p+13, p[11], p[12], 'D'))
          continue;
        if (! r05_char_left(p+14, p[13], p[12], '0'))
          continue;
        if (! r05_repeated_svar_left(p+15, p[14], p[12], p+7))
          continue;
        if (! r05_empty_hole(p[15], p[12]))
          continue;

        r05_reset_allocator();
        r05_alloc_open_call(p+16);
        r05_alloc_function(&r05f_DoIsIdent);
        r05_alloc_open_bracket(p+17);
        r05_alloc_insert_pos(p+18);
        r05_alloc_svar(p+7);
        r05_alloc_close_bracket(p+19);
        r05_alloc_insert_pos(p+20);
        r05_alloc_close_call(p+21);
        r05_push_stack(p[21]);
        r05_push_stack(p[16]);
        r05_link_brackets(p[17], p[19]);
        r05_splice_evar(p[18], p+5);
        r05_splice_evar(p[20], p+8);
        r05_splice_from_freelist(p[0]);
        r05_splice_to_freelist(p[0], p[2]);
        return;
      } while (0);
      r05_splice_to_freelist(p[10], p[12]);
    } while (0);

    do {
      /* e.Valid: 5 */
      /* (e.Valid) */
      if (! r05_brackets_left(p+3, p[1], p[2]))
        continue;
      if (! r05_empty_hole(p[4], p[2]))
        continue;
      r05_close_evar(p+5, p[3], p[4]);

      r05_reset_allocator();
      r05_alloc_function(&r05f_True);
      r05_alloc_insert_pos(p+7);
      r05_splice_evar(p[7], p+5);
      r05_splice_from_freelist(p[0]);
      r05_splice_to_freelist(p[0], p[2]);
      return;
    } while (0);

    do {
      /* e.Valid: 5 */
      /* s.Other: 7 */
      /* e.Tail: 8 */
      /* (e.Valid) s.Other e.Tail */
      if (! r05_brackets_left(p+3, p[1], p[2]))
        continue;
      r05_close_evar(p+5, p[3], p[4]);
      if (! r05_svar_left(p+7, p[4], p[2]))
        continue;
      r05_close_evar(p+8, p[7], p[2]);

      r05_reset_allocator();
      r05_alloc_function(&r05f_False);
      r05_splice_from_freelist(p[0]);
      r05_splice_to_freelist(p[0], p[2]);
      return;
    } while (0);

    r05_recognition_impossible();
  }
}

R05_DEFINE_LOCAL_FUNCTION(PlainNumber, "PlainNumber") {
  struct r05_node *p[6] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /* s.Number: 3 */
    /* s.Number */
    if (! r05_svar_left(p+3, p[1], p[2]))
      continue;
    if (! r05_empty_hole(p[3], p[2]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_call(p+4);
    r05_alloc_function(&r05f_Symb);
    r05_alloc_svar(p+3);
    r05_alloc_close_call(p+5);
    r05_push_stack(p[5]);
    r05_push_stack(p[4]);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(PlainChar, "PlainChar") {
  struct r05_node *p[6] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /* s.Char: 3 */
    /* s.Char */
    if (! r05_svar_left(p+3, p[1], p[2]))
      continue;
    if (! r05_empty_hole(p[3], p[2]))
      continue;

    r05_reset_allocator();
    r05_alloc_char('\'');
    r05_alloc_open_call(p+4);
    r05_alloc_function(&r05f_CharRep);
    r05_alloc_svar(p+3);
    r05_alloc_close_call(p+5);
    r05_alloc_char('\'');
    r05_push_stack(p[5]);
    r05_push_stack(p[4]);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(CharRep, "CharRep") {
  R05_DEFINE_COND_FUNCTION(CharRep, "CharRep$1", 1)
  R05_DEFINE_COND_FUNCTION(CharRep, "CharRep$2", 2)
  struct r05_node *p[20] = { 0 };

  r05_this_is_generated_function();
  switch (arg_begin->next->info.function->resume_entry >> 1) {
  case 0:
    p[0] = arg_begin;
    p[1] = arg_begin->next;
    p[2] = arg_end;

    do {
      /* '\'' */
      if (! r05_char_left(p+3, p[1], p[2], '\''))
        continue;
      if (! r05_empty_hole(p[3], p[2]))
        continue;

      r05_reset_allocator();
      r05_alloc_chars("\\\'", 2);
      r05_splice_from_freelist(p[0]);
      r05_splice_to_freelist(p[0], p[2]);
      return;
    } while (0);

    do {
      /* '\"' */
      if (! r05_char_left(p+3, p[1], p[2], '\"'))
        continue;
      if (! r05_empty_hole(p[3], p[2]))
        continue;

      r05_reset_allocator();
      r05_alloc_chars("\\\"", 2);
      r05_splice_from_freelist(p[0]);
      r05_splice_to_freelist(p[0], p[2]);
      return;
    } while (0);

    do {
      /* '\\' */
      if (! r05_char_left(p+3, p[1], p[2], '\\'))
        continue;
      if (! r05_empty_hole(p[3], p[2]))
        continue;

      r05_reset_allocator();
      r05_alloc_chars("\\\\", 2);
      r05_splice_from_freelist(p[0]);
      r05_splice_to_freelist(p[0], p[2]);
      return;
    } while (0);

    do {
      /* '\n' */
      if (! r05_char_left(p+3, p[1], p[2], '\n'))
        continue;
      if (! r05_empty_hole(p[3], p[2]))
        continue;

      r05_reset_allocator();
      r05_alloc_chars("\\n", 2);
      r05_splice_from_freelist(p[0]);
      r05_splice_to_freelist(p[0], p[2]);
      return;
    } while (0);

    do {
      /* '\r' */
      if (! r05_char_left(p+3, p[1], p[2], '\r'))
        continue;
      if (! r05_empty_hole(p[3], p[2]))
        continue;

      r05_reset_allocator();
      r05_alloc_chars("\\r", 2);
      r05_splice_from_freelist(p[0]);
      r05_splice_to_freelist(p[0], p[2]);
      return;
    } while (0);

    do {
      /* '\t' */
      if (! r05_char_left(p+3, p[1], p[2], '\t'))
        continue;
      if (! r05_empty_hole(p[3], p[2]))
        continue;

      r05_reset_allocator();
      r05_alloc_chars("\\t", 2);
      r05_splice_from_freelist(p[0]);
      r05_splice_to_freelist(p[0], p[2]);
      return;
    } while (0);

    do {
      /* s.Char: 3 */
      /* s.Char */
      if (! r05_svar_left(p+3, p[1], p[2]))
        continue;
      if (! r05_empty_hole(p[3], p[2]))
        continue;

      r05_reset_allocator();
      r05_alloc_open_call(p+4);
      r05_alloc_function(&c1);
      r05_alloc_open_call(p+5);
      r05_alloc_function(&r05f_Ord);
      r05_alloc_svar(p+3);
      r05_alloc_close_call(p+6);
      r05_alloc_close_call(p+7);
      r05_push_stack(p[7]);
      r05_push_stack(p[4]);
      r05_push_stack(p[6]);
      r05_push_stack(p[5]);
      r05_push_context(p, 4);
      r05_splice_from_freelist(p[2]);
      return;

  case 1:
      r05_pop_context(p, 4);
      p[4] = arg_begin;
      p[5] = arg_begin->next;
      p[6] = arg_end;

      do {
        /* s.Char: 3 */
        /* s.Ord: 7 */
        /* s.Ord */
        if (! r05_svar_left(p+7, p[5], p[6]))
          continue;
        if (! r05_empty_hole(p[7], p[6]))
          continue;

        r05_reset_allocator();
        r05_alloc_open_call(p+8);
        r05_alloc_function(&c2);
        r05_alloc_open_call(p+9);
        r05_alloc_function(&r05f_Compare);
        r05_alloc_svar(p+7);
        r05_alloc_number(32UL);
        r05_alloc_close_call(p+10);
        r05_alloc_close_call(p+11);
        r05_push_stack(p[11]);
        r05_push_stack(p[8]);
        r05_push_stack(p[10]);
        r05_push_stack(p[9]);
        r05_push_context(p, 8);
        r05_splice_from_freelist(p[2]);
        return;

  case 2:
        r05_pop_context(p, 8);
        p[8] = arg_begin;
        p[9] = arg_begin->next;
        p[10] = arg_end;

        do {
          /* s.Char: 3 */
          /* s.Ord: 7 */
          /* '-' */
          if (! r05_char_left(p+11, p[9], p[10], '-'))
            continue;
          if (! r05_empty_hole(p[11], p[10]))
            continue;

          r05_reset_allocator();
          r05_alloc_chars("\\x", 2);
          r05_alloc_open_call(p+12);
          r05_alloc_function(&r05f_HexDigit);
          r05_alloc_open_call(p+13);
          r05_alloc_function(&r05f_k2F_);
          r05_alloc_svar(p+7);
          r05_alloc_number(16UL);
          r05_alloc_close_call(p+14);
          r05_alloc_close_call(p+15);
          r05_alloc_open_call(p+16);
          r05_alloc_function(&r05f_HexDigit);
          r05_alloc_open_call(p+17);
          r05_alloc_function(&r05f_k25_);
          r05_alloc_svar(p+7);
          r05_alloc_number(16UL);
          r05_alloc_close_call(p+18);
          r05_alloc_close_call(p+19);
          r05_push_stack(p[19]);
          r05_push_stack(p[16]);
          r05_push_stack(p[18]);
          r05_push_stack(p[17]);
          r05_push_stack(p[15]);
          r05_push_stack(p[12]);
          r05_push_stack(p[14]);
          r05_push_stack(p[13]);
          r05_splice_from_freelist(p[0]);
          r05_splice_to_freelist(p[0], p[2]);
          return;
        } while (0);
        r05_splice_to_freelist(p[8], p[10]);
      } while (0);
      r05_splice_to_freelist(p[4], p[6]);
    } while (0);

    do {
      /* s.Char: 3 */
      /* s.Char */
      if (! r05_svar_left(p+3, p[1], p[2]))
        continue;
      if (! r05_empty_hole(p[3], p[2]))
        continue;

      r05_reset_allocator();
      r05_alloc_svar(p+3);
      r05_splice_from_freelist(p[0]);
      r05_splice_to_freelist(p[0], p[2]);
      return;
    } while (0);

    r05_recognition_impossible();
  }
}

R05_DEFINE_LOCAL_FUNCTION(HexDigit, "HexDigit") {
  R05_DEFINE_COND_FUNCTION(HexDigit, "HexDigit$1", 1)
  struct r05_node *p[14] = { 0 };

  r05_this_is_generated_function();
  switch (arg_begin->next->info.function->resume_entry >> 1) {
  case 0:
    p[0] = arg_begin;
    p[1] = arg_begin->next;
    p[2] = arg_end;

    do {
      /* s.Number: 3 */
      /* s.Number */
      if (! r05_svar_left(p+3, p[1], p[2]))
        continue;
      if (! r05_empty_hole(p[3], p[2]))
        continue;

      r05_reset_allocator();
      r05_alloc_open_call(p+4);
      r05_alloc_function(&c1);
      r05_alloc_open_call(p+5);
      r05_alloc_function(&r05f_First);
      r05_alloc_svar(p+3);
      r05_alloc_chars("0123456789abcdef", 16);
      r05_alloc_close_call(p+6);
      r05_alloc_close_call(p+7);
      r05_push_stack(p[7]);
      r05_push_stack(p[4]);
      r05_push_stack(p[6]);
      r05_push_stack(p[5]);
      r05_push_context(p, 4);
      r05_splice_from_freelist(p[2]);
      return;

  case 1:
      r05_pop_context(p, 4);
      p[4] = arg_begin;
      p[5] = arg_begin->next;
      p[6] = arg_end;

      do {
        /* s.Number: 3 */
        /* e.1: 9 */
        /* s.Digit: 11 */
        /* e.2: 12 */
        /* (e.1) s.Digit e.2 */
        if (! r05_brackets_left(p+7, p[5], p[6]))
          continue;
        r05_close_evar(p+9, p[7], p[8]);
        if (! r05_svar_left(p+11, p[8], p[6]))
          continue;
        r05_close_evar(p+12, p[11], p[6]);

        r05_reset_allocator();
        r05_alloc_svar(p+11);
        r05_splice_from_freelist(p[0]);
        r05_splice_to_freelist(p[0], p[2]);
        return;
      } while (0);
      r05_splice_to_freelist(p[4], p[6]);
    } while (0);

    r05_recognition_impossible();
  }
}

R05_DEFINE_LOCAL_FUNCTION(PlainVariable, "PlainVariable") {
  struct r05_node *p[9] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /* t.SrcPos: 3 */
    /* s.Type: 5 */
    /* e.Index: 6 */
    /* t.SrcPos s.Type e.Index */
    if (! r05_tvar_left(p+3, p[1], p[2]))
      continue;
    if (! r05_svar_left(p+5, p[4], p[2]))
      continue;
    r05_close_evar(p+6, p[5], p[2]);

    r05_reset_allocator();
    r05_alloc_svar(p+5);
    r05_alloc_char('.');
    r05_alloc_insert_pos(p+8);
    r05_splice_evar(p[8], p+6);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(PlainBrackets, "PlainBrackets") {
  struct r05_node *p[8] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /* e.Expr: 3 */
    /* e.Expr */
    r05_close_evar(p+3, p[1], p[2]);

    r05_reset_allocator();
    r05_alloc_char('(');
    r05_alloc_open_call(p+5);
    r05_alloc_function(&r05f_InlineExpr);
    r05_alloc_insert_pos(p+6);
    r05_alloc_close_call(p+7);
    r05_alloc_char(')');
    r05_push_stack(p[7]);
    r05_push_stack(p[5]);
    r05_splice_evar(p[6], p+3);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);
}

R05_DEFINE_LOCAL_FUNCTION(PlainCall, "PlainCall") {
  struct r05_node *p[15] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /* e.Function: 5 */
    /* t.SrcPos: 7 */
    /* t.SrcPos (e.Function) */
    if (! r05_brackets_right(p+3, p[1], p[2]))
      continue;
    r05_close_evar(p+5, p[3], p[4]);
    if (! r05_tvar_left(p+7, p[1], p[3]))
      continue;
    if (! r05_empty_hole(p[8], p[3]))
      continue;

    r05_reset_allocator();
    r05_alloc_char('<');
    r05_alloc_insert_pos(p+9);
    r05_alloc_char('>');
    r05_splice_evar(p[9], p+5);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  do {
    /* t.SrcPos: 3 */
    /* e.Function: 7 */
    /* e.Expr: 9 */
    /* t.SrcPos (e.Function) e.Expr */
    if (! r05_tvar_left(p+3, p[1], p[2]))
      continue;
    if (! r05_brackets_left(p+5, p[4], p[2]))
      continue;
    r05_close_evar(p+7, p[5], p[6]);
    r05_close_evar(p+9, p[6], p[2]);

    r05_reset_allocator();
    r05_alloc_char('<');
    r05_alloc_insert_pos(p+11);
    r05_alloc_char(' ');
    r05_alloc_open_call(p+12);
    r05_alloc_function(&r05f_InlineExpr);
    r05_alloc_insert_pos(p+13);
    r05_alloc_close_call(p+14);
    r05_alloc_char('>');
    r05_push_stack(p[14]);
    r05_push_stack(p[12]);
    r05_splice_evar(p[11], p+7);
    r05_splice_evar(p[13], p+9);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_ENTRY_FUNCTION(InlineExpr, "InlineExpr") {
  struct r05_node *p[15] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /* t.Term: 3 */
    /* e.Expr: 5 */
    /* t.Term e.Expr */
    if (! r05_tvar_left(p+3, p[1], p[2]))
      continue;
    r05_close_evar(p+5, p[4], p[2]);

    r05_reset_allocator();
    r05_alloc_open_call(p+7);
    r05_alloc_function(&r05f_DoInlineExpr);
    r05_alloc_open_bracket(p+8);
    r05_alloc_open_call(p+9);
    r05_alloc_function(&r05f_InlineTerm);
    r05_alloc_insert_pos(p+10);
    r05_alloc_close_call(p+11);
    r05_alloc_close_bracket(p+12);
    r05_alloc_insert_pos(p+13);
    r05_alloc_close_call(p+14);
    r05_push_stack(p[14]);
    r05_push_stack(p[7]);
    r05_link_brackets(p[8], p[12]);
    r05_push_stack(p[11]);
    r05_push_stack(p[9]);
    r05_splice_tvar(p[10], p+3);
    r05_splice_evar(p[13], p+5);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  do {
    /*  */
    if (! r05_empty_hole(p[1], p[2]))
      continue;

    r05_reset_allocator();
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(DoInlineExpr, "DoInlineExpr") {
  struct r05_node *p[24] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /* e.Text: 5 */
    /* t.NextTerm: 7 */
    /* e.Expr: 9 */
    /* (e.Text) t.NextTerm e.Expr */
    if (! r05_brackets_left(p+3, p[1], p[2]))
      continue;
    r05_close_evar(p+5, p[3], p[4]);
    if (! r05_tvar_left(p+7, p[4], p[2]))
      continue;
    r05_close_evar(p+9, p[8], p[2]);

    r05_reset_allocator();
    r05_alloc_open_call(p+11);
    r05_alloc_function(&r05f_DoInlineExpr);
    r05_alloc_open_bracket(p+12);
    r05_alloc_open_call(p+13);
    r05_alloc_function(&r05f_AppendTerm);
    r05_alloc_insert_pos(p+14);
    r05_alloc_open_bracket(p+15);
    r05_alloc_open_call(p+16);
    r05_alloc_function(&r05f_InlineTerm);
    r05_alloc_insert_pos(p+17);
    r05_alloc_close_call(p+18);
    r05_alloc_close_bracket(p+19);
    r05_alloc_close_call(p+20);
    r05_alloc_close_bracket(p+21);
    r05_alloc_insert_pos(p+22);
    r05_alloc_close_call(p+23);
    r05_push_stack(p[23]);
    r05_push_stack(p[11]);
    r05_link_brackets(p[12], p[21]);
    r05_push_stack(p[20]);
    r05_push_stack(p[13]);
    r05_link_brackets(p[15], p[19]);
    r05_push_stack(p[18]);
    r05_push_stack(p[16]);
    r05_splice_evar(p[14], p+5);
    r05_splice_tvar(p[17], p+7);
    r05_splice_evar(p[22], p+9);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  do {
    /* e.Text: 5 */
    /* (e.Text) */
    if (! r05_brackets_left(p+3, p[1], p[2]))
      continue;
    if (! r05_empty_hole(p[4], p[2]))
      continue;
    r05_close_evar(p+5, p[3], p[4]);

    r05_reset_allocator();
    r05_alloc_insert_pos(p+7);
    r05_splice_evar(p[7], p+5);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  r05_recognition_impossible();
}


/* End of file */
