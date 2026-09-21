/* Automatically generated file. Don't edit! */
#include "refal05rts.h"


R05_DECLARE_ENTRY_FUNCTION(MapAccum)
R05_DECLARE_ENTRY_FUNCTION(Map)
R05_DECLARE_ENTRY_FUNCTION(Unique)
R05_DECLARE_ENTRY_FUNCTION(Parse)
R05_DECLARE_ENTRY_FUNCTION(Scan)
R05_DECLARE_LOCAL_FUNCTION(CheckAST)
R05_DECLARE_LOCAL_FUNCTION(CheckASTm_UnusedsAreFound)
R05_DECLARE_ENTRY_FUNCTION(parseru_PlainExterns)
R05_DECLARE_ENTRY_FUNCTION(parseru_PlainExternsm_Name)
R05_DECLARE_LOCAL_FUNCTION(FindUnused)
R05_DECLARE_ENTRY_FUNCTION(parseru_FindUnusedm_InitialUsage)
R05_DECLARE_LOCAL_FUNCTION(FindUnusedm_Loop)
R05_DECLARE_LOCAL_FUNCTION(ListOfBuiltinm_WithSugar)
R05_DECLARE_LOCAL_FUNCTION(AddMetatable)
R05_DECLARE_ENTRY_FUNCTION(parseru_AddMetatablem_AddFunction)
R05_DECLARE_ENTRY_FUNCTION(parseru_AddMetatablem_MakeMetafunction)
R05_DECLARE_LOCAL_FUNCTION(AddMetatablem_Aux)
R05_DECLARE_ENTRY_FUNCTION(parseru_AddHowCall)
R05_DECLARE_ENTRY_FUNCTION(parseru_MakeEnum)
R05_DECLARE_ENTRY_FUNCTION(parseru_FindUnusedm_Loopm_UnusedErrors)
R05_DECLARE_LOCAL_FUNCTION(UnusedMessage)
R05_DECLARE_LOCAL_FUNCTION(CastAST)
R05_DECLARE_ENTRY_FUNCTION(parseru_CastASTm_Item)
R05_DECLARE_LOCAL_FUNCTION(CastASTm_JoinExterns)
R05_DECLARE_LOCAL_FUNCTION(ExtractReferences)
R05_DECLARE_ENTRY_FUNCTION(parseru_ExtractReferencesm_Sentence)
R05_DECLARE_LOCAL_FUNCTION(ExtractReferencesm_Tail)
R05_DECLARE_LOCAL_FUNCTION(ExtractReferencesm_Expr)
R05_DECLARE_ENTRY_FUNCTION(parseru_ExtractReferencesm_Term)
R05_DECLARE_ENTRY_FUNCTION(Parsem_File)
R05_DECLARE_LOCAL_FUNCTION(SortErrors)
R05_DECLARE_LOCAL_FUNCTION(DoSortErrors)
R05_DECLARE_LOCAL_FUNCTION(SortErrorsm_Insert)
R05_DECLARE_LOCAL_FUNCTION(SortErrorsm_Insertm_Compare)
R05_DECLARE_LOCAL_FUNCTION(CompareError)
R05_DECLARE_LOCAL_FUNCTION(ELm_Create)
R05_DECLARE_LOCAL_FUNCTION(ELm_AddErrorAt)
R05_DECLARE_LOCAL_FUNCTION(ELm_Destroy)
R05_DECLARE_ENTRY_FUNCTION(Explode)
R05_DECLARE_ENTRY_FUNCTION(ListOfBuiltin)
R05_DECLARE_ENTRY_FUNCTION(k25_)
R05_DECLARE_ENTRY_FUNCTION(k2A_)
R05_DECLARE_ENTRY_FUNCTION(k2B_)
R05_DECLARE_ENTRY_FUNCTION(m_)
R05_DECLARE_ENTRY_FUNCTION(k2F_)
R05_DECLARE_ENTRY_FUNCTION(Compare)
R05_DEFINE_LOCAL_ENUM(Extern, "Extern")
R05_DEFINE_LOCAL_ENUM(Function, "Function")
R05_DEFINE_LOCAL_ENUM(SpecialComment, "SpecialComment")
R05_DEFINE_LOCAL_ENUM(Call, "Call")
R05_DEFINE_LOCAL_ENUM(Entry, "Entry")
R05_DEFINE_LOCAL_ENUM(Unused, "Unused")
R05_DEFINE_LOCAL_ENUM(Used, "Used")
R05_DEFINE_LOCAL_ENUM(NOm_POS, "NO-POS")
R05_DEFINE_LOCAL_ENUM(Local, "Local")
R05_DEFINE_LOCAL_ENUM(special, "special")
R05_DEFINE_LOCAL_ENUM(Meta, "Meta")
R05_DEFINE_LOCAL_ENUM(Metatable, "Metatable")
R05_DEFINE_LOCAL_ENUM(Symbol, "Symbol")
R05_DEFINE_LOCAL_ENUM(Word, "Word")
R05_DEFINE_LOCAL_ENUM(Ident, "Ident")
R05_DEFINE_LOCAL_ENUM(Brackets, "Brackets")
R05_DEFINE_LOCAL_ENUM(Success, "Success")
R05_DEFINE_LOCAL_ENUM(Fails, "Fails")
R05_DEFINE_LOCAL_ENUM(ErrorList, "ErrorList")
R05_DEFINE_LOCAL_ENUM(Condition, "Condition")
R05_DEFINE_LOCAL_ENUM(RETURN, "RETURN")
R05_DEFINE_LOCAL_ENUM(CALLm_BLOCK, "CALL-BLOCK")
R05_DEFINE_LOCAL_ENUM(regular, "regular")
R05_DEFINE_LOCAL_ENUM(k3F_, "?")

R05_DEFINE_LOCAL_FUNCTION(CheckAST, "CheckAST") {
  struct r05_node *p[15] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /* e.AST: 4 */
    /* Success e.AST */
    if (! r05_function_left(p+3, p[1], p[2], &r05f_Success))
      continue;
    r05_close_evar(p+4, p[3], p[2]);

    r05_reset_allocator();
    r05_alloc_open_call(p+6);
    r05_alloc_function(&r05f_CheckASTm_UnusedsAreFound);
    r05_alloc_open_call(p+7);
    r05_alloc_function(&r05f_FindUnused);
    r05_alloc_open_call(p+8);
    r05_alloc_function(&r05f_ELm_Create);
    r05_alloc_close_call(p+9);
    r05_alloc_open_call(p+10);
    r05_alloc_function(&r05f_Map);
    r05_alloc_function(&r05f_parseru_PlainExterns);
    r05_alloc_insert_pos(p+11);
    r05_alloc_close_call(p+12);
    r05_alloc_close_call(p+13);
    r05_alloc_close_call(p+14);
    r05_push_stack(p[14]);
    r05_push_stack(p[6]);
    r05_push_stack(p[13]);
    r05_push_stack(p[7]);
    r05_push_stack(p[12]);
    r05_push_stack(p[10]);
    r05_push_stack(p[9]);
    r05_push_stack(p[8]);
    r05_splice_evar(p[11], p+4);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  do {
    /* e.ParserErrors: 4 */
    /* Fails e.ParserErrors */
    if (! r05_function_left(p+3, p[1], p[2], &r05f_Fails))
      continue;
    r05_close_evar(p+4, p[3], p[2]);

    r05_reset_allocator();
    r05_alloc_function(&r05f_Fails);
    r05_alloc_open_call(p+6);
    r05_alloc_function(&r05f_SortErrors);
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

R05_DEFINE_LOCAL_FUNCTION(CheckASTm_UnusedsAreFound, "CheckAST-UnusedsAreFound") {
  R05_DEFINE_COND_FUNCTION(CheckASTm_UnusedsAreFound, "CheckAST-UnusedsAreFound$1", 1)
  struct r05_node *p[13] = { 0 };

  r05_this_is_generated_function();
  switch (arg_begin->next->info.function->resume_entry >> 1) {
  case 0:
    p[0] = arg_begin;
    p[1] = arg_begin->next;
    p[2] = arg_end;

    do {
      /* t.ErrorList: 3 */
      /* e.AST: 5 */
      /* t.ErrorList e.AST */
      if (! r05_tvar_left(p+3, p[1], p[2]))
        continue;
      r05_close_evar(p+5, p[4], p[2]);

      r05_reset_allocator();
      r05_alloc_open_call(p+7);
      r05_alloc_function(&c1);
      r05_alloc_open_call(p+8);
      r05_alloc_function(&r05f_ELm_Destroy);
      r05_alloc_tvar(p+3);
      r05_alloc_close_call(p+9);
      r05_alloc_close_call(p+10);
      r05_push_stack(p[10]);
      r05_push_stack(p[7]);
      r05_push_stack(p[9]);
      r05_push_stack(p[8]);
      r05_push_context(p, 7);
      r05_splice_from_freelist(p[2]);
      return;

  case 1:
      r05_pop_context(p, 7);
      p[7] = arg_begin;
      p[8] = arg_begin->next;
      p[9] = arg_end;

      do {
        /* t.ErrorList: 3 */
        /* e.AST: 5 */
        /*  */
        if (! r05_empty_hole(p[8], p[9]))
          continue;

        r05_reset_allocator();
        r05_alloc_function(&r05f_Success);
        r05_alloc_open_call(p+10);
        r05_alloc_function(&r05f_CastAST);
        r05_alloc_insert_pos(p+11);
        r05_alloc_close_call(p+12);
        r05_push_stack(p[12]);
        r05_push_stack(p[10]);
        r05_splice_evar(p[11], p+5);
        r05_splice_from_freelist(p[0]);
        r05_splice_to_freelist(p[0], p[2]);
        return;
      } while (0);

      do {
        /* t.ErrorList: 3 */
        /* e.AST: 5 */
        /* e.Errors: 10 */
        /* e.Errors */
        r05_close_evar(p+10, p[8], p[9]);

        r05_reset_allocator();
        r05_alloc_function(&r05f_Fails);
        r05_alloc_insert_pos(p+12);
        r05_splice_evar(p[12], p+10);
        r05_splice_from_freelist(p[0]);
        r05_splice_to_freelist(p[0], p[2]);
        return;
      } while (0);
    } while (0);

    r05_recognition_impossible();
  }
}

R05_DEFINE_ENTRY_FUNCTION(parseru_PlainExterns, "parser_PlainExterns") {
  struct r05_node *p[22] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /* e.Names: 6 */
    /* (Extern e.Names) */
    if (! r05_brackets_left(p+3, p[1], p[2]))
      continue;
    if (! r05_function_left(p+5, p[3], p[4], &r05f_Extern))
      continue;
    if (! r05_empty_hole(p[4], p[2]))
      continue;
    r05_close_evar(p+6, p[5], p[4]);

    r05_reset_allocator();
    r05_alloc_open_call(p+8);
    r05_alloc_function(&r05f_Map);
    r05_alloc_function(&r05f_parseru_PlainExternsm_Name);
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
    /* t.Pos: 6 */
    /* e.Name: 10 */
    /* s.Scope: 12 */
    /* e.Body: 13 */
    /* (Function t.Pos (e.Name) s.Scope e.Body) */
    if (! r05_brackets_left(p+3, p[1], p[2]))
      continue;
    if (! r05_function_left(p+5, p[3], p[4], &r05f_Function))
      continue;
    if (! r05_empty_hole(p[4], p[2]))
      continue;
    if (! r05_tvar_left(p+6, p[5], p[4]))
      continue;
    if (! r05_brackets_left(p+8, p[7], p[4]))
      continue;
    r05_close_evar(p+10, p[8], p[9]);
    if (! r05_svar_left(p+12, p[9], p[4]))
      continue;
    r05_close_evar(p+13, p[12], p[4]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+15);
    r05_alloc_function(&r05f_Function);
    r05_alloc_insert_pos(p+16);
    r05_alloc_open_bracket(p+17);
    r05_alloc_insert_pos(p+18);
    r05_alloc_close_bracket(p+19);
    r05_alloc_svar(p+12);
    r05_alloc_insert_pos(p+20);
    r05_alloc_close_bracket(p+21);
    r05_link_brackets(p[15], p[21]);
    r05_link_brackets(p[17], p[19]);
    r05_splice_tvar(p[16], p+6);
    r05_splice_evar(p[18], p+10);
    r05_splice_evar(p[20], p+13);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  do {
    /* t.Pos: 6 */
    /* e.Text: 8 */
    /* (SpecialComment t.Pos e.Text) */
    if (! r05_brackets_left(p+3, p[1], p[2]))
      continue;
    if (! r05_function_left(p+5, p[3], p[4], &r05f_SpecialComment))
      continue;
    if (! r05_empty_hole(p[4], p[2]))
      continue;
    if (! r05_tvar_left(p+6, p[5], p[4]))
      continue;
    r05_close_evar(p+8, p[7], p[4]);

    r05_reset_allocator();
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_ENTRY_FUNCTION(parseru_PlainExternsm_Name, "parser_PlainExterns-Name") {
  struct r05_node *p[15] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /* t.Pos: 5 */
    /* e.Name: 7 */
    /* (t.Pos e.Name) */
    if (! r05_brackets_left(p+3, p[1], p[2]))
      continue;
    if (! r05_empty_hole(p[4], p[2]))
      continue;
    if (! r05_tvar_left(p+5, p[3], p[4]))
      continue;
    r05_close_evar(p+7, p[6], p[4]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+9);
    r05_alloc_function(&r05f_Function);
    r05_alloc_insert_pos(p+10);
    r05_alloc_open_bracket(p+11);
    r05_alloc_insert_pos(p+12);
    r05_alloc_close_bracket(p+13);
    r05_alloc_function(&r05f_Extern);
    r05_alloc_close_bracket(p+14);
    r05_link_brackets(p[9], p[14]);
    r05_link_brackets(p[11], p[13]);
    r05_splice_tvar(p[10], p+5);
    r05_splice_evar(p[12], p+7);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(FindUnused, "FindUnused") {
  struct r05_node *p[19] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /* t.ErrorList: 3 */
    /* e.AST: 5 */
    /* t.ErrorList e.AST */
    if (! r05_tvar_left(p+3, p[1], p[2]))
      continue;
    r05_close_evar(p+5, p[4], p[2]);

    r05_reset_allocator();
    r05_alloc_open_call(p+7);
    r05_alloc_function(&r05f_MapAccum);
    r05_alloc_function(&r05f_parseru_FindUnusedm_Loopm_UnusedErrors);
    r05_alloc_insert_pos(p+8);
    r05_alloc_open_call(p+9);
    r05_alloc_function(&r05f_FindUnusedm_Loop);
    r05_alloc_open_bracket(p+10);
    r05_alloc_close_bracket(p+11);
    r05_alloc_open_call(p+12);
    r05_alloc_function(&r05f_MapAccum);
    r05_alloc_function(&r05f_parseru_FindUnusedm_InitialUsage);
    r05_alloc_open_bracket(p+13);
    r05_alloc_close_bracket(p+14);
    r05_alloc_insert_pos(p+15);
    r05_alloc_close_call(p+16);
    r05_alloc_close_call(p+17);
    r05_alloc_close_call(p+18);
    r05_push_stack(p[18]);
    r05_push_stack(p[7]);
    r05_push_stack(p[17]);
    r05_push_stack(p[9]);
    r05_push_stack(p[16]);
    r05_push_stack(p[12]);
    r05_link_brackets(p[13], p[14]);
    r05_link_brackets(p[10], p[11]);
    r05_splice_tvar(p[8], p+3);
    r05_splice_evar(p[15], p+5);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_ENTRY_FUNCTION(parseru_FindUnusedm_InitialUsage, "parser_FindUnused-InitialUsage") {
  struct r05_node *p[31] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /* e.Entries: 8 */
    /* t.Pos: 10 */
    /* e.Name: 15 */
    /* e.Body: 17 */
    /* (e.Entries) (Function t.Pos (e.Name) Entry e.Body) */
    if (! r05_brackets_left(p+3, p[1], p[2]))
      continue;
    if (! r05_brackets_left(p+5, p[4], p[2]))
      continue;
    if (! r05_function_left(p+7, p[5], p[6], &r05f_Function))
      continue;
    if (! r05_empty_hole(p[6], p[2]))
      continue;
    r05_close_evar(p+8, p[3], p[4]);
    if (! r05_tvar_left(p+10, p[7], p[6]))
      continue;
    if (! r05_brackets_left(p+12, p[11], p[6]))
      continue;
    if (! r05_function_left(p+14, p[13], p[6], &r05f_Entry))
      continue;
    r05_close_evar(p+15, p[12], p[13]);
    r05_close_evar(p+17, p[14], p[6]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+19);
    r05_alloc_insert_pos(p+20);
    r05_alloc_open_bracket(p+21);
    r05_alloc_function(&r05f_Call);
    r05_alloc_insert_pos(p+22);
    r05_alloc_close_bracket(p+23);
    r05_alloc_close_bracket(p+24);
    r05_alloc_open_bracket(p+25);
    r05_alloc_function(&r05f_Function);
    r05_alloc_function(&r05f_Unused);
    r05_alloc_insert_pos(p+26);
    r05_alloc_open_bracket(p+27);
    r05_alloc_evar(p+15);
    r05_alloc_close_bracket(p+28);
    r05_alloc_function(&r05f_Entry);
    r05_alloc_insert_pos(p+29);
    r05_alloc_close_bracket(p+30);
    r05_link_brackets(p[25], p[30]);
    r05_link_brackets(p[27], p[28]);
    r05_link_brackets(p[19], p[24]);
    r05_link_brackets(p[21], p[23]);
    r05_splice_evar(p[20], p+8);
    r05_splice_evar(p[22], p+15);
    r05_splice_tvar(p[26], p+10);
    r05_splice_evar(p[29], p+17);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  do {
    /* e.Entries: 8 */
    /* t.Pos: 10 */
    /* e.Name: 14 */
    /* s.Scope: 16 */
    /* e.Body: 17 */
    /* (e.Entries) (Function t.Pos (e.Name) s.Scope e.Body) */
    if (! r05_brackets_left(p+3, p[1], p[2]))
      continue;
    if (! r05_brackets_left(p+5, p[4], p[2]))
      continue;
    if (! r05_function_left(p+7, p[5], p[6], &r05f_Function))
      continue;
    if (! r05_empty_hole(p[6], p[2]))
      continue;
    r05_close_evar(p+8, p[3], p[4]);
    if (! r05_tvar_left(p+10, p[7], p[6]))
      continue;
    if (! r05_brackets_left(p+12, p[11], p[6]))
      continue;
    r05_close_evar(p+14, p[12], p[13]);
    if (! r05_svar_left(p+16, p[13], p[6]))
      continue;
    r05_close_evar(p+17, p[16], p[6]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+19);
    r05_alloc_insert_pos(p+20);
    r05_alloc_close_bracket(p+21);
    r05_alloc_open_bracket(p+22);
    r05_alloc_function(&r05f_Function);
    r05_alloc_function(&r05f_Unused);
    r05_alloc_insert_pos(p+23);
    r05_alloc_open_bracket(p+24);
    r05_alloc_insert_pos(p+25);
    r05_alloc_close_bracket(p+26);
    r05_alloc_svar(p+16);
    r05_alloc_insert_pos(p+27);
    r05_alloc_close_bracket(p+28);
    r05_link_brackets(p[22], p[28]);
    r05_link_brackets(p[24], p[26]);
    r05_link_brackets(p[19], p[21]);
    r05_splice_evar(p[20], p+8);
    r05_splice_tvar(p[23], p+10);
    r05_splice_evar(p[25], p+14);
    r05_splice_evar(p[27], p+17);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(FindUnusedm_Loop, "FindUnused-Loop") {
  R05_DEFINE_COND_FUNCTION(FindUnusedm_Loop, "FindUnused-Loop$1", 1)
  R05_DEFINE_COND_FUNCTION(FindUnusedm_Loop, "FindUnused-Loop$2", 2)
  R05_DEFINE_COND_FUNCTION(FindUnusedm_Loop, "FindUnused-Loop$3", 3)
  R05_DEFINE_COND_FUNCTION(FindUnusedm_Loop, "FindUnused-Loop$4", 4)
  struct r05_node *p[52] = { 0 };

  r05_this_is_generated_function();
  switch (arg_begin->next->info.function->resume_entry >> 1) {
  case 0:
    p[0] = arg_begin;
    p[1] = arg_begin->next;
    p[2] = arg_end;

    do {
      /* e.Enums: 9 */
      /* e.References: 11 */
      /* s.How: 13 */
      /* e.Name: 14, 25 */
      /* e.AST-B: 16 */
      /* e.AST-E: 27 */
      /* t.Pos: 29 */
      /* (e.Enums) ((s.How e.Name) e.References) e.AST-B (Function Unused t.Pos (e.Name) Extern) e.AST-E */
      if (! r05_brackets_left(p+3, p[1], p[2]))
        continue;
      if (! r05_brackets_left(p+5, p[4], p[2]))
        continue;
      if (! r05_brackets_left(p+7, p[5], p[6]))
        continue;
      r05_close_evar(p+9, p[3], p[4]);
      r05_close_evar(p+11, p[8], p[6]);
      if (! r05_svar_left(p+13, p[7], p[8]))
        continue;
      r05_close_evar(p+14, p[13], p[8]);
      p[16] = NULL;
      p[17] = p[6];
      do {
        r05_start_e_loop();
        if (! r05_brackets_left(p+18, p[17], p[2]))
          continue;
        if (! r05_function_left(p+20, p[18], p[19], &r05f_Function))
          continue;
        if (! r05_function_left(p+21, p[20], p[19], &r05f_Unused))
          continue;
        if (! r05_function_right(p+22, p[21], p[19], &r05f_Extern))
          continue;
        if (! r05_brackets_right(p+23, p[21], p[22]))
          continue;
        if (! r05_repeated_evar_left(p+25, p[23], p[24], p+14))
          continue;
        if (! r05_empty_hole(p[26], p[24]))
          continue;
        r05_close_evar(p+27, p[19], p[2]);
        if (! r05_tvar_left(p+29, p[21], p[23]))
          continue;
        if (! r05_empty_hole(p[30], p[23]))
          continue;

        r05_reset_allocator();
        r05_alloc_open_call(p+31);
        r05_alloc_function(&r05f_FindUnusedm_Loop);
        r05_alloc_open_bracket(p+32);
        r05_alloc_insert_pos(p+33);
        r05_alloc_close_bracket(p+34);
        r05_alloc_open_bracket(p+35);
        r05_alloc_insert_pos(p+36);
        r05_alloc_close_bracket(p+37);
        r05_alloc_insert_pos(p+38);
        r05_alloc_open_bracket(p+39);
        r05_alloc_function(&r05f_Function);
        r05_alloc_function(&r05f_Used);
        r05_alloc_insert_pos(p+40);
        r05_alloc_open_bracket(p+41);
        r05_alloc_insert_pos(p+42);
        r05_alloc_close_bracket(p+43);
        r05_alloc_function(&r05f_Extern);
        r05_alloc_close_bracket(p+44);
        r05_alloc_insert_pos(p+45);
        r05_alloc_close_call(p+46);
        r05_push_stack(p[46]);
        r05_push_stack(p[31]);
        r05_link_brackets(p[39], p[44]);
        r05_link_brackets(p[41], p[43]);
        r05_link_brackets(p[35], p[37]);
        r05_link_brackets(p[32], p[34]);
        r05_splice_evar(p[33], p+9);
        r05_splice_evar(p[36], p+11);
        r05_splice_evar(p[38], p+16);
        r05_splice_tvar(p[40], p+29);
        r05_splice_evar(p[42], p+14);
        r05_splice_evar(p[45], p+27);
        r05_splice_from_freelist(p[0]);
        r05_splice_to_freelist(p[0], p[2]);
        return;
      } while (r05_open_evar_advance(p+16, p[2]));
      r05_stop_e_loop();
    } while (0);

    do {
      /* e.Enums: 10 */
      /* e.Name: 12, 28 */
      /* e.References: 14 */
      /* e.AST-B: 16 */
      /* e.AST-E: 22 */
      /* t.Pos: 24 */
      /* s.Scope: 30 */
      /* e.Body: 31 */
      /* (e.Enums) ((Call e.Name) e.References) e.AST-B (Function Unused t.Pos (e.Name) s.Scope e.Body) e.AST-E */
      if (! r05_brackets_left(p+3, p[1], p[2]))
        continue;
      if (! r05_brackets_left(p+5, p[4], p[2]))
        continue;
      if (! r05_brackets_left(p+7, p[5], p[6]))
        continue;
      if (! r05_function_left(p+9, p[7], p[8], &r05f_Call))
        continue;
      r05_close_evar(p+10, p[3], p[4]);
      r05_close_evar(p+12, p[9], p[8]);
      r05_close_evar(p+14, p[8], p[6]);
      p[16] = NULL;
      p[17] = p[6];
      do {
        r05_start_e_loop();
        if (! r05_brackets_left(p+18, p[17], p[2]))
          continue;
        if (! r05_function_left(p+20, p[18], p[19], &r05f_Function))
          continue;
        if (! r05_function_left(p+21, p[20], p[19], &r05f_Unused))
          continue;
        r05_close_evar(p+22, p[19], p[2]);
        if (! r05_tvar_left(p+24, p[21], p[19]))
          continue;
        if (! r05_brackets_left(p+26, p[25], p[19]))
          continue;
        if (! r05_repeated_evar_left(p+28, p[26], p[27], p+12))
          continue;
        if (! r05_empty_hole(p[29], p[27]))
          continue;
        if (! r05_svar_left(p+30, p[27], p[19]))
          continue;
        r05_close_evar(p+31, p[30], p[19]);

        r05_reset_allocator();
        r05_alloc_open_call(p+33);
        r05_alloc_function(&r05f_FindUnusedm_Loop);
        r05_alloc_open_bracket(p+34);
        r05_alloc_insert_pos(p+35);
        r05_alloc_close_bracket(p+36);
        r05_alloc_open_bracket(p+37);
        r05_alloc_insert_pos(p+38);
        r05_alloc_open_call(p+39);
        r05_alloc_function(&r05f_ExtractReferences);
        r05_alloc_insert_pos(p+40);
        r05_alloc_close_call(p+41);
        r05_alloc_close_bracket(p+42);
        r05_alloc_insert_pos(p+43);
        r05_alloc_open_bracket(p+44);
        r05_alloc_function(&r05f_Function);
        r05_alloc_function(&r05f_Used);
        r05_alloc_insert_pos(p+45);
        r05_alloc_open_bracket(p+46);
        r05_alloc_insert_pos(p+47);
        r05_alloc_close_bracket(p+48);
        r05_alloc_svar(p+30);
        r05_alloc_evar(p+31);
        r05_alloc_close_bracket(p+49);
        r05_alloc_insert_pos(p+50);
        r05_alloc_close_call(p+51);
        r05_push_stack(p[51]);
        r05_push_stack(p[33]);
        r05_link_brackets(p[44], p[49]);
        r05_link_brackets(p[46], p[48]);
        r05_link_brackets(p[37], p[42]);
        r05_push_stack(p[41]);
        r05_push_stack(p[39]);
        r05_link_brackets(p[34], p[36]);
        r05_splice_evar(p[35], p+10);
        r05_splice_evar(p[38], p+14);
        r05_splice_evar(p[40], p+31);
        r05_splice_evar(p[43], p+16);
        r05_splice_tvar(p[45], p+24);
        r05_splice_evar(p[47], p+12);
        r05_splice_evar(p[50], p+22);
        r05_splice_from_freelist(p[0]);
        r05_splice_to_freelist(p[0], p[2]);
        return;
      } while (r05_open_evar_advance(p+16, p[2]));
      r05_stop_e_loop();
    } while (0);

    do {
      /* e.Enums: 9 */
      /* e.References: 11 */
      /* s.How: 13 */
      /* e.Name: 14, 28 */
      /* e.AST-B: 16 */
      /* e.AST-E: 21 */
      /* s.Used: 23 */
      /* t.Pos: 24 */
      /* s.Scope: 30 */
      /* e.Body: 31 */
      /* (e.Enums) ((s.How e.Name) e.References) e.AST-B (Function s.Used t.Pos (e.Name) s.Scope e.Body) e.AST-E */
      if (! r05_brackets_left(p+3, p[1], p[2]))
        continue;
      if (! r05_brackets_left(p+5, p[4], p[2]))
        continue;
      if (! r05_brackets_left(p+7, p[5], p[6]))
        continue;
      r05_close_evar(p+9, p[3], p[4]);
      r05_close_evar(p+11, p[8], p[6]);
      if (! r05_svar_left(p+13, p[7], p[8]))
        continue;
      r05_close_evar(p+14, p[13], p[8]);
      p[16] = NULL;
      p[17] = p[6];
      do {
        r05_start_e_loop();
        if (! r05_brackets_left(p+18, p[17], p[2]))
          continue;
        if (! r05_function_left(p+20, p[18], p[19], &r05f_Function))
          continue;
        r05_close_evar(p+21, p[19], p[2]);
        if (! r05_svar_left(p+23, p[20], p[19]))
          continue;
        if (! r05_tvar_left(p+24, p[23], p[19]))
          continue;
        if (! r05_brackets_left(p+26, p[25], p[19]))
          continue;
        if (! r05_repeated_evar_left(p+28, p[26], p[27], p+14))
          continue;
        if (! r05_empty_hole(p[29], p[27]))
          continue;
        if (! r05_svar_left(p+30, p[27], p[19]))
          continue;
        r05_close_evar(p+31, p[30], p[19]);

        r05_reset_allocator();
        r05_alloc_open_call(p+33);
        r05_alloc_function(&r05f_FindUnusedm_Loop);
        r05_alloc_open_bracket(p+34);
        r05_alloc_insert_pos(p+35);
        r05_alloc_close_bracket(p+36);
        r05_alloc_open_bracket(p+37);
        r05_alloc_insert_pos(p+38);
        r05_alloc_close_bracket(p+39);
        r05_alloc_insert_pos(p+40);
        r05_alloc_open_bracket(p+41);
        r05_alloc_function(&r05f_Function);
        r05_alloc_svar(p+23);
        r05_alloc_insert_pos(p+42);
        r05_alloc_open_bracket(p+43);
        r05_alloc_insert_pos(p+44);
        r05_alloc_close_bracket(p+45);
        r05_alloc_svar(p+30);
        r05_alloc_insert_pos(p+46);
        r05_alloc_close_bracket(p+47);
        r05_alloc_insert_pos(p+48);
        r05_alloc_close_call(p+49);
        r05_push_stack(p[49]);
        r05_push_stack(p[33]);
        r05_link_brackets(p[41], p[47]);
        r05_link_brackets(p[43], p[45]);
        r05_link_brackets(p[37], p[39]);
        r05_link_brackets(p[34], p[36]);
        r05_splice_evar(p[35], p+9);
        r05_splice_evar(p[38], p+11);
        r05_splice_evar(p[40], p+16);
        r05_splice_tvar(p[42], p+24);
        r05_splice_evar(p[44], p+14);
        r05_splice_evar(p[46], p+31);
        r05_splice_evar(p[48], p+21);
        r05_splice_from_freelist(p[0]);
        r05_splice_to_freelist(p[0], p[2]);
        return;
      } while (r05_open_evar_advance(p+16, p[2]));
      r05_stop_e_loop();
    } while (0);

    do {
      /* e.Enums: 9 */
      /* e.References: 11 */
      /* e.AST: 13 */
      /* s.How: 15 */
      /* e.BuiltinName: 16 */
      /* (e.Enums) ((s.How e.BuiltinName) e.References) e.AST */
      if (! r05_brackets_left(p+3, p[1], p[2]))
        continue;
      if (! r05_brackets_left(p+5, p[4], p[2]))
        continue;
      if (! r05_brackets_left(p+7, p[5], p[6]))
        continue;
      r05_close_evar(p+9, p[3], p[4]);
      r05_close_evar(p+11, p[8], p[6]);
      r05_close_evar(p+13, p[6], p[2]);
      if (! r05_svar_left(p+15, p[7], p[8]))
        continue;
      r05_close_evar(p+16, p[15], p[8]);

      r05_reset_allocator();
      r05_alloc_open_call(p+18);
      r05_alloc_function(&c1);
      r05_alloc_open_call(p+19);
      r05_alloc_function(&r05f_ListOfBuiltinm_WithSugar);
      r05_alloc_close_call(p+20);
      r05_alloc_close_call(p+21);
      r05_push_stack(p[21]);
      r05_push_stack(p[18]);
      r05_push_stack(p[20]);
      r05_push_stack(p[19]);
      r05_push_context(p, 18);
      r05_splice_from_freelist(p[2]);
      return;

  case 1:
      r05_pop_context(p, 18);
      p[18] = arg_begin;
      p[19] = arg_begin->next;
      p[20] = arg_end;

      do {
        /* e.Enums: 9 */
        /* e.References: 11 */
        /* e.AST: 13 */
        /* s.How: 15 */
        /* e.BuiltinName: 16 */
        /* e.1: 21 */
        /* e.2: 26 */
        /* s.No: 28 */
        /* s.FuncName: 29 */
        /* e.1 (s.No s.FuncName regular) e.2 */
        p[21] = NULL;
        p[22] = p[19];
        do {
          r05_start_e_loop();
          if (! r05_brackets_left(p+23, p[22], p[20]))
            continue;
          if (! r05_function_right(p+25, p[23], p[24], &r05f_regular))
            continue;
          r05_close_evar(p+26, p[24], p[20]);
          if (! r05_svar_left(p+28, p[23], p[25]))
            continue;
          if (! r05_svar_left(p+29, p[28], p[25]))
            continue;
          if (! r05_empty_hole(p[29], p[25]))
            continue;

          r05_reset_allocator();
          r05_alloc_open_call(p+30);
          r05_alloc_function(&c2);
          r05_alloc_open_call(p+31);
          r05_alloc_function(&r05f_Explode);
          r05_alloc_svar(p+29);
          r05_alloc_close_call(p+32);
          r05_alloc_close_call(p+33);
          r05_push_stack(p[33]);
          r05_push_stack(p[30]);
          r05_push_stack(p[32]);
          r05_push_stack(p[31]);
          r05_push_context(p, 30);
          r05_splice_from_freelist(p[2]);
          return;

  case 2:
          r05_pop_context(p, 30);
          p[30] = arg_begin;
          p[31] = arg_begin->next;
          p[32] = arg_end;

          do {
            /* e.Enums: 9 */
            /* e.References: 11 */
            /* e.AST: 13 */
            /* s.How: 15 */
            /* e.BuiltinName: 16, 33 */
            /* e.1: 21 */
            /* e.2: 26 */
            /* s.No: 28 */
            /* s.FuncName: 29 */
            /* e.BuiltinName */
            if (! r05_repeated_evar_left(p+33, p[31], p[32], p+16))
              continue;
            if (! r05_empty_hole(p[34], p[32]))
              continue;

            r05_reset_allocator();
            r05_alloc_open_call(p+35);
            r05_alloc_function(&r05f_FindUnusedm_Loop);
            r05_alloc_open_bracket(p+36);
            r05_alloc_insert_pos(p+37);
            r05_alloc_close_bracket(p+38);
            r05_alloc_open_bracket(p+39);
            r05_alloc_insert_pos(p+40);
            r05_alloc_close_bracket(p+41);
            r05_alloc_insert_pos(p+42);
            r05_alloc_open_bracket(p+43);
            r05_alloc_function(&r05f_Function);
            r05_alloc_function(&r05f_Used);
            r05_alloc_function(&r05f_NOm_POS);
            r05_alloc_open_bracket(p+44);
            r05_alloc_insert_pos(p+45);
            r05_alloc_close_bracket(p+46);
            r05_alloc_function(&r05f_Extern);
            r05_alloc_close_bracket(p+47);
            r05_alloc_close_call(p+48);
            r05_push_stack(p[48]);
            r05_push_stack(p[35]);
            r05_link_brackets(p[43], p[47]);
            r05_link_brackets(p[44], p[46]);
            r05_link_brackets(p[39], p[41]);
            r05_link_brackets(p[36], p[38]);
            r05_splice_evar(p[37], p+9);
            r05_splice_evar(p[40], p+11);
            r05_splice_evar(p[42], p+13);
            r05_splice_evar(p[45], p+16);
            r05_splice_from_freelist(p[0]);
            r05_splice_to_freelist(p[0], p[2]);
            return;
          } while (0);
          r05_splice_to_freelist(p[30], p[32]);
        } while (r05_open_evar_advance(p+21, p[20]));
        r05_stop_e_loop();
      } while (0);
      r05_splice_to_freelist(p[18], p[20]);
    } while (0);

    do {
      /* e.Enums: 10 */
      /* e.BuiltinName: 12 */
      /* e.References: 14 */
      /* e.AST: 16 */
      /* (e.Enums) ((Call e.BuiltinName) e.References) e.AST */
      if (! r05_brackets_left(p+3, p[1], p[2]))
        continue;
      if (! r05_brackets_left(p+5, p[4], p[2]))
        continue;
      if (! r05_brackets_left(p+7, p[5], p[6]))
        continue;
      if (! r05_function_left(p+9, p[7], p[8], &r05f_Call))
        continue;
      r05_close_evar(p+10, p[3], p[4]);
      r05_close_evar(p+12, p[9], p[8]);
      r05_close_evar(p+14, p[8], p[6]);
      r05_close_evar(p+16, p[6], p[2]);

      r05_reset_allocator();
      r05_alloc_open_call(p+18);
      r05_alloc_function(&c3);
      r05_alloc_open_call(p+19);
      r05_alloc_function(&r05f_ListOfBuiltinm_WithSugar);
      r05_alloc_close_call(p+20);
      r05_alloc_close_call(p+21);
      r05_push_stack(p[21]);
      r05_push_stack(p[18]);
      r05_push_stack(p[20]);
      r05_push_stack(p[19]);
      r05_push_context(p, 18);
      r05_splice_from_freelist(p[2]);
      return;

  case 3:
      r05_pop_context(p, 18);
      p[18] = arg_begin;
      p[19] = arg_begin->next;
      p[20] = arg_end;

      do {
        /* e.Enums: 10 */
        /* e.BuiltinName: 12 */
        /* e.References: 14 */
        /* e.AST: 16 */
        /* e.1: 21 */
        /* e.2: 26 */
        /* s.No: 28 */
        /* s.FuncName: 29 */
        /* e.1 (s.No s.FuncName special) e.2 */
        p[21] = NULL;
        p[22] = p[19];
        do {
          r05_start_e_loop();
          if (! r05_brackets_left(p+23, p[22], p[20]))
            continue;
          if (! r05_function_right(p+25, p[23], p[24], &r05f_special))
            continue;
          r05_close_evar(p+26, p[24], p[20]);
          if (! r05_svar_left(p+28, p[23], p[25]))
            continue;
          if (! r05_svar_left(p+29, p[28], p[25]))
            continue;
          if (! r05_empty_hole(p[29], p[25]))
            continue;

          r05_reset_allocator();
          r05_alloc_open_call(p+30);
          r05_alloc_function(&c4);
          r05_alloc_open_call(p+31);
          r05_alloc_function(&r05f_Explode);
          r05_alloc_svar(p+29);
          r05_alloc_close_call(p+32);
          r05_alloc_close_call(p+33);
          r05_push_stack(p[33]);
          r05_push_stack(p[30]);
          r05_push_stack(p[32]);
          r05_push_stack(p[31]);
          r05_push_context(p, 30);
          r05_splice_from_freelist(p[2]);
          return;

  case 4:
          r05_pop_context(p, 30);
          p[30] = arg_begin;
          p[31] = arg_begin->next;
          p[32] = arg_end;

          do {
            /* e.Enums: 10 */
            /* e.BuiltinName: 12, 33 */
            /* e.References: 14 */
            /* e.AST: 16 */
            /* e.1: 21 */
            /* e.2: 26 */
            /* s.No: 28 */
            /* s.FuncName: 29 */
            /* e.BuiltinName */
            if (! r05_repeated_evar_left(p+33, p[31], p[32], p+12))
              continue;
            if (! r05_empty_hole(p[34], p[32]))
              continue;

            r05_reset_allocator();
            r05_alloc_open_call(p+35);
            r05_alloc_function(&r05f_FindUnusedm_Loop);
            r05_alloc_open_bracket(p+36);
            r05_alloc_insert_pos(p+37);
            r05_alloc_close_bracket(p+38);
            r05_alloc_open_call(p+39);
            r05_alloc_function(&r05f_AddMetatable);
            r05_alloc_open_bracket(p+40);
            r05_alloc_insert_pos(p+41);
            r05_alloc_close_bracket(p+42);
            r05_alloc_insert_pos(p+43);
            r05_alloc_close_call(p+44);
            r05_alloc_close_call(p+45);
            r05_push_stack(p[45]);
            r05_push_stack(p[35]);
            r05_push_stack(p[44]);
            r05_push_stack(p[39]);
            r05_link_brackets(p[40], p[42]);
            r05_link_brackets(p[36], p[38]);
            r05_splice_evar(p[37], p+10);
            r05_splice_evar(p[41], p+14);
            r05_splice_evar(p[43], p+16);
            r05_splice_from_freelist(p[0]);
            r05_splice_to_freelist(p[0], p[2]);
            return;
          } while (0);
          r05_splice_to_freelist(p[30], p[32]);
        } while (r05_open_evar_advance(p+21, p[20]));
        r05_stop_e_loop();
      } while (0);
      r05_splice_to_freelist(p[18], p[20]);
    } while (0);

    do {
      /* e.References: 9 */
      /* e.AST: 11 */
      /* s.How: 13 */
      /* e.Name: 14, 20 */
      /* e.Enums-B: 16 */
      /* e.Enums-E: 22 */
      /* (e.Enums-B (e.Name) e.Enums-E) ((s.How e.Name) e.References) e.AST */
      if (! r05_brackets_left(p+3, p[1], p[2]))
        continue;
      if (! r05_brackets_left(p+5, p[4], p[2]))
        continue;
      if (! r05_brackets_left(p+7, p[5], p[6]))
        continue;
      r05_close_evar(p+9, p[8], p[6]);
      r05_close_evar(p+11, p[6], p[2]);
      if (! r05_svar_left(p+13, p[7], p[8]))
        continue;
      r05_close_evar(p+14, p[13], p[8]);
      p[16] = NULL;
      p[17] = p[3];
      do {
        r05_start_e_loop();
        if (! r05_brackets_left(p+18, p[17], p[4]))
          continue;
        if (! r05_repeated_evar_left(p+20, p[18], p[19], p+14))
          continue;
        if (! r05_empty_hole(p[21], p[19]))
          continue;
        r05_close_evar(p+22, p[19], p[4]);

        r05_reset_allocator();
        r05_alloc_open_call(p+24);
        r05_alloc_function(&r05f_FindUnusedm_Loop);
        r05_alloc_open_bracket(p+25);
        r05_alloc_insert_pos(p+26);
        r05_alloc_open_bracket(p+27);
        r05_alloc_insert_pos(p+28);
        r05_alloc_close_bracket(p+29);
        r05_alloc_insert_pos(p+30);
        r05_alloc_close_bracket(p+31);
        r05_alloc_open_bracket(p+32);
        r05_alloc_insert_pos(p+33);
        r05_alloc_close_bracket(p+34);
        r05_alloc_insert_pos(p+35);
        r05_alloc_close_call(p+36);
        r05_push_stack(p[36]);
        r05_push_stack(p[24]);
        r05_link_brackets(p[32], p[34]);
        r05_link_brackets(p[25], p[31]);
        r05_link_brackets(p[27], p[29]);
        r05_splice_evar(p[26], p+16);
        r05_splice_evar(p[28], p+14);
        r05_splice_evar(p[30], p+22);
        r05_splice_evar(p[33], p+9);
        r05_splice_evar(p[35], p+11);
        r05_splice_from_freelist(p[0]);
        r05_splice_to_freelist(p[0], p[2]);
        return;
      } while (r05_open_evar_advance(p+16, p[4]));
      r05_stop_e_loop();
    } while (0);

    do {
      /* e.Enums: 9 */
      /* e.References: 11 */
      /* e.AST: 13 */
      /* s.How: 15 */
      /* e.Name: 16 */
      /* (e.Enums) ((s.How e.Name) e.References) e.AST */
      if (! r05_brackets_left(p+3, p[1], p[2]))
        continue;
      if (! r05_brackets_left(p+5, p[4], p[2]))
        continue;
      if (! r05_brackets_left(p+7, p[5], p[6]))
        continue;
      r05_close_evar(p+9, p[3], p[4]);
      r05_close_evar(p+11, p[8], p[6]);
      r05_close_evar(p+13, p[6], p[2]);
      if (! r05_svar_left(p+15, p[7], p[8]))
        continue;
      r05_close_evar(p+16, p[15], p[8]);

      r05_reset_allocator();
      r05_alloc_open_call(p+18);
      r05_alloc_function(&r05f_FindUnusedm_Loop);
      r05_alloc_open_bracket(p+19);
      r05_alloc_insert_pos(p+20);
      r05_alloc_open_bracket(p+21);
      r05_alloc_insert_pos(p+22);
      r05_alloc_close_bracket(p+23);
      r05_alloc_close_bracket(p+24);
      r05_alloc_open_bracket(p+25);
      r05_alloc_insert_pos(p+26);
      r05_alloc_close_bracket(p+27);
      r05_alloc_insert_pos(p+28);
      r05_alloc_close_call(p+29);
      r05_push_stack(p[29]);
      r05_push_stack(p[18]);
      r05_link_brackets(p[25], p[27]);
      r05_link_brackets(p[19], p[24]);
      r05_link_brackets(p[21], p[23]);
      r05_splice_evar(p[20], p+9);
      r05_splice_evar(p[22], p+16);
      r05_splice_evar(p[26], p+11);
      r05_splice_evar(p[28], p+13);
      r05_splice_from_freelist(p[0]);
      r05_splice_to_freelist(p[0], p[2]);
      return;
    } while (0);

    do {
      /* e.Enums-B: 7 */
      /* e.Meta: 11, 25 */
      /* e.Enums-E: 13 */
      /* e.AST-B: 15 */
      /* e.AST-E: 27 */
      /* (e.Enums-B (e.Meta) e.Enums-E) () e.AST-B (Function Used NO-POS (e.Meta) Meta) e.AST-E */
      if (! r05_brackets_left(p+3, p[1], p[2]))
        continue;
      if (! r05_brackets_left(p+5, p[4], p[2]))
        continue;
      if (! r05_empty_hole(p[5], p[6]))
        continue;
      p[7] = NULL;
      p[8] = p[3];
      do {
        r05_start_e_loop();
        if (! r05_brackets_left(p+9, p[8], p[4]))
          continue;
        r05_close_evar(p+11, p[9], p[10]);
        r05_close_evar(p+13, p[10], p[4]);
        p[15] = NULL;
        p[16] = p[6];
        do {
          r05_start_e_loop();
          if (! r05_brackets_left(p+17, p[16], p[2]))
            continue;
          if (! r05_function_left(p+19, p[17], p[18], &r05f_Function))
            continue;
          if (! r05_function_left(p+20, p[19], p[18], &r05f_Used))
            continue;
          if (! r05_function_left(p+21, p[20], p[18], &r05f_NOm_POS))
            continue;
          if (! r05_function_right(p+22, p[21], p[18], &r05f_Meta))
            continue;
          if (! r05_brackets_left(p+23, p[21], p[22]))
            continue;
          if (! r05_empty_hole(p[24], p[22]))
            continue;
          if (! r05_repeated_evar_left(p+25, p[23], p[24], p+11))
            continue;
          if (! r05_empty_hole(p[26], p[24]))
            continue;
          r05_close_evar(p+27, p[18], p[2]);

          r05_reset_allocator();
          r05_alloc_open_call(p+29);
          r05_alloc_function(&r05f_FindUnusedm_Loop);
          r05_alloc_open_bracket(p+30);
          r05_alloc_insert_pos(p+31);
          r05_alloc_close_bracket(p+32);
          r05_alloc_open_bracket(p+33);
          r05_alloc_close_bracket(p+34);
          r05_alloc_insert_pos(p+35);
          r05_alloc_open_bracket(p+36);
          r05_alloc_function(&r05f_Function);
          r05_alloc_function(&r05f_Used);
          r05_alloc_function(&r05f_NOm_POS);
          r05_alloc_open_bracket(p+37);
          r05_alloc_insert_pos(p+38);
          r05_alloc_close_bracket(p+39);
          r05_alloc_function(&r05f_Meta);
          r05_alloc_close_bracket(p+40);
          r05_alloc_insert_pos(p+41);
          r05_alloc_close_call(p+42);
          r05_push_stack(p[42]);
          r05_push_stack(p[29]);
          r05_link_brackets(p[36], p[40]);
          r05_link_brackets(p[37], p[39]);
          r05_link_brackets(p[33], p[34]);
          r05_link_brackets(p[30], p[32]);
          r05_splice_evar(p[31], p+7);
          r05_splice_evar(p[31], p+13);
          r05_splice_evar(p[35], p+15);
          r05_splice_evar(p[38], p+11);
          r05_splice_evar(p[41], p+27);
          r05_splice_from_freelist(p[0]);
          r05_splice_to_freelist(p[0], p[2]);
          return;
        } while (r05_open_evar_advance(p+15, p[2]));
      } while (r05_open_evar_advance(p+7, p[4]));
      r05_stop_e_loop();
    } while (0);

    do {
      /* e.Enums: 7 */
      /* e.AST: 9 */
      /* (e.Enums) () e.AST */
      if (! r05_brackets_left(p+3, p[1], p[2]))
        continue;
      if (! r05_brackets_left(p+5, p[4], p[2]))
        continue;
      if (! r05_empty_hole(p[5], p[6]))
        continue;
      r05_close_evar(p+7, p[3], p[4]);
      r05_close_evar(p+9, p[6], p[2]);

      r05_reset_allocator();
      r05_alloc_insert_pos(p+11);
      r05_alloc_open_call(p+12);
      r05_alloc_function(&r05f_Map);
      r05_alloc_function(&r05f_parseru_MakeEnum);
      r05_alloc_insert_pos(p+13);
      r05_alloc_close_call(p+14);
      r05_push_stack(p[14]);
      r05_push_stack(p[12]);
      r05_splice_evar(p[11], p+9);
      r05_splice_evar(p[13], p+7);
      r05_splice_from_freelist(p[0]);
      r05_splice_to_freelist(p[0], p[2]);
      return;
    } while (0);

    r05_recognition_impossible();
  }
}

R05_DEFINE_LOCAL_FUNCTION(ListOfBuiltinm_WithSugar, "ListOfBuiltin-WithSugar") {
  struct r05_node *p[17] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /*  */
    if (! r05_empty_hole(p[1], p[2]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_call(p+3);
    r05_alloc_function(&r05f_ListOfBuiltin);
    r05_alloc_close_call(p+4);
    r05_alloc_open_bracket(p+5);
    r05_alloc_number(0UL);
    r05_alloc_function(&r05f_k25_);
    r05_alloc_function(&r05f_regular);
    r05_alloc_close_bracket(p+6);
    r05_alloc_open_bracket(p+7);
    r05_alloc_number(0UL);
    r05_alloc_function(&r05f_k2A_);
    r05_alloc_function(&r05f_regular);
    r05_alloc_close_bracket(p+8);
    r05_alloc_open_bracket(p+9);
    r05_alloc_number(0UL);
    r05_alloc_function(&r05f_k2B_);
    r05_alloc_function(&r05f_regular);
    r05_alloc_close_bracket(p+10);
    r05_alloc_open_bracket(p+11);
    r05_alloc_number(0UL);
    r05_alloc_function(&r05f_m_);
    r05_alloc_function(&r05f_regular);
    r05_alloc_close_bracket(p+12);
    r05_alloc_open_bracket(p+13);
    r05_alloc_number(0UL);
    r05_alloc_function(&r05f_k2F_);
    r05_alloc_function(&r05f_regular);
    r05_alloc_close_bracket(p+14);
    r05_alloc_open_bracket(p+15);
    r05_alloc_number(0UL);
    r05_alloc_function(&r05f_k3F_);
    r05_alloc_function(&r05f_special);
    r05_alloc_close_bracket(p+16);
    r05_link_brackets(p[15], p[16]);
    r05_link_brackets(p[13], p[14]);
    r05_link_brackets(p[11], p[12]);
    r05_link_brackets(p[9], p[10]);
    r05_link_brackets(p[7], p[8]);
    r05_link_brackets(p[5], p[6]);
    r05_push_stack(p[4]);
    r05_push_stack(p[3]);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(AddMetatable, "AddMetatable") {
  struct r05_node *p[23] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /* e.References: 5 */
    /* e.AST: 7 */
    /* (e.References) e.AST */
    if (! r05_brackets_left(p+3, p[1], p[2]))
      continue;
    r05_close_evar(p+5, p[3], p[4]);
    r05_close_evar(p+7, p[4], p[2]);

    r05_reset_allocator();
    r05_alloc_open_call(p+9);
    r05_alloc_function(&r05f_AddMetatablem_Aux);
    r05_alloc_open_bracket(p+10);
    r05_alloc_insert_pos(p+11);
    r05_alloc_close_bracket(p+12);
    r05_alloc_open_call(p+13);
    r05_alloc_function(&r05f_MapAccum);
    r05_alloc_function(&r05f_parseru_AddMetatablem_AddFunction);
    r05_alloc_open_bracket(p+14);
    r05_alloc_close_bracket(p+15);
    r05_alloc_insert_pos(p+16);
    r05_alloc_open_call(p+17);
    r05_alloc_function(&r05f_Map);
    r05_alloc_function(&r05f_parseru_AddMetatablem_MakeMetafunction);
    r05_alloc_open_call(p+18);
    r05_alloc_function(&r05f_ListOfBuiltinm_WithSugar);
    r05_alloc_close_call(p+19);
    r05_alloc_close_call(p+20);
    r05_alloc_close_call(p+21);
    r05_alloc_close_call(p+22);
    r05_push_stack(p[22]);
    r05_push_stack(p[9]);
    r05_push_stack(p[21]);
    r05_push_stack(p[13]);
    r05_push_stack(p[20]);
    r05_push_stack(p[17]);
    r05_push_stack(p[19]);
    r05_push_stack(p[18]);
    r05_link_brackets(p[14], p[15]);
    r05_link_brackets(p[10], p[12]);
    r05_splice_evar(p[11], p+5);
    r05_splice_evar(p[16], p+7);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_ENTRY_FUNCTION(parseru_AddMetatablem_AddFunction, "parser_AddMetatable-AddFunction") {
  struct r05_node *p[32] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /* e.AllFunctions: 12 */
    /* e.Builtin: 14 */
    /* s.Used: 16 */
    /* (e.AllFunctions) (Function s.Used NO-POS (e.Builtin) Extern) */
    if (! r05_brackets_left(p+3, p[1], p[2]))
      continue;
    if (! r05_brackets_left(p+5, p[4], p[2]))
      continue;
    if (! r05_function_left(p+7, p[5], p[6], &r05f_Function))
      continue;
    if (! r05_function_right(p+8, p[7], p[6], &r05f_Extern))
      continue;
    if (! r05_brackets_right(p+9, p[7], p[8]))
      continue;
    if (! r05_function_right(p+11, p[7], p[9], &r05f_NOm_POS))
      continue;
    if (! r05_empty_hole(p[6], p[2]))
      continue;
    r05_close_evar(p+12, p[3], p[4]);
    r05_close_evar(p+14, p[9], p[10]);
    if (! r05_svar_left(p+16, p[7], p[11]))
      continue;
    if (! r05_empty_hole(p[16], p[11]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_bracket(p+17);
    r05_alloc_insert_pos(p+18);
    r05_alloc_close_bracket(p+19);
    r05_alloc_open_bracket(p+20);
    r05_alloc_function(&r05f_Function);
    r05_alloc_svar(p+16);
    r05_alloc_function(&r05f_NOm_POS);
    r05_alloc_open_bracket(p+21);
    r05_alloc_insert_pos(p+22);
    r05_alloc_close_bracket(p+23);
    r05_alloc_function(&r05f_Extern);
    r05_alloc_close_bracket(p+24);
    r05_link_brackets(p[20], p[24]);
    r05_link_brackets(p[21], p[23]);
    r05_link_brackets(p[17], p[19]);
    r05_splice_evar(p[18], p+12);
    r05_splice_evar(p[22], p+14);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  do {
    /* e.AllFunctions: 11 */
    /* e.Name: 13 */
    /* s.Used: 15 */
    /* t.Pos: 16 */
    /* (e.AllFunctions) (Function s.Used t.Pos (e.Name) Extern) */
    if (! r05_brackets_left(p+3, p[1], p[2]))
      continue;
    if (! r05_brackets_left(p+5, p[4], p[2]))
      continue;
    if (! r05_function_left(p+7, p[5], p[6], &r05f_Function))
      continue;
    if (! r05_function_right(p+8, p[7], p[6], &r05f_Extern))
      continue;
    if (! r05_brackets_right(p+9, p[7], p[8]))
      continue;
    if (! r05_empty_hole(p[6], p[2]))
      continue;
    r05_close_evar(p+11, p[3], p[4]);
    r05_close_evar(p+13, p[9], p[10]);
    if (! r05_svar_left(p+15, p[7], p[9]))
      continue;
    if (! r05_tvar_left(p+16, p[15], p[9]))
      continue;
    if (! r05_empty_hole(p[17], p[9]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_bracket(p+18);
    r05_alloc_insert_pos(p+19);
    r05_alloc_open_bracket(p+20);
    r05_alloc_insert_pos(p+21);
    r05_alloc_close_bracket(p+22);
    r05_alloc_close_bracket(p+23);
    r05_alloc_open_bracket(p+24);
    r05_alloc_function(&r05f_Function);
    r05_alloc_svar(p+15);
    r05_alloc_insert_pos(p+25);
    r05_alloc_open_bracket(p+26);
    r05_alloc_evar(p+13);
    r05_alloc_close_bracket(p+27);
    r05_alloc_function(&r05f_Extern);
    r05_alloc_close_bracket(p+28);
    r05_link_brackets(p[24], p[28]);
    r05_link_brackets(p[26], p[27]);
    r05_link_brackets(p[18], p[23]);
    r05_link_brackets(p[20], p[22]);
    r05_splice_evar(p[19], p+11);
    r05_splice_evar(p[21], p+13);
    r05_splice_tvar(p[25], p+16);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  do {
    /* e.AllFunctions: 13 */
    /* e.Ident: 15 */
    /* (e.AllFunctions) (Function Used NO-POS (e.Ident) Local) */
    if (! r05_brackets_left(p+3, p[1], p[2]))
      continue;
    if (! r05_brackets_left(p+5, p[4], p[2]))
      continue;
    if (! r05_function_left(p+7, p[5], p[6], &r05f_Function))
      continue;
    if (! r05_function_left(p+8, p[7], p[6], &r05f_Used))
      continue;
    if (! r05_function_left(p+9, p[8], p[6], &r05f_NOm_POS))
      continue;
    if (! r05_function_right(p+10, p[9], p[6], &r05f_Local))
      continue;
    if (! r05_brackets_left(p+11, p[9], p[10]))
      continue;
    if (! r05_empty_hole(p[12], p[10]))
      continue;
    if (! r05_empty_hole(p[6], p[2]))
      continue;
    r05_close_evar(p+13, p[3], p[4]);
    r05_close_evar(p+15, p[11], p[12]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+17);
    r05_alloc_insert_pos(p+18);
    r05_alloc_close_bracket(p+19);
    r05_alloc_open_bracket(p+20);
    r05_alloc_function(&r05f_Function);
    r05_alloc_function(&r05f_Used);
    r05_alloc_function(&r05f_NOm_POS);
    r05_alloc_open_bracket(p+21);
    r05_alloc_insert_pos(p+22);
    r05_alloc_close_bracket(p+23);
    r05_alloc_function(&r05f_Local);
    r05_alloc_close_bracket(p+24);
    r05_link_brackets(p[20], p[24]);
    r05_link_brackets(p[21], p[23]);
    r05_link_brackets(p[17], p[19]);
    r05_splice_evar(p[18], p+13);
    r05_splice_evar(p[22], p+15);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  do {
    /* e.AllFunctions: 8 */
    /* s.Used: 10 */
    /* t.Pos: 11 */
    /* e.Name: 15 */
    /* s.Scope: 17 */
    /* e.Body: 18 */
    /* (e.AllFunctions) (Function s.Used t.Pos (e.Name) s.Scope e.Body) */
    if (! r05_brackets_left(p+3, p[1], p[2]))
      continue;
    if (! r05_brackets_left(p+5, p[4], p[2]))
      continue;
    if (! r05_function_left(p+7, p[5], p[6], &r05f_Function))
      continue;
    if (! r05_empty_hole(p[6], p[2]))
      continue;
    r05_close_evar(p+8, p[3], p[4]);
    if (! r05_svar_left(p+10, p[7], p[6]))
      continue;
    if (! r05_tvar_left(p+11, p[10], p[6]))
      continue;
    if (! r05_brackets_left(p+13, p[12], p[6]))
      continue;
    r05_close_evar(p+15, p[13], p[14]);
    if (! r05_svar_left(p+17, p[14], p[6]))
      continue;
    r05_close_evar(p+18, p[17], p[6]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+20);
    r05_alloc_insert_pos(p+21);
    r05_alloc_open_bracket(p+22);
    r05_alloc_insert_pos(p+23);
    r05_alloc_close_bracket(p+24);
    r05_alloc_close_bracket(p+25);
    r05_alloc_open_bracket(p+26);
    r05_alloc_function(&r05f_Function);
    r05_alloc_svar(p+10);
    r05_alloc_insert_pos(p+27);
    r05_alloc_open_bracket(p+28);
    r05_alloc_evar(p+15);
    r05_alloc_close_bracket(p+29);
    r05_alloc_svar(p+17);
    r05_alloc_insert_pos(p+30);
    r05_alloc_close_bracket(p+31);
    r05_link_brackets(p[26], p[31]);
    r05_link_brackets(p[28], p[29]);
    r05_link_brackets(p[20], p[25]);
    r05_link_brackets(p[22], p[24]);
    r05_splice_evar(p[21], p+8);
    r05_splice_evar(p[23], p+15);
    r05_splice_tvar(p[27], p+11);
    r05_splice_evar(p[30], p+18);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_ENTRY_FUNCTION(parseru_AddMetatablem_MakeMetafunction, "parser_AddMetatable-MakeMetafunction") {
  struct r05_node *p[14] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /* s.No: 6 */
    /* s.Name: 7 */
    /* (s.No s.Name special) */
    if (! r05_brackets_left(p+3, p[1], p[2]))
      continue;
    if (! r05_function_right(p+5, p[3], p[4], &r05f_special))
      continue;
    if (! r05_empty_hole(p[4], p[2]))
      continue;
    if (! r05_svar_left(p+6, p[3], p[5]))
      continue;
    if (! r05_svar_left(p+7, p[6], p[5]))
      continue;
    if (! r05_empty_hole(p[7], p[5]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_bracket(p+8);
    r05_alloc_function(&r05f_Function);
    r05_alloc_function(&r05f_Used);
    r05_alloc_function(&r05f_NOm_POS);
    r05_alloc_open_bracket(p+9);
    r05_alloc_open_call(p+10);
    r05_alloc_function(&r05f_Explode);
    r05_alloc_svar(p+7);
    r05_alloc_close_call(p+11);
    r05_alloc_close_bracket(p+12);
    r05_alloc_function(&r05f_Meta);
    r05_alloc_close_bracket(p+13);
    r05_link_brackets(p[8], p[13]);
    r05_link_brackets(p[9], p[12]);
    r05_push_stack(p[11]);
    r05_push_stack(p[10]);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  do {
    /* t.Regular: 3 */
    /* t.Regular */
    if (! r05_tvar_left(p+3, p[1], p[2]))
      continue;
    if (! r05_empty_hole(p[4], p[2]))
      continue;

    r05_reset_allocator();
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(AddMetatablem_Aux, "AddMetatable-Aux") {
  struct r05_node *p[22] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /* e.References: 7 */
    /* e.AllFunctions: 9 */
    /* e.AST: 11 */
    /* (e.References) (e.AllFunctions) e.AST */
    if (! r05_brackets_left(p+3, p[1], p[2]))
      continue;
    if (! r05_brackets_left(p+5, p[4], p[2]))
      continue;
    r05_close_evar(p+7, p[3], p[4]);
    r05_close_evar(p+9, p[5], p[6]);
    r05_close_evar(p+11, p[6], p[2]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+13);
    r05_alloc_insert_pos(p+14);
    r05_alloc_open_call(p+15);
    r05_alloc_function(&r05f_Map);
    r05_alloc_function(&r05f_parseru_AddHowCall);
    r05_alloc_insert_pos(p+16);
    r05_alloc_close_call(p+17);
    r05_alloc_close_bracket(p+18);
    r05_alloc_insert_pos(p+19);
    r05_alloc_open_bracket(p+20);
    r05_alloc_function(&r05f_Metatable);
    r05_alloc_evar(p+9);
    r05_alloc_close_bracket(p+21);
    r05_link_brackets(p[20], p[21]);
    r05_link_brackets(p[13], p[18]);
    r05_push_stack(p[17]);
    r05_push_stack(p[15]);
    r05_splice_evar(p[14], p+7);
    r05_splice_evar(p[16], p+9);
    r05_splice_evar(p[19], p+11);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_ENTRY_FUNCTION(parseru_AddHowCall, "parser_AddHowCall") {
  struct r05_node *p[10] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /* e.Name: 5 */
    /* (e.Name) */
    if (! r05_brackets_left(p+3, p[1], p[2]))
      continue;
    if (! r05_empty_hole(p[4], p[2]))
      continue;
    r05_close_evar(p+5, p[3], p[4]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+7);
    r05_alloc_function(&r05f_Call);
    r05_alloc_insert_pos(p+8);
    r05_alloc_close_bracket(p+9);
    r05_link_brackets(p[7], p[9]);
    r05_splice_evar(p[8], p+5);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_ENTRY_FUNCTION(parseru_MakeEnum, "parser_MakeEnum") {
  struct r05_node *p[12] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /* e.Name: 5 */
    /* (e.Name) */
    if (! r05_brackets_left(p+3, p[1], p[2]))
      continue;
    if (! r05_empty_hole(p[4], p[2]))
      continue;
    r05_close_evar(p+5, p[3], p[4]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+7);
    r05_alloc_function(&r05f_Function);
    r05_alloc_function(&r05f_Used);
    r05_alloc_function(&r05f_NOm_POS);
    r05_alloc_open_bracket(p+8);
    r05_alloc_insert_pos(p+9);
    r05_alloc_close_bracket(p+10);
    r05_alloc_function(&r05f_Local);
    r05_alloc_close_bracket(p+11);
    r05_link_brackets(p[7], p[11]);
    r05_link_brackets(p[8], p[10]);
    r05_splice_evar(p[9], p+5);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_ENTRY_FUNCTION(parseru_FindUnusedm_Loopm_UnusedErrors, "parser_FindUnused-Loop-UnusedErrors") {
  struct r05_node *p[24] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /* t.ErrorList: 7 */
    /* t.Pos: 9 */
    /* e.Name: 13 */
    /* s.Scope: 15 */
    /* e.Body: 16 */
    /* t.ErrorList (Function Unused t.Pos (e.Name) s.Scope e.Body) */
    if (! r05_brackets_right(p+3, p[1], p[2]))
      continue;
    if (! r05_function_left(p+5, p[3], p[4], &r05f_Function))
      continue;
    if (! r05_function_left(p+6, p[5], p[4], &r05f_Unused))
      continue;
    if (! r05_tvar_left(p+7, p[1], p[3]))
      continue;
    if (! r05_empty_hole(p[8], p[3]))
      continue;
    if (! r05_tvar_left(p+9, p[6], p[4]))
      continue;
    if (! r05_brackets_left(p+11, p[10], p[4]))
      continue;
    r05_close_evar(p+13, p[11], p[12]);
    if (! r05_svar_left(p+15, p[12], p[4]))
      continue;
    r05_close_evar(p+16, p[15], p[4]);

    r05_reset_allocator();
    r05_alloc_open_call(p+18);
    r05_alloc_function(&r05f_ELm_AddErrorAt);
    r05_alloc_insert_pos(p+19);
    r05_alloc_open_call(p+20);
    r05_alloc_function(&r05f_UnusedMessage);
    r05_alloc_svar(p+15);
    r05_alloc_close_call(p+21);
    r05_alloc_char(' ');
    r05_alloc_insert_pos(p+22);
    r05_alloc_close_call(p+23);
    r05_push_stack(p[23]);
    r05_push_stack(p[18]);
    r05_push_stack(p[21]);
    r05_push_stack(p[20]);
    r05_splice_tvar(p[19], p+7);
    r05_splice_tvar(p[19], p+9);
    r05_splice_evar(p[22], p+13);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  do {
    /* t.ErrorList: 3 */
    /* t.Other: 5 */
    /* t.ErrorList t.Other */
    if (! r05_tvar_left(p+3, p[1], p[2]))
      continue;
    if (! r05_tvar_left(p+5, p[4], p[2]))
      continue;
    if (! r05_empty_hole(p[6], p[2]))
      continue;

    r05_reset_allocator();
    r05_alloc_insert_pos(p+7);
    r05_splice_tvar(p[7], p+3);
    r05_splice_tvar(p[7], p+5);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(UnusedMessage, "UnusedMessage") {
  struct r05_node *p[4] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /* Local */
    if (! r05_function_left(p+3, p[1], p[2], &r05f_Local))
      continue;
    if (! r05_empty_hole(p[3], p[2]))
      continue;

    r05_reset_allocator();
    r05_alloc_chars("Unused local function", 21);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  do {
    /* Extern */
    if (! r05_function_left(p+3, p[1], p[2], &r05f_Extern))
      continue;
    if (! r05_empty_hole(p[3], p[2]))
      continue;

    r05_reset_allocator();
    r05_alloc_chars("Unused external declaration", 27);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(CastAST, "CastAST") {
  struct r05_node *p[10] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /* e.AST: 3 */
    /* e.AST */
    r05_close_evar(p+3, p[1], p[2]);

    r05_reset_allocator();
    r05_alloc_open_call(p+5);
    r05_alloc_function(&r05f_CastASTm_JoinExterns);
    r05_alloc_open_call(p+6);
    r05_alloc_function(&r05f_Map);
    r05_alloc_function(&r05f_parseru_CastASTm_Item);
    r05_alloc_insert_pos(p+7);
    r05_alloc_close_call(p+8);
    r05_alloc_close_call(p+9);
    r05_push_stack(p[9]);
    r05_push_stack(p[5]);
    r05_push_stack(p[8]);
    r05_push_stack(p[6]);
    r05_splice_evar(p[7], p+3);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);
}

R05_DEFINE_ENTRY_FUNCTION(parseru_CastASTm_Item, "parser_CastAST-Item") {
  struct r05_node *p[23] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /* e.Name: 10 */
    /* t.Pos: 12 */
    /* (Function Used t.Pos (e.Name) Extern) */
    if (! r05_brackets_left(p+3, p[1], p[2]))
      continue;
    if (! r05_function_left(p+5, p[3], p[4], &r05f_Function))
      continue;
    if (! r05_function_left(p+6, p[5], p[4], &r05f_Used))
      continue;
    if (! r05_function_right(p+7, p[6], p[4], &r05f_Extern))
      continue;
    if (! r05_brackets_right(p+8, p[6], p[7]))
      continue;
    if (! r05_empty_hole(p[4], p[2]))
      continue;
    r05_close_evar(p+10, p[8], p[9]);
    if (! r05_tvar_left(p+12, p[6], p[8]))
      continue;
    if (! r05_empty_hole(p[13], p[8]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_bracket(p+14);
    r05_alloc_function(&r05f_Extern);
    r05_alloc_open_bracket(p+15);
    r05_alloc_insert_pos(p+16);
    r05_alloc_close_bracket(p+17);
    r05_alloc_close_bracket(p+18);
    r05_link_brackets(p[14], p[18]);
    r05_link_brackets(p[15], p[17]);
    r05_splice_tvar(p[16], p+12);
    r05_splice_evar(p[16], p+10);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  do {
    /* t.Pos: 7 */
    /* e.Name: 11 */
    /* s.Scope: 13 */
    /* e.Body: 14 */
    /* (Function Used t.Pos (e.Name) s.Scope e.Body) */
    if (! r05_brackets_left(p+3, p[1], p[2]))
      continue;
    if (! r05_function_left(p+5, p[3], p[4], &r05f_Function))
      continue;
    if (! r05_function_left(p+6, p[5], p[4], &r05f_Used))
      continue;
    if (! r05_empty_hole(p[4], p[2]))
      continue;
    if (! r05_tvar_left(p+7, p[6], p[4]))
      continue;
    if (! r05_brackets_left(p+9, p[8], p[4]))
      continue;
    r05_close_evar(p+11, p[9], p[10]);
    if (! r05_svar_left(p+13, p[10], p[4]))
      continue;
    r05_close_evar(p+14, p[13], p[4]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+16);
    r05_alloc_function(&r05f_Function);
    r05_alloc_insert_pos(p+17);
    r05_alloc_open_bracket(p+18);
    r05_alloc_insert_pos(p+19);
    r05_alloc_close_bracket(p+20);
    r05_alloc_svar(p+13);
    r05_alloc_insert_pos(p+21);
    r05_alloc_close_bracket(p+22);
    r05_link_brackets(p[16], p[22]);
    r05_link_brackets(p[18], p[20]);
    r05_splice_tvar(p[17], p+7);
    r05_splice_evar(p[19], p+11);
    r05_splice_evar(p[21], p+14);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  do {
    /* e.Functions: 6 */
    /* (Metatable e.Functions) */
    if (! r05_brackets_left(p+3, p[1], p[2]))
      continue;
    if (! r05_function_left(p+5, p[3], p[4], &r05f_Metatable))
      continue;
    if (! r05_empty_hole(p[4], p[2]))
      continue;
    r05_close_evar(p+6, p[5], p[4]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+8);
    r05_alloc_function(&r05f_Metatable);
    r05_alloc_insert_pos(p+9);
    r05_alloc_close_bracket(p+10);
    r05_link_brackets(p[8], p[10]);
    r05_splice_evar(p[9], p+6);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(CastASTm_JoinExterns, "CastAST-JoinExterns") {
  struct r05_node *p[24] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /* e.AST-B: 3 */
    /* e.Externs1: 11 */
    /* e.Externs2: 13 */
    /* e.AST-E: 15 */
    /* e.AST-B (Extern e.Externs1) (Extern e.Externs2) e.AST-E */
    p[3] = NULL;
    p[4] = p[1];
    do {
      r05_start_e_loop();
      if (! r05_brackets_left(p+5, p[4], p[2]))
        continue;
      if (! r05_function_left(p+7, p[5], p[6], &r05f_Extern))
        continue;
      if (! r05_brackets_left(p+8, p[6], p[2]))
        continue;
      if (! r05_function_left(p+10, p[8], p[9], &r05f_Extern))
        continue;
      r05_close_evar(p+11, p[7], p[6]);
      r05_close_evar(p+13, p[10], p[9]);
      r05_close_evar(p+15, p[9], p[2]);

      r05_reset_allocator();
      r05_alloc_insert_pos(p+17);
      r05_alloc_open_call(p+18);
      r05_alloc_function(&r05f_CastASTm_JoinExterns);
      r05_alloc_open_bracket(p+19);
      r05_alloc_function(&r05f_Extern);
      r05_alloc_insert_pos(p+20);
      r05_alloc_close_bracket(p+21);
      r05_alloc_insert_pos(p+22);
      r05_alloc_close_call(p+23);
      r05_push_stack(p[23]);
      r05_push_stack(p[18]);
      r05_link_brackets(p[19], p[21]);
      r05_splice_evar(p[17], p+3);
      r05_splice_evar(p[20], p+11);
      r05_splice_evar(p[20], p+13);
      r05_splice_evar(p[22], p+15);
      r05_splice_from_freelist(p[0]);
      r05_splice_to_freelist(p[0], p[2]);
      return;
    } while (r05_open_evar_advance(p+3, p[2]));
    r05_stop_e_loop();
  } while (0);

  do {
    /* e.AST: 3 */
    /* e.AST */
    r05_close_evar(p+3, p[1], p[2]);

    r05_reset_allocator();
    r05_alloc_insert_pos(p+5);
    r05_splice_evar(p[5], p+3);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);
}

R05_DEFINE_LOCAL_FUNCTION(ExtractReferences, "ExtractReferences") {
  struct r05_node *p[10] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /* e.Sentences: 3 */
    /* e.Sentences */
    r05_close_evar(p+3, p[1], p[2]);

    r05_reset_allocator();
    r05_alloc_open_call(p+5);
    r05_alloc_function(&r05f_Unique);
    r05_alloc_open_call(p+6);
    r05_alloc_function(&r05f_Map);
    r05_alloc_function(&r05f_parseru_ExtractReferencesm_Sentence);
    r05_alloc_insert_pos(p+7);
    r05_alloc_close_call(p+8);
    r05_alloc_close_call(p+9);
    r05_push_stack(p[9]);
    r05_push_stack(p[5]);
    r05_push_stack(p[8]);
    r05_push_stack(p[6]);
    r05_splice_evar(p[7], p+3);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);
}

R05_DEFINE_ENTRY_FUNCTION(parseru_ExtractReferencesm_Sentence, "parser_ExtractReferences-Sentence") {
  struct r05_node *p[17] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /* e.Pattern: 7 */
    /* e.Tail: 9 */
    /* ((e.Pattern) e.Tail) */
    if (! r05_brackets_left(p+3, p[1], p[2]))
      continue;
    if (! r05_brackets_left(p+5, p[3], p[4]))
      continue;
    if (! r05_empty_hole(p[4], p[2]))
      continue;
    r05_close_evar(p+7, p[5], p[6]);
    r05_close_evar(p+9, p[6], p[4]);

    r05_reset_allocator();
    r05_alloc_open_call(p+11);
    r05_alloc_function(&r05f_ExtractReferencesm_Expr);
    r05_alloc_insert_pos(p+12);
    r05_alloc_close_call(p+13);
    r05_alloc_open_call(p+14);
    r05_alloc_function(&r05f_ExtractReferencesm_Tail);
    r05_alloc_insert_pos(p+15);
    r05_alloc_close_call(p+16);
    r05_push_stack(p[16]);
    r05_push_stack(p[14]);
    r05_push_stack(p[13]);
    r05_push_stack(p[11]);
    r05_splice_evar(p[12], p+7);
    r05_splice_evar(p[15], p+9);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(ExtractReferencesm_Tail, "ExtractReferences-Tail") {
  struct r05_node *p[25] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /* e.Result: 10 */
    /* e.Pattern: 12 */
    /* e.Tail: 14 */
    /* (Condition (e.Result) (e.Pattern)) e.Tail */
    if (! r05_brackets_left(p+3, p[1], p[2]))
      continue;
    if (! r05_function_left(p+5, p[3], p[4], &r05f_Condition))
      continue;
    if (! r05_brackets_left(p+6, p[5], p[4]))
      continue;
    if (! r05_brackets_left(p+8, p[7], p[4]))
      continue;
    if (! r05_empty_hole(p[9], p[4]))
      continue;
    r05_close_evar(p+10, p[6], p[7]);
    r05_close_evar(p+12, p[8], p[9]);
    r05_close_evar(p+14, p[4], p[2]);

    r05_reset_allocator();
    r05_alloc_open_call(p+16);
    r05_alloc_function(&r05f_ExtractReferencesm_Expr);
    r05_alloc_insert_pos(p+17);
    r05_alloc_close_call(p+18);
    r05_alloc_open_call(p+19);
    r05_alloc_function(&r05f_ExtractReferencesm_Expr);
    r05_alloc_insert_pos(p+20);
    r05_alloc_close_call(p+21);
    r05_alloc_open_call(p+22);
    r05_alloc_function(&r05f_ExtractReferencesm_Tail);
    r05_alloc_insert_pos(p+23);
    r05_alloc_close_call(p+24);
    r05_push_stack(p[24]);
    r05_push_stack(p[22]);
    r05_push_stack(p[21]);
    r05_push_stack(p[19]);
    r05_push_stack(p[18]);
    r05_push_stack(p[16]);
    r05_splice_evar(p[17], p+10);
    r05_splice_evar(p[20], p+12);
    r05_splice_evar(p[23], p+14);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  do {
    /* e.Result: 6 */
    /* RETURN (e.Result) */
    if (! r05_function_left(p+3, p[1], p[2], &r05f_RETURN))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[2]))
      continue;
    if (! r05_empty_hole(p[5], p[2]))
      continue;
    r05_close_evar(p+6, p[4], p[5]);

    r05_reset_allocator();
    r05_alloc_open_call(p+8);
    r05_alloc_function(&r05f_ExtractReferencesm_Expr);
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
    /* e.Result: 6 */
    /* e.Sentences: 8 */
    /* CALL-BLOCK (e.Result) e.Sentences */
    if (! r05_function_left(p+3, p[1], p[2], &r05f_CALLm_BLOCK))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[2]))
      continue;
    r05_close_evar(p+6, p[4], p[5]);
    r05_close_evar(p+8, p[5], p[2]);

    r05_reset_allocator();
    r05_alloc_open_call(p+10);
    r05_alloc_function(&r05f_ExtractReferencesm_Expr);
    r05_alloc_insert_pos(p+11);
    r05_alloc_close_call(p+12);
    r05_alloc_open_call(p+13);
    r05_alloc_function(&r05f_ExtractReferences);
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

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(ExtractReferencesm_Expr, "ExtractReferences-Expr") {
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
    r05_alloc_open_call(p+5);
    r05_alloc_function(&r05f_Map);
    r05_alloc_function(&r05f_parseru_ExtractReferencesm_Term);
    r05_alloc_insert_pos(p+6);
    r05_alloc_close_call(p+7);
    r05_push_stack(p[7]);
    r05_push_stack(p[5]);
    r05_splice_evar(p[6], p+3);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);
}

R05_DEFINE_ENTRY_FUNCTION(parseru_ExtractReferencesm_Term, "parser_ExtractReferences-Term") {
  struct r05_node *p[20] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /* e.Name: 7 */
    /* (Symbol Word e.Name) */
    if (! r05_brackets_left(p+3, p[1], p[2]))
      continue;
    if (! r05_function_left(p+5, p[3], p[4], &r05f_Symbol))
      continue;
    if (! r05_function_left(p+6, p[5], p[4], &r05f_Word))
      continue;
    if (! r05_empty_hole(p[4], p[2]))
      continue;
    r05_close_evar(p+7, p[6], p[4]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+9);
    r05_alloc_function(&r05f_Ident);
    r05_alloc_insert_pos(p+10);
    r05_alloc_close_bracket(p+11);
    r05_link_brackets(p[9], p[11]);
    r05_splice_evar(p[10], p+7);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  do {
    /* e.Expr: 6 */
    /* (Brackets e.Expr) */
    if (! r05_brackets_left(p+3, p[1], p[2]))
      continue;
    if (! r05_function_left(p+5, p[3], p[4], &r05f_Brackets))
      continue;
    if (! r05_empty_hole(p[4], p[2]))
      continue;
    r05_close_evar(p+6, p[5], p[4]);

    r05_reset_allocator();
    r05_alloc_open_call(p+8);
    r05_alloc_function(&r05f_ExtractReferencesm_Expr);
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
    /* t.SrcPos: 6 */
    /* e.Name: 10 */
    /* e.Expr: 12 */
    /* (Call t.SrcPos (e.Name) e.Expr) */
    if (! r05_brackets_left(p+3, p[1], p[2]))
      continue;
    if (! r05_function_left(p+5, p[3], p[4], &r05f_Call))
      continue;
    if (! r05_empty_hole(p[4], p[2]))
      continue;
    if (! r05_tvar_left(p+6, p[5], p[4]))
      continue;
    if (! r05_brackets_left(p+8, p[7], p[4]))
      continue;
    r05_close_evar(p+10, p[8], p[9]);
    r05_close_evar(p+12, p[9], p[4]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+14);
    r05_alloc_function(&r05f_Call);
    r05_alloc_insert_pos(p+15);
    r05_alloc_close_bracket(p+16);
    r05_alloc_open_call(p+17);
    r05_alloc_function(&r05f_ExtractReferencesm_Expr);
    r05_alloc_insert_pos(p+18);
    r05_alloc_close_call(p+19);
    r05_push_stack(p[19]);
    r05_push_stack(p[17]);
    r05_link_brackets(p[14], p[16]);
    r05_splice_evar(p[15], p+10);
    r05_splice_evar(p[18], p+12);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  do {
    /* t.Other: 3 */
    /* t.Other */
    if (! r05_tvar_left(p+3, p[1], p[2]))
      continue;
    if (! r05_empty_hole(p[4], p[2]))
      continue;

    r05_reset_allocator();
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_ENTRY_FUNCTION(Parsem_File, "Parse-File") {
  R05_DEFINE_COND_FUNCTION(Parsem_File, "Parse-File$1", 1)
  struct r05_node *p[14] = { 0 };

  r05_this_is_generated_function();
  switch (arg_begin->next->info.function->resume_entry >> 1) {
  case 0:
    p[0] = arg_begin;
    p[1] = arg_begin->next;
    p[2] = arg_end;

    do {
      /* e.SourceFile: 3 */
      /* e.SourceFile */
      r05_close_evar(p+3, p[1], p[2]);

      r05_reset_allocator();
      r05_alloc_open_call(p+5);
      r05_alloc_function(&c1);
      r05_alloc_open_call(p+6);
      r05_alloc_function(&r05f_CheckAST);
      r05_alloc_open_call(p+7);
      r05_alloc_function(&r05f_Parse);
      r05_alloc_open_call(p+8);
      r05_alloc_function(&r05f_Scan);
      r05_alloc_evar(p+3);
      r05_alloc_close_call(p+9);
      r05_alloc_close_call(p+10);
      r05_alloc_close_call(p+11);
      r05_alloc_close_call(p+12);
      r05_push_stack(p[12]);
      r05_push_stack(p[5]);
      r05_push_stack(p[11]);
      r05_push_stack(p[6]);
      r05_push_stack(p[10]);
      r05_push_stack(p[7]);
      r05_push_stack(p[9]);
      r05_push_stack(p[8]);
      r05_push_context(p, 5);
      r05_splice_from_freelist(p[2]);
      return;

  case 1:
      r05_pop_context(p, 5);
      p[5] = arg_begin;
      p[6] = arg_begin->next;
      p[7] = arg_end;

      do {
        /* e.SourceFile: 3 */
        /* e.PreparedAST: 9 */
        /* Success e.PreparedAST */
        if (! r05_function_left(p+8, p[6], p[7], &r05f_Success))
          continue;
        r05_close_evar(p+9, p[8], p[7]);

        r05_reset_allocator();
        r05_alloc_function(&r05f_Success);
        r05_alloc_insert_pos(p+11);
        r05_splice_evar(p[11], p+9);
        r05_splice_from_freelist(p[0]);
        r05_splice_to_freelist(p[0], p[2]);
        return;
      } while (0);

      do {
        /* e.SourceFile: 3 */
        /* e.SemanticErrors: 9 */
        /* Fails e.SemanticErrors */
        if (! r05_function_left(p+8, p[6], p[7], &r05f_Fails))
          continue;
        r05_close_evar(p+9, p[8], p[7]);

        r05_reset_allocator();
        r05_alloc_function(&r05f_Fails);
        r05_alloc_open_call(p+11);
        r05_alloc_function(&r05f_SortErrors);
        r05_alloc_insert_pos(p+12);
        r05_alloc_close_call(p+13);
        r05_push_stack(p[13]);
        r05_push_stack(p[11]);
        r05_splice_evar(p[12], p+9);
        r05_splice_from_freelist(p[0]);
        r05_splice_to_freelist(p[0], p[2]);
        return;
      } while (0);

      r05_recognition_impossible();
    } while (0);
  }
}

R05_DEFINE_LOCAL_FUNCTION(SortErrors, "SortErrors") {
  struct r05_node *p[10] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /* e.Errors: 3 */
    /* e.Errors */
    r05_close_evar(p+3, p[1], p[2]);

    r05_reset_allocator();
    r05_alloc_open_call(p+5);
    r05_alloc_function(&r05f_DoSortErrors);
    r05_alloc_open_bracket(p+6);
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

R05_DEFINE_LOCAL_FUNCTION(DoSortErrors, "DoSortErrors") {
  struct r05_node *p[19] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /* e.Sorted: 5 */
    /* (e.Sorted) */
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

  do {
    /* e.Sorted: 5 */
    /* t.Next: 7 */
    /* e.Unsorted: 9 */
    /* (e.Sorted) t.Next e.Unsorted */
    if (! r05_brackets_left(p+3, p[1], p[2]))
      continue;
    r05_close_evar(p+5, p[3], p[4]);
    if (! r05_tvar_left(p+7, p[4], p[2]))
      continue;
    r05_close_evar(p+9, p[8], p[2]);

    r05_reset_allocator();
    r05_alloc_open_call(p+11);
    r05_alloc_function(&r05f_DoSortErrors);
    r05_alloc_open_bracket(p+12);
    r05_alloc_open_call(p+13);
    r05_alloc_function(&r05f_SortErrorsm_Insert);
    r05_alloc_insert_pos(p+14);
    r05_alloc_close_call(p+15);
    r05_alloc_close_bracket(p+16);
    r05_alloc_insert_pos(p+17);
    r05_alloc_close_call(p+18);
    r05_push_stack(p[18]);
    r05_push_stack(p[11]);
    r05_link_brackets(p[12], p[16]);
    r05_push_stack(p[15]);
    r05_push_stack(p[13]);
    r05_splice_evar(p[14], p+5);
    r05_splice_tvar(p[14], p+7);
    r05_splice_evar(p[17], p+9);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(SortErrorsm_Insert, "SortErrors-Insert") {
  struct r05_node *p[14] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /* t.Next: 3 */
    /* t.Next */
    if (! r05_tvar_left(p+3, p[1], p[2]))
      continue;
    if (! r05_empty_hole(p[4], p[2]))
      continue;

    r05_reset_allocator();
    r05_alloc_insert_pos(p+5);
    r05_splice_tvar(p[5], p+3);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  do {
    /* t.Next: 3 */
    /* t.Great: 5 */
    /* e.Sorted: 7 */
    /* e.Sorted t.Great t.Next */
    if (! r05_tvar_right(p+3, p[1], p[2]))
      continue;
    if (! r05_tvar_right(p+5, p[1], p[3]))
      continue;
    r05_close_evar(p+7, p[1], p[5]);

    r05_reset_allocator();
    r05_alloc_open_call(p+9);
    r05_alloc_function(&r05f_SortErrorsm_Insertm_Compare);
    r05_alloc_insert_pos(p+10);
    r05_alloc_open_call(p+11);
    r05_alloc_function(&r05f_CompareError);
    r05_alloc_tvar(p+5);
    r05_alloc_tvar(p+3);
    r05_alloc_close_call(p+12);
    r05_alloc_close_call(p+13);
    r05_push_stack(p[13]);
    r05_push_stack(p[9]);
    r05_push_stack(p[12]);
    r05_push_stack(p[11]);
    r05_splice_evar(p[10], p+7);
    r05_splice_tvar(p[10], p+5);
    r05_splice_tvar(p[10], p+3);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(SortErrorsm_Insertm_Compare, "SortErrors-Insert-Compare") {
  struct r05_node *p[14] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /* t.Next: 4 */
    /* t.Great: 6 */
    /* e.Sorted: 8 */
    /* e.Sorted t.Great t.Next '+' */
    if (! r05_char_right(p+3, p[1], p[2], '+'))
      continue;
    if (! r05_tvar_right(p+4, p[1], p[3]))
      continue;
    if (! r05_tvar_right(p+6, p[1], p[4]))
      continue;
    r05_close_evar(p+8, p[1], p[6]);

    r05_reset_allocator();
    r05_alloc_open_call(p+10);
    r05_alloc_function(&r05f_SortErrorsm_Insert);
    r05_alloc_insert_pos(p+11);
    r05_alloc_close_call(p+12);
    r05_alloc_insert_pos(p+13);
    r05_push_stack(p[12]);
    r05_push_stack(p[10]);
    r05_splice_evar(p[11], p+8);
    r05_splice_tvar(p[11], p+4);
    r05_splice_tvar(p[13], p+6);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  do {
    /* s.Other: 3 */
    /* t.Next: 4 */
    /* t.Great: 6 */
    /* e.Sorted: 8 */
    /* e.Sorted t.Great t.Next s.Other */
    if (! r05_svar_right(p+3, p[1], p[2]))
      continue;
    if (! r05_tvar_right(p+4, p[1], p[3]))
      continue;
    if (! r05_tvar_right(p+6, p[1], p[4]))
      continue;
    r05_close_evar(p+8, p[1], p[6]);

    r05_reset_allocator();
    r05_alloc_insert_pos(p+10);
    r05_splice_evar(p[10], p+8);
    r05_splice_tvar(p[10], p+6);
    r05_splice_tvar(p[10], p+4);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(CompareError, "CompareError") {
  struct r05_node *p[25] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /* e.Message1: 11 */
    /* e.Message2: 13 */
    /* s.Row: 15, 16 */
    /* s.Col1: 17 */
    /* e.File1: 18 */
    /* s.Col2: 20 */
    /* e.File2: 21 */
    /* ((s.Row s.Col1 e.File1) e.Message1) ((s.Row s.Col2 e.File2) e.Message2) */
    if (! r05_brackets_left(p+3, p[1], p[2]))
      continue;
    if (! r05_brackets_left(p+5, p[3], p[4]))
      continue;
    if (! r05_brackets_left(p+7, p[4], p[2]))
      continue;
    if (! r05_brackets_left(p+9, p[7], p[8]))
      continue;
    if (! r05_empty_hole(p[8], p[2]))
      continue;
    r05_close_evar(p+11, p[6], p[4]);
    r05_close_evar(p+13, p[10], p[8]);
    if (! r05_svar_left(p+15, p[5], p[6]))
      continue;
    if (! r05_repeated_svar_left(p+16, p[9], p[10], p+15))
      continue;
    if (! r05_svar_left(p+17, p[15], p[6]))
      continue;
    r05_close_evar(p+18, p[17], p[6]);
    if (! r05_svar_left(p+20, p[16], p[10]))
      continue;
    r05_close_evar(p+21, p[20], p[10]);

    r05_reset_allocator();
    r05_alloc_open_call(p+23);
    r05_alloc_function(&r05f_Compare);
    r05_alloc_svar(p+17);
    r05_alloc_svar(p+20);
    r05_alloc_close_call(p+24);
    r05_push_stack(p[24]);
    r05_push_stack(p[23]);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  do {
    /* e.Message1: 11 */
    /* e.Message2: 13 */
    /* s.Row1: 15 */
    /* s.Col1: 16 */
    /* e.File1: 17 */
    /* s.Row2: 19 */
    /* s.Col2: 20 */
    /* e.File2: 21 */
    /* ((s.Row1 s.Col1 e.File1) e.Message1) ((s.Row2 s.Col2 e.File2) e.Message2) */
    if (! r05_brackets_left(p+3, p[1], p[2]))
      continue;
    if (! r05_brackets_left(p+5, p[3], p[4]))
      continue;
    if (! r05_brackets_left(p+7, p[4], p[2]))
      continue;
    if (! r05_brackets_left(p+9, p[7], p[8]))
      continue;
    if (! r05_empty_hole(p[8], p[2]))
      continue;
    r05_close_evar(p+11, p[6], p[4]);
    r05_close_evar(p+13, p[10], p[8]);
    if (! r05_svar_left(p+15, p[5], p[6]))
      continue;
    if (! r05_svar_left(p+16, p[15], p[6]))
      continue;
    r05_close_evar(p+17, p[16], p[6]);
    if (! r05_svar_left(p+19, p[9], p[10]))
      continue;
    if (! r05_svar_left(p+20, p[19], p[10]))
      continue;
    r05_close_evar(p+21, p[20], p[10]);

    r05_reset_allocator();
    r05_alloc_open_call(p+23);
    r05_alloc_function(&r05f_Compare);
    r05_alloc_svar(p+15);
    r05_alloc_svar(p+19);
    r05_alloc_close_call(p+24);
    r05_push_stack(p[24]);
    r05_push_stack(p[23]);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(ELm_Create, "EL-Create") {
  struct r05_node *p[8] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /* e.Errors: 3 */
    /* e.Errors */
    r05_close_evar(p+3, p[1], p[2]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+5);
    r05_alloc_function(&r05f_ErrorList);
    r05_alloc_insert_pos(p+6);
    r05_alloc_close_bracket(p+7);
    r05_link_brackets(p[5], p[7]);
    r05_splice_evar(p[6], p+3);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);
}

R05_DEFINE_LOCAL_FUNCTION(ELm_AddErrorAt, "EL-AddErrorAt") {
  struct r05_node *p[18] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /* e.Errors: 6 */
    /* t.SrcPos: 8 */
    /* e.Message: 10 */
    /* (ErrorList e.Errors) t.SrcPos e.Message */
    if (! r05_brackets_left(p+3, p[1], p[2]))
      continue;
    if (! r05_function_left(p+5, p[3], p[4], &r05f_ErrorList))
      continue;
    r05_close_evar(p+6, p[5], p[4]);
    if (! r05_tvar_left(p+8, p[4], p[2]))
      continue;
    r05_close_evar(p+10, p[9], p[2]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+12);
    r05_alloc_function(&r05f_ErrorList);
    r05_alloc_insert_pos(p+13);
    r05_alloc_open_bracket(p+14);
    r05_alloc_insert_pos(p+15);
    r05_alloc_close_bracket(p+16);
    r05_alloc_close_bracket(p+17);
    r05_link_brackets(p[12], p[17]);
    r05_link_brackets(p[14], p[16]);
    r05_splice_evar(p[13], p+6);
    r05_splice_tvar(p[15], p+8);
    r05_splice_evar(p[15], p+10);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(ELm_Destroy, "EL-Destroy") {
  struct r05_node *p[9] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /* e.Errors: 6 */
    /* (ErrorList e.Errors) */
    if (! r05_brackets_left(p+3, p[1], p[2]))
      continue;
    if (! r05_function_left(p+5, p[3], p[4], &r05f_ErrorList))
      continue;
    if (! r05_empty_hole(p[4], p[2]))
      continue;
    r05_close_evar(p+6, p[5], p[4]);

    r05_reset_allocator();
    r05_alloc_insert_pos(p+8);
    r05_splice_evar(p[8], p+6);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  r05_recognition_impossible();
}


/* End of file */
