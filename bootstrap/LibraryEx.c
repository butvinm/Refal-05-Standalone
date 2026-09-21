/* Automatically generated file. Don't edit! */
#include "refal05rts.h"


R05_DECLARE_ENTRY_FUNCTION(Apply)
R05_DECLARE_ENTRY_FUNCTION(Map)
R05_DECLARE_ENTRY_FUNCTION(Reduce)
R05_DECLARE_ENTRY_FUNCTION(MapAccum)
R05_DECLARE_LOCAL_FUNCTION(DoMapAccum)
R05_DECLARE_LOCAL_FUNCTION(MapAccumm_AddScanned)
R05_DECLARE_ENTRY_FUNCTION(DelAccumulator)
R05_DECLARE_LOCAL_FUNCTION(LOADm_SAVEm_HANDLE)
R05_DECLARE_ENTRY_FUNCTION(LoadFile)
R05_DECLARE_LOCAL_FUNCTION(DoLoadFile)
R05_DECLARE_ENTRY_FUNCTION(SaveFile)
R05_DECLARE_LOCAL_FUNCTION(SaveFilem_WriteBracketLine)
R05_DECLARE_ENTRY_FUNCTION(Inc)
R05_DECLARE_ENTRY_FUNCTION(Dec)
R05_DECLARE_ENTRY_FUNCTION(ArgList)
R05_DECLARE_LOCAL_FUNCTION(DoArgList)
R05_DECLARE_LOCAL_FUNCTION(SwDoArgList)
R05_DECLARE_ENTRY_FUNCTION(Trim)
R05_DECLARE_ENTRY_FUNCTION(Trimm_L)
R05_DECLARE_ENTRY_FUNCTION(Trimm_R)
R05_DECLARE_ENTRY_FUNCTION(OneOf)
R05_DECLARE_ENTRY_FUNCTION(Unique)
R05_DECLARE_ENTRY_FUNCTION(TryLoadExpr)
R05_DECLARE_LOCAL_FUNCTION(TryLoadExprm_Prepare)
R05_DECLARE_LOCAL_FUNCTION(TryLoadExprm_PrepareLine)
R05_DECLARE_LOCAL_FUNCTION(TryLoadExprm_Parse)
R05_DECLARE_LOCAL_FUNCTION(TryLoadExprm_Parsem_Ident)
R05_DECLARE_LOCAL_FUNCTION(TryLoadExprm_Parsem_Number)
R05_DECLARE_LOCAL_FUNCTION(TryLoadExprm_MakeError)
R05_DECLARE_LOCAL_FUNCTION(TryLoadExprm_Parsem_Quote)
R05_DECLARE_LOCAL_FUNCTION(TryLoadExprm_SkipSpace)
R05_DECLARE_LOCAL_FUNCTION(TryLoadExprm_Parsem_Hex)
R05_DECLARE_LOCAL_FUNCTION(TryLoadExprm_Hex)
R05_DECLARE_LOCAL_FUNCTION(TryLoadExprm_First2)
R05_DECLARE_ENTRY_FUNCTION(LoadExpr)
R05_DEFINE_METAFUNCTION(Mu, "Mu")
R05_DEFINE_METAFUNCTION(Up, "Up")
R05_DEFINE_METAFUNCTION(Evm_met, "Ev-met")
R05_DEFINE_METAFUNCTION(Residue, "Residue")
R05_DEFINE_METAFUNCTION(k3F_, "?")
R05_DECLARE_ENTRY_FUNCTION(Open)
R05_DECLARE_ENTRY_FUNCTION(Get)
R05_DECLARE_ENTRY_FUNCTION(Close)
R05_DECLARE_ENTRY_FUNCTION(Add)
R05_DECLARE_ENTRY_FUNCTION(Sub)
R05_DECLARE_ENTRY_FUNCTION(Putout)
R05_DECLARE_ENTRY_FUNCTION(Symb)
R05_DECLARE_ENTRY_FUNCTION(Exit)
R05_DECLARE_ENTRY_FUNCTION(Arg)
R05_DECLARE_ENTRY_FUNCTION(Implode)
R05_DECLARE_ENTRY_FUNCTION(Type)
R05_DECLARE_ENTRY_FUNCTION(Lenw)
R05_DECLARE_ENTRY_FUNCTION(Numb)
R05_DECLARE_ENTRY_FUNCTION(m_)
R05_DECLARE_ENTRY_FUNCTION(Implodeu_Ext)
R05_DECLARE_ENTRY_FUNCTION(Chr)
R05_DECLARE_ENTRY_FUNCTION(k2B_)
R05_DECLARE_ENTRY_FUNCTION(k2A_)
R05_DECLARE_ENTRY_FUNCTION(Upper)
R05_DEFINE_LOCAL_ENUM(True, "True")
R05_DEFINE_LOCAL_ENUM(False, "False")
R05_DEFINE_LOCAL_ENUM(Success, "Success")
R05_DEFINE_LOCAL_ENUM(Fails, "Fails")

R05_DEFINE_ENTRY_FUNCTION(Apply, "Apply") {
  struct r05_node *p[14] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /* s.Fn: 3 */
    /* e.Argument: 4 */
    /* s.Fn e.Argument */
    if (! r05_svar_left(p+3, p[1], p[2]))
      continue;
    r05_close_evar(p+4, p[3], p[2]);

    r05_reset_allocator();
    r05_alloc_open_call(p+6);
    r05_alloc_function(&r05f_Mu);
    r05_alloc_svar(p+3);
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
    /* e.Argument: 5 */
    /* t.Closure: 7 */
    /* e.Bounded: 9 */
    /* (t.Closure e.Bounded) e.Argument */
    if (! r05_brackets_left(p+3, p[1], p[2]))
      continue;
    r05_close_evar(p+5, p[4], p[2]);
    if (! r05_tvar_left(p+7, p[3], p[4]))
      continue;
    r05_close_evar(p+9, p[8], p[4]);

    r05_reset_allocator();
    r05_alloc_open_call(p+11);
    r05_alloc_function(&r05f_Apply);
    r05_alloc_insert_pos(p+12);
    r05_alloc_close_call(p+13);
    r05_push_stack(p[13]);
    r05_push_stack(p[11]);
    r05_splice_tvar(p[12], p+7);
    r05_splice_evar(p[12], p+9);
    r05_splice_evar(p[12], p+5);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_ENTRY_FUNCTION(Map, "Map") {
  struct r05_node *p[15] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /* t.Fn: 3 */
    /* t.Next: 5 */
    /* e.Tail: 7 */
    /* t.Fn t.Next e.Tail */
    if (! r05_tvar_left(p+3, p[1], p[2]))
      continue;
    if (! r05_tvar_left(p+5, p[4], p[2]))
      continue;
    r05_close_evar(p+7, p[6], p[2]);

    r05_reset_allocator();
    r05_alloc_open_call(p+9);
    r05_alloc_function(&r05f_Apply);
    r05_alloc_insert_pos(p+10);
    r05_alloc_close_call(p+11);
    r05_alloc_open_call(p+12);
    r05_alloc_function(&r05f_Map);
    r05_alloc_tvar(p+3);
    r05_alloc_insert_pos(p+13);
    r05_alloc_close_call(p+14);
    r05_push_stack(p[14]);
    r05_push_stack(p[12]);
    r05_push_stack(p[11]);
    r05_push_stack(p[9]);
    r05_splice_tvar(p[10], p+3);
    r05_splice_tvar(p[10], p+5);
    r05_splice_evar(p[13], p+7);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  do {
    /* t.Fn: 3 */
    /* t.Fn */
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

R05_DEFINE_ENTRY_FUNCTION(Reduce, "Reduce") {
  struct r05_node *p[18] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /* t.Fn: 3 */
    /* t.Acc: 5 */
    /* t.Next: 7 */
    /* e.Tail: 9 */
    /* t.Fn t.Acc t.Next e.Tail */
    if (! r05_tvar_left(p+3, p[1], p[2]))
      continue;
    if (! r05_tvar_left(p+5, p[4], p[2]))
      continue;
    if (! r05_tvar_left(p+7, p[6], p[2]))
      continue;
    r05_close_evar(p+9, p[8], p[2]);

    r05_reset_allocator();
    r05_alloc_open_call(p+11);
    r05_alloc_function(&r05f_Reduce);
    r05_alloc_insert_pos(p+12);
    r05_alloc_open_call(p+13);
    r05_alloc_function(&r05f_Apply);
    r05_alloc_tvar(p+3);
    r05_alloc_insert_pos(p+14);
    r05_alloc_close_call(p+15);
    r05_alloc_insert_pos(p+16);
    r05_alloc_close_call(p+17);
    r05_push_stack(p[17]);
    r05_push_stack(p[11]);
    r05_push_stack(p[15]);
    r05_push_stack(p[13]);
    r05_splice_tvar(p[12], p+3);
    r05_splice_tvar(p[14], p+5);
    r05_splice_tvar(p[14], p+7);
    r05_splice_evar(p[16], p+9);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  do {
    /* t.Fn: 3 */
    /* t.Acc: 5 */
    /* t.Fn t.Acc */
    if (! r05_tvar_left(p+3, p[1], p[2]))
      continue;
    if (! r05_tvar_left(p+5, p[4], p[2]))
      continue;
    if (! r05_empty_hole(p[6], p[2]))
      continue;

    r05_reset_allocator();
    r05_alloc_insert_pos(p+7);
    r05_splice_tvar(p[7], p+5);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_ENTRY_FUNCTION(MapAccum, "MapAccum") {
  struct r05_node *p[15] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /* t.Fn: 3 */
    /* t.Acc: 5 */
    /* e.Tail: 7 */
    /* t.Fn t.Acc e.Tail */
    if (! r05_tvar_left(p+3, p[1], p[2]))
      continue;
    if (! r05_tvar_left(p+5, p[4], p[2]))
      continue;
    r05_close_evar(p+7, p[6], p[2]);

    r05_reset_allocator();
    r05_alloc_open_call(p+9);
    r05_alloc_function(&r05f_DoMapAccum);
    r05_alloc_insert_pos(p+10);
    r05_alloc_open_bracket(p+11);
    r05_alloc_close_bracket(p+12);
    r05_alloc_insert_pos(p+13);
    r05_alloc_close_call(p+14);
    r05_push_stack(p[14]);
    r05_push_stack(p[9]);
    r05_link_brackets(p[11], p[12]);
    r05_splice_tvar(p[10], p+3);
    r05_splice_tvar(p[10], p+5);
    r05_splice_evar(p[13], p+7);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(DoMapAccum, "DoMapAccum") {
  struct r05_node *p[27] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /* t.Fn: 3 */
    /* t.Acc: 5 */
    /* e.Scanned: 9 */
    /* t.Next: 11 */
    /* e.Tail: 13 */
    /* t.Fn t.Acc (e.Scanned) t.Next e.Tail */
    if (! r05_tvar_left(p+3, p[1], p[2]))
      continue;
    if (! r05_tvar_left(p+5, p[4], p[2]))
      continue;
    if (! r05_brackets_left(p+7, p[6], p[2]))
      continue;
    r05_close_evar(p+9, p[7], p[8]);
    if (! r05_tvar_left(p+11, p[8], p[2]))
      continue;
    r05_close_evar(p+13, p[12], p[2]);

    r05_reset_allocator();
    r05_alloc_open_call(p+15);
    r05_alloc_function(&r05f_DoMapAccum);
    r05_alloc_insert_pos(p+16);
    r05_alloc_open_call(p+17);
    r05_alloc_function(&r05f_MapAccumm_AddScanned);
    r05_alloc_open_call(p+18);
    r05_alloc_function(&r05f_Apply);
    r05_alloc_tvar(p+3);
    r05_alloc_insert_pos(p+19);
    r05_alloc_close_call(p+20);
    r05_alloc_open_bracket(p+21);
    r05_alloc_insert_pos(p+22);
    r05_alloc_close_bracket(p+23);
    r05_alloc_close_call(p+24);
    r05_alloc_insert_pos(p+25);
    r05_alloc_close_call(p+26);
    r05_push_stack(p[26]);
    r05_push_stack(p[15]);
    r05_push_stack(p[24]);
    r05_push_stack(p[17]);
    r05_link_brackets(p[21], p[23]);
    r05_push_stack(p[20]);
    r05_push_stack(p[18]);
    r05_splice_tvar(p[16], p+3);
    r05_splice_tvar(p[19], p+5);
    r05_splice_tvar(p[19], p+11);
    r05_splice_evar(p[22], p+9);
    r05_splice_evar(p[25], p+13);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  do {
    /* e.Scanned: 5 */
    /* t.Fn: 7 */
    /* t.Acc: 9 */
    /* t.Fn t.Acc (e.Scanned) */
    if (! r05_brackets_right(p+3, p[1], p[2]))
      continue;
    r05_close_evar(p+5, p[3], p[4]);
    if (! r05_tvar_left(p+7, p[1], p[3]))
      continue;
    if (! r05_tvar_left(p+9, p[8], p[3]))
      continue;
    if (! r05_empty_hole(p[10], p[3]))
      continue;

    r05_reset_allocator();
    r05_alloc_insert_pos(p+11);
    r05_splice_tvar(p[11], p+9);
    r05_splice_evar(p[11], p+5);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(MapAccumm_AddScanned, "MapAccum-AddScanned") {
  struct r05_node *p[15] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /* e.Scanned: 5 */
    /* t.Acc: 7 */
    /* e.StepScanned: 9 */
    /* t.Acc e.StepScanned (e.Scanned) */
    if (! r05_brackets_right(p+3, p[1], p[2]))
      continue;
    r05_close_evar(p+5, p[3], p[4]);
    if (! r05_tvar_left(p+7, p[1], p[3]))
      continue;
    r05_close_evar(p+9, p[8], p[3]);

    r05_reset_allocator();
    r05_alloc_insert_pos(p+11);
    r05_alloc_open_bracket(p+12);
    r05_alloc_insert_pos(p+13);
    r05_alloc_close_bracket(p+14);
    r05_link_brackets(p[12], p[14]);
    r05_splice_tvar(p[11], p+7);
    r05_splice_evar(p[13], p+5);
    r05_splice_evar(p[13], p+9);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_ENTRY_FUNCTION(DelAccumulator, "DelAccumulator") {
  struct r05_node *p[8] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /* t.Acc: 3 */
    /* e.Tail: 5 */
    /* t.Acc e.Tail */
    if (! r05_tvar_left(p+3, p[1], p[2]))
      continue;
    r05_close_evar(p+5, p[4], p[2]);

    r05_reset_allocator();
    r05_alloc_insert_pos(p+7);
    r05_splice_evar(p[7], p+5);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(LOADm_SAVEm_HANDLE, "LOAD-SAVE-HANDLE") {
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
    r05_alloc_number(39UL);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_ENTRY_FUNCTION(LoadFile, "LoadFile") {
  struct r05_node *p[20] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /* e.FileName: 3 */
    /* e.FileName */
    r05_close_evar(p+3, p[1], p[2]);

    r05_reset_allocator();
    r05_alloc_open_call(p+5);
    r05_alloc_function(&r05f_Open);
    r05_alloc_char('r');
    r05_alloc_open_call(p+6);
    r05_alloc_function(&r05f_LOADm_SAVEm_HANDLE);
    r05_alloc_close_call(p+7);
    r05_alloc_insert_pos(p+8);
    r05_alloc_close_call(p+9);
    r05_alloc_open_call(p+10);
    r05_alloc_function(&r05f_DoLoadFile);
    r05_alloc_open_call(p+11);
    r05_alloc_function(&r05f_Get);
    r05_alloc_open_call(p+12);
    r05_alloc_function(&r05f_LOADm_SAVEm_HANDLE);
    r05_alloc_close_call(p+13);
    r05_alloc_close_call(p+14);
    r05_alloc_close_call(p+15);
    r05_alloc_open_call(p+16);
    r05_alloc_function(&r05f_Close);
    r05_alloc_open_call(p+17);
    r05_alloc_function(&r05f_LOADm_SAVEm_HANDLE);
    r05_alloc_close_call(p+18);
    r05_alloc_close_call(p+19);
    r05_push_stack(p[19]);
    r05_push_stack(p[16]);
    r05_push_stack(p[18]);
    r05_push_stack(p[17]);
    r05_push_stack(p[15]);
    r05_push_stack(p[10]);
    r05_push_stack(p[14]);
    r05_push_stack(p[11]);
    r05_push_stack(p[13]);
    r05_push_stack(p[12]);
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

R05_DEFINE_LOCAL_FUNCTION(DoLoadFile, "DoLoadFile") {
  struct r05_node *p[14] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /* 0 */
    if (! r05_number_left(p+3, p[1], p[2], 0UL))
      continue;
    if (! r05_empty_hole(p[3], p[2]))
      continue;

    r05_reset_allocator();
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  do {
    /* e.Line: 4 */
    /* e.Line 0 */
    if (! r05_number_right(p+3, p[1], p[2], 0UL))
      continue;
    r05_close_evar(p+4, p[1], p[3]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+6);
    r05_alloc_insert_pos(p+7);
    r05_alloc_close_bracket(p+8);
    r05_link_brackets(p[6], p[8]);
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
    r05_alloc_open_bracket(p+5);
    r05_alloc_insert_pos(p+6);
    r05_alloc_close_bracket(p+7);
    r05_alloc_open_call(p+8);
    r05_alloc_function(&r05f_DoLoadFile);
    r05_alloc_open_call(p+9);
    r05_alloc_function(&r05f_Get);
    r05_alloc_open_call(p+10);
    r05_alloc_function(&r05f_LOADm_SAVEm_HANDLE);
    r05_alloc_close_call(p+11);
    r05_alloc_close_call(p+12);
    r05_alloc_close_call(p+13);
    r05_push_stack(p[13]);
    r05_push_stack(p[8]);
    r05_push_stack(p[12]);
    r05_push_stack(p[9]);
    r05_push_stack(p[11]);
    r05_push_stack(p[10]);
    r05_link_brackets(p[5], p[7]);
    r05_splice_evar(p[6], p+3);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);
}

R05_DEFINE_ENTRY_FUNCTION(SaveFile, "SaveFile") {
  struct r05_node *p[21] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /* e.FileName: 5 */
    /* e.Lines: 7 */
    /* (e.FileName) e.Lines */
    if (! r05_brackets_left(p+3, p[1], p[2]))
      continue;
    r05_close_evar(p+5, p[3], p[4]);
    r05_close_evar(p+7, p[4], p[2]);

    r05_reset_allocator();
    r05_alloc_open_call(p+9);
    r05_alloc_function(&r05f_Open);
    r05_alloc_char('w');
    r05_alloc_open_call(p+10);
    r05_alloc_function(&r05f_LOADm_SAVEm_HANDLE);
    r05_alloc_close_call(p+11);
    r05_alloc_insert_pos(p+12);
    r05_alloc_close_call(p+13);
    r05_alloc_open_call(p+14);
    r05_alloc_function(&r05f_Map);
    r05_alloc_function(&r05f_SaveFilem_WriteBracketLine);
    r05_alloc_insert_pos(p+15);
    r05_alloc_close_call(p+16);
    r05_alloc_open_call(p+17);
    r05_alloc_function(&r05f_Close);
    r05_alloc_open_call(p+18);
    r05_alloc_function(&r05f_LOADm_SAVEm_HANDLE);
    r05_alloc_close_call(p+19);
    r05_alloc_close_call(p+20);
    r05_push_stack(p[20]);
    r05_push_stack(p[17]);
    r05_push_stack(p[19]);
    r05_push_stack(p[18]);
    r05_push_stack(p[16]);
    r05_push_stack(p[14]);
    r05_push_stack(p[13]);
    r05_push_stack(p[9]);
    r05_push_stack(p[11]);
    r05_push_stack(p[10]);
    r05_splice_evar(p[12], p+5);
    r05_splice_evar(p[15], p+7);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(SaveFilem_WriteBracketLine, "SaveFile-WriteBracketLine") {
  struct r05_node *p[12] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /* e.Line: 5 */
    /* (e.Line) */
    if (! r05_brackets_left(p+3, p[1], p[2]))
      continue;
    if (! r05_empty_hole(p[4], p[2]))
      continue;
    r05_close_evar(p+5, p[3], p[4]);

    r05_reset_allocator();
    r05_alloc_open_call(p+7);
    r05_alloc_function(&r05f_Putout);
    r05_alloc_open_call(p+8);
    r05_alloc_function(&r05f_LOADm_SAVEm_HANDLE);
    r05_alloc_close_call(p+9);
    r05_alloc_insert_pos(p+10);
    r05_alloc_close_call(p+11);
    r05_push_stack(p[11]);
    r05_push_stack(p[7]);
    r05_push_stack(p[9]);
    r05_push_stack(p[8]);
    r05_splice_evar(p[10], p+5);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_ENTRY_FUNCTION(Inc, "Inc") {
  struct r05_node *p[8] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /* e.Num: 3 */
    /* e.Num */
    r05_close_evar(p+3, p[1], p[2]);

    r05_reset_allocator();
    r05_alloc_open_call(p+5);
    r05_alloc_function(&r05f_Add);
    r05_alloc_number(1UL);
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

R05_DEFINE_ENTRY_FUNCTION(Dec, "Dec") {
  struct r05_node *p[10] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /* s.Num: 3 */
    /* s.Num */
    if (! r05_svar_left(p+3, p[1], p[2]))
      continue;
    if (! r05_empty_hole(p[3], p[2]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_call(p+4);
    r05_alloc_function(&r05f_Sub);
    r05_alloc_svar(p+3);
    r05_alloc_number(1UL);
    r05_alloc_close_call(p+5);
    r05_push_stack(p[5]);
    r05_push_stack(p[4]);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  do {
    /* e.Num: 3 */
    /* e.Num */
    r05_close_evar(p+3, p[1], p[2]);

    r05_reset_allocator();
    r05_alloc_open_call(p+5);
    r05_alloc_function(&r05f_Sub);
    r05_alloc_open_bracket(p+6);
    r05_alloc_insert_pos(p+7);
    r05_alloc_close_bracket(p+8);
    r05_alloc_number(1UL);
    r05_alloc_close_call(p+9);
    r05_push_stack(p[9]);
    r05_push_stack(p[5]);
    r05_link_brackets(p[6], p[8]);
    r05_splice_evar(p[7], p+3);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);
}

R05_DEFINE_ENTRY_FUNCTION(ArgList, "ArgList") {
  struct r05_node *p[5] = { 0 };

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
    r05_alloc_function(&r05f_DoArgList);
    r05_alloc_number(0UL);
    r05_alloc_close_call(p+4);
    r05_push_stack(p[4]);
    r05_push_stack(p[3]);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(DoArgList, "DoArgList") {
  struct r05_node *p[10] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /* s.Next: 3 */
    /* s.Next */
    if (! r05_svar_left(p+3, p[1], p[2]))
      continue;
    if (! r05_empty_hole(p[3], p[2]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_call(p+4);
    r05_alloc_function(&r05f_SwDoArgList);
    r05_alloc_open_call(p+5);
    r05_alloc_function(&r05f_Inc);
    r05_alloc_svar(p+3);
    r05_alloc_close_call(p+6);
    r05_alloc_open_call(p+7);
    r05_alloc_function(&r05f_Arg);
    r05_alloc_svar(p+3);
    r05_alloc_close_call(p+8);
    r05_alloc_close_call(p+9);
    r05_push_stack(p[9]);
    r05_push_stack(p[4]);
    r05_push_stack(p[8]);
    r05_push_stack(p[7]);
    r05_push_stack(p[6]);
    r05_push_stack(p[5]);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(SwDoArgList, "SwDoArgList") {
  struct r05_node *p[11] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /* s.Next: 3 */
    /* s.Next */
    if (! r05_svar_left(p+3, p[1], p[2]))
      continue;
    if (! r05_empty_hole(p[3], p[2]))
      continue;

    r05_reset_allocator();
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  do {
    /* s.Next: 3 */
    /* e.Arg: 4 */
    /* s.Next e.Arg */
    if (! r05_svar_left(p+3, p[1], p[2]))
      continue;
    r05_close_evar(p+4, p[3], p[2]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+6);
    r05_alloc_insert_pos(p+7);
    r05_alloc_close_bracket(p+8);
    r05_alloc_open_call(p+9);
    r05_alloc_function(&r05f_DoArgList);
    r05_alloc_svar(p+3);
    r05_alloc_close_call(p+10);
    r05_push_stack(p[10]);
    r05_push_stack(p[9]);
    r05_link_brackets(p[6], p[8]);
    r05_splice_evar(p[7], p+4);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_ENTRY_FUNCTION(Trim, "Trim") {
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
    r05_alloc_function(&r05f_Trimm_L);
    r05_alloc_open_call(p+6);
    r05_alloc_function(&r05f_Trimm_R);
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

R05_DEFINE_ENTRY_FUNCTION(Trimm_L, "Trim-L") {
  struct r05_node *p[9] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /* e.Line: 4 */
    /* ' ' e.Line */
    if (! r05_char_left(p+3, p[1], p[2], ' '))
      continue;
    r05_close_evar(p+4, p[3], p[2]);

    r05_reset_allocator();
    r05_alloc_open_call(p+6);
    r05_alloc_function(&r05f_Trimm_L);
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
    /* e.Line: 4 */
    /* '\t' e.Line */
    if (! r05_char_left(p+3, p[1], p[2], '\t'))
      continue;
    r05_close_evar(p+4, p[3], p[2]);

    r05_reset_allocator();
    r05_alloc_open_call(p+6);
    r05_alloc_function(&r05f_Trimm_L);
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
    /* e.Line: 4 */
    /* '\r' e.Line */
    if (! r05_char_left(p+3, p[1], p[2], '\r'))
      continue;
    r05_close_evar(p+4, p[3], p[2]);

    r05_reset_allocator();
    r05_alloc_open_call(p+6);
    r05_alloc_function(&r05f_Trimm_L);
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
    /* e.Line: 4 */
    /* '\n' e.Line */
    if (! r05_char_left(p+3, p[1], p[2], '\n'))
      continue;
    r05_close_evar(p+4, p[3], p[2]);

    r05_reset_allocator();
    r05_alloc_open_call(p+6);
    r05_alloc_function(&r05f_Trimm_L);
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

R05_DEFINE_ENTRY_FUNCTION(Trimm_R, "Trim-R") {
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
    /* e.Line: 4 */
    /* e.Line '\t' */
    if (! r05_char_right(p+3, p[1], p[2], '\t'))
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
    /* e.Line: 4 */
    /* e.Line '\r' */
    if (! r05_char_right(p+3, p[1], p[2], '\r'))
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
    /* e.Line: 4 */
    /* e.Line '\n' */
    if (! r05_char_right(p+3, p[1], p[2], '\n'))
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

R05_DEFINE_ENTRY_FUNCTION(OneOf, "OneOf") {
  struct r05_node *p[11] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /* t.Sample: 3, 7 */
    /* e.Items-B: 5 */
    /* e.Items-E: 9 */
    /* t.Sample e.Items-B t.Sample e.Items-E */
    if (! r05_tvar_left(p+3, p[1], p[2]))
      continue;
    p[5] = NULL;
    p[6] = p[4];
    do {
      r05_start_e_loop();
      if (! r05_repeated_tvar_left(p+7, p[6], p[2], p+3))
        continue;
      r05_close_evar(p+9, p[8], p[2]);

      r05_reset_allocator();
      r05_alloc_function(&r05f_True);
      r05_splice_from_freelist(p[0]);
      r05_splice_to_freelist(p[0], p[2]);
      return;
    } while (r05_open_evar_advance(p+5, p[2]));
    r05_stop_e_loop();
  } while (0);

  do {
    /* t.Sample: 3 */
    /* e.Items: 5 */
    /* t.Sample e.Items */
    if (! r05_tvar_left(p+3, p[1], p[2]))
      continue;
    r05_close_evar(p+5, p[4], p[2]);

    r05_reset_allocator();
    r05_alloc_function(&r05f_False);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_ENTRY_FUNCTION(Unique, "Unique") {
  struct r05_node *p[17] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /* e.Uniques: 3 */
    /* t.Repeated: 5, 9 */
    /* e.Items-B: 7 */
    /* e.Items-E: 11 */
    /* e.Uniques t.Repeated e.Items-B t.Repeated e.Items-E */
    p[3] = NULL;
    p[4] = p[1];
    do {
      r05_start_e_loop();
      if (! r05_tvar_left(p+5, p[4], p[2]))
        continue;
      p[7] = NULL;
      p[8] = p[6];
      do {
        r05_start_e_loop();
        if (! r05_repeated_tvar_left(p+9, p[8], p[2], p+5))
          continue;
        r05_close_evar(p+11, p[10], p[2]);

        r05_reset_allocator();
        r05_alloc_insert_pos(p+13);
        r05_alloc_open_call(p+14);
        r05_alloc_function(&r05f_Unique);
        r05_alloc_insert_pos(p+15);
        r05_alloc_close_call(p+16);
        r05_push_stack(p[16]);
        r05_push_stack(p[14]);
        r05_splice_evar(p[13], p+3);
        r05_splice_evar(p[15], p+7);
        r05_splice_tvar(p[15], p+5);
        r05_splice_evar(p[15], p+11);
        r05_splice_from_freelist(p[0]);
        r05_splice_to_freelist(p[0], p[2]);
        return;
      } while (r05_open_evar_advance(p+7, p[2]));
    } while (r05_open_evar_advance(p+3, p[2]));
    r05_stop_e_loop();
  } while (0);

  do {
    /* e.Uniques: 3 */
    /* e.Uniques */
    r05_close_evar(p+3, p[1], p[2]);

    r05_reset_allocator();
    r05_alloc_insert_pos(p+5);
    r05_splice_evar(p[5], p+3);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);
}

R05_DEFINE_ENTRY_FUNCTION(TryLoadExpr, "TryLoadExpr") {
  struct r05_node *p[14] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /* e.FileName: 3 */
    /* e.FileName */
    r05_close_evar(p+3, p[1], p[2]);

    r05_reset_allocator();
    r05_alloc_open_call(p+5);
    r05_alloc_function(&r05f_TryLoadExprm_Parse);
    r05_alloc_open_bracket(p+6);
    r05_alloc_char('$');
    r05_alloc_close_bracket(p+7);
    r05_alloc_open_call(p+8);
    r05_alloc_function(&r05f_TryLoadExprm_Prepare);
    r05_alloc_open_call(p+9);
    r05_alloc_function(&r05f_LoadFile);
    r05_alloc_insert_pos(p+10);
    r05_alloc_close_call(p+11);
    r05_alloc_close_call(p+12);
    r05_alloc_close_call(p+13);
    r05_push_stack(p[13]);
    r05_push_stack(p[5]);
    r05_push_stack(p[12]);
    r05_push_stack(p[8]);
    r05_push_stack(p[11]);
    r05_push_stack(p[9]);
    r05_link_brackets(p[6], p[7]);
    r05_splice_evar(p[10], p+3);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);
}

R05_DEFINE_LOCAL_FUNCTION(TryLoadExprm_Prepare, "TryLoadExpr-Prepare") {
  struct r05_node *p[10] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /* e.Lines: 3 */
    /* e.Lines */
    r05_close_evar(p+3, p[1], p[2]);

    r05_reset_allocator();
    r05_alloc_open_call(p+5);
    r05_alloc_function(&r05f_DelAccumulator);
    r05_alloc_open_call(p+6);
    r05_alloc_function(&r05f_MapAccum);
    r05_alloc_function(&r05f_TryLoadExprm_PrepareLine);
    r05_alloc_number(1UL);
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

R05_DEFINE_LOCAL_FUNCTION(TryLoadExprm_PrepareLine, "TryLoadExpr-PrepareLine") {
  struct r05_node *p[15] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /* e.Line: 6 */
    /* s.LineNo: 8 */
    /* s.LineNo ('*' e.Line) */
    if (! r05_brackets_right(p+3, p[1], p[2]))
      continue;
    if (! r05_char_left(p+5, p[3], p[4], '*'))
      continue;
    r05_close_evar(p+6, p[5], p[4]);
    if (! r05_svar_left(p+8, p[1], p[3]))
      continue;
    if (! r05_empty_hole(p[8], p[3]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_call(p+9);
    r05_alloc_function(&r05f_Inc);
    r05_alloc_svar(p+8);
    r05_alloc_close_call(p+10);
    r05_push_stack(p[10]);
    r05_push_stack(p[9]);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  do {
    /* e.Line: 5 */
    /* s.LineNo: 7 */
    /* s.LineNo (e.Line) */
    if (! r05_brackets_right(p+3, p[1], p[2]))
      continue;
    r05_close_evar(p+5, p[3], p[4]);
    if (! r05_svar_left(p+7, p[1], p[3]))
      continue;
    if (! r05_empty_hole(p[7], p[3]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_call(p+8);
    r05_alloc_function(&r05f_Inc);
    r05_alloc_svar(p+7);
    r05_alloc_close_call(p+9);
    r05_alloc_open_bracket(p+10);
    r05_alloc_svar(p+7);
    r05_alloc_open_call(p+11);
    r05_alloc_function(&r05f_Lenw);
    r05_alloc_insert_pos(p+12);
    r05_alloc_close_call(p+13);
    r05_alloc_close_bracket(p+14);
    r05_link_brackets(p[10], p[14]);
    r05_push_stack(p[13]);
    r05_push_stack(p[11]);
    r05_push_stack(p[9]);
    r05_push_stack(p[8]);
    r05_splice_evar(p[12], p+5);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(TryLoadExprm_Parse, "TryLoadExpr-Parse") {
  R05_DEFINE_COND_FUNCTION(TryLoadExprm_Parse, "TryLoadExpr-Parse$1", 1)
  R05_DEFINE_COND_FUNCTION(TryLoadExprm_Parse, "TryLoadExpr-Parse$2", 2)
  R05_DEFINE_COND_FUNCTION(TryLoadExprm_Parse, "TryLoadExpr-Parse$3", 3)
  struct r05_node *p[38] = { 0 };

  r05_this_is_generated_function();
  switch (arg_begin->next->info.function->resume_entry >> 1) {
  case 0:
    p[0] = arg_begin;
    p[1] = arg_begin->next;
    p[2] = arg_end;

    do {
      /* e.Scanned: 7 */
      /* e.Lines: 9 */
      /* s.LineNo: 11 */
      /* s.LineLen: 12 */
      /* s.Letter: 13 */
      /* e.Line: 14 */
      /* (e.Scanned) (s.LineNo s.LineLen s.Letter e.Line) e.Lines */
      if (! r05_brackets_left(p+3, p[1], p[2]))
        continue;
      if (! r05_brackets_left(p+5, p[4], p[2]))
        continue;
      r05_close_evar(p+7, p[3], p[4]);
      r05_close_evar(p+9, p[6], p[2]);
      if (! r05_svar_left(p+11, p[5], p[6]))
        continue;
      if (! r05_svar_left(p+12, p[11], p[6]))
        continue;
      if (! r05_svar_left(p+13, p[12], p[6]))
        continue;
      r05_close_evar(p+14, p[13], p[6]);

      r05_reset_allocator();
      r05_alloc_open_call(p+16);
      r05_alloc_function(&c1);
      r05_alloc_open_call(p+17);
      r05_alloc_function(&r05f_Type);
      r05_alloc_svar(p+13);
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
        /* e.Scanned: 7 */
        /* e.Lines: 9 */
        /* s.LineNo: 11 */
        /* s.LineLen: 12 */
        /* s.Letter: 13 */
        /* e.Line: 14 */
        /* e.1: 20 */
        /* 'L' e.1 */
        if (! r05_char_left(p+19, p[17], p[18], 'L'))
          continue;
        r05_close_evar(p+20, p[19], p[18]);

        r05_reset_allocator();
        r05_alloc_open_call(p+22);
        r05_alloc_function(&r05f_TryLoadExprm_Parsem_Ident);
        r05_alloc_open_bracket(p+23);
        r05_alloc_insert_pos(p+24);
        r05_alloc_close_bracket(p+25);
        r05_alloc_open_bracket(p+26);
        r05_alloc_svar(p+11);
        r05_alloc_svar(p+12);
        r05_alloc_open_call(p+27);
        r05_alloc_function(&r05f_Implode);
        r05_alloc_svar(p+13);
        r05_alloc_insert_pos(p+28);
        r05_alloc_close_call(p+29);
        r05_alloc_close_bracket(p+30);
        r05_alloc_insert_pos(p+31);
        r05_alloc_close_call(p+32);
        r05_push_stack(p[32]);
        r05_push_stack(p[22]);
        r05_link_brackets(p[26], p[30]);
        r05_push_stack(p[29]);
        r05_push_stack(p[27]);
        r05_link_brackets(p[23], p[25]);
        r05_splice_evar(p[24], p+7);
        r05_splice_evar(p[28], p+14);
        r05_splice_evar(p[31], p+9);
        r05_splice_from_freelist(p[0]);
        r05_splice_to_freelist(p[0], p[2]);
        return;
      } while (0);
      r05_splice_to_freelist(p[16], p[18]);
    } while (0);

    do {
      /* e.Scanned: 7 */
      /* e.Lines: 9 */
      /* s.LineNo: 11 */
      /* s.LineLen: 12 */
      /* s.Digit: 13 */
      /* e.Line: 14 */
      /* (e.Scanned) (s.LineNo s.LineLen s.Digit e.Line) e.Lines */
      if (! r05_brackets_left(p+3, p[1], p[2]))
        continue;
      if (! r05_brackets_left(p+5, p[4], p[2]))
        continue;
      r05_close_evar(p+7, p[3], p[4]);
      r05_close_evar(p+9, p[6], p[2]);
      if (! r05_svar_left(p+11, p[5], p[6]))
        continue;
      if (! r05_svar_left(p+12, p[11], p[6]))
        continue;
      if (! r05_svar_left(p+13, p[12], p[6]))
        continue;
      r05_close_evar(p+14, p[13], p[6]);

      r05_reset_allocator();
      r05_alloc_open_call(p+16);
      r05_alloc_function(&c2);
      r05_alloc_open_call(p+17);
      r05_alloc_function(&r05f_Type);
      r05_alloc_svar(p+13);
      r05_alloc_close_call(p+18);
      r05_alloc_close_call(p+19);
      r05_push_stack(p[19]);
      r05_push_stack(p[16]);
      r05_push_stack(p[18]);
      r05_push_stack(p[17]);
      r05_push_context(p, 16);
      r05_splice_from_freelist(p[2]);
      return;

  case 2:
      r05_pop_context(p, 16);
      p[16] = arg_begin;
      p[17] = arg_begin->next;
      p[18] = arg_end;

      do {
        /* e.Scanned: 7 */
        /* e.Lines: 9 */
        /* s.LineNo: 11 */
        /* s.LineLen: 12 */
        /* s.Digit: 13 */
        /* e.Line: 14 */
        /* e.1: 20 */
        /* 'D' e.1 */
        if (! r05_char_left(p+19, p[17], p[18], 'D'))
          continue;
        r05_close_evar(p+20, p[19], p[18]);

        r05_reset_allocator();
        r05_alloc_open_call(p+22);
        r05_alloc_function(&r05f_TryLoadExprm_Parsem_Number);
        r05_alloc_open_bracket(p+23);
        r05_alloc_insert_pos(p+24);
        r05_alloc_close_bracket(p+25);
        r05_alloc_open_bracket(p+26);
        r05_alloc_svar(p+13);
        r05_alloc_close_bracket(p+27);
        r05_alloc_open_bracket(p+28);
        r05_alloc_svar(p+11);
        r05_alloc_svar(p+12);
        r05_alloc_open_call(p+29);
        r05_alloc_function(&r05f_Type);
        r05_alloc_insert_pos(p+30);
        r05_alloc_close_call(p+31);
        r05_alloc_close_bracket(p+32);
        r05_alloc_insert_pos(p+33);
        r05_alloc_close_call(p+34);
        r05_push_stack(p[34]);
        r05_push_stack(p[22]);
        r05_link_brackets(p[28], p[32]);
        r05_push_stack(p[31]);
        r05_push_stack(p[29]);
        r05_link_brackets(p[26], p[27]);
        r05_link_brackets(p[23], p[25]);
        r05_splice_evar(p[24], p+7);
        r05_splice_evar(p[30], p+14);
        r05_splice_evar(p[33], p+9);
        r05_splice_from_freelist(p[0]);
        r05_splice_to_freelist(p[0], p[2]);
        return;
      } while (0);
      r05_splice_to_freelist(p[16], p[18]);
    } while (0);

    do {
      /* e.Scanned: 7 */
      /* e.Lines: 9 */
      /* s.LineNo: 11 */
      /* s.LineLen: 12 */
      /* s.Quote: 13 */
      /* e.Line: 14 */
      /* (e.Scanned) (s.LineNo s.LineLen s.Quote e.Line) e.Lines */
      if (! r05_brackets_left(p+3, p[1], p[2]))
        continue;
      if (! r05_brackets_left(p+5, p[4], p[2]))
        continue;
      r05_close_evar(p+7, p[3], p[4]);
      r05_close_evar(p+9, p[6], p[2]);
      if (! r05_svar_left(p+11, p[5], p[6]))
        continue;
      if (! r05_svar_left(p+12, p[11], p[6]))
        continue;
      if (! r05_svar_left(p+13, p[12], p[6]))
        continue;
      r05_close_evar(p+14, p[13], p[6]);

      r05_reset_allocator();
      r05_alloc_open_call(p+16);
      r05_alloc_function(&c3);
      r05_alloc_chars("\'\"", 2);
      r05_alloc_close_call(p+17);
      r05_push_stack(p[17]);
      r05_push_stack(p[16]);
      r05_push_context(p, 16);
      r05_splice_from_freelist(p[2]);
      return;

  case 3:
      r05_pop_context(p, 16);
      p[16] = arg_begin;
      p[17] = arg_begin->next;
      p[18] = arg_end;

      do {
        /* e.Scanned: 7 */
        /* e.Lines: 9 */
        /* s.LineNo: 11 */
        /* s.LineLen: 12 */
        /* s.Quote: 13, 21 */
        /* e.Line: 14 */
        /* e.1: 19 */
        /* e.2: 22 */
        /* e.1 s.Quote e.2 */
        p[19] = NULL;
        p[20] = p[17];
        do {
          r05_start_e_loop();
          if (! r05_repeated_svar_left(p+21, p[20], p[18], p+13))
            continue;
          r05_close_evar(p+22, p[21], p[18]);

          r05_reset_allocator();
          r05_alloc_open_call(p+24);
          r05_alloc_function(&r05f_TryLoadExprm_Parsem_Quote);
          r05_alloc_open_bracket(p+25);
          r05_alloc_insert_pos(p+26);
          r05_alloc_close_bracket(p+27);
          r05_alloc_open_bracket(p+28);
          r05_alloc_svar(p+13);
          r05_alloc_close_bracket(p+29);
          r05_alloc_open_bracket(p+30);
          r05_alloc_svar(p+11);
          r05_alloc_svar(p+12);
          r05_alloc_insert_pos(p+31);
          r05_alloc_close_bracket(p+32);
          r05_alloc_insert_pos(p+33);
          r05_alloc_close_call(p+34);
          r05_push_stack(p[34]);
          r05_push_stack(p[24]);
          r05_link_brackets(p[30], p[32]);
          r05_link_brackets(p[28], p[29]);
          r05_link_brackets(p[25], p[27]);
          r05_splice_evar(p[26], p+7);
          r05_splice_evar(p[31], p+14);
          r05_splice_evar(p[33], p+9);
          r05_splice_from_freelist(p[0]);
          r05_splice_to_freelist(p[0], p[2]);
          return;
        } while (r05_open_evar_advance(p+19, p[18]));
        r05_stop_e_loop();
      } while (0);
      r05_splice_to_freelist(p[16], p[18]);
    } while (0);

    do {
      /* e.Lines: 7 */
      /* s.LineNo: 9 */
      /* s.LineLen: 10 */
      /* e.Line: 12 */
      /* t.Stack: 14 */
      /* e.Scanned: 16 */
      /* (t.Stack e.Scanned) (s.LineNo s.LineLen '(' e.Line) e.Lines */
      if (! r05_brackets_left(p+3, p[1], p[2]))
        continue;
      if (! r05_brackets_left(p+5, p[4], p[2]))
        continue;
      r05_close_evar(p+7, p[6], p[2]);
      if (! r05_svar_left(p+9, p[5], p[6]))
        continue;
      if (! r05_svar_left(p+10, p[9], p[6]))
        continue;
      if (! r05_char_left(p+11, p[10], p[6], '('))
        continue;
      r05_close_evar(p+12, p[11], p[6]);
      if (! r05_tvar_left(p+14, p[3], p[4]))
        continue;
      r05_close_evar(p+16, p[15], p[4]);

      r05_reset_allocator();
      r05_alloc_open_call(p+18);
      r05_alloc_function(&r05f_TryLoadExprm_Parse);
      r05_alloc_open_bracket(p+19);
      r05_alloc_open_bracket(p+20);
      r05_alloc_insert_pos(p+21);
      r05_alloc_open_bracket(p+22);
      r05_alloc_svar(p+9);
      r05_alloc_svar(p+10);
      r05_alloc_insert_pos(p+23);
      r05_alloc_close_bracket(p+24);
      r05_alloc_close_bracket(p+25);
      r05_alloc_close_bracket(p+26);
      r05_alloc_open_bracket(p+27);
      r05_alloc_svar(p+9);
      r05_alloc_svar(p+10);
      r05_alloc_evar(p+12);
      r05_alloc_close_bracket(p+28);
      r05_alloc_insert_pos(p+29);
      r05_alloc_close_call(p+30);
      r05_push_stack(p[30]);
      r05_push_stack(p[18]);
      r05_link_brackets(p[27], p[28]);
      r05_link_brackets(p[19], p[26]);
      r05_link_brackets(p[20], p[25]);
      r05_link_brackets(p[22], p[24]);
      r05_splice_tvar(p[21], p+14);
      r05_splice_evar(p[21], p+16);
      r05_splice_evar(p[23], p+12);
      r05_splice_evar(p[29], p+7);
      r05_splice_from_freelist(p[0]);
      r05_splice_to_freelist(p[0], p[2]);
      return;
    } while (0);

    do {
      /* e.Bracketed: 9 */
      /* e.Lines: 11 */
      /* s.LineNo: 13 */
      /* s.LineLen: 14 */
      /* e.Line: 16 */
      /* t.Stack: 18 */
      /* t.PosInfo: 20 */
      /* e.Scanned: 22 */
      /* ((t.Stack e.Scanned t.PosInfo) e.Bracketed) (s.LineNo s.LineLen ')' e.Line) e.Lines */
      if (! r05_brackets_left(p+3, p[1], p[2]))
        continue;
      if (! r05_brackets_left(p+5, p[3], p[4]))
        continue;
      if (! r05_brackets_left(p+7, p[4], p[2]))
        continue;
      r05_close_evar(p+9, p[6], p[4]);
      r05_close_evar(p+11, p[8], p[2]);
      if (! r05_svar_left(p+13, p[7], p[8]))
        continue;
      if (! r05_svar_left(p+14, p[13], p[8]))
        continue;
      if (! r05_char_left(p+15, p[14], p[8], ')'))
        continue;
      r05_close_evar(p+16, p[15], p[8]);
      if (! r05_tvar_left(p+18, p[5], p[6]))
        continue;
      if (! r05_tvar_right(p+20, p[19], p[6]))
        continue;
      r05_close_evar(p+22, p[19], p[20]);

      r05_reset_allocator();
      r05_alloc_open_call(p+24);
      r05_alloc_function(&r05f_TryLoadExprm_Parse);
      r05_alloc_open_bracket(p+25);
      r05_alloc_insert_pos(p+26);
      r05_alloc_open_bracket(p+27);
      r05_alloc_insert_pos(p+28);
      r05_alloc_close_bracket(p+29);
      r05_alloc_close_bracket(p+30);
      r05_alloc_open_bracket(p+31);
      r05_alloc_svar(p+13);
      r05_alloc_svar(p+14);
      r05_alloc_insert_pos(p+32);
      r05_alloc_close_bracket(p+33);
      r05_alloc_insert_pos(p+34);
      r05_alloc_close_call(p+35);
      r05_push_stack(p[35]);
      r05_push_stack(p[24]);
      r05_link_brackets(p[31], p[33]);
      r05_link_brackets(p[25], p[30]);
      r05_link_brackets(p[27], p[29]);
      r05_splice_tvar(p[26], p+18);
      r05_splice_evar(p[26], p+22);
      r05_splice_evar(p[28], p+9);
      r05_splice_evar(p[32], p+16);
      r05_splice_evar(p[34], p+11);
      r05_splice_from_freelist(p[0]);
      r05_splice_to_freelist(p[0], p[2]);
      return;
    } while (0);

    do {
      /* e.Scanned: 8 */
      /* e.Lines: 10 */
      /* s.LineNo: 12 */
      /* s.LineLen: 13 */
      /* e.Line: 15 */
      /* ('$' e.Scanned) (s.LineNo s.LineLen ')' e.Line) e.Lines */
      if (! r05_brackets_left(p+3, p[1], p[2]))
        continue;
      if (! r05_char_left(p+5, p[3], p[4], '$'))
        continue;
      if (! r05_brackets_left(p+6, p[4], p[2]))
        continue;
      r05_close_evar(p+8, p[5], p[4]);
      r05_close_evar(p+10, p[7], p[2]);
      if (! r05_svar_left(p+12, p[6], p[7]))
        continue;
      if (! r05_svar_left(p+13, p[12], p[7]))
        continue;
      if (! r05_char_left(p+14, p[13], p[7], ')'))
        continue;
      r05_close_evar(p+15, p[14], p[7]);

      r05_reset_allocator();
      r05_alloc_open_call(p+17);
      r05_alloc_function(&r05f_TryLoadExprm_MakeError);
      r05_alloc_svar(p+12);
      r05_alloc_svar(p+13);
      r05_alloc_open_bracket(p+18);
      r05_alloc_insert_pos(p+19);
      r05_alloc_close_bracket(p+20);
      r05_alloc_chars("Unbalanced bracket \')\'", 22);
      r05_alloc_close_call(p+21);
      r05_push_stack(p[21]);
      r05_push_stack(p[17]);
      r05_link_brackets(p[18], p[20]);
      r05_splice_evar(p[19], p+15);
      r05_splice_from_freelist(p[0]);
      r05_splice_to_freelist(p[0], p[2]);
      return;
    } while (0);

    do {
      /* e.Scanned: 7 */
      /* e.Lines: 9 */
      /* s.LineNo: 11 */
      /* s.LineLen: 12 */
      /* e.Comment: 15 */
      /* e.Line: 19 */
      /* (e.Scanned) (s.LineNo s.LineLen '/' '*' e.Comment '*' '/' e.Line) e.Lines */
      if (! r05_brackets_left(p+3, p[1], p[2]))
        continue;
      if (! r05_brackets_left(p+5, p[4], p[2]))
        continue;
      r05_close_evar(p+7, p[3], p[4]);
      r05_close_evar(p+9, p[6], p[2]);
      if (! r05_svar_left(p+11, p[5], p[6]))
        continue;
      if (! r05_svar_left(p+12, p[11], p[6]))
        continue;
      if (! r05_char_left(p+13, p[12], p[6], '/'))
        continue;
      if (! r05_char_left(p+14, p[13], p[6], '*'))
        continue;
      p[15] = NULL;
      p[16] = p[14];
      do {
        r05_start_e_loop();
        if (! r05_char_left(p+17, p[16], p[6], '*'))
          continue;
        if (! r05_char_left(p+18, p[17], p[6], '/'))
          continue;
        r05_close_evar(p+19, p[18], p[6]);

        r05_reset_allocator();
        r05_alloc_open_call(p+21);
        r05_alloc_function(&r05f_TryLoadExprm_Parse);
        r05_alloc_open_bracket(p+22);
        r05_alloc_insert_pos(p+23);
        r05_alloc_close_bracket(p+24);
        r05_alloc_open_bracket(p+25);
        r05_alloc_svar(p+11);
        r05_alloc_svar(p+12);
        r05_alloc_insert_pos(p+26);
        r05_alloc_close_bracket(p+27);
        r05_alloc_insert_pos(p+28);
        r05_alloc_close_call(p+29);
        r05_push_stack(p[29]);
        r05_push_stack(p[21]);
        r05_link_brackets(p[25], p[27]);
        r05_link_brackets(p[22], p[24]);
        r05_splice_evar(p[23], p+7);
        r05_splice_evar(p[26], p+19);
        r05_splice_evar(p[28], p+9);
        r05_splice_from_freelist(p[0]);
        r05_splice_to_freelist(p[0], p[2]);
        return;
      } while (r05_open_evar_advance(p+15, p[6]));
      r05_stop_e_loop();
    } while (0);

    do {
      /* e.Scanned: 7 */
      /* s.LineNo-B: 9 */
      /* s.LineLen-B: 10 */
      /* e.Comment-B: 13 */
      /* e.CommentLines: 15 */
      /* e.Lines: 19 */
      /* s.LineNo-E: 21 */
      /* s.LineLen-E: 22 */
      /* e.Comment-E: 23 */
      /* e.Line: 27 */
      /* (e.Scanned) (s.LineNo-B s.LineLen-B '/' '*' e.Comment-B) e.CommentLines (s.LineNo-E s.LineLen-E e.Comment-E '*' '/' e.Line) e.Lines */
      if (! r05_brackets_left(p+3, p[1], p[2]))
        continue;
      if (! r05_brackets_left(p+5, p[4], p[2]))
        continue;
      r05_close_evar(p+7, p[3], p[4]);
      if (! r05_svar_left(p+9, p[5], p[6]))
        continue;
      if (! r05_svar_left(p+10, p[9], p[6]))
        continue;
      if (! r05_char_left(p+11, p[10], p[6], '/'))
        continue;
      if (! r05_char_left(p+12, p[11], p[6], '*'))
        continue;
      r05_close_evar(p+13, p[12], p[6]);
      p[15] = NULL;
      p[16] = p[6];
      do {
        r05_start_e_loop();
        if (! r05_brackets_left(p+17, p[16], p[2]))
          continue;
        r05_close_evar(p+19, p[18], p[2]);
        if (! r05_svar_left(p+21, p[17], p[18]))
          continue;
        if (! r05_svar_left(p+22, p[21], p[18]))
          continue;
        p[23] = NULL;
        p[24] = p[22];
        do {
          r05_start_e_loop();
          if (! r05_char_left(p+25, p[24], p[18], '*'))
            continue;
          if (! r05_char_left(p+26, p[25], p[18], '/'))
            continue;
          r05_close_evar(p+27, p[26], p[18]);

          r05_reset_allocator();
          r05_alloc_open_call(p+29);
          r05_alloc_function(&r05f_TryLoadExprm_Parse);
          r05_alloc_open_bracket(p+30);
          r05_alloc_insert_pos(p+31);
          r05_alloc_close_bracket(p+32);
          r05_alloc_open_bracket(p+33);
          r05_alloc_svar(p+21);
          r05_alloc_svar(p+22);
          r05_alloc_insert_pos(p+34);
          r05_alloc_close_bracket(p+35);
          r05_alloc_insert_pos(p+36);
          r05_alloc_close_call(p+37);
          r05_push_stack(p[37]);
          r05_push_stack(p[29]);
          r05_link_brackets(p[33], p[35]);
          r05_link_brackets(p[30], p[32]);
          r05_splice_evar(p[31], p+7);
          r05_splice_evar(p[34], p+27);
          r05_splice_evar(p[36], p+19);
          r05_splice_from_freelist(p[0]);
          r05_splice_to_freelist(p[0], p[2]);
          return;
        } while (r05_open_evar_advance(p+23, p[18]));
      } while (r05_open_evar_advance(p+15, p[2]));
      r05_stop_e_loop();
    } while (0);

    do {
      /* e.Scanned: 7 */
      /* e.Lines: 9 */
      /* s.LineNo: 11 */
      /* s.LineLen: 12 */
      /* e.UnclosedComment: 15 */
      /* (e.Scanned) (s.LineNo s.LineLen '/' '*' e.UnclosedComment) e.Lines */
      if (! r05_brackets_left(p+3, p[1], p[2]))
        continue;
      if (! r05_brackets_left(p+5, p[4], p[2]))
        continue;
      r05_close_evar(p+7, p[3], p[4]);
      r05_close_evar(p+9, p[6], p[2]);
      if (! r05_svar_left(p+11, p[5], p[6]))
        continue;
      if (! r05_svar_left(p+12, p[11], p[6]))
        continue;
      if (! r05_char_left(p+13, p[12], p[6], '/'))
        continue;
      if (! r05_char_left(p+14, p[13], p[6], '*'))
        continue;
      r05_close_evar(p+15, p[14], p[6]);

      r05_reset_allocator();
      r05_alloc_open_call(p+17);
      r05_alloc_function(&r05f_TryLoadExprm_MakeError);
      r05_alloc_svar(p+11);
      r05_alloc_svar(p+12);
      r05_alloc_open_bracket(p+18);
      r05_alloc_chars("/*", 2);
      r05_alloc_insert_pos(p+19);
      r05_alloc_close_bracket(p+20);
      r05_alloc_chars("Unclosed comment /*...", 22);
      r05_alloc_close_call(p+21);
      r05_push_stack(p[21]);
      r05_push_stack(p[17]);
      r05_link_brackets(p[18], p[20]);
      r05_splice_evar(p[19], p+15);
      r05_splice_from_freelist(p[0]);
      r05_splice_to_freelist(p[0], p[2]);
      return;
    } while (0);

    do {
      /* e.Scanned: 7 */
      /* e.Lines: 9 */
      /* s.LineNo: 11 */
      /* s.LineLen: 12 */
      /* s.Char: 13 */
      /* e.Line: 14 */
      /* (e.Scanned) (s.LineNo s.LineLen s.Char e.Line) e.Lines */
      if (! r05_brackets_left(p+3, p[1], p[2]))
        continue;
      if (! r05_brackets_left(p+5, p[4], p[2]))
        continue;
      r05_close_evar(p+7, p[3], p[4]);
      r05_close_evar(p+9, p[6], p[2]);
      if (! r05_svar_left(p+11, p[5], p[6]))
        continue;
      if (! r05_svar_left(p+12, p[11], p[6]))
        continue;
      if (! r05_svar_left(p+13, p[12], p[6]))
        continue;
      r05_close_evar(p+14, p[13], p[6]);

      r05_reset_allocator();
      r05_alloc_open_call(p+16);
      r05_alloc_function(&r05f_TryLoadExprm_Parse);
      r05_alloc_open_bracket(p+17);
      r05_alloc_insert_pos(p+18);
      r05_alloc_open_call(p+19);
      r05_alloc_function(&r05f_TryLoadExprm_SkipSpace);
      r05_alloc_svar(p+13);
      r05_alloc_close_call(p+20);
      r05_alloc_close_bracket(p+21);
      r05_alloc_open_bracket(p+22);
      r05_alloc_svar(p+11);
      r05_alloc_svar(p+12);
      r05_alloc_insert_pos(p+23);
      r05_alloc_close_bracket(p+24);
      r05_alloc_insert_pos(p+25);
      r05_alloc_close_call(p+26);
      r05_push_stack(p[26]);
      r05_push_stack(p[16]);
      r05_link_brackets(p[22], p[24]);
      r05_link_brackets(p[17], p[21]);
      r05_push_stack(p[20]);
      r05_push_stack(p[19]);
      r05_splice_evar(p[18], p+7);
      r05_splice_evar(p[23], p+14);
      r05_splice_evar(p[25], p+9);
      r05_splice_from_freelist(p[0]);
      r05_splice_to_freelist(p[0], p[2]);
      return;
    } while (0);

    do {
      /* e.Scanned: 7 */
      /* e.Lines: 9 */
      /* s.LineNo: 11 */
      /* s.LineLen: 12 */
      /* (e.Scanned) (s.LineNo s.LineLen) e.Lines */
      if (! r05_brackets_left(p+3, p[1], p[2]))
        continue;
      if (! r05_brackets_left(p+5, p[4], p[2]))
        continue;
      r05_close_evar(p+7, p[3], p[4]);
      r05_close_evar(p+9, p[6], p[2]);
      if (! r05_svar_left(p+11, p[5], p[6]))
        continue;
      if (! r05_svar_left(p+12, p[11], p[6]))
        continue;
      if (! r05_empty_hole(p[12], p[6]))
        continue;

      r05_reset_allocator();
      r05_alloc_open_call(p+13);
      r05_alloc_function(&r05f_TryLoadExprm_Parse);
      r05_alloc_open_bracket(p+14);
      r05_alloc_insert_pos(p+15);
      r05_alloc_close_bracket(p+16);
      r05_alloc_insert_pos(p+17);
      r05_alloc_close_call(p+18);
      r05_push_stack(p[18]);
      r05_push_stack(p[13]);
      r05_link_brackets(p[14], p[16]);
      r05_splice_evar(p[15], p+7);
      r05_splice_evar(p[17], p+9);
      r05_splice_from_freelist(p[0]);
      r05_splice_to_freelist(p[0], p[2]);
      return;
    } while (0);

    do {
      /* e.Scanned: 6 */
      /* ('$' e.Scanned) */
      if (! r05_brackets_left(p+3, p[1], p[2]))
        continue;
      if (! r05_char_left(p+5, p[3], p[4], '$'))
        continue;
      if (! r05_empty_hole(p[4], p[2]))
        continue;
      r05_close_evar(p+6, p[5], p[4]);

      r05_reset_allocator();
      r05_alloc_function(&r05f_Success);
      r05_alloc_insert_pos(p+8);
      r05_splice_evar(p[8], p+6);
      r05_splice_from_freelist(p[0]);
      r05_splice_to_freelist(p[0], p[2]);
      return;
    } while (0);

    do {
      /* e.Bracketed: 9 */
      /* s.LineNo: 11 */
      /* s.LineLen: 12 */
      /* e.Line: 13 */
      /* t.Stack: 15 */
      /* e.Scanned: 17 */
      /* ((t.Stack e.Scanned (s.LineNo s.LineLen e.Line)) e.Bracketed) */
      if (! r05_brackets_left(p+3, p[1], p[2]))
        continue;
      if (! r05_brackets_left(p+5, p[3], p[4]))
        continue;
      if (! r05_brackets_right(p+7, p[5], p[6]))
        continue;
      if (! r05_empty_hole(p[4], p[2]))
        continue;
      r05_close_evar(p+9, p[6], p[4]);
      if (! r05_svar_left(p+11, p[7], p[8]))
        continue;
      if (! r05_svar_left(p+12, p[11], p[8]))
        continue;
      r05_close_evar(p+13, p[12], p[8]);
      if (! r05_tvar_left(p+15, p[5], p[7]))
        continue;
      r05_close_evar(p+17, p[16], p[7]);

      r05_reset_allocator();
      r05_alloc_open_call(p+19);
      r05_alloc_function(&r05f_TryLoadExprm_MakeError);
      r05_alloc_svar(p+11);
      r05_alloc_svar(p+12);
      r05_alloc_open_bracket(p+20);
      r05_alloc_insert_pos(p+21);
      r05_alloc_close_bracket(p+22);
      r05_alloc_chars("Unbalanced bracket \'(\'", 22);
      r05_alloc_close_call(p+23);
      r05_push_stack(p[23]);
      r05_push_stack(p[19]);
      r05_link_brackets(p[20], p[22]);
      r05_splice_evar(p[21], p+13);
      r05_splice_from_freelist(p[0]);
      r05_splice_to_freelist(p[0], p[2]);
      return;
    } while (0);

    r05_recognition_impossible();
  }
}

R05_DEFINE_LOCAL_FUNCTION(TryLoadExprm_Parsem_Ident, "TryLoadExpr-Parse-Ident") {
  struct r05_node *p[25] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /* e.Scanned: 7 */
    /* e.Lines: 9 */
    /* s.LineNo: 11 */
    /* s.LineLen: 12 */
    /* s.Word: 13 */
    /* e.Line: 14 */
    /* (e.Scanned) (s.LineNo s.LineLen s.Word e.Line) e.Lines */
    if (! r05_brackets_left(p+3, p[1], p[2]))
      continue;
    if (! r05_brackets_left(p+5, p[4], p[2]))
      continue;
    r05_close_evar(p+7, p[3], p[4]);
    r05_close_evar(p+9, p[6], p[2]);
    if (! r05_svar_left(p+11, p[5], p[6]))
      continue;
    if (! r05_svar_left(p+12, p[11], p[6]))
      continue;
    if (! r05_svar_left(p+13, p[12], p[6]))
      continue;
    r05_close_evar(p+14, p[13], p[6]);

    r05_reset_allocator();
    r05_alloc_open_call(p+16);
    r05_alloc_function(&r05f_TryLoadExprm_Parse);
    r05_alloc_open_bracket(p+17);
    r05_alloc_insert_pos(p+18);
    r05_alloc_svar(p+13);
    r05_alloc_close_bracket(p+19);
    r05_alloc_open_bracket(p+20);
    r05_alloc_svar(p+11);
    r05_alloc_svar(p+12);
    r05_alloc_insert_pos(p+21);
    r05_alloc_close_bracket(p+22);
    r05_alloc_insert_pos(p+23);
    r05_alloc_close_call(p+24);
    r05_push_stack(p[24]);
    r05_push_stack(p[16]);
    r05_link_brackets(p[20], p[22]);
    r05_link_brackets(p[17], p[19]);
    r05_splice_evar(p[18], p+7);
    r05_splice_evar(p[21], p+14);
    r05_splice_evar(p[23], p+9);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(TryLoadExprm_Parsem_Number, "TryLoadExpr-Parse-Number") {
  R05_DEFINE_COND_FUNCTION(TryLoadExprm_Parsem_Number, "TryLoadExpr-Parse-Number$1", 1)
  struct r05_node *p[36] = { 0 };

  r05_this_is_generated_function();
  switch (arg_begin->next->info.function->resume_entry >> 1) {
  case 0:
    p[0] = arg_begin;
    p[1] = arg_begin->next;
    p[2] = arg_end;

    do {
      /* e.Scanned: 9 */
      /* e.Number: 11 */
      /* e.Lines: 13 */
      /* s.LineNo: 15 */
      /* s.LineLen: 16 */
      /* s.1: 18 */
      /* s.Digit: 19 */
      /* e.Line: 20 */
      /* (e.Scanned) (e.Number) (s.LineNo s.LineLen 'D' s.1 s.Digit e.Line) e.Lines */
      if (! r05_brackets_left(p+3, p[1], p[2]))
        continue;
      if (! r05_brackets_left(p+5, p[4], p[2]))
        continue;
      if (! r05_brackets_left(p+7, p[6], p[2]))
        continue;
      r05_close_evar(p+9, p[3], p[4]);
      r05_close_evar(p+11, p[5], p[6]);
      r05_close_evar(p+13, p[8], p[2]);
      if (! r05_svar_left(p+15, p[7], p[8]))
        continue;
      if (! r05_svar_left(p+16, p[15], p[8]))
        continue;
      if (! r05_char_left(p+17, p[16], p[8], 'D'))
        continue;
      if (! r05_svar_left(p+18, p[17], p[8]))
        continue;
      if (! r05_svar_left(p+19, p[18], p[8]))
        continue;
      r05_close_evar(p+20, p[19], p[8]);

      r05_reset_allocator();
      r05_alloc_open_call(p+22);
      r05_alloc_function(&r05f_TryLoadExprm_Parsem_Number);
      r05_alloc_open_bracket(p+23);
      r05_alloc_insert_pos(p+24);
      r05_alloc_close_bracket(p+25);
      r05_alloc_open_bracket(p+26);
      r05_alloc_insert_pos(p+27);
      r05_alloc_svar(p+19);
      r05_alloc_close_bracket(p+28);
      r05_alloc_open_bracket(p+29);
      r05_alloc_svar(p+15);
      r05_alloc_svar(p+16);
      r05_alloc_open_call(p+30);
      r05_alloc_function(&r05f_Type);
      r05_alloc_insert_pos(p+31);
      r05_alloc_close_call(p+32);
      r05_alloc_close_bracket(p+33);
      r05_alloc_insert_pos(p+34);
      r05_alloc_close_call(p+35);
      r05_push_stack(p[35]);
      r05_push_stack(p[22]);
      r05_link_brackets(p[29], p[33]);
      r05_push_stack(p[32]);
      r05_push_stack(p[30]);
      r05_link_brackets(p[26], p[28]);
      r05_link_brackets(p[23], p[25]);
      r05_splice_evar(p[24], p+9);
      r05_splice_evar(p[27], p+11);
      r05_splice_evar(p[31], p+20);
      r05_splice_evar(p[34], p+13);
      r05_splice_from_freelist(p[0]);
      r05_splice_to_freelist(p[0], p[2]);
      return;
    } while (0);

    do {
      /* e.Scanned: 9 */
      /* e.Number: 11 */
      /* e.Lines: 13 */
      /* s.LineNo: 15 */
      /* s.LineLen: 16 */
      /* s.1: 17 */
      /* s.2: 18 */
      /* e.Line: 19 */
      /* (e.Scanned) (e.Number) (s.LineNo s.LineLen s.1 s.2 e.Line) e.Lines */
      if (! r05_brackets_left(p+3, p[1], p[2]))
        continue;
      if (! r05_brackets_left(p+5, p[4], p[2]))
        continue;
      if (! r05_brackets_left(p+7, p[6], p[2]))
        continue;
      r05_close_evar(p+9, p[3], p[4]);
      r05_close_evar(p+11, p[5], p[6]);
      r05_close_evar(p+13, p[8], p[2]);
      if (! r05_svar_left(p+15, p[7], p[8]))
        continue;
      if (! r05_svar_left(p+16, p[15], p[8]))
        continue;
      if (! r05_svar_left(p+17, p[16], p[8]))
        continue;
      if (! r05_svar_left(p+18, p[17], p[8]))
        continue;
      r05_close_evar(p+19, p[18], p[8]);

      r05_reset_allocator();
      r05_alloc_open_call(p+21);
      r05_alloc_function(&c1);
      r05_alloc_open_call(p+22);
      r05_alloc_function(&r05f_Numb);
      r05_alloc_evar(p+11);
      r05_alloc_close_call(p+23);
      r05_alloc_close_call(p+24);
      r05_push_stack(p[24]);
      r05_push_stack(p[21]);
      r05_push_stack(p[23]);
      r05_push_stack(p[22]);
      r05_push_context(p, 21);
      r05_splice_from_freelist(p[2]);
      return;

  case 1:
      r05_pop_context(p, 21);
      p[21] = arg_begin;
      p[22] = arg_begin->next;
      p[23] = arg_end;

      do {
        /* e.Scanned: 9 */
        /* e.Number: 11 */
        /* e.Lines: 13 */
        /* s.LineNo: 15 */
        /* s.LineLen: 16 */
        /* s.1: 17 */
        /* s.2: 18 */
        /* e.Line: 19 */
        /* s.OneNumber: 24 */
        /* s.OneNumber */
        if (! r05_svar_left(p+24, p[22], p[23]))
          continue;
        if (! r05_empty_hole(p[24], p[23]))
          continue;

        r05_reset_allocator();
        r05_alloc_open_call(p+25);
        r05_alloc_function(&r05f_TryLoadExprm_Parse);
        r05_alloc_open_bracket(p+26);
        r05_alloc_insert_pos(p+27);
        r05_alloc_svar(p+24);
        r05_alloc_close_bracket(p+28);
        r05_alloc_open_bracket(p+29);
        r05_alloc_svar(p+15);
        r05_alloc_svar(p+16);
        r05_alloc_insert_pos(p+30);
        r05_alloc_close_bracket(p+31);
        r05_alloc_insert_pos(p+32);
        r05_alloc_close_call(p+33);
        r05_push_stack(p[33]);
        r05_push_stack(p[25]);
        r05_link_brackets(p[29], p[31]);
        r05_link_brackets(p[26], p[28]);
        r05_splice_evar(p[27], p+9);
        r05_splice_evar(p[30], p+19);
        r05_splice_evar(p[32], p+13);
        r05_splice_from_freelist(p[0]);
        r05_splice_to_freelist(p[0], p[2]);
        return;
      } while (0);

      do {
        /* e.Scanned: 9 */
        /* e.Number: 11 */
        /* e.Lines: 13 */
        /* s.LineNo: 15 */
        /* s.LineLen: 16 */
        /* s.1: 17 */
        /* s.2: 18 */
        /* e.Line: 19 */
        /* e.SomeNumbers: 24 */
        /* e.SomeNumbers */
        r05_close_evar(p+24, p[22], p[23]);

        r05_reset_allocator();
        r05_alloc_open_call(p+26);
        r05_alloc_function(&r05f_TryLoadExprm_MakeError);
        r05_alloc_svar(p+15);
        r05_alloc_svar(p+16);
        r05_alloc_open_bracket(p+27);
        r05_alloc_insert_pos(p+28);
        r05_alloc_close_bracket(p+29);
        r05_alloc_chars("Very long number literal ", 25);
        r05_alloc_insert_pos(p+30);
        r05_alloc_close_call(p+31);
        r05_push_stack(p[31]);
        r05_push_stack(p[26]);
        r05_link_brackets(p[27], p[29]);
        r05_splice_evar(p[28], p+19);
        r05_splice_evar(p[30], p+11);
        r05_splice_from_freelist(p[0]);
        r05_splice_to_freelist(p[0], p[2]);
        return;
      } while (0);
    } while (0);

    r05_recognition_impossible();
  }
}

R05_DEFINE_LOCAL_FUNCTION(TryLoadExprm_MakeError, "TryLoadExpr-MakeError") {
  R05_DEFINE_COND_FUNCTION(TryLoadExprm_MakeError, "TryLoadExpr-MakeError$1", 1)
  struct r05_node *p[24] = { 0 };

  r05_this_is_generated_function();
  switch (arg_begin->next->info.function->resume_entry >> 1) {
  case 0:
    p[0] = arg_begin;
    p[1] = arg_begin->next;
    p[2] = arg_end;

    do {
      /* s.LineNo: 3 */
      /* s.LineLen: 4 */
      /* e.Rest: 7 */
      /* e.Message: 9 */
      /* s.LineNo s.LineLen (e.Rest) e.Message */
      if (! r05_svar_left(p+3, p[1], p[2]))
        continue;
      if (! r05_svar_left(p+4, p[3], p[2]))
        continue;
      if (! r05_brackets_left(p+5, p[4], p[2]))
        continue;
      r05_close_evar(p+7, p[5], p[6]);
      r05_close_evar(p+9, p[6], p[2]);

      r05_reset_allocator();
      r05_alloc_open_call(p+11);
      r05_alloc_function(&c1);
      r05_alloc_open_call(p+12);
      r05_alloc_function(&r05f_Lenw);
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
        /* s.LineNo: 3 */
        /* s.LineLen: 4 */
        /* e.Rest: 7 */
        /* e.Message: 9 */
        /* s.RestLen: 14 */
        /* e.1: 15 */
        /* s.RestLen e.1 */
        if (! r05_svar_left(p+14, p[12], p[13]))
          continue;
        r05_close_evar(p+15, p[14], p[13]);

        r05_reset_allocator();
        r05_alloc_function(&r05f_Fails);
        r05_alloc_open_bracket(p+17);
        r05_alloc_svar(p+3);
        r05_alloc_open_call(p+18);
        r05_alloc_function(&r05f_Inc);
        r05_alloc_open_call(p+19);
        r05_alloc_function(&r05f_m_);
        r05_alloc_svar(p+4);
        r05_alloc_svar(p+14);
        r05_alloc_close_call(p+20);
        r05_alloc_close_call(p+21);
        r05_alloc_close_bracket(p+22);
        r05_alloc_insert_pos(p+23);
        r05_link_brackets(p[17], p[22]);
        r05_push_stack(p[21]);
        r05_push_stack(p[18]);
        r05_push_stack(p[20]);
        r05_push_stack(p[19]);
        r05_splice_evar(p[23], p+9);
        r05_splice_from_freelist(p[0]);
        r05_splice_to_freelist(p[0], p[2]);
        return;
      } while (0);
      r05_splice_to_freelist(p[11], p[13]);
    } while (0);

    r05_recognition_impossible();
  }
}

R05_DEFINE_LOCAL_FUNCTION(TryLoadExprm_Parsem_Quote, "TryLoadExpr-Parse-Quote") {
  R05_DEFINE_COND_FUNCTION(TryLoadExprm_Parsem_Quote, "TryLoadExpr-Parse-Quote$1", 1)
  struct r05_node *p[45] = { 0 };

  r05_this_is_generated_function();
  switch (arg_begin->next->info.function->resume_entry >> 1) {
  case 0:
    p[0] = arg_begin;
    p[1] = arg_begin->next;
    p[2] = arg_end;

    do {
      /* e.Scanned: 10 */
      /* e.Text: 12 */
      /* e.Lines: 14 */
      /* s.LineNo: 16 */
      /* s.LineLen: 17 */
      /* e.Line: 19 */
      /* (e.Scanned) ('\'' e.Text) (s.LineNo s.LineLen '\'' e.Line) e.Lines */
      if (! r05_brackets_left(p+3, p[1], p[2]))
        continue;
      if (! r05_brackets_left(p+5, p[4], p[2]))
        continue;
      if (! r05_char_left(p+7, p[5], p[6], '\''))
        continue;
      if (! r05_brackets_left(p+8, p[6], p[2]))
        continue;
      r05_close_evar(p+10, p[3], p[4]);
      r05_close_evar(p+12, p[7], p[6]);
      r05_close_evar(p+14, p[9], p[2]);
      if (! r05_svar_left(p+16, p[8], p[9]))
        continue;
      if (! r05_svar_left(p+17, p[16], p[9]))
        continue;
      if (! r05_char_left(p+18, p[17], p[9], '\''))
        continue;
      r05_close_evar(p+19, p[18], p[9]);

      r05_reset_allocator();
      r05_alloc_open_call(p+21);
      r05_alloc_function(&r05f_TryLoadExprm_Parse);
      r05_alloc_open_bracket(p+22);
      r05_alloc_insert_pos(p+23);
      r05_alloc_close_bracket(p+24);
      r05_alloc_open_bracket(p+25);
      r05_alloc_svar(p+16);
      r05_alloc_svar(p+17);
      r05_alloc_insert_pos(p+26);
      r05_alloc_close_bracket(p+27);
      r05_alloc_insert_pos(p+28);
      r05_alloc_close_call(p+29);
      r05_push_stack(p[29]);
      r05_push_stack(p[21]);
      r05_link_brackets(p[25], p[27]);
      r05_link_brackets(p[22], p[24]);
      r05_splice_evar(p[23], p+10);
      r05_splice_evar(p[23], p+12);
      r05_splice_evar(p[26], p+19);
      r05_splice_evar(p[28], p+14);
      r05_splice_from_freelist(p[0]);
      r05_splice_to_freelist(p[0], p[2]);
      return;
    } while (0);

    do {
      /* e.Scanned: 10 */
      /* e.Text: 12 */
      /* e.Lines: 14 */
      /* s.LineNo: 16 */
      /* s.LineLen: 17 */
      /* e.Line: 19 */
      /* (e.Scanned) ('\"' e.Text) (s.LineNo s.LineLen '\"' e.Line) e.Lines */
      if (! r05_brackets_left(p+3, p[1], p[2]))
        continue;
      if (! r05_brackets_left(p+5, p[4], p[2]))
        continue;
      if (! r05_char_left(p+7, p[5], p[6], '\"'))
        continue;
      if (! r05_brackets_left(p+8, p[6], p[2]))
        continue;
      r05_close_evar(p+10, p[3], p[4]);
      r05_close_evar(p+12, p[7], p[6]);
      r05_close_evar(p+14, p[9], p[2]);
      if (! r05_svar_left(p+16, p[8], p[9]))
        continue;
      if (! r05_svar_left(p+17, p[16], p[9]))
        continue;
      if (! r05_char_left(p+18, p[17], p[9], '\"'))
        continue;
      r05_close_evar(p+19, p[18], p[9]);

      r05_reset_allocator();
      r05_alloc_open_call(p+21);
      r05_alloc_function(&r05f_TryLoadExprm_Parse);
      r05_alloc_open_bracket(p+22);
      r05_alloc_insert_pos(p+23);
      r05_alloc_open_call(p+24);
      r05_alloc_function(&r05f_Implodeu_Ext);
      r05_alloc_insert_pos(p+25);
      r05_alloc_close_call(p+26);
      r05_alloc_close_bracket(p+27);
      r05_alloc_open_bracket(p+28);
      r05_alloc_svar(p+16);
      r05_alloc_svar(p+17);
      r05_alloc_insert_pos(p+29);
      r05_alloc_close_bracket(p+30);
      r05_alloc_insert_pos(p+31);
      r05_alloc_close_call(p+32);
      r05_push_stack(p[32]);
      r05_push_stack(p[21]);
      r05_link_brackets(p[28], p[30]);
      r05_link_brackets(p[22], p[27]);
      r05_push_stack(p[26]);
      r05_push_stack(p[24]);
      r05_splice_evar(p[23], p+10);
      r05_splice_evar(p[25], p+12);
      r05_splice_evar(p[29], p+19);
      r05_splice_evar(p[31], p+14);
      r05_splice_from_freelist(p[0]);
      r05_splice_to_freelist(p[0], p[2]);
      return;
    } while (0);

    do {
      /* e.Scanned: 9 */
      /* e.Lines: 11 */
      /* s.Quote: 13 */
      /* e.Text: 14 */
      /* s.LineNo: 16 */
      /* s.LineLen: 17 */
      /* e.Line: 20 */
      /* (e.Scanned) (s.Quote e.Text) (s.LineNo s.LineLen '\\x' e.Line) e.Lines */
      if (! r05_brackets_left(p+3, p[1], p[2]))
        continue;
      if (! r05_brackets_left(p+5, p[4], p[2]))
        continue;
      if (! r05_brackets_left(p+7, p[6], p[2]))
        continue;
      r05_close_evar(p+9, p[3], p[4]);
      r05_close_evar(p+11, p[8], p[2]);
      if (! r05_svar_left(p+13, p[5], p[6]))
        continue;
      r05_close_evar(p+14, p[13], p[6]);
      if (! r05_svar_left(p+16, p[7], p[8]))
        continue;
      if (! r05_svar_left(p+17, p[16], p[8]))
        continue;
      if (! r05_char_left(p+18, p[17], p[8], '\\'))
        continue;
      if (! r05_char_left(p+19, p[18], p[8], 'x'))
        continue;
      r05_close_evar(p+20, p[19], p[8]);

      r05_reset_allocator();
      r05_alloc_open_call(p+22);
      r05_alloc_function(&r05f_TryLoadExprm_Parsem_Hex);
      r05_alloc_open_bracket(p+23);
      r05_alloc_insert_pos(p+24);
      r05_alloc_close_bracket(p+25);
      r05_alloc_open_bracket(p+26);
      r05_alloc_svar(p+13);
      r05_alloc_insert_pos(p+27);
      r05_alloc_close_bracket(p+28);
      r05_alloc_open_bracket(p+29);
      r05_alloc_svar(p+16);
      r05_alloc_svar(p+17);
      r05_alloc_insert_pos(p+30);
      r05_alloc_close_bracket(p+31);
      r05_alloc_insert_pos(p+32);
      r05_alloc_close_call(p+33);
      r05_push_stack(p[33]);
      r05_push_stack(p[22]);
      r05_link_brackets(p[29], p[31]);
      r05_link_brackets(p[26], p[28]);
      r05_link_brackets(p[23], p[25]);
      r05_splice_evar(p[24], p+9);
      r05_splice_evar(p[27], p+14);
      r05_splice_evar(p[30], p+20);
      r05_splice_evar(p[32], p+11);
      r05_splice_from_freelist(p[0]);
      r05_splice_to_freelist(p[0], p[2]);
      return;
    } while (0);

    do {
      /* e.Scanned: 9 */
      /* e.Lines: 11 */
      /* s.Quote: 13 */
      /* e.Text: 14 */
      /* s.LineNo: 16 */
      /* s.LineLen: 17 */
      /* s.Escaped: 19 */
      /* e.Line: 20 */
      /* (e.Scanned) (s.Quote e.Text) (s.LineNo s.LineLen '\\' s.Escaped e.Line) e.Lines */
      if (! r05_brackets_left(p+3, p[1], p[2]))
        continue;
      if (! r05_brackets_left(p+5, p[4], p[2]))
        continue;
      if (! r05_brackets_left(p+7, p[6], p[2]))
        continue;
      r05_close_evar(p+9, p[3], p[4]);
      r05_close_evar(p+11, p[8], p[2]);
      if (! r05_svar_left(p+13, p[5], p[6]))
        continue;
      r05_close_evar(p+14, p[13], p[6]);
      if (! r05_svar_left(p+16, p[7], p[8]))
        continue;
      if (! r05_svar_left(p+17, p[16], p[8]))
        continue;
      if (! r05_char_left(p+18, p[17], p[8], '\\'))
        continue;
      if (! r05_svar_left(p+19, p[18], p[8]))
        continue;
      r05_close_evar(p+20, p[19], p[8]);

      r05_reset_allocator();
      r05_alloc_open_call(p+22);
      r05_alloc_function(&c1);
      r05_alloc_open_bracket(p+23);
      r05_alloc_chars("\'\'", 2);
      r05_alloc_close_bracket(p+24);
      r05_alloc_open_bracket(p+25);
      r05_alloc_chars("\"\"", 2);
      r05_alloc_close_bracket(p+26);
      r05_alloc_open_bracket(p+27);
      r05_alloc_chars("\\\\", 2);
      r05_alloc_close_bracket(p+28);
      r05_alloc_open_bracket(p+29);
      r05_alloc_chars("n\n", 2);
      r05_alloc_close_bracket(p+30);
      r05_alloc_open_bracket(p+31);
      r05_alloc_chars("r\r", 2);
      r05_alloc_close_bracket(p+32);
      r05_alloc_open_bracket(p+33);
      r05_alloc_chars("t\t", 2);
      r05_alloc_close_bracket(p+34);
      r05_alloc_open_bracket(p+35);
      r05_alloc_chars("<<", 2);
      r05_alloc_close_bracket(p+36);
      r05_alloc_open_bracket(p+37);
      r05_alloc_chars(">>", 2);
      r05_alloc_close_bracket(p+38);
      r05_alloc_open_bracket(p+39);
      r05_alloc_chars("((", 2);
      r05_alloc_close_bracket(p+40);
      r05_alloc_open_bracket(p+41);
      r05_alloc_chars("))", 2);
      r05_alloc_close_bracket(p+42);
      r05_alloc_close_call(p+43);
      r05_push_stack(p[43]);
      r05_push_stack(p[22]);
      r05_link_brackets(p[41], p[42]);
      r05_link_brackets(p[39], p[40]);
      r05_link_brackets(p[37], p[38]);
      r05_link_brackets(p[35], p[36]);
      r05_link_brackets(p[33], p[34]);
      r05_link_brackets(p[31], p[32]);
      r05_link_brackets(p[29], p[30]);
      r05_link_brackets(p[27], p[28]);
      r05_link_brackets(p[25], p[26]);
      r05_link_brackets(p[23], p[24]);
      r05_push_context(p, 22);
      r05_splice_from_freelist(p[2]);
      return;

  case 1:
      r05_pop_context(p, 22);
      p[22] = arg_begin;
      p[23] = arg_begin->next;
      p[24] = arg_end;

      do {
        /* e.Scanned: 9 */
        /* e.Lines: 11 */
        /* s.Quote: 13 */
        /* e.Text: 14 */
        /* s.LineNo: 16 */
        /* s.LineLen: 17 */
        /* s.Escaped: 19, 29 */
        /* e.Line: 20 */
        /* e.Escapes-B: 25 */
        /* e.Escapes-E: 30 */
        /* s.Char: 32 */
        /* e.Escapes-B (s.Escaped s.Char) e.Escapes-E */
        p[25] = NULL;
        p[26] = p[23];
        do {
          r05_start_e_loop();
          if (! r05_brackets_left(p+27, p[26], p[24]))
            continue;
          if (! r05_repeated_svar_left(p+29, p[27], p[28], p+19))
            continue;
          r05_close_evar(p+30, p[28], p[24]);
          if (! r05_svar_left(p+32, p[29], p[28]))
            continue;
          if (! r05_empty_hole(p[32], p[28]))
            continue;

          r05_reset_allocator();
          r05_alloc_open_call(p+33);
          r05_alloc_function(&r05f_TryLoadExprm_Parsem_Quote);
          r05_alloc_open_bracket(p+34);
          r05_alloc_insert_pos(p+35);
          r05_alloc_close_bracket(p+36);
          r05_alloc_open_bracket(p+37);
          r05_alloc_svar(p+13);
          r05_alloc_insert_pos(p+38);
          r05_alloc_svar(p+32);
          r05_alloc_close_bracket(p+39);
          r05_alloc_open_bracket(p+40);
          r05_alloc_svar(p+16);
          r05_alloc_svar(p+17);
          r05_alloc_insert_pos(p+41);
          r05_alloc_close_bracket(p+42);
          r05_alloc_insert_pos(p+43);
          r05_alloc_close_call(p+44);
          r05_push_stack(p[44]);
          r05_push_stack(p[33]);
          r05_link_brackets(p[40], p[42]);
          r05_link_brackets(p[37], p[39]);
          r05_link_brackets(p[34], p[36]);
          r05_splice_evar(p[35], p+9);
          r05_splice_evar(p[38], p+14);
          r05_splice_evar(p[41], p+20);
          r05_splice_evar(p[43], p+11);
          r05_splice_from_freelist(p[0]);
          r05_splice_to_freelist(p[0], p[2]);
          return;
        } while (r05_open_evar_advance(p+25, p[24]));
        r05_stop_e_loop();
      } while (0);

      do {
        /* e.Scanned: 9 */
        /* e.Lines: 11 */
        /* s.Quote: 13 */
        /* e.Text: 14 */
        /* s.LineNo: 16 */
        /* s.LineLen: 17 */
        /* s.Escaped: 19 */
        /* e.Line: 20 */
        /* e.Escapes: 25 */
        /* e.Escapes */
        r05_close_evar(p+25, p[23], p[24]);

        r05_reset_allocator();
        r05_alloc_open_call(p+27);
        r05_alloc_function(&r05f_TryLoadExprm_MakeError);
        r05_alloc_svar(p+16);
        r05_alloc_svar(p+17);
        r05_alloc_open_bracket(p+28);
        r05_alloc_insert_pos(p+29);
        r05_alloc_close_bracket(p+30);
        r05_alloc_chars("Bad escape sequence \\", 21);
        r05_alloc_svar(p+19);
        r05_alloc_close_call(p+31);
        r05_push_stack(p[31]);
        r05_push_stack(p[27]);
        r05_link_brackets(p[28], p[30]);
        r05_splice_evar(p[29], p+20);
        r05_splice_from_freelist(p[0]);
        r05_splice_to_freelist(p[0], p[2]);
        return;
      } while (0);
    } while (0);

    do {
      /* e.Scanned: 9 */
      /* e.Lines: 11 */
      /* s.Quote: 13 */
      /* e.Text: 14 */
      /* s.LineNo: 16 */
      /* s.LineLen: 17 */
      /* s.Char: 18 */
      /* e.Line: 19 */
      /* (e.Scanned) (s.Quote e.Text) (s.LineNo s.LineLen s.Char e.Line) e.Lines */
      if (! r05_brackets_left(p+3, p[1], p[2]))
        continue;
      if (! r05_brackets_left(p+5, p[4], p[2]))
        continue;
      if (! r05_brackets_left(p+7, p[6], p[2]))
        continue;
      r05_close_evar(p+9, p[3], p[4]);
      r05_close_evar(p+11, p[8], p[2]);
      if (! r05_svar_left(p+13, p[5], p[6]))
        continue;
      r05_close_evar(p+14, p[13], p[6]);
      if (! r05_svar_left(p+16, p[7], p[8]))
        continue;
      if (! r05_svar_left(p+17, p[16], p[8]))
        continue;
      if (! r05_svar_left(p+18, p[17], p[8]))
        continue;
      r05_close_evar(p+19, p[18], p[8]);

      r05_reset_allocator();
      r05_alloc_open_call(p+21);
      r05_alloc_function(&r05f_TryLoadExprm_Parsem_Quote);
      r05_alloc_open_bracket(p+22);
      r05_alloc_insert_pos(p+23);
      r05_alloc_close_bracket(p+24);
      r05_alloc_open_bracket(p+25);
      r05_alloc_svar(p+13);
      r05_alloc_insert_pos(p+26);
      r05_alloc_svar(p+18);
      r05_alloc_close_bracket(p+27);
      r05_alloc_open_bracket(p+28);
      r05_alloc_svar(p+16);
      r05_alloc_svar(p+17);
      r05_alloc_insert_pos(p+29);
      r05_alloc_close_bracket(p+30);
      r05_alloc_insert_pos(p+31);
      r05_alloc_close_call(p+32);
      r05_push_stack(p[32]);
      r05_push_stack(p[21]);
      r05_link_brackets(p[28], p[30]);
      r05_link_brackets(p[25], p[27]);
      r05_link_brackets(p[22], p[24]);
      r05_splice_evar(p[23], p+9);
      r05_splice_evar(p[26], p+14);
      r05_splice_evar(p[29], p+19);
      r05_splice_evar(p[31], p+11);
      r05_splice_from_freelist(p[0]);
      r05_splice_to_freelist(p[0], p[2]);
      return;
    } while (0);

    do {
      /* e.Scanned: 9 */
      /* e.Lines: 11 */
      /* s.Quote: 13 */
      /* e.Text: 14 */
      /* s.LineNo: 16 */
      /* s.LineLen: 17 */
      /* (e.Scanned) (s.Quote e.Text) (s.LineNo s.LineLen) e.Lines */
      if (! r05_brackets_left(p+3, p[1], p[2]))
        continue;
      if (! r05_brackets_left(p+5, p[4], p[2]))
        continue;
      if (! r05_brackets_left(p+7, p[6], p[2]))
        continue;
      r05_close_evar(p+9, p[3], p[4]);
      r05_close_evar(p+11, p[8], p[2]);
      if (! r05_svar_left(p+13, p[5], p[6]))
        continue;
      r05_close_evar(p+14, p[13], p[6]);
      if (! r05_svar_left(p+16, p[7], p[8]))
        continue;
      if (! r05_svar_left(p+17, p[16], p[8]))
        continue;
      if (! r05_empty_hole(p[17], p[8]))
        continue;

      r05_reset_allocator();
      r05_alloc_open_call(p+18);
      r05_alloc_function(&r05f_TryLoadExprm_MakeError);
      r05_alloc_svar(p+16);
      r05_alloc_svar(p+17);
      r05_alloc_open_bracket(p+19);
      r05_alloc_close_bracket(p+20);
      r05_alloc_chars("Unclosed quote ", 15);
      r05_alloc_svar(p+13);
      r05_alloc_close_call(p+21);
      r05_push_stack(p[21]);
      r05_push_stack(p[18]);
      r05_link_brackets(p[19], p[20]);
      r05_splice_from_freelist(p[0]);
      r05_splice_to_freelist(p[0], p[2]);
      return;
    } while (0);

    r05_recognition_impossible();
  }
}

R05_DEFINE_LOCAL_FUNCTION(TryLoadExprm_SkipSpace, "TryLoadExpr-SkipSpace") {
  struct r05_node *p[4] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /* ' ' */
    if (! r05_char_left(p+3, p[1], p[2], ' '))
      continue;
    if (! r05_empty_hole(p[3], p[2]))
      continue;

    r05_reset_allocator();
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
    r05_alloc_svar(p+3);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(TryLoadExprm_Parsem_Hex, "TryLoadExpr-Parse-Hex") {
  R05_DEFINE_COND_FUNCTION(TryLoadExprm_Parsem_Hex, "TryLoadExpr-Parse-Hex$1", 1)
  R05_DEFINE_COND_FUNCTION(TryLoadExprm_Parsem_Hex, "TryLoadExpr-Parse-Hex$2", 2)
  struct r05_node *p[48] = { 0 };

  r05_this_is_generated_function();
  switch (arg_begin->next->info.function->resume_entry >> 1) {
  case 0:
    p[0] = arg_begin;
    p[1] = arg_begin->next;
    p[2] = arg_end;

    do {
      /* e.Scanned: 9 */
      /* e.Lines: 11 */
      /* s.Quote: 13 */
      /* e.Text: 14 */
      /* s.LineNo: 16 */
      /* s.LineLen: 17 */
      /* s.H1: 18 */
      /* s.H2: 19 */
      /* e.Line: 20 */
      /* (e.Scanned) (s.Quote e.Text) (s.LineNo s.LineLen s.H1 s.H2 e.Line) e.Lines */
      if (! r05_brackets_left(p+3, p[1], p[2]))
        continue;
      if (! r05_brackets_left(p+5, p[4], p[2]))
        continue;
      if (! r05_brackets_left(p+7, p[6], p[2]))
        continue;
      r05_close_evar(p+9, p[3], p[4]);
      r05_close_evar(p+11, p[8], p[2]);
      if (! r05_svar_left(p+13, p[5], p[6]))
        continue;
      r05_close_evar(p+14, p[13], p[6]);
      if (! r05_svar_left(p+16, p[7], p[8]))
        continue;
      if (! r05_svar_left(p+17, p[16], p[8]))
        continue;
      if (! r05_svar_left(p+18, p[17], p[8]))
        continue;
      if (! r05_svar_left(p+19, p[18], p[8]))
        continue;
      r05_close_evar(p+20, p[19], p[8]);

      r05_reset_allocator();
      r05_alloc_open_call(p+22);
      r05_alloc_function(&c1);
      r05_alloc_open_call(p+23);
      r05_alloc_function(&r05f_TryLoadExprm_Hex);
      r05_alloc_svar(p+18);
      r05_alloc_close_call(p+24);
      r05_alloc_close_call(p+25);
      r05_push_stack(p[25]);
      r05_push_stack(p[22]);
      r05_push_stack(p[24]);
      r05_push_stack(p[23]);
      r05_push_context(p, 22);
      r05_splice_from_freelist(p[2]);
      return;

  case 1:
      r05_pop_context(p, 22);
      p[22] = arg_begin;
      p[23] = arg_begin->next;
      p[24] = arg_end;

      do {
        /* e.Scanned: 9 */
        /* e.Lines: 11 */
        /* s.Quote: 13 */
        /* e.Text: 14 */
        /* s.LineNo: 16 */
        /* s.LineLen: 17 */
        /* s.H1: 18 */
        /* s.H2: 19 */
        /* e.Line: 20 */
        /* s.Val1: 25 */
        /* s.Val1 */
        if (! r05_svar_left(p+25, p[23], p[24]))
          continue;
        if (! r05_empty_hole(p[25], p[24]))
          continue;

        r05_reset_allocator();
        r05_alloc_open_call(p+26);
        r05_alloc_function(&c2);
        r05_alloc_open_call(p+27);
        r05_alloc_function(&r05f_TryLoadExprm_Hex);
        r05_alloc_svar(p+19);
        r05_alloc_close_call(p+28);
        r05_alloc_close_call(p+29);
        r05_push_stack(p[29]);
        r05_push_stack(p[26]);
        r05_push_stack(p[28]);
        r05_push_stack(p[27]);
        r05_push_context(p, 26);
        r05_splice_from_freelist(p[2]);
        return;

  case 2:
        r05_pop_context(p, 26);
        p[26] = arg_begin;
        p[27] = arg_begin->next;
        p[28] = arg_end;

        do {
          /* e.Scanned: 9 */
          /* e.Lines: 11 */
          /* s.Quote: 13 */
          /* e.Text: 14 */
          /* s.LineNo: 16 */
          /* s.LineLen: 17 */
          /* s.H1: 18 */
          /* s.H2: 19 */
          /* e.Line: 20 */
          /* s.Val1: 25 */
          /* s.Val2: 29 */
          /* s.Val2 */
          if (! r05_svar_left(p+29, p[27], p[28]))
            continue;
          if (! r05_empty_hole(p[29], p[28]))
            continue;

          r05_reset_allocator();
          r05_alloc_open_call(p+30);
          r05_alloc_function(&r05f_TryLoadExprm_Parsem_Quote);
          r05_alloc_open_bracket(p+31);
          r05_alloc_insert_pos(p+32);
          r05_alloc_close_bracket(p+33);
          r05_alloc_open_bracket(p+34);
          r05_alloc_svar(p+13);
          r05_alloc_insert_pos(p+35);
          r05_alloc_open_call(p+36);
          r05_alloc_function(&r05f_Chr);
          r05_alloc_open_call(p+37);
          r05_alloc_function(&r05f_k2B_);
          r05_alloc_open_call(p+38);
          r05_alloc_function(&r05f_k2A_);
          r05_alloc_svar(p+25);
          r05_alloc_number(16UL);
          r05_alloc_close_call(p+39);
          r05_alloc_svar(p+29);
          r05_alloc_close_call(p+40);
          r05_alloc_close_call(p+41);
          r05_alloc_close_bracket(p+42);
          r05_alloc_open_bracket(p+43);
          r05_alloc_svar(p+16);
          r05_alloc_svar(p+17);
          r05_alloc_insert_pos(p+44);
          r05_alloc_close_bracket(p+45);
          r05_alloc_insert_pos(p+46);
          r05_alloc_close_call(p+47);
          r05_push_stack(p[47]);
          r05_push_stack(p[30]);
          r05_link_brackets(p[43], p[45]);
          r05_link_brackets(p[34], p[42]);
          r05_push_stack(p[41]);
          r05_push_stack(p[36]);
          r05_push_stack(p[40]);
          r05_push_stack(p[37]);
          r05_push_stack(p[39]);
          r05_push_stack(p[38]);
          r05_link_brackets(p[31], p[33]);
          r05_splice_evar(p[32], p+9);
          r05_splice_evar(p[35], p+14);
          r05_splice_evar(p[44], p+20);
          r05_splice_evar(p[46], p+11);
          r05_splice_from_freelist(p[0]);
          r05_splice_to_freelist(p[0], p[2]);
          return;
        } while (0);
        r05_splice_to_freelist(p[26], p[28]);
      } while (0);
      r05_splice_to_freelist(p[22], p[24]);
    } while (0);

    do {
      /* e.Scanned: 9 */
      /* e.Lines: 11 */
      /* s.Qoute: 13 */
      /* e.Text: 14 */
      /* s.LineNo: 16 */
      /* s.LineLen: 17 */
      /* e.Line: 18 */
      /* (e.Scanned) (s.Qoute e.Text) (s.LineNo s.LineLen e.Line) e.Lines */
      if (! r05_brackets_left(p+3, p[1], p[2]))
        continue;
      if (! r05_brackets_left(p+5, p[4], p[2]))
        continue;
      if (! r05_brackets_left(p+7, p[6], p[2]))
        continue;
      r05_close_evar(p+9, p[3], p[4]);
      r05_close_evar(p+11, p[8], p[2]);
      if (! r05_svar_left(p+13, p[5], p[6]))
        continue;
      r05_close_evar(p+14, p[13], p[6]);
      if (! r05_svar_left(p+16, p[7], p[8]))
        continue;
      if (! r05_svar_left(p+17, p[16], p[8]))
        continue;
      r05_close_evar(p+18, p[17], p[8]);

      r05_reset_allocator();
      r05_alloc_open_call(p+20);
      r05_alloc_function(&r05f_TryLoadExprm_MakeError);
      r05_alloc_svar(p+16);
      r05_alloc_svar(p+17);
      r05_alloc_open_bracket(p+21);
      r05_alloc_insert_pos(p+22);
      r05_alloc_close_bracket(p+23);
      r05_alloc_chars("Bad hex escape sequence \\x", 26);
      r05_alloc_open_call(p+24);
      r05_alloc_function(&r05f_TryLoadExprm_First2);
      r05_alloc_evar(p+18);
      r05_alloc_close_call(p+25);
      r05_alloc_close_call(p+26);
      r05_push_stack(p[26]);
      r05_push_stack(p[20]);
      r05_push_stack(p[25]);
      r05_push_stack(p[24]);
      r05_link_brackets(p[21], p[23]);
      r05_splice_evar(p[22], p+18);
      r05_splice_from_freelist(p[0]);
      r05_splice_to_freelist(p[0], p[2]);
      return;
    } while (0);

    r05_recognition_impossible();
  }
}

R05_DEFINE_LOCAL_FUNCTION(TryLoadExprm_Hex, "TryLoadExpr-Hex") {
  R05_DEFINE_COND_FUNCTION(TryLoadExprm_Hex, "TryLoadExpr-Hex$1", 1)
  R05_DEFINE_COND_FUNCTION(TryLoadExprm_Hex, "TryLoadExpr-Hex$2", 2)
  R05_DEFINE_COND_FUNCTION(TryLoadExprm_Hex, "TryLoadExpr-Hex$3", 3)
  struct r05_node *p[22] = { 0 };

  r05_this_is_generated_function();
  switch (arg_begin->next->info.function->resume_entry >> 1) {
  case 0:
    p[0] = arg_begin;
    p[1] = arg_begin->next;
    p[2] = arg_end;

    do {
      /* s.Digit: 3 */
      /* s.Digit */
      if (! r05_svar_left(p+3, p[1], p[2]))
        continue;
      if (! r05_empty_hole(p[3], p[2]))
        continue;

      r05_reset_allocator();
      r05_alloc_open_call(p+4);
      r05_alloc_function(&c1);
      r05_alloc_open_call(p+5);
      r05_alloc_function(&r05f_Type);
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
        /* s.Digit: 3 */
        /* e.1: 8 */
        /* 'D' e.1 */
        if (! r05_char_left(p+7, p[5], p[6], 'D'))
          continue;
        r05_close_evar(p+8, p[7], p[6]);

        r05_reset_allocator();
        r05_alloc_open_call(p+10);
        r05_alloc_function(&r05f_Numb);
        r05_alloc_svar(p+3);
        r05_alloc_close_call(p+11);
        r05_push_stack(p[11]);
        r05_push_stack(p[10]);
        r05_splice_from_freelist(p[0]);
        r05_splice_to_freelist(p[0], p[2]);
        return;
      } while (0);
      r05_splice_to_freelist(p[4], p[6]);
    } while (0);

    do {
      /* s.Hex: 3 */
      /* s.Hex */
      if (! r05_svar_left(p+3, p[1], p[2]))
        continue;
      if (! r05_empty_hole(p[3], p[2]))
        continue;

      r05_reset_allocator();
      r05_alloc_open_call(p+4);
      r05_alloc_function(&c2);
      r05_alloc_open_call(p+5);
      r05_alloc_function(&r05f_Upper);
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

  case 2:
      r05_pop_context(p, 4);
      p[4] = arg_begin;
      p[5] = arg_begin->next;
      p[6] = arg_end;

      do {
        /* s.Hex: 3 */
        /* s.UHex: 7 */
        /* s.UHex */
        if (! r05_svar_left(p+7, p[5], p[6]))
          continue;
        if (! r05_empty_hole(p[7], p[6]))
          continue;

        r05_reset_allocator();
        r05_alloc_open_call(p+8);
        r05_alloc_function(&c3);
        r05_alloc_open_bracket(p+9);
        r05_alloc_char('A');
        r05_alloc_number(10UL);
        r05_alloc_close_bracket(p+10);
        r05_alloc_open_bracket(p+11);
        r05_alloc_char('B');
        r05_alloc_number(11UL);
        r05_alloc_close_bracket(p+12);
        r05_alloc_open_bracket(p+13);
        r05_alloc_char('C');
        r05_alloc_number(12UL);
        r05_alloc_close_bracket(p+14);
        r05_alloc_open_bracket(p+15);
        r05_alloc_char('D');
        r05_alloc_number(13UL);
        r05_alloc_close_bracket(p+16);
        r05_alloc_open_bracket(p+17);
        r05_alloc_char('E');
        r05_alloc_number(14UL);
        r05_alloc_close_bracket(p+18);
        r05_alloc_open_bracket(p+19);
        r05_alloc_char('F');
        r05_alloc_number(15UL);
        r05_alloc_close_bracket(p+20);
        r05_alloc_close_call(p+21);
        r05_push_stack(p[21]);
        r05_push_stack(p[8]);
        r05_link_brackets(p[19], p[20]);
        r05_link_brackets(p[17], p[18]);
        r05_link_brackets(p[15], p[16]);
        r05_link_brackets(p[13], p[14]);
        r05_link_brackets(p[11], p[12]);
        r05_link_brackets(p[9], p[10]);
        r05_push_context(p, 8);
        r05_splice_from_freelist(p[2]);
        return;

  case 3:
        r05_pop_context(p, 8);
        p[8] = arg_begin;
        p[9] = arg_begin->next;
        p[10] = arg_end;

        do {
          /* s.Hex: 3 */
          /* s.UHex: 7, 15 */
          /* e.Hex-B: 11 */
          /* e.Hex-E: 16 */
          /* s.Value: 18 */
          /* e.Hex-B (s.UHex s.Value) e.Hex-E */
          p[11] = NULL;
          p[12] = p[9];
          do {
            r05_start_e_loop();
            if (! r05_brackets_left(p+13, p[12], p[10]))
              continue;
            if (! r05_repeated_svar_left(p+15, p[13], p[14], p+7))
              continue;
            r05_close_evar(p+16, p[14], p[10]);
            if (! r05_svar_left(p+18, p[15], p[14]))
              continue;
            if (! r05_empty_hole(p[18], p[14]))
              continue;

            r05_reset_allocator();
            r05_alloc_svar(p+18);
            r05_splice_from_freelist(p[0]);
            r05_splice_to_freelist(p[0], p[2]);
            return;
          } while (r05_open_evar_advance(p+11, p[10]));
          r05_stop_e_loop();
        } while (0);
        r05_splice_to_freelist(p[8], p[10]);
      } while (0);
      r05_splice_to_freelist(p[4], p[6]);
    } while (0);

    do {
      /* s.Other: 3 */
      /* s.Other */
      if (! r05_svar_left(p+3, p[1], p[2]))
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
}

R05_DEFINE_LOCAL_FUNCTION(TryLoadExprm_First2, "TryLoadExpr-First2") {
  struct r05_node *p[7] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /* s.1: 3 */
    /* s.2: 4 */
    /* e.Line: 5 */
    /* s.1 s.2 e.Line */
    if (! r05_svar_left(p+3, p[1], p[2]))
      continue;
    if (! r05_svar_left(p+4, p[3], p[2]))
      continue;
    r05_close_evar(p+5, p[4], p[2]);

    r05_reset_allocator();
    r05_alloc_svar(p+3);
    r05_alloc_svar(p+4);
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

R05_DEFINE_ENTRY_FUNCTION(LoadExpr, "LoadExpr") {
  R05_DEFINE_COND_FUNCTION(LoadExpr, "LoadExpr$1", 1)
  struct r05_node *p[25] = { 0 };

  r05_this_is_generated_function();
  switch (arg_begin->next->info.function->resume_entry >> 1) {
  case 0:
    p[0] = arg_begin;
    p[1] = arg_begin->next;
    p[2] = arg_end;

    do {
      /* e.FileName: 3 */
      /* e.FileName */
      r05_close_evar(p+3, p[1], p[2]);

      r05_reset_allocator();
      r05_alloc_open_call(p+5);
      r05_alloc_function(&c1);
      r05_alloc_open_call(p+6);
      r05_alloc_function(&r05f_TryLoadExpr);
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
        /* e.FileName: 3 */
        /* e.Expr: 9 */
        /* Success e.Expr */
        if (! r05_function_left(p+8, p[6], p[7], &r05f_Success))
          continue;
        r05_close_evar(p+9, p[8], p[7]);

        r05_reset_allocator();
        r05_alloc_insert_pos(p+11);
        r05_splice_evar(p[11], p+9);
        r05_splice_from_freelist(p[0]);
        r05_splice_to_freelist(p[0], p[2]);
        return;
      } while (0);

      do {
        /* e.FileName: 3 */
        /* e.Message: 11 */
        /* s.Line: 13 */
        /* s.Col: 14 */
        /* Fails (s.Line s.Col) e.Message */
        if (! r05_function_left(p+8, p[6], p[7], &r05f_Fails))
          continue;
        if (! r05_brackets_left(p+9, p[8], p[7]))
          continue;
        r05_close_evar(p+11, p[10], p[7]);
        if (! r05_svar_left(p+13, p[9], p[10]))
          continue;
        if (! r05_svar_left(p+14, p[13], p[10]))
          continue;
        if (! r05_empty_hole(p[14], p[10]))
          continue;

        r05_reset_allocator();
        r05_alloc_open_call(p+15);
        r05_alloc_function(&r05f_Putout);
        r05_alloc_number(0UL);
        r05_alloc_insert_pos(p+16);
        r05_alloc_char(':');
        r05_alloc_open_call(p+17);
        r05_alloc_function(&r05f_Symb);
        r05_alloc_svar(p+13);
        r05_alloc_close_call(p+18);
        r05_alloc_char(':');
        r05_alloc_open_call(p+19);
        r05_alloc_function(&r05f_Symb);
        r05_alloc_svar(p+14);
        r05_alloc_close_call(p+20);
        r05_alloc_char(':');
        r05_alloc_insert_pos(p+21);
        r05_alloc_close_call(p+22);
        r05_alloc_open_call(p+23);
        r05_alloc_function(&r05f_Exit);
        r05_alloc_number(1UL);
        r05_alloc_close_call(p+24);
        r05_push_stack(p[24]);
        r05_push_stack(p[23]);
        r05_push_stack(p[22]);
        r05_push_stack(p[15]);
        r05_push_stack(p[20]);
        r05_push_stack(p[19]);
        r05_push_stack(p[18]);
        r05_push_stack(p[17]);
        r05_splice_evar(p[16], p+3);
        r05_splice_evar(p[21], p+11);
        r05_splice_from_freelist(p[0]);
        r05_splice_to_freelist(p[0], p[2]);
        return;
      } while (0);

      r05_recognition_impossible();
    } while (0);
  }
}

static const struct r05_function *metatable_entries[] = {
  &r05f_Apply,
  &r05f_Map,
  &r05f_Reduce,
  &r05f_MapAccum,
  &r05f_DoMapAccum,
  &r05f_MapAccumm_AddScanned,
  &r05f_DelAccumulator,
  &r05f_LOADm_SAVEm_HANDLE,
  &r05f_LoadFile,
  &r05f_DoLoadFile,
  &r05f_SaveFile,
  &r05f_SaveFilem_WriteBracketLine,
  &r05f_Inc,
  &r05f_Dec,
  &r05f_ArgList,
  &r05f_DoArgList,
  &r05f_SwDoArgList,
  &r05f_Trim,
  &r05f_Trimm_L,
  &r05f_Trimm_R,
  &r05f_OneOf,
  &r05f_Unique,
  &r05f_TryLoadExpr,
  &r05f_TryLoadExprm_Prepare,
  &r05f_TryLoadExprm_PrepareLine,
  &r05f_TryLoadExprm_Parse,
  &r05f_TryLoadExprm_Parsem_Ident,
  &r05f_TryLoadExprm_Parsem_Number,
  &r05f_TryLoadExprm_MakeError,
  &r05f_TryLoadExprm_Parsem_Quote,
  &r05f_TryLoadExprm_SkipSpace,
  &r05f_TryLoadExprm_Parsem_Hex,
  &r05f_TryLoadExprm_Hex,
  &r05f_TryLoadExprm_First2,
  &r05f_LoadExpr,
  &r05f_Mu,
  &r05f_Up,
  &r05f_Evm_met,
  &r05f_Residue,
  &r05f_k3F_,
};

static const struct r05_metatable metatable = {
  sizeof(metatable_entries) / sizeof(metatable_entries[0]),
  metatable_entries
};


/* End of file */
