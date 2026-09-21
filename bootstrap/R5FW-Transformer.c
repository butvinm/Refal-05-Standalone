/* Automatically generated file. Don't edit! */
#include "refal05rts.h"


R05_DECLARE_ENTRY_FUNCTION(MapAccum)
R05_DECLARE_ENTRY_FUNCTION(DelAccumulator)
R05_DECLARE_ENTRY_FUNCTION(Map)
R05_DECLARE_ENTRY_FUNCTION(Unique)
R05_DECLARE_ENTRY_FUNCTION(Transform)
R05_DECLARE_LOCAL_FUNCTION(Transformm_Step)
R05_DECLARE_ENTRY_FUNCTION(r5fwm_transformeru_BuiltinName)
R05_DECLARE_ENTRY_FUNCTION(r5fwm_transformeru_GetFunctionName)
R05_DECLARE_ENTRY_FUNCTION(r5fwm_transformeru_RemovePos)
R05_DECLARE_ENTRY_FUNCTION(r5fwm_transformeru_TransformUnit)
R05_DECLARE_LOCAL_FUNCTION(UnBlock)
R05_DECLARE_LOCAL_FUNCTION(DoUnBlock)
R05_DECLARE_LOCAL_FUNCTION(DoUnBlockm_NextFunction)
R05_DECLARE_LOCAL_FUNCTION(WithBlock)
R05_DECLARE_LOCAL_FUNCTION(DoWithBlock)
R05_DECLARE_LOCAL_FUNCTION(BlockScopeVars)
R05_DECLARE_ENTRY_FUNCTION(r5fwm_transformeru_MakeVariables)
R05_DECLARE_ENTRY_FUNCTION(r5fwm_transformeru_AddScopeVars)
R05_DECLARE_LOCAL_FUNCTION(UnCondition)
R05_DECLARE_LOCAL_FUNCTION(DoUnCondition)
R05_DECLARE_LOCAL_FUNCTION(DoUnConditionm_ConditionSentence)
R05_DECLARE_LOCAL_FUNCTION(DoUnConditionm_NextFunction)
R05_DECLARE_LOCAL_FUNCTION(UnConditionSentence)
R05_DECLARE_LOCAL_FUNCTION(UnConditionSentencem_AnalyzeContinuation)
R05_DECLARE_LOCAL_FUNCTION(UnConditionSentencem_ConditionSubFunctions)
R05_DECLARE_LOCAL_FUNCTION(AnalyzeContinuation)
R05_DECLARE_LOCAL_FUNCTION(MakeContinuationSentence)
R05_DECLARE_LOCAL_FUNCTION(PatternSteps)
R05_DECLARE_LOCAL_FUNCTION(DoPatternSteps)
R05_DECLARE_LOCAL_FUNCTION(HardItem)
R05_DECLARE_ENTRY_FUNCTION(r5fwm_transformeru_BindBrackets)
R05_DECLARE_LOCAL_FUNCTION(DoBindBrackets)
R05_DECLARE_LOCAL_FUNCTION(T1)
R05_DECLARE_LOCAL_FUNCTION(PassiveHoles)
R05_DECLARE_LOCAL_FUNCTION(T2)
R05_DECLARE_LOCAL_FUNCTION(T3)
R05_DECLARE_LOCAL_FUNCTION(T4)
R05_DECLARE_LOCAL_FUNCTION(T5)
R05_DECLARE_LOCAL_FUNCTION(T5m_UnHole)
R05_DECLARE_LOCAL_FUNCTION(T5m_sub)
R05_DECLARE_LOCAL_FUNCTION(Substitute)
R05_DECLARE_LOCAL_FUNCTION(T6)
R05_DECLARE_LOCAL_FUNCTION(T7)
R05_DECLARE_LOCAL_FUNCTION(T0)
R05_DECLARE_LOCAL_FUNCTION(DoT0)
R05_DECLARE_LOCAL_FUNCTION(ConditionSubFunctions)
R05_DECLARE_LOCAL_FUNCTION(ConditionSubFunctionsm_SplitSentence)
R05_DECLARE_LOCAL_FUNCTION(ConditionSubFunctionsm_CheckFunction)
R05_DECLARE_LOCAL_FUNCTION(ConditionSubFunctionsm_OpenEChain)
R05_DECLARE_LOCAL_FUNCTION(OpenEChain)
R05_DECLARE_LOCAL_FUNCTION(DoOpenEChain)
R05_DECLARE_LOCAL_FUNCTION(MakeOpenEm_ForwardNext)
R05_DECLARE_LOCAL_FUNCTION(ExtractVariables)
R05_DECLARE_LOCAL_FUNCTION(ExtractVariablesm_Sentences)
R05_DECLARE_LOCAL_FUNCTION(ExtractVariablesm_Tail)
R05_DECLARE_LOCAL_FUNCTION(ExtractVariablesm_Expr)
R05_DECLARE_LOCAL_FUNCTION(NewName)
R05_DECLARE_LOCAL_FUNCTION(DoNewName)
R05_DECLARE_LOCAL_FUNCTION(DoNewNamem_NameGenerated)
R05_DECLARE_ENTRY_FUNCTION(Explode)
R05_DEFINE_METAFUNCTION(Mu, "Mu")
R05_DEFINE_METAFUNCTION(Up, "Up")
R05_DEFINE_METAFUNCTION(Evm_met, "Ev-met")
R05_DEFINE_METAFUNCTION(Residue, "Residue")
R05_DEFINE_METAFUNCTION(k3F_, "?")
R05_DECLARE_ENTRY_FUNCTION(ListOfBuiltin)
R05_DECLARE_ENTRY_FUNCTION(Symb)
R05_DECLARE_ENTRY_FUNCTION(k2B_)
R05_DEFINE_LOCAL_ENUM(Function, "Function")
R05_DEFINE_LOCAL_ENUM(Extern, "Extern")
R05_DEFINE_LOCAL_ENUM(SpecialComment, "SpecialComment")
R05_DEFINE_LOCAL_ENUM(Brackets, "Brackets")
R05_DEFINE_LOCAL_ENUM(Variable, "Variable")
R05_DEFINE_LOCAL_ENUM(NOm_POS, "NO-POS")
R05_DEFINE_LOCAL_ENUM(Symbol, "Symbol")
R05_DEFINE_LOCAL_ENUM(OpenE, "OpenE")
R05_DEFINE_LOCAL_ENUM(LeftBracket, "LeftBracket")
R05_DEFINE_LOCAL_ENUM(RightBracket, "RightBracket")
R05_DEFINE_LOCAL_ENUM(CALLm_BLOCK, "CALL-BLOCK")
R05_DEFINE_LOCAL_ENUM(RETURN, "RETURN")
R05_DEFINE_LOCAL_ENUM(Call, "Call")
R05_DEFINE_LOCAL_ENUM(Local, "Local")
R05_DEFINE_LOCAL_ENUM(Condition, "Condition")
R05_DEFINE_LOCAL_ENUM(NoContinuation, "NoContinuation")
R05_DEFINE_LOCAL_ENUM(HOLE, "HOLE")
R05_DEFINE_LOCAL_ENUM(True, "True")
R05_DEFINE_LOCAL_ENUM(False, "False")

R05_DEFINE_ENTRY_FUNCTION(Transform, "Transform") {
  struct r05_node *p[10] = { 0 };

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
    r05_alloc_function(&r05f_Transformm_Step);
    r05_alloc_function(&r05f_UnCondition);
    r05_alloc_open_call(p+6);
    r05_alloc_function(&r05f_Transformm_Step);
    r05_alloc_function(&r05f_UnBlock);
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

R05_DEFINE_LOCAL_FUNCTION(Transformm_Step, "Transform-Step") {
  struct r05_node *p[21] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /* s.FnMode: 3 */
    /* e.Units: 4 */
    /* s.FnMode e.Units */
    if (! r05_svar_left(p+3, p[1], p[2]))
      continue;
    r05_close_evar(p+4, p[3], p[2]);

    r05_reset_allocator();
    r05_alloc_open_call(p+6);
    r05_alloc_function(&r05f_DelAccumulator);
    r05_alloc_open_call(p+7);
    r05_alloc_function(&r05f_MapAccum);
    r05_alloc_open_bracket(p+8);
    r05_alloc_function(&r05f_r5fwm_transformeru_TransformUnit);
    r05_alloc_svar(p+3);
    r05_alloc_close_bracket(p+9);
    r05_alloc_open_call(p+10);
    r05_alloc_function(&r05f_MapAccum);
    r05_alloc_function(&r05f_r5fwm_transformeru_GetFunctionName);
    r05_alloc_open_bracket(p+11);
    r05_alloc_open_call(p+12);
    r05_alloc_function(&r05f_Map);
    r05_alloc_function(&r05f_r5fwm_transformeru_BuiltinName);
    r05_alloc_open_call(p+13);
    r05_alloc_function(&r05f_ListOfBuiltin);
    r05_alloc_close_call(p+14);
    r05_alloc_close_call(p+15);
    r05_alloc_close_bracket(p+16);
    r05_alloc_insert_pos(p+17);
    r05_alloc_close_call(p+18);
    r05_alloc_close_call(p+19);
    r05_alloc_close_call(p+20);
    r05_push_stack(p[20]);
    r05_push_stack(p[6]);
    r05_push_stack(p[19]);
    r05_push_stack(p[7]);
    r05_push_stack(p[18]);
    r05_push_stack(p[10]);
    r05_link_brackets(p[11], p[16]);
    r05_push_stack(p[15]);
    r05_push_stack(p[12]);
    r05_push_stack(p[14]);
    r05_push_stack(p[13]);
    r05_link_brackets(p[8], p[9]);
    r05_splice_evar(p[17], p+4);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_ENTRY_FUNCTION(r5fwm_transformeru_BuiltinName, "r5fw-transformer_BuiltinName") {
  struct r05_node *p[12] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /* s.No: 5 */
    /* s.Name: 6 */
    /* s.Type: 7 */
    /* (s.No s.Name s.Type) */
    if (! r05_brackets_left(p+3, p[1], p[2]))
      continue;
    if (! r05_empty_hole(p[4], p[2]))
      continue;
    if (! r05_svar_left(p+5, p[3], p[4]))
      continue;
    if (! r05_svar_left(p+6, p[5], p[4]))
      continue;
    if (! r05_svar_left(p+7, p[6], p[4]))
      continue;
    if (! r05_empty_hole(p[7], p[4]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_bracket(p+8);
    r05_alloc_open_call(p+9);
    r05_alloc_function(&r05f_Explode);
    r05_alloc_svar(p+6);
    r05_alloc_close_call(p+10);
    r05_alloc_close_bracket(p+11);
    r05_link_brackets(p[8], p[11]);
    r05_push_stack(p[10]);
    r05_push_stack(p[9]);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_ENTRY_FUNCTION(r5fwm_transformeru_GetFunctionName, "r5fw-transformer_GetFunctionName") {
  struct r05_node *p[31] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /* e.Names: 8 */
    /* t.SrcPos: 10 */
    /* e.Name: 14 */
    /* s.Scope: 16 */
    /* e.Sentences: 17 */
    /* (e.Names) (Function t.SrcPos (e.Name) s.Scope e.Sentences) */
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
    r05_alloc_open_bracket(p+21);
    r05_alloc_insert_pos(p+22);
    r05_alloc_close_bracket(p+23);
    r05_alloc_close_bracket(p+24);
    r05_alloc_open_bracket(p+25);
    r05_alloc_function(&r05f_Function);
    r05_alloc_insert_pos(p+26);
    r05_alloc_open_bracket(p+27);
    r05_alloc_evar(p+14);
    r05_alloc_close_bracket(p+28);
    r05_alloc_svar(p+16);
    r05_alloc_insert_pos(p+29);
    r05_alloc_close_bracket(p+30);
    r05_link_brackets(p[25], p[30]);
    r05_link_brackets(p[27], p[28]);
    r05_link_brackets(p[19], p[24]);
    r05_link_brackets(p[21], p[23]);
    r05_splice_evar(p[20], p+8);
    r05_splice_evar(p[22], p+14);
    r05_splice_tvar(p[26], p+10);
    r05_splice_evar(p[29], p+17);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  do {
    /* e.Names: 8 */
    /* e.ExternalNames: 10 */
    /* (e.Names) (Extern e.ExternalNames) */
    if (! r05_brackets_left(p+3, p[1], p[2]))
      continue;
    if (! r05_brackets_left(p+5, p[4], p[2]))
      continue;
    if (! r05_function_left(p+7, p[5], p[6], &r05f_Extern))
      continue;
    if (! r05_empty_hole(p[6], p[2]))
      continue;
    r05_close_evar(p+8, p[3], p[4]);
    r05_close_evar(p+10, p[7], p[6]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+12);
    r05_alloc_insert_pos(p+13);
    r05_alloc_open_call(p+14);
    r05_alloc_function(&r05f_Map);
    r05_alloc_function(&r05f_r5fwm_transformeru_RemovePos);
    r05_alloc_insert_pos(p+15);
    r05_alloc_close_call(p+16);
    r05_alloc_close_bracket(p+17);
    r05_alloc_open_bracket(p+18);
    r05_alloc_function(&r05f_Extern);
    r05_alloc_evar(p+10);
    r05_alloc_close_bracket(p+19);
    r05_link_brackets(p[18], p[19]);
    r05_link_brackets(p[12], p[17]);
    r05_push_stack(p[16]);
    r05_push_stack(p[14]);
    r05_splice_evar(p[13], p+8);
    r05_splice_evar(p[15], p+10);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  do {
    /* e.Names: 8 */
    /* t.SrcPos: 10 */
    /* e.Text: 12 */
    /* (e.Names) (SpecialComment t.SrcPos e.Text) */
    if (! r05_brackets_left(p+3, p[1], p[2]))
      continue;
    if (! r05_brackets_left(p+5, p[4], p[2]))
      continue;
    if (! r05_function_left(p+7, p[5], p[6], &r05f_SpecialComment))
      continue;
    if (! r05_empty_hole(p[6], p[2]))
      continue;
    r05_close_evar(p+8, p[3], p[4]);
    if (! r05_tvar_left(p+10, p[7], p[6]))
      continue;
    r05_close_evar(p+12, p[11], p[6]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+14);
    r05_alloc_insert_pos(p+15);
    r05_alloc_close_bracket(p+16);
    r05_alloc_open_bracket(p+17);
    r05_alloc_function(&r05f_SpecialComment);
    r05_alloc_insert_pos(p+18);
    r05_alloc_close_bracket(p+19);
    r05_link_brackets(p[17], p[19]);
    r05_link_brackets(p[14], p[16]);
    r05_splice_evar(p[15], p+8);
    r05_splice_tvar(p[18], p+10);
    r05_splice_evar(p[18], p+12);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_ENTRY_FUNCTION(r5fwm_transformeru_RemovePos, "r5fw-transformer_RemovePos") {
  struct r05_node *p[12] = { 0 };

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
    r05_alloc_insert_pos(p+10);
    r05_alloc_close_bracket(p+11);
    r05_link_brackets(p[9], p[11]);
    r05_splice_evar(p[10], p+7);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_ENTRY_FUNCTION(r5fwm_transformeru_TransformUnit, "r5fw-transformer_TransformUnit") {
  struct r05_node *p[30] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /* e.Names: 8 */
    /* s.FnMode: 10 */
    /* t.SrcPos: 11 */
    /* e.Name: 15 */
    /* s.Scope: 17 */
    /* e.Sentences: 18 */
    /* s.FnMode (e.Names) (Function t.SrcPos (e.Name) s.Scope e.Sentences) */
    if (! r05_brackets_right(p+3, p[1], p[2]))
      continue;
    if (! r05_function_left(p+5, p[3], p[4], &r05f_Function))
      continue;
    if (! r05_brackets_right(p+6, p[1], p[3]))
      continue;
    r05_close_evar(p+8, p[6], p[7]);
    if (! r05_svar_left(p+10, p[1], p[6]))
      continue;
    if (! r05_empty_hole(p[10], p[6]))
      continue;
    if (! r05_tvar_left(p+11, p[5], p[4]))
      continue;
    if (! r05_brackets_left(p+13, p[12], p[4]))
      continue;
    r05_close_evar(p+15, p[13], p[14]);
    if (! r05_svar_left(p+17, p[14], p[4]))
      continue;
    r05_close_evar(p+18, p[17], p[4]);

    r05_reset_allocator();
    r05_alloc_open_call(p+20);
    r05_alloc_function(&r05f_Mu);
    r05_alloc_svar(p+10);
    r05_alloc_open_bracket(p+21);
    r05_alloc_insert_pos(p+22);
    r05_alloc_close_bracket(p+23);
    r05_alloc_insert_pos(p+24);
    r05_alloc_open_bracket(p+25);
    r05_alloc_insert_pos(p+26);
    r05_alloc_close_bracket(p+27);
    r05_alloc_svar(p+17);
    r05_alloc_insert_pos(p+28);
    r05_alloc_close_call(p+29);
    r05_push_stack(p[29]);
    r05_push_stack(p[20]);
    r05_link_brackets(p[25], p[27]);
    r05_link_brackets(p[21], p[23]);
    r05_splice_evar(p[22], p+8);
    r05_splice_tvar(p[24], p+11);
    r05_splice_evar(p[26], p+15);
    r05_splice_evar(p[28], p+18);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  do {
    /* e.Names: 8 */
    /* e.ExternNames: 10 */
    /* s.FnMode: 12 */
    /* s.FnMode (e.Names) (Extern e.ExternNames) */
    if (! r05_brackets_right(p+3, p[1], p[2]))
      continue;
    if (! r05_function_left(p+5, p[3], p[4], &r05f_Extern))
      continue;
    if (! r05_brackets_right(p+6, p[1], p[3]))
      continue;
    r05_close_evar(p+8, p[6], p[7]);
    r05_close_evar(p+10, p[5], p[4]);
    if (! r05_svar_left(p+12, p[1], p[6]))
      continue;
    if (! r05_empty_hole(p[12], p[6]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_bracket(p+13);
    r05_alloc_insert_pos(p+14);
    r05_alloc_close_bracket(p+15);
    r05_alloc_open_bracket(p+16);
    r05_alloc_function(&r05f_Extern);
    r05_alloc_insert_pos(p+17);
    r05_alloc_close_bracket(p+18);
    r05_link_brackets(p[16], p[18]);
    r05_link_brackets(p[13], p[15]);
    r05_splice_evar(p[14], p+8);
    r05_splice_evar(p[17], p+10);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  do {
    /* e.Names: 8 */
    /* s.FnMode: 10 */
    /* t.SrcPos: 11 */
    /* e.Text: 13 */
    /* s.FnMode (e.Names) (SpecialComment t.SrcPos e.Text) */
    if (! r05_brackets_right(p+3, p[1], p[2]))
      continue;
    if (! r05_function_left(p+5, p[3], p[4], &r05f_SpecialComment))
      continue;
    if (! r05_brackets_right(p+6, p[1], p[3]))
      continue;
    r05_close_evar(p+8, p[6], p[7]);
    if (! r05_svar_left(p+10, p[1], p[6]))
      continue;
    if (! r05_empty_hole(p[10], p[6]))
      continue;
    if (! r05_tvar_left(p+11, p[5], p[4]))
      continue;
    r05_close_evar(p+13, p[12], p[4]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+15);
    r05_alloc_insert_pos(p+16);
    r05_alloc_close_bracket(p+17);
    r05_alloc_open_bracket(p+18);
    r05_alloc_function(&r05f_SpecialComment);
    r05_alloc_insert_pos(p+19);
    r05_alloc_close_bracket(p+20);
    r05_link_brackets(p[18], p[20]);
    r05_link_brackets(p[15], p[17]);
    r05_splice_evar(p[16], p+8);
    r05_splice_tvar(p[19], p+11);
    r05_splice_evar(p[19], p+13);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(UnBlock, "UnBlock") {
  struct r05_node *p[34] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /* e.Names: 5 */
    /* t.SrcPos: 7 */
    /* e.Name: 11 */
    /* s.Scope: 13 */
    /* e.Sentences: 14 */
    /* (e.Names) t.SrcPos (e.Name) s.Scope e.Sentences */
    if (! r05_brackets_left(p+3, p[1], p[2]))
      continue;
    r05_close_evar(p+5, p[3], p[4]);
    if (! r05_tvar_left(p+7, p[4], p[2]))
      continue;
    if (! r05_brackets_left(p+9, p[8], p[2]))
      continue;
    r05_close_evar(p+11, p[9], p[10]);
    if (! r05_svar_left(p+13, p[10], p[2]))
      continue;
    r05_close_evar(p+14, p[13], p[2]);

    r05_reset_allocator();
    r05_alloc_open_call(p+16);
    r05_alloc_function(&r05f_DoUnBlock);
    r05_alloc_open_bracket(p+17);
    r05_alloc_insert_pos(p+18);
    r05_alloc_close_bracket(p+19);
    r05_alloc_insert_pos(p+20);
    r05_alloc_open_bracket(p+21);
    r05_alloc_insert_pos(p+22);
    r05_alloc_close_bracket(p+23);
    r05_alloc_svar(p+13);
    r05_alloc_open_bracket(p+24);
    r05_alloc_evar(p+11);
    r05_alloc_close_bracket(p+25);
    r05_alloc_open_bracket(p+26);
    r05_alloc_close_bracket(p+27);
    r05_alloc_open_bracket(p+28);
    r05_alloc_close_bracket(p+29);
    r05_alloc_insert_pos(p+30);
    r05_alloc_open_bracket(p+31);
    r05_alloc_close_bracket(p+32);
    r05_alloc_close_call(p+33);
    r05_push_stack(p[33]);
    r05_push_stack(p[16]);
    r05_link_brackets(p[31], p[32]);
    r05_link_brackets(p[28], p[29]);
    r05_link_brackets(p[26], p[27]);
    r05_link_brackets(p[24], p[25]);
    r05_link_brackets(p[21], p[23]);
    r05_link_brackets(p[17], p[19]);
    r05_splice_evar(p[18], p+5);
    r05_splice_tvar(p[20], p+7);
    r05_splice_evar(p[22], p+11);
    r05_splice_evar(p[30], p+14);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(DoUnBlock, "DoUnBlock") {
  R05_DEFINE_COND_FUNCTION(DoUnBlock, "DoUnBlock$1", 1)
  R05_DEFINE_COND_FUNCTION(DoUnBlock, "DoUnBlock$2", 2)
  R05_DEFINE_COND_FUNCTION(DoUnBlock, "DoUnBlock$3", 3)
  struct r05_node *p[108] = { 0 };

  r05_this_is_generated_function();
  switch (arg_begin->next->info.function->resume_entry >> 1) {
  case 0:
    p[0] = arg_begin;
    p[1] = arg_begin->next;
    p[2] = arg_end;

    do {
      /* e.Names: 7 */
      /* e.UnscannedFunctions: 9 */
      /* t.SrcPos: 11 */
      /* e.Name: 15 */
      /* s.Scope: 17 */
      /* e.Prefix: 24 */
      /* e.ScannedFunctions: 26 */
      /* e.ScannedSentences: 28 */
      /* e.Sentences-B: 30 */
      /* e.BlockedSentence: 34 */
      /* e.Sentences-E: 36 */
      /* (e.Names) t.SrcPos (e.Name) s.Scope (e.Prefix) (e.ScannedFunctions) (e.ScannedSentences) e.Sentences-B (e.BlockedSentence) e.Sentences-E (e.UnscannedFunctions) */
      if (! r05_brackets_left(p+3, p[1], p[2]))
        continue;
      if (! r05_brackets_right(p+5, p[4], p[2]))
        continue;
      r05_close_evar(p+7, p[3], p[4]);
      r05_close_evar(p+9, p[5], p[6]);
      if (! r05_tvar_left(p+11, p[4], p[5]))
        continue;
      if (! r05_brackets_left(p+13, p[12], p[5]))
        continue;
      r05_close_evar(p+15, p[13], p[14]);
      if (! r05_svar_left(p+17, p[14], p[5]))
        continue;
      if (! r05_brackets_left(p+18, p[17], p[5]))
        continue;
      if (! r05_brackets_left(p+20, p[19], p[5]))
        continue;
      if (! r05_brackets_left(p+22, p[21], p[5]))
        continue;
      r05_close_evar(p+24, p[18], p[19]);
      r05_close_evar(p+26, p[20], p[21]);
      r05_close_evar(p+28, p[22], p[23]);
      p[30] = NULL;
      p[31] = p[23];
      do {
        r05_start_e_loop();
        if (! r05_brackets_left(p+32, p[31], p[5]))
          continue;
        r05_close_evar(p+34, p[32], p[33]);
        r05_close_evar(p+36, p[33], p[5]);

        r05_reset_allocator();
        r05_alloc_open_call(p+38);
        r05_alloc_function(&c1);
        r05_alloc_open_call(p+39);
        r05_alloc_function(&r05f_WithBlock);
        r05_alloc_evar(p+34);
        r05_alloc_close_call(p+40);
        r05_alloc_close_call(p+41);
        r05_push_stack(p[41]);
        r05_push_stack(p[38]);
        r05_push_stack(p[40]);
        r05_push_stack(p[39]);
        r05_push_context(p, 38);
        r05_splice_from_freelist(p[2]);
        return;

  case 1:
        r05_pop_context(p, 38);
        p[38] = arg_begin;
        p[39] = arg_begin->next;
        p[40] = arg_end;

        do {
          /* e.Names: 7 */
          /* e.UnscannedFunctions: 9 */
          /* t.SrcPos: 11 */
          /* e.Name: 15 */
          /* s.Scope: 17 */
          /* e.Prefix: 24 */
          /* e.ScannedFunctions: 26 */
          /* e.ScannedSentences: 28 */
          /* e.Sentences-B: 30 */
          /* e.BlockedSentence: 34 */
          /* e.Sentences-E: 36 */
          /* e.SentencePrefix: 46 */
          /* e.BlockResult: 48 */
          /* e.SubSentences: 50 */
          /* (e.SentencePrefix) CALL-BLOCK (e.BlockResult) e.SubSentences */
          if (! r05_brackets_left(p+41, p[39], p[40]))
            continue;
          if (! r05_function_left(p+43, p[42], p[40], &r05f_CALLm_BLOCK))
            continue;
          if (! r05_brackets_left(p+44, p[43], p[40]))
            continue;
          r05_close_evar(p+46, p[41], p[42]);
          r05_close_evar(p+48, p[44], p[45]);
          r05_close_evar(p+50, p[45], p[40]);

          r05_reset_allocator();
          r05_alloc_open_call(p+52);
          r05_alloc_function(&c2);
          r05_alloc_open_call(p+53);
          r05_alloc_function(&r05f_NewName);
          r05_alloc_open_bracket(p+54);
          r05_alloc_evar(p+7);
          r05_alloc_close_bracket(p+55);
          r05_alloc_evar(p+24);
          r05_alloc_close_call(p+56);
          r05_alloc_close_call(p+57);
          r05_push_stack(p[57]);
          r05_push_stack(p[52]);
          r05_push_stack(p[56]);
          r05_push_stack(p[53]);
          r05_link_brackets(p[54], p[55]);
          r05_push_context(p, 52);
          r05_splice_from_freelist(p[2]);
          return;

  case 2:
          r05_pop_context(p, 52);
          p[52] = arg_begin;
          p[53] = arg_begin->next;
          p[54] = arg_end;

          do {
            /* e.Names: 7 */
            /* e.UnscannedFunctions: 9 */
            /* t.SrcPos: 11 */
            /* e.Name: 15 */
            /* s.Scope: 17 */
            /* e.Prefix: 24 */
            /* e.ScannedFunctions: 26 */
            /* e.ScannedSentences: 28 */
            /* e.Sentences-B: 30 */
            /* e.BlockedSentence: 34 */
            /* e.Sentences-E: 36 */
            /* e.SentencePrefix: 46 */
            /* e.BlockResult: 48 */
            /* e.SubSentences: 50 */
            /* e.RefilledNames: 57 */
            /* e.NewName: 59 */
            /* (e.RefilledNames) e.NewName */
            if (! r05_brackets_left(p+55, p[53], p[54]))
              continue;
            r05_close_evar(p+57, p[55], p[56]);
            r05_close_evar(p+59, p[56], p[54]);

            r05_reset_allocator();
            r05_alloc_open_call(p+61);
            r05_alloc_function(&c3);
            r05_alloc_open_call(p+62);
            r05_alloc_function(&r05f_BlockScopeVars);
            r05_alloc_evar(p+46);
            r05_alloc_close_call(p+63);
            r05_alloc_close_call(p+64);
            r05_push_stack(p[64]);
            r05_push_stack(p[61]);
            r05_push_stack(p[63]);
            r05_push_stack(p[62]);
            r05_push_context(p, 61);
            r05_splice_from_freelist(p[2]);
            return;

  case 3:
            r05_pop_context(p, 61);
            p[61] = arg_begin;
            p[62] = arg_begin->next;
            p[63] = arg_end;

            do {
              /* e.Names: 7 */
              /* e.UnscannedFunctions: 9 */
              /* t.SrcPos: 11 */
              /* e.Name: 15 */
              /* s.Scope: 17 */
              /* e.Prefix: 24 */
              /* e.ScannedFunctions: 26 */
              /* e.ScannedSentences: 28 */
              /* e.Sentences-B: 30 */
              /* e.BlockedSentence: 34 */
              /* e.Sentences-E: 36 */
              /* e.SentencePrefix: 46 */
              /* e.BlockResult: 48 */
              /* e.SubSentences: 50 */
              /* e.RefilledNames: 57 */
              /* e.NewName: 59 */
              /* e.ScopeVars: 64 */
              /* e.ScopeVars */
              r05_close_evar(p+64, p[62], p[63]);

              r05_reset_allocator();
              r05_alloc_open_call(p+66);
              r05_alloc_function(&r05f_DoUnBlock);
              r05_alloc_open_bracket(p+67);
              r05_alloc_insert_pos(p+68);
              r05_alloc_close_bracket(p+69);
              r05_alloc_insert_pos(p+70);
              r05_alloc_open_bracket(p+71);
              r05_alloc_insert_pos(p+72);
              r05_alloc_close_bracket(p+73);
              r05_alloc_svar(p+17);
              r05_alloc_open_bracket(p+74);
              r05_alloc_insert_pos(p+75);
              r05_alloc_close_bracket(p+76);
              r05_alloc_open_bracket(p+77);
              r05_alloc_insert_pos(p+78);
              r05_alloc_close_bracket(p+79);
              r05_alloc_open_bracket(p+80);
              r05_alloc_insert_pos(p+81);
              r05_alloc_open_bracket(p+82);
              r05_alloc_insert_pos(p+83);
              r05_alloc_function(&r05f_RETURN);
              r05_alloc_open_bracket(p+84);
              r05_alloc_open_bracket(p+85);
              r05_alloc_function(&r05f_Call);
              r05_alloc_tvar(p+11);
              r05_alloc_open_bracket(p+86);
              r05_alloc_insert_pos(p+87);
              r05_alloc_close_bracket(p+88);
              r05_alloc_insert_pos(p+89);
              r05_alloc_close_bracket(p+90);
              r05_alloc_close_bracket(p+91);
              r05_alloc_close_bracket(p+92);
              r05_alloc_close_bracket(p+93);
              r05_alloc_insert_pos(p+94);
              r05_alloc_open_bracket(p+95);
              r05_alloc_insert_pos(p+96);
              r05_alloc_open_bracket(p+97);
              r05_alloc_open_bracket(p+98);
              r05_alloc_evar(p+59);
              r05_alloc_close_bracket(p+99);
              r05_alloc_open_call(p+100);
              r05_alloc_function(&r05f_Map);
              r05_alloc_open_bracket(p+101);
              r05_alloc_function(&r05f_r5fwm_transformeru_AddScopeVars);
              r05_alloc_evar(p+64);
              r05_alloc_close_bracket(p+102);
              r05_alloc_insert_pos(p+103);
              r05_alloc_close_call(p+104);
              r05_alloc_close_bracket(p+105);
              r05_alloc_close_bracket(p+106);
              r05_alloc_close_call(p+107);
              r05_push_stack(p[107]);
              r05_push_stack(p[66]);
              r05_link_brackets(p[95], p[106]);
              r05_link_brackets(p[97], p[105]);
              r05_push_stack(p[104]);
              r05_push_stack(p[100]);
              r05_link_brackets(p[101], p[102]);
              r05_link_brackets(p[98], p[99]);
              r05_link_brackets(p[80], p[93]);
              r05_link_brackets(p[82], p[92]);
              r05_link_brackets(p[84], p[91]);
              r05_link_brackets(p[85], p[90]);
              r05_link_brackets(p[86], p[88]);
              r05_link_brackets(p[77], p[79]);
              r05_link_brackets(p[74], p[76]);
              r05_link_brackets(p[71], p[73]);
              r05_link_brackets(p[67], p[69]);
              r05_splice_evar(p[68], p+57);
              r05_splice_tvar(p[70], p+11);
              r05_splice_evar(p[72], p+15);
              r05_splice_evar(p[75], p+24);
              r05_splice_evar(p[78], p+26);
              r05_splice_evar(p[81], p+28);
              r05_splice_evar(p[81], p+30);
              r05_splice_evar(p[83], p+46);
              r05_splice_evar(p[87], p+59);
              r05_splice_evar(p[89], p+64);
              r05_splice_evar(p[89], p+48);
              r05_splice_evar(p[94], p+36);
              r05_splice_evar(p[96], p+9);
              r05_splice_evar(p[103], p+50);
              r05_splice_from_freelist(p[0]);
              r05_splice_to_freelist(p[0], p[2]);
              return;
            } while (0);
            r05_splice_to_freelist(p[61], p[63]);
          } while (0);
          r05_splice_to_freelist(p[52], p[54]);
        } while (0);
        r05_splice_to_freelist(p[38], p[40]);
      } while (r05_open_evar_advance(p+30, p[5]));
      r05_stop_e_loop();
    } while (0);

    do {
      /* e.Names: 7 */
      /* e.UnscannedFunctions: 9 */
      /* t.SrcPos: 11 */
      /* e.Name: 15 */
      /* s.Scope: 17 */
      /* e.Prefix: 24 */
      /* e.ScannedFunctions: 26 */
      /* e.ScannedSentences: 28 */
      /* e.UnscannedSentences: 30 */
      /* (e.Names) t.SrcPos (e.Name) s.Scope (e.Prefix) (e.ScannedFunctions) (e.ScannedSentences) e.UnscannedSentences (e.UnscannedFunctions) */
      if (! r05_brackets_left(p+3, p[1], p[2]))
        continue;
      if (! r05_brackets_right(p+5, p[4], p[2]))
        continue;
      r05_close_evar(p+7, p[3], p[4]);
      r05_close_evar(p+9, p[5], p[6]);
      if (! r05_tvar_left(p+11, p[4], p[5]))
        continue;
      if (! r05_brackets_left(p+13, p[12], p[5]))
        continue;
      r05_close_evar(p+15, p[13], p[14]);
      if (! r05_svar_left(p+17, p[14], p[5]))
        continue;
      if (! r05_brackets_left(p+18, p[17], p[5]))
        continue;
      if (! r05_brackets_left(p+20, p[19], p[5]))
        continue;
      if (! r05_brackets_left(p+22, p[21], p[5]))
        continue;
      r05_close_evar(p+24, p[18], p[19]);
      r05_close_evar(p+26, p[20], p[21]);
      r05_close_evar(p+28, p[22], p[23]);
      r05_close_evar(p+30, p[23], p[5]);

      r05_reset_allocator();
      r05_alloc_open_call(p+32);
      r05_alloc_function(&r05f_DoUnBlockm_NextFunction);
      r05_alloc_open_bracket(p+33);
      r05_alloc_insert_pos(p+34);
      r05_alloc_close_bracket(p+35);
      r05_alloc_insert_pos(p+36);
      r05_alloc_open_bracket(p+37);
      r05_alloc_insert_pos(p+38);
      r05_alloc_close_bracket(p+39);
      r05_alloc_open_bracket(p+40);
      r05_alloc_insert_pos(p+41);
      r05_alloc_open_bracket(p+42);
      r05_alloc_function(&r05f_Function);
      r05_alloc_tvar(p+11);
      r05_alloc_open_bracket(p+43);
      r05_alloc_insert_pos(p+44);
      r05_alloc_close_bracket(p+45);
      r05_alloc_svar(p+17);
      r05_alloc_insert_pos(p+46);
      r05_alloc_close_bracket(p+47);
      r05_alloc_close_bracket(p+48);
      r05_alloc_open_bracket(p+49);
      r05_alloc_insert_pos(p+50);
      r05_alloc_close_bracket(p+51);
      r05_alloc_close_call(p+52);
      r05_push_stack(p[52]);
      r05_push_stack(p[32]);
      r05_link_brackets(p[49], p[51]);
      r05_link_brackets(p[40], p[48]);
      r05_link_brackets(p[42], p[47]);
      r05_link_brackets(p[43], p[45]);
      r05_link_brackets(p[37], p[39]);
      r05_link_brackets(p[33], p[35]);
      r05_splice_evar(p[34], p+7);
      r05_splice_tvar(p[36], p+11);
      r05_splice_evar(p[38], p+24);
      r05_splice_evar(p[41], p+26);
      r05_splice_evar(p[44], p+15);
      r05_splice_evar(p[46], p+28);
      r05_splice_evar(p[46], p+30);
      r05_splice_evar(p[50], p+9);
      r05_splice_from_freelist(p[0]);
      r05_splice_to_freelist(p[0], p[2]);
      return;
    } while (0);

    r05_recognition_impossible();
  }
}

R05_DEFINE_LOCAL_FUNCTION(DoUnBlockm_NextFunction, "DoUnBlock-NextFunction") {
  struct r05_node *p[50] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /* e.Names: 15 */
    /* e.Prefix: 17 */
    /* e.ScannedFunctions: 19 */
    /* e.NextFunctionName: 21 */
    /* e.NextFunctionSentences: 23 */
    /* e.UnscannedFunctions: 25 */
    /* t.SrcPos: 27 */
    /* (e.Names) t.SrcPos (e.Prefix) (e.ScannedFunctions) (((e.NextFunctionName) e.NextFunctionSentences) e.UnscannedFunctions) */
    if (! r05_brackets_left(p+3, p[1], p[2]))
      continue;
    if (! r05_brackets_right(p+5, p[4], p[2]))
      continue;
    if (! r05_brackets_left(p+7, p[5], p[6]))
      continue;
    if (! r05_brackets_left(p+9, p[7], p[8]))
      continue;
    if (! r05_brackets_right(p+11, p[4], p[5]))
      continue;
    if (! r05_brackets_right(p+13, p[4], p[11]))
      continue;
    r05_close_evar(p+15, p[3], p[4]);
    r05_close_evar(p+17, p[13], p[14]);
    r05_close_evar(p+19, p[11], p[12]);
    r05_close_evar(p+21, p[9], p[10]);
    r05_close_evar(p+23, p[10], p[8]);
    r05_close_evar(p+25, p[8], p[6]);
    if (! r05_tvar_left(p+27, p[4], p[13]))
      continue;
    if (! r05_empty_hole(p[28], p[13]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_call(p+29);
    r05_alloc_function(&r05f_DoUnBlock);
    r05_alloc_open_bracket(p+30);
    r05_alloc_insert_pos(p+31);
    r05_alloc_close_bracket(p+32);
    r05_alloc_insert_pos(p+33);
    r05_alloc_open_bracket(p+34);
    r05_alloc_insert_pos(p+35);
    r05_alloc_close_bracket(p+36);
    r05_alloc_function(&r05f_Local);
    r05_alloc_open_bracket(p+37);
    r05_alloc_insert_pos(p+38);
    r05_alloc_close_bracket(p+39);
    r05_alloc_open_bracket(p+40);
    r05_alloc_insert_pos(p+41);
    r05_alloc_close_bracket(p+42);
    r05_alloc_open_bracket(p+43);
    r05_alloc_close_bracket(p+44);
    r05_alloc_insert_pos(p+45);
    r05_alloc_open_bracket(p+46);
    r05_alloc_insert_pos(p+47);
    r05_alloc_close_bracket(p+48);
    r05_alloc_close_call(p+49);
    r05_push_stack(p[49]);
    r05_push_stack(p[29]);
    r05_link_brackets(p[46], p[48]);
    r05_link_brackets(p[43], p[44]);
    r05_link_brackets(p[40], p[42]);
    r05_link_brackets(p[37], p[39]);
    r05_link_brackets(p[34], p[36]);
    r05_link_brackets(p[30], p[32]);
    r05_splice_evar(p[31], p+15);
    r05_splice_tvar(p[33], p+27);
    r05_splice_evar(p[35], p+21);
    r05_splice_evar(p[38], p+17);
    r05_splice_evar(p[41], p+19);
    r05_splice_evar(p[45], p+23);
    r05_splice_evar(p[47], p+25);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  do {
    /* e.Names: 11 */
    /* e.Prefix: 13 */
    /* e.ScannedFunctions: 15 */
    /* t.SrcPos: 17 */
    /* (e.Names) t.SrcPos (e.Prefix) (e.ScannedFunctions) () */
    if (! r05_brackets_left(p+3, p[1], p[2]))
      continue;
    if (! r05_brackets_right(p+5, p[4], p[2]))
      continue;
    if (! r05_brackets_right(p+7, p[4], p[5]))
      continue;
    if (! r05_brackets_right(p+9, p[4], p[7]))
      continue;
    if (! r05_empty_hole(p[5], p[6]))
      continue;
    r05_close_evar(p+11, p[3], p[4]);
    r05_close_evar(p+13, p[9], p[10]);
    r05_close_evar(p+15, p[7], p[8]);
    if (! r05_tvar_left(p+17, p[4], p[9]))
      continue;
    if (! r05_empty_hole(p[18], p[9]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_bracket(p+19);
    r05_alloc_insert_pos(p+20);
    r05_alloc_close_bracket(p+21);
    r05_alloc_insert_pos(p+22);
    r05_link_brackets(p[19], p[21]);
    r05_splice_evar(p[20], p+11);
    r05_splice_evar(p[22], p+15);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(WithBlock, "WithBlock") {
  struct r05_node *p[17] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /* e.Pattern: 5 */
    /* e.Sentence: 7 */
    /* (e.Pattern) e.Sentence */
    if (! r05_brackets_left(p+3, p[1], p[2]))
      continue;
    r05_close_evar(p+5, p[3], p[4]);
    r05_close_evar(p+7, p[4], p[2]);

    r05_reset_allocator();
    r05_alloc_open_call(p+9);
    r05_alloc_function(&r05f_DoWithBlock);
    r05_alloc_open_bracket(p+10);
    r05_alloc_open_bracket(p+11);
    r05_alloc_insert_pos(p+12);
    r05_alloc_close_bracket(p+13);
    r05_alloc_close_bracket(p+14);
    r05_alloc_insert_pos(p+15);
    r05_alloc_close_call(p+16);
    r05_push_stack(p[16]);
    r05_push_stack(p[9]);
    r05_link_brackets(p[10], p[14]);
    r05_link_brackets(p[11], p[13]);
    r05_splice_evar(p[12], p+5);
    r05_splice_evar(p[15], p+7);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(DoWithBlock, "DoWithBlock") {
  struct r05_node *p[25] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /* e.Prefix: 8 */
    /* e.Tail: 10 */
    /* t.CondResult: 12 */
    /* t.CondPattern: 14 */
    /* (e.Prefix) (Condition t.CondResult t.CondPattern) e.Tail */
    if (! r05_brackets_left(p+3, p[1], p[2]))
      continue;
    if (! r05_brackets_left(p+5, p[4], p[2]))
      continue;
    if (! r05_function_left(p+7, p[5], p[6], &r05f_Condition))
      continue;
    r05_close_evar(p+8, p[3], p[4]);
    r05_close_evar(p+10, p[6], p[2]);
    if (! r05_tvar_left(p+12, p[7], p[6]))
      continue;
    if (! r05_tvar_left(p+14, p[13], p[6]))
      continue;
    if (! r05_empty_hole(p[15], p[6]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_call(p+16);
    r05_alloc_function(&r05f_DoWithBlock);
    r05_alloc_open_bracket(p+17);
    r05_alloc_insert_pos(p+18);
    r05_alloc_open_bracket(p+19);
    r05_alloc_function(&r05f_Condition);
    r05_alloc_insert_pos(p+20);
    r05_alloc_close_bracket(p+21);
    r05_alloc_close_bracket(p+22);
    r05_alloc_insert_pos(p+23);
    r05_alloc_close_call(p+24);
    r05_push_stack(p[24]);
    r05_push_stack(p[16]);
    r05_link_brackets(p[17], p[22]);
    r05_link_brackets(p[19], p[21]);
    r05_splice_evar(p[18], p+8);
    r05_splice_tvar(p[20], p+12);
    r05_splice_tvar(p[20], p+14);
    r05_splice_evar(p[23], p+10);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  do {
    /* e.Prefix: 6 */
    /* t.Result: 8 */
    /* e.SubSentences: 10 */
    /* (e.Prefix) CALL-BLOCK t.Result e.SubSentences */
    if (! r05_brackets_left(p+3, p[1], p[2]))
      continue;
    if (! r05_function_left(p+5, p[4], p[2], &r05f_CALLm_BLOCK))
      continue;
    r05_close_evar(p+6, p[3], p[4]);
    if (! r05_tvar_left(p+8, p[5], p[2]))
      continue;
    r05_close_evar(p+10, p[9], p[2]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+12);
    r05_alloc_insert_pos(p+13);
    r05_alloc_close_bracket(p+14);
    r05_alloc_function(&r05f_CALLm_BLOCK);
    r05_alloc_insert_pos(p+15);
    r05_link_brackets(p[12], p[14]);
    r05_splice_evar(p[13], p+6);
    r05_splice_tvar(p[15], p+8);
    r05_splice_evar(p[15], p+10);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  do {
    /* e.Prefix: 6 */
    /* t.Result: 8 */
    /* (e.Prefix) RETURN t.Result */
    if (! r05_brackets_left(p+3, p[1], p[2]))
      continue;
    if (! r05_function_left(p+5, p[4], p[2], &r05f_RETURN))
      continue;
    r05_close_evar(p+6, p[3], p[4]);
    if (! r05_tvar_left(p+8, p[5], p[2]))
      continue;
    if (! r05_empty_hole(p[9], p[2]))
      continue;

    r05_reset_allocator();
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(BlockScopeVars, "BlockScopeVars") {
  struct r05_node *p[21] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /* e.Pattern: 5 */
    /* e.Conditions: 7 */
    /* (e.Pattern) e.Conditions */
    if (! r05_brackets_left(p+3, p[1], p[2]))
      continue;
    r05_close_evar(p+5, p[3], p[4]);
    r05_close_evar(p+7, p[4], p[2]);

    r05_reset_allocator();
    r05_alloc_open_call(p+9);
    r05_alloc_function(&r05f_Map);
    r05_alloc_function(&r05f_r5fwm_transformeru_MakeVariables);
    r05_alloc_open_call(p+10);
    r05_alloc_function(&r05f_ExtractVariables);
    r05_alloc_open_bracket(p+11);
    r05_alloc_open_bracket(p+12);
    r05_alloc_insert_pos(p+13);
    r05_alloc_close_bracket(p+14);
    r05_alloc_insert_pos(p+15);
    r05_alloc_function(&r05f_RETURN);
    r05_alloc_open_bracket(p+16);
    r05_alloc_close_bracket(p+17);
    r05_alloc_close_bracket(p+18);
    r05_alloc_close_call(p+19);
    r05_alloc_close_call(p+20);
    r05_push_stack(p[20]);
    r05_push_stack(p[9]);
    r05_push_stack(p[19]);
    r05_push_stack(p[10]);
    r05_link_brackets(p[11], p[18]);
    r05_link_brackets(p[16], p[17]);
    r05_link_brackets(p[12], p[14]);
    r05_splice_evar(p[13], p+5);
    r05_splice_evar(p[15], p+7);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_ENTRY_FUNCTION(r5fwm_transformeru_MakeVariables, "r5fw-transformer_MakeVariables") {
  struct r05_node *p[13] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /* e.Index: 6 */
    /* ('e' e.Index) */
    if (! r05_brackets_left(p+3, p[1], p[2]))
      continue;
    if (! r05_char_left(p+5, p[3], p[4], 'e'))
      continue;
    if (! r05_empty_hole(p[4], p[2]))
      continue;
    r05_close_evar(p+6, p[5], p[4]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+8);
    r05_alloc_function(&r05f_Brackets);
    r05_alloc_open_bracket(p+9);
    r05_alloc_function(&r05f_Variable);
    r05_alloc_function(&r05f_NOm_POS);
    r05_alloc_char('e');
    r05_alloc_insert_pos(p+10);
    r05_alloc_close_bracket(p+11);
    r05_alloc_close_bracket(p+12);
    r05_link_brackets(p[8], p[12]);
    r05_link_brackets(p[9], p[11]);
    r05_splice_evar(p[10], p+6);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  do {
    /* s.VarType: 5 */
    /* e.Index: 6 */
    /* (s.VarType e.Index) */
    if (! r05_brackets_left(p+3, p[1], p[2]))
      continue;
    if (! r05_empty_hole(p[4], p[2]))
      continue;
    if (! r05_svar_left(p+5, p[3], p[4]))
      continue;
    r05_close_evar(p+6, p[5], p[4]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+8);
    r05_alloc_function(&r05f_Variable);
    r05_alloc_function(&r05f_NOm_POS);
    r05_alloc_svar(p+5);
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

R05_DEFINE_ENTRY_FUNCTION(r5fwm_transformeru_AddScopeVars, "r5fw-transformer_AddScopeVars") {
  struct r05_node *p[19] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /* e.ScopeVars: 7 */
    /* e.Pattern: 9 */
    /* e.Tail: 11 */
    /* e.ScopeVars ((e.Pattern) e.Tail) */
    if (! r05_brackets_right(p+3, p[1], p[2]))
      continue;
    if (! r05_brackets_left(p+5, p[3], p[4]))
      continue;
    r05_close_evar(p+7, p[1], p[3]);
    r05_close_evar(p+9, p[5], p[6]);
    r05_close_evar(p+11, p[6], p[4]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+13);
    r05_alloc_open_bracket(p+14);
    r05_alloc_insert_pos(p+15);
    r05_alloc_close_bracket(p+16);
    r05_alloc_insert_pos(p+17);
    r05_alloc_close_bracket(p+18);
    r05_link_brackets(p[13], p[18]);
    r05_link_brackets(p[14], p[16]);
    r05_splice_evar(p[15], p+7);
    r05_splice_evar(p[15], p+9);
    r05_splice_evar(p[17], p+11);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(UnCondition, "UnCondition") {
  struct r05_node *p[32] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /* e.Names: 5 */
    /* t.SrcPos: 7 */
    /* e.Name: 11 */
    /* s.Scope: 13 */
    /* e.Sentences: 14 */
    /* (e.Names) t.SrcPos (e.Name) s.Scope e.Sentences */
    if (! r05_brackets_left(p+3, p[1], p[2]))
      continue;
    r05_close_evar(p+5, p[3], p[4]);
    if (! r05_tvar_left(p+7, p[4], p[2]))
      continue;
    if (! r05_brackets_left(p+9, p[8], p[2]))
      continue;
    r05_close_evar(p+11, p[9], p[10]);
    if (! r05_svar_left(p+13, p[10], p[2]))
      continue;
    r05_close_evar(p+14, p[13], p[2]);

    r05_reset_allocator();
    r05_alloc_open_call(p+16);
    r05_alloc_function(&r05f_DoUnCondition);
    r05_alloc_open_bracket(p+17);
    r05_alloc_insert_pos(p+18);
    r05_alloc_close_bracket(p+19);
    r05_alloc_insert_pos(p+20);
    r05_alloc_open_bracket(p+21);
    r05_alloc_insert_pos(p+22);
    r05_alloc_close_bracket(p+23);
    r05_alloc_svar(p+13);
    r05_alloc_open_bracket(p+24);
    r05_alloc_evar(p+11);
    r05_alloc_close_bracket(p+25);
    r05_alloc_open_bracket(p+26);
    r05_alloc_close_bracket(p+27);
    r05_alloc_insert_pos(p+28);
    r05_alloc_open_bracket(p+29);
    r05_alloc_close_bracket(p+30);
    r05_alloc_close_call(p+31);
    r05_push_stack(p[31]);
    r05_push_stack(p[16]);
    r05_link_brackets(p[29], p[30]);
    r05_link_brackets(p[26], p[27]);
    r05_link_brackets(p[24], p[25]);
    r05_link_brackets(p[21], p[23]);
    r05_link_brackets(p[17], p[19]);
    r05_splice_evar(p[18], p+5);
    r05_splice_tvar(p[20], p+7);
    r05_splice_evar(p[22], p+11);
    r05_splice_evar(p[28], p+14);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(DoUnCondition, "DoUnCondition") {
  struct r05_node *p[78] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /* e.Names: 7 */
    /* e.UnscannedFunctions: 9 */
    /* t.SrcPos: 11 */
    /* e.Name: 15 */
    /* s.Scope: 17 */
    /* e.Prefix: 22 */
    /* e.ScannedFunctions: 24 */
    /* e.Sentences-B: 26 */
    /* e.Pattern: 35 */
    /* e.Condition: 37 */
    /* e.Tail: 39 */
    /* e.Sentences-E: 41 */
    /* (e.Names) t.SrcPos (e.Name) s.Scope (e.Prefix) (e.ScannedFunctions) e.Sentences-B ((e.Pattern) (Condition e.Condition) e.Tail) e.Sentences-E (e.UnscannedFunctions) */
    if (! r05_brackets_left(p+3, p[1], p[2]))
      continue;
    if (! r05_brackets_right(p+5, p[4], p[2]))
      continue;
    r05_close_evar(p+7, p[3], p[4]);
    r05_close_evar(p+9, p[5], p[6]);
    if (! r05_tvar_left(p+11, p[4], p[5]))
      continue;
    if (! r05_brackets_left(p+13, p[12], p[5]))
      continue;
    r05_close_evar(p+15, p[13], p[14]);
    if (! r05_svar_left(p+17, p[14], p[5]))
      continue;
    if (! r05_brackets_left(p+18, p[17], p[5]))
      continue;
    if (! r05_brackets_left(p+20, p[19], p[5]))
      continue;
    r05_close_evar(p+22, p[18], p[19]);
    r05_close_evar(p+24, p[20], p[21]);
    p[26] = NULL;
    p[27] = p[21];
    do {
      r05_start_e_loop();
      if (! r05_brackets_left(p+28, p[27], p[5]))
        continue;
      if (! r05_brackets_left(p+30, p[28], p[29]))
        continue;
      if (! r05_brackets_left(p+32, p[31], p[29]))
        continue;
      if (! r05_function_left(p+34, p[32], p[33], &r05f_Condition))
        continue;
      r05_close_evar(p+35, p[30], p[31]);
      r05_close_evar(p+37, p[34], p[33]);
      r05_close_evar(p+39, p[33], p[29]);
      r05_close_evar(p+41, p[29], p[5]);

      r05_reset_allocator();
      r05_alloc_open_call(p+43);
      r05_alloc_function(&r05f_DoUnConditionm_ConditionSentence);
      r05_alloc_insert_pos(p+44);
      r05_alloc_open_bracket(p+45);
      r05_alloc_insert_pos(p+46);
      r05_alloc_close_bracket(p+47);
      r05_alloc_svar(p+17);
      r05_alloc_open_bracket(p+48);
      r05_alloc_insert_pos(p+49);
      r05_alloc_close_bracket(p+50);
      r05_alloc_open_bracket(p+51);
      r05_alloc_insert_pos(p+52);
      r05_alloc_close_bracket(p+53);
      r05_alloc_open_bracket(p+54);
      r05_alloc_insert_pos(p+55);
      r05_alloc_close_bracket(p+56);
      r05_alloc_open_bracket(p+57);
      r05_alloc_insert_pos(p+58);
      r05_alloc_close_bracket(p+59);
      r05_alloc_open_call(p+60);
      r05_alloc_function(&r05f_UnConditionSentence);
      r05_alloc_open_bracket(p+61);
      r05_alloc_insert_pos(p+62);
      r05_alloc_close_bracket(p+63);
      r05_alloc_open_bracket(p+64);
      r05_alloc_evar(p+22);
      r05_alloc_close_bracket(p+65);
      r05_alloc_open_bracket(p+66);
      r05_alloc_open_bracket(p+67);
      r05_alloc_insert_pos(p+68);
      r05_alloc_close_bracket(p+69);
      r05_alloc_open_bracket(p+70);
      r05_alloc_function(&r05f_Condition);
      r05_alloc_insert_pos(p+71);
      r05_alloc_close_bracket(p+72);
      r05_alloc_insert_pos(p+73);
      r05_alloc_close_bracket(p+74);
      r05_alloc_insert_pos(p+75);
      r05_alloc_close_call(p+76);
      r05_alloc_close_call(p+77);
      r05_push_stack(p[77]);
      r05_push_stack(p[43]);
      r05_push_stack(p[76]);
      r05_push_stack(p[60]);
      r05_link_brackets(p[66], p[74]);
      r05_link_brackets(p[70], p[72]);
      r05_link_brackets(p[67], p[69]);
      r05_link_brackets(p[64], p[65]);
      r05_link_brackets(p[61], p[63]);
      r05_link_brackets(p[57], p[59]);
      r05_link_brackets(p[54], p[56]);
      r05_link_brackets(p[51], p[53]);
      r05_link_brackets(p[48], p[50]);
      r05_link_brackets(p[45], p[47]);
      r05_splice_tvar(p[44], p+11);
      r05_splice_evar(p[46], p+15);
      r05_splice_evar(p[49], p+22);
      r05_splice_evar(p[52], p+24);
      r05_splice_evar(p[55], p+26);
      r05_splice_evar(p[58], p+9);
      r05_splice_evar(p[62], p+7);
      r05_splice_evar(p[68], p+35);
      r05_splice_evar(p[71], p+37);
      r05_splice_evar(p[73], p+39);
      r05_splice_evar(p[75], p+41);
      r05_splice_from_freelist(p[0]);
      r05_splice_to_freelist(p[0], p[2]);
      return;
    } while (r05_open_evar_advance(p+26, p[5]));
    r05_stop_e_loop();
  } while (0);

  do {
    /* e.Names: 7 */
    /* e.UnscannedFunctions: 9 */
    /* t.SrcPos: 11 */
    /* e.Name: 15 */
    /* s.Scope: 17 */
    /* e.Prefix: 22 */
    /* e.ScannedFunctions: 24 */
    /* e.Sentences: 26 */
    /* (e.Names) t.SrcPos (e.Name) s.Scope (e.Prefix) (e.ScannedFunctions) e.Sentences (e.UnscannedFunctions) */
    if (! r05_brackets_left(p+3, p[1], p[2]))
      continue;
    if (! r05_brackets_right(p+5, p[4], p[2]))
      continue;
    r05_close_evar(p+7, p[3], p[4]);
    r05_close_evar(p+9, p[5], p[6]);
    if (! r05_tvar_left(p+11, p[4], p[5]))
      continue;
    if (! r05_brackets_left(p+13, p[12], p[5]))
      continue;
    r05_close_evar(p+15, p[13], p[14]);
    if (! r05_svar_left(p+17, p[14], p[5]))
      continue;
    if (! r05_brackets_left(p+18, p[17], p[5]))
      continue;
    if (! r05_brackets_left(p+20, p[19], p[5]))
      continue;
    r05_close_evar(p+22, p[18], p[19]);
    r05_close_evar(p+24, p[20], p[21]);
    r05_close_evar(p+26, p[21], p[5]);

    r05_reset_allocator();
    r05_alloc_open_call(p+28);
    r05_alloc_function(&r05f_DoUnConditionm_NextFunction);
    r05_alloc_open_bracket(p+29);
    r05_alloc_insert_pos(p+30);
    r05_alloc_close_bracket(p+31);
    r05_alloc_insert_pos(p+32);
    r05_alloc_open_bracket(p+33);
    r05_alloc_insert_pos(p+34);
    r05_alloc_close_bracket(p+35);
    r05_alloc_open_bracket(p+36);
    r05_alloc_insert_pos(p+37);
    r05_alloc_open_bracket(p+38);
    r05_alloc_function(&r05f_Function);
    r05_alloc_tvar(p+11);
    r05_alloc_open_bracket(p+39);
    r05_alloc_insert_pos(p+40);
    r05_alloc_close_bracket(p+41);
    r05_alloc_svar(p+17);
    r05_alloc_insert_pos(p+42);
    r05_alloc_close_bracket(p+43);
    r05_alloc_close_bracket(p+44);
    r05_alloc_open_bracket(p+45);
    r05_alloc_insert_pos(p+46);
    r05_alloc_close_bracket(p+47);
    r05_alloc_close_call(p+48);
    r05_push_stack(p[48]);
    r05_push_stack(p[28]);
    r05_link_brackets(p[45], p[47]);
    r05_link_brackets(p[36], p[44]);
    r05_link_brackets(p[38], p[43]);
    r05_link_brackets(p[39], p[41]);
    r05_link_brackets(p[33], p[35]);
    r05_link_brackets(p[29], p[31]);
    r05_splice_evar(p[30], p+7);
    r05_splice_tvar(p[32], p+11);
    r05_splice_evar(p[34], p+22);
    r05_splice_evar(p[37], p+24);
    r05_splice_evar(p[40], p+15);
    r05_splice_evar(p[42], p+26);
    r05_splice_evar(p[46], p+9);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(DoUnConditionm_ConditionSentence, "DoUnCondition-ConditionSentence") {
  struct r05_node *p[57] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /* t.SrcPos: 3 */
    /* e.Name: 7 */
    /* s.Scope: 9 */
    /* e.Prefix: 22 */
    /* e.ScannedFunctions: 24 */
    /* e.Sentences-B: 26 */
    /* e.UnscannedFunctions: 28 */
    /* e.Names: 30 */
    /* e.TransformedSentences: 32 */
    /* e.NewFunctions: 34 */
    /* t.SrcPos (e.Name) s.Scope (e.Prefix) (e.ScannedFunctions) (e.Sentences-B) (e.UnscannedFunctions) (e.Names) (e.TransformedSentences) e.NewFunctions */
    if (! r05_tvar_left(p+3, p[1], p[2]))
      continue;
    if (! r05_brackets_left(p+5, p[4], p[2]))
      continue;
    r05_close_evar(p+7, p[5], p[6]);
    if (! r05_svar_left(p+9, p[6], p[2]))
      continue;
    if (! r05_brackets_left(p+10, p[9], p[2]))
      continue;
    if (! r05_brackets_left(p+12, p[11], p[2]))
      continue;
    if (! r05_brackets_left(p+14, p[13], p[2]))
      continue;
    if (! r05_brackets_left(p+16, p[15], p[2]))
      continue;
    if (! r05_brackets_left(p+18, p[17], p[2]))
      continue;
    if (! r05_brackets_left(p+20, p[19], p[2]))
      continue;
    r05_close_evar(p+22, p[10], p[11]);
    r05_close_evar(p+24, p[12], p[13]);
    r05_close_evar(p+26, p[14], p[15]);
    r05_close_evar(p+28, p[16], p[17]);
    r05_close_evar(p+30, p[18], p[19]);
    r05_close_evar(p+32, p[20], p[21]);
    r05_close_evar(p+34, p[21], p[2]);

    r05_reset_allocator();
    r05_alloc_open_call(p+36);
    r05_alloc_function(&r05f_DoUnConditionm_NextFunction);
    r05_alloc_open_bracket(p+37);
    r05_alloc_insert_pos(p+38);
    r05_alloc_close_bracket(p+39);
    r05_alloc_insert_pos(p+40);
    r05_alloc_open_bracket(p+41);
    r05_alloc_insert_pos(p+42);
    r05_alloc_close_bracket(p+43);
    r05_alloc_open_bracket(p+44);
    r05_alloc_insert_pos(p+45);
    r05_alloc_open_bracket(p+46);
    r05_alloc_function(&r05f_Function);
    r05_alloc_tvar(p+3);
    r05_alloc_open_bracket(p+47);
    r05_alloc_insert_pos(p+48);
    r05_alloc_close_bracket(p+49);
    r05_alloc_svar(p+9);
    r05_alloc_insert_pos(p+50);
    r05_alloc_close_bracket(p+51);
    r05_alloc_close_bracket(p+52);
    r05_alloc_open_bracket(p+53);
    r05_alloc_insert_pos(p+54);
    r05_alloc_close_bracket(p+55);
    r05_alloc_close_call(p+56);
    r05_push_stack(p[56]);
    r05_push_stack(p[36]);
    r05_link_brackets(p[53], p[55]);
    r05_link_brackets(p[44], p[52]);
    r05_link_brackets(p[46], p[51]);
    r05_link_brackets(p[47], p[49]);
    r05_link_brackets(p[41], p[43]);
    r05_link_brackets(p[37], p[39]);
    r05_splice_evar(p[38], p+30);
    r05_splice_tvar(p[40], p+3);
    r05_splice_evar(p[42], p+22);
    r05_splice_evar(p[45], p+24);
    r05_splice_evar(p[48], p+7);
    r05_splice_evar(p[50], p+26);
    r05_splice_evar(p[50], p+32);
    r05_splice_evar(p[54], p+28);
    r05_splice_evar(p[54], p+34);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(DoUnConditionm_NextFunction, "DoUnCondition-NextFunction") {
  struct r05_node *p[48] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /* e.Names: 15 */
    /* e.Prefix: 17 */
    /* e.ScannedFunctions: 19 */
    /* e.NextFunctionName: 21 */
    /* e.NextFunctionSentences: 23 */
    /* e.UnscannedFunctions: 25 */
    /* t.SrcPos: 27 */
    /* (e.Names) t.SrcPos (e.Prefix) (e.ScannedFunctions) (((e.NextFunctionName) e.NextFunctionSentences) e.UnscannedFunctions) */
    if (! r05_brackets_left(p+3, p[1], p[2]))
      continue;
    if (! r05_brackets_right(p+5, p[4], p[2]))
      continue;
    if (! r05_brackets_left(p+7, p[5], p[6]))
      continue;
    if (! r05_brackets_left(p+9, p[7], p[8]))
      continue;
    if (! r05_brackets_right(p+11, p[4], p[5]))
      continue;
    if (! r05_brackets_right(p+13, p[4], p[11]))
      continue;
    r05_close_evar(p+15, p[3], p[4]);
    r05_close_evar(p+17, p[13], p[14]);
    r05_close_evar(p+19, p[11], p[12]);
    r05_close_evar(p+21, p[9], p[10]);
    r05_close_evar(p+23, p[10], p[8]);
    r05_close_evar(p+25, p[8], p[6]);
    if (! r05_tvar_left(p+27, p[4], p[13]))
      continue;
    if (! r05_empty_hole(p[28], p[13]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_call(p+29);
    r05_alloc_function(&r05f_DoUnCondition);
    r05_alloc_open_bracket(p+30);
    r05_alloc_insert_pos(p+31);
    r05_alloc_close_bracket(p+32);
    r05_alloc_insert_pos(p+33);
    r05_alloc_open_bracket(p+34);
    r05_alloc_insert_pos(p+35);
    r05_alloc_close_bracket(p+36);
    r05_alloc_function(&r05f_Local);
    r05_alloc_open_bracket(p+37);
    r05_alloc_insert_pos(p+38);
    r05_alloc_close_bracket(p+39);
    r05_alloc_open_bracket(p+40);
    r05_alloc_insert_pos(p+41);
    r05_alloc_close_bracket(p+42);
    r05_alloc_insert_pos(p+43);
    r05_alloc_open_bracket(p+44);
    r05_alloc_insert_pos(p+45);
    r05_alloc_close_bracket(p+46);
    r05_alloc_close_call(p+47);
    r05_push_stack(p[47]);
    r05_push_stack(p[29]);
    r05_link_brackets(p[44], p[46]);
    r05_link_brackets(p[40], p[42]);
    r05_link_brackets(p[37], p[39]);
    r05_link_brackets(p[34], p[36]);
    r05_link_brackets(p[30], p[32]);
    r05_splice_evar(p[31], p+15);
    r05_splice_tvar(p[33], p+27);
    r05_splice_evar(p[35], p+21);
    r05_splice_evar(p[38], p+17);
    r05_splice_evar(p[41], p+19);
    r05_splice_evar(p[43], p+23);
    r05_splice_evar(p[45], p+25);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  do {
    /* e.Names: 11 */
    /* e.Prefix: 13 */
    /* e.ScannedFunctions: 15 */
    /* t.SrcPos: 17 */
    /* (e.Names) t.SrcPos (e.Prefix) (e.ScannedFunctions) () */
    if (! r05_brackets_left(p+3, p[1], p[2]))
      continue;
    if (! r05_brackets_right(p+5, p[4], p[2]))
      continue;
    if (! r05_brackets_right(p+7, p[4], p[5]))
      continue;
    if (! r05_brackets_right(p+9, p[4], p[7]))
      continue;
    if (! r05_empty_hole(p[5], p[6]))
      continue;
    r05_close_evar(p+11, p[3], p[4]);
    r05_close_evar(p+13, p[9], p[10]);
    r05_close_evar(p+15, p[7], p[8]);
    if (! r05_tvar_left(p+17, p[4], p[9]))
      continue;
    if (! r05_empty_hole(p[18], p[9]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_bracket(p+19);
    r05_alloc_insert_pos(p+20);
    r05_alloc_close_bracket(p+21);
    r05_alloc_insert_pos(p+22);
    r05_link_brackets(p[19], p[21]);
    r05_splice_evar(p[20], p+11);
    r05_splice_evar(p[22], p+15);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(UnConditionSentence, "UnConditionSentence") {
  struct r05_node *p[33] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /* e.Names: 9 */
    /* e.Prefix: 11 */
    /* e.Sentence: 13 */
    /* e.ContinuationSentences: 15 */
    /* (e.Names) (e.Prefix) (e.Sentence) e.ContinuationSentences */
    if (! r05_brackets_left(p+3, p[1], p[2]))
      continue;
    if (! r05_brackets_left(p+5, p[4], p[2]))
      continue;
    if (! r05_brackets_left(p+7, p[6], p[2]))
      continue;
    r05_close_evar(p+9, p[3], p[4]);
    r05_close_evar(p+11, p[5], p[6]);
    r05_close_evar(p+13, p[7], p[8]);
    r05_close_evar(p+15, p[8], p[2]);

    r05_reset_allocator();
    r05_alloc_open_call(p+17);
    r05_alloc_function(&r05f_UnConditionSentencem_AnalyzeContinuation);
    r05_alloc_open_bracket(p+18);
    r05_alloc_insert_pos(p+19);
    r05_alloc_close_bracket(p+20);
    r05_alloc_open_bracket(p+21);
    r05_alloc_insert_pos(p+22);
    r05_alloc_close_bracket(p+23);
    r05_alloc_open_call(p+24);
    r05_alloc_function(&r05f_AnalyzeContinuation);
    r05_alloc_open_bracket(p+25);
    r05_alloc_insert_pos(p+26);
    r05_alloc_close_bracket(p+27);
    r05_alloc_open_bracket(p+28);
    r05_alloc_evar(p+11);
    r05_alloc_close_bracket(p+29);
    r05_alloc_insert_pos(p+30);
    r05_alloc_close_call(p+31);
    r05_alloc_close_call(p+32);
    r05_push_stack(p[32]);
    r05_push_stack(p[17]);
    r05_push_stack(p[31]);
    r05_push_stack(p[24]);
    r05_link_brackets(p[28], p[29]);
    r05_link_brackets(p[25], p[27]);
    r05_link_brackets(p[21], p[23]);
    r05_link_brackets(p[18], p[20]);
    r05_splice_evar(p[19], p+11);
    r05_splice_evar(p[22], p+13);
    r05_splice_evar(p[26], p+9);
    r05_splice_evar(p[30], p+15);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(UnConditionSentencem_AnalyzeContinuation, "UnConditionSentence-AnalyzeContinuation") {
  struct r05_node *p[34] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /* e.Prefix: 9 */
    /* e.Sentence: 11 */
    /* e.Names: 13 */
    /* t.ContName: 15 */
    /* e.ContFunction: 17 */
    /* (e.Prefix) (e.Sentence) (e.Names) t.ContName e.ContFunction */
    if (! r05_brackets_left(p+3, p[1], p[2]))
      continue;
    if (! r05_brackets_left(p+5, p[4], p[2]))
      continue;
    if (! r05_brackets_left(p+7, p[6], p[2]))
      continue;
    r05_close_evar(p+9, p[3], p[4]);
    r05_close_evar(p+11, p[5], p[6]);
    r05_close_evar(p+13, p[7], p[8]);
    if (! r05_tvar_left(p+15, p[8], p[2]))
      continue;
    r05_close_evar(p+17, p[16], p[2]);

    r05_reset_allocator();
    r05_alloc_open_call(p+19);
    r05_alloc_function(&r05f_UnConditionSentencem_ConditionSubFunctions);
    r05_alloc_insert_pos(p+20);
    r05_alloc_open_bracket(p+21);
    r05_alloc_insert_pos(p+22);
    r05_alloc_close_bracket(p+23);
    r05_alloc_open_call(p+24);
    r05_alloc_function(&r05f_ConditionSubFunctions);
    r05_alloc_open_bracket(p+25);
    r05_alloc_insert_pos(p+26);
    r05_alloc_close_bracket(p+27);
    r05_alloc_open_bracket(p+28);
    r05_alloc_insert_pos(p+29);
    r05_alloc_close_bracket(p+30);
    r05_alloc_tvar(p+15);
    r05_alloc_insert_pos(p+31);
    r05_alloc_close_call(p+32);
    r05_alloc_close_call(p+33);
    r05_push_stack(p[33]);
    r05_push_stack(p[19]);
    r05_push_stack(p[32]);
    r05_push_stack(p[24]);
    r05_link_brackets(p[28], p[30]);
    r05_link_brackets(p[25], p[27]);
    r05_link_brackets(p[21], p[23]);
    r05_splice_tvar(p[20], p+15);
    r05_splice_evar(p[22], p+17);
    r05_splice_evar(p[26], p+13);
    r05_splice_evar(p[29], p+9);
    r05_splice_evar(p[31], p+11);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(UnConditionSentencem_ConditionSubFunctions, "UnConditionSentence-ConditionSubFunctions") {
  struct r05_node *p[39] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /* t.ContName: 3 */
    /* e.ContFunction: 11 */
    /* e.Names: 13 */
    /* e.CallCheckSentence: 15 */
    /* e.SubFunctions: 17 */
    /* t.ContName (e.ContFunction) (e.Names) (e.CallCheckSentence) e.SubFunctions */
    if (! r05_tvar_left(p+3, p[1], p[2]))
      continue;
    if (! r05_brackets_left(p+5, p[4], p[2]))
      continue;
    if (! r05_brackets_left(p+7, p[6], p[2]))
      continue;
    if (! r05_brackets_left(p+9, p[8], p[2]))
      continue;
    r05_close_evar(p+11, p[5], p[6]);
    r05_close_evar(p+13, p[7], p[8]);
    r05_close_evar(p+15, p[9], p[10]);
    r05_close_evar(p+17, p[10], p[2]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+19);
    r05_alloc_insert_pos(p+20);
    r05_alloc_close_bracket(p+21);
    r05_alloc_open_bracket(p+22);
    r05_alloc_open_bracket(p+23);
    r05_alloc_insert_pos(p+24);
    r05_alloc_close_bracket(p+25);
    r05_alloc_open_call(p+26);
    r05_alloc_function(&r05f_MakeContinuationSentence);
    r05_alloc_insert_pos(p+27);
    r05_alloc_open_bracket(p+28);
    r05_alloc_open_bracket(p+29);
    r05_alloc_function(&r05f_Variable);
    r05_alloc_function(&r05f_NOm_POS);
    r05_alloc_chars("eOther", 6);
    r05_alloc_close_bracket(p+30);
    r05_alloc_close_bracket(p+31);
    r05_alloc_open_bracket(p+32);
    r05_alloc_open_bracket(p+33);
    r05_alloc_function(&r05f_Variable);
    r05_alloc_function(&r05f_NOm_POS);
    r05_alloc_chars("eOther", 6);
    r05_alloc_close_bracket(p+34);
    r05_alloc_close_bracket(p+35);
    r05_alloc_close_call(p+36);
    r05_alloc_close_bracket(p+37);
    r05_alloc_insert_pos(p+38);
    r05_link_brackets(p[22], p[37]);
    r05_push_stack(p[36]);
    r05_push_stack(p[26]);
    r05_link_brackets(p[32], p[35]);
    r05_link_brackets(p[33], p[34]);
    r05_link_brackets(p[28], p[31]);
    r05_link_brackets(p[29], p[30]);
    r05_link_brackets(p[23], p[25]);
    r05_link_brackets(p[19], p[21]);
    r05_splice_evar(p[20], p+13);
    r05_splice_evar(p[24], p+15);
    r05_splice_tvar(p[27], p+3);
    r05_splice_evar(p[38], p+17);
    r05_splice_evar(p[38], p+11);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(AnalyzeContinuation, "AnalyzeContinuation") {
  R05_DEFINE_COND_FUNCTION(AnalyzeContinuation, "AnalyzeContinuation$1", 1)
  struct r05_node *p[33] = { 0 };

  r05_this_is_generated_function();
  switch (arg_begin->next->info.function->resume_entry >> 1) {
  case 0:
    p[0] = arg_begin;
    p[1] = arg_begin->next;
    p[2] = arg_end;

    do {
      /* e.Names: 7 */
      /* e.Prefix: 9 */
      /* (e.Names) (e.Prefix) */
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
      r05_alloc_function(&r05f_NoContinuation);
      r05_link_brackets(p[11], p[13]);
      r05_splice_evar(p[12], p+7);
      r05_splice_from_freelist(p[0]);
      r05_splice_to_freelist(p[0], p[2]);
      return;
    } while (0);

    do {
      /* e.Names: 7 */
      /* e.Prefix: 9 */
      /* e.Sentences: 11 */
      /* (e.Names) (e.Prefix) e.Sentences */
      if (! r05_brackets_left(p+3, p[1], p[2]))
        continue;
      if (! r05_brackets_left(p+5, p[4], p[2]))
        continue;
      r05_close_evar(p+7, p[3], p[4]);
      r05_close_evar(p+9, p[5], p[6]);
      r05_close_evar(p+11, p[6], p[2]);

      r05_reset_allocator();
      r05_alloc_open_call(p+13);
      r05_alloc_function(&c1);
      r05_alloc_open_call(p+14);
      r05_alloc_function(&r05f_NewName);
      r05_alloc_open_bracket(p+15);
      r05_alloc_evar(p+7);
      r05_alloc_close_bracket(p+16);
      r05_alloc_evar(p+9);
      r05_alloc_chars("_cont", 5);
      r05_alloc_close_call(p+17);
      r05_alloc_close_call(p+18);
      r05_push_stack(p[18]);
      r05_push_stack(p[13]);
      r05_push_stack(p[17]);
      r05_push_stack(p[14]);
      r05_link_brackets(p[15], p[16]);
      r05_push_context(p, 13);
      r05_splice_from_freelist(p[2]);
      return;

  case 1:
      r05_pop_context(p, 13);
      p[13] = arg_begin;
      p[14] = arg_begin->next;
      p[15] = arg_end;

      do {
        /* e.Names: 7 */
        /* e.Prefix: 9 */
        /* e.Sentences: 11 */
        /* e.RefilledNames: 18 */
        /* e.ContName: 20 */
        /* (e.RefilledNames) e.ContName */
        if (! r05_brackets_left(p+16, p[14], p[15]))
          continue;
        r05_close_evar(p+18, p[16], p[17]);
        r05_close_evar(p+20, p[17], p[15]);

        r05_reset_allocator();
        r05_alloc_open_bracket(p+22);
        r05_alloc_insert_pos(p+23);
        r05_alloc_close_bracket(p+24);
        r05_alloc_open_bracket(p+25);
        r05_alloc_insert_pos(p+26);
        r05_alloc_close_bracket(p+27);
        r05_alloc_open_bracket(p+28);
        r05_alloc_open_bracket(p+29);
        r05_alloc_evar(p+20);
        r05_alloc_close_bracket(p+30);
        r05_alloc_insert_pos(p+31);
        r05_alloc_close_bracket(p+32);
        r05_link_brackets(p[28], p[32]);
        r05_link_brackets(p[29], p[30]);
        r05_link_brackets(p[25], p[27]);
        r05_link_brackets(p[22], p[24]);
        r05_splice_evar(p[23], p+18);
        r05_splice_evar(p[26], p+20);
        r05_splice_evar(p[31], p+11);
        r05_splice_from_freelist(p[0]);
        r05_splice_to_freelist(p[0], p[2]);
        return;
      } while (0);
      r05_splice_to_freelist(p[13], p[15]);
    } while (0);

    r05_recognition_impossible();
  }
}

R05_DEFINE_LOCAL_FUNCTION(MakeContinuationSentence, "MakeContinuationSentence") {
  struct r05_node *p[28] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /* e.Pattern: 8 */
    /* e.ContArg: 10 */
    /* NoContinuation (e.Pattern) (e.ContArg) */
    if (! r05_function_left(p+3, p[1], p[2], &r05f_NoContinuation))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[2]))
      continue;
    if (! r05_brackets_left(p+6, p[5], p[2]))
      continue;
    if (! r05_empty_hole(p[7], p[2]))
      continue;
    r05_close_evar(p+8, p[4], p[5]);
    r05_close_evar(p+10, p[6], p[7]);

    r05_reset_allocator();
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  do {
    /* e.ContName: 9 */
    /* e.Pattern: 11 */
    /* e.ContArg: 13 */
    /* (e.ContName) (e.Pattern) (e.ContArg) */
    if (! r05_brackets_left(p+3, p[1], p[2]))
      continue;
    if (! r05_brackets_left(p+5, p[4], p[2]))
      continue;
    if (! r05_brackets_left(p+7, p[6], p[2]))
      continue;
    if (! r05_empty_hole(p[8], p[2]))
      continue;
    r05_close_evar(p+9, p[3], p[4]);
    r05_close_evar(p+11, p[5], p[6]);
    r05_close_evar(p+13, p[7], p[8]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+15);
    r05_alloc_open_bracket(p+16);
    r05_alloc_insert_pos(p+17);
    r05_alloc_close_bracket(p+18);
    r05_alloc_function(&r05f_RETURN);
    r05_alloc_open_bracket(p+19);
    r05_alloc_open_bracket(p+20);
    r05_alloc_function(&r05f_Call);
    r05_alloc_function(&r05f_NOm_POS);
    r05_alloc_open_bracket(p+21);
    r05_alloc_insert_pos(p+22);
    r05_alloc_close_bracket(p+23);
    r05_alloc_insert_pos(p+24);
    r05_alloc_close_bracket(p+25);
    r05_alloc_close_bracket(p+26);
    r05_alloc_close_bracket(p+27);
    r05_link_brackets(p[15], p[27]);
    r05_link_brackets(p[19], p[26]);
    r05_link_brackets(p[20], p[25]);
    r05_link_brackets(p[21], p[23]);
    r05_link_brackets(p[16], p[18]);
    r05_splice_evar(p[17], p+11);
    r05_splice_evar(p[22], p+9);
    r05_splice_evar(p[24], p+13);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(PatternSteps, "PatternSteps") {
  struct r05_node *p[19] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /* e.UsedVariables: 5 */
    /* e.Pattern: 7 */
    /* (e.UsedVariables) e.Pattern */
    if (! r05_brackets_left(p+3, p[1], p[2]))
      continue;
    r05_close_evar(p+5, p[3], p[4]);
    r05_close_evar(p+7, p[4], p[2]);

    r05_reset_allocator();
    r05_alloc_open_call(p+9);
    r05_alloc_function(&r05f_DoPatternSteps);
    r05_alloc_open_bracket(p+10);
    r05_alloc_insert_pos(p+11);
    r05_alloc_close_bracket(p+12);
    r05_alloc_open_bracket(p+13);
    r05_alloc_close_bracket(p+14);
    r05_alloc_open_bracket(p+15);
    r05_alloc_function(&r05f_HOLE);
    r05_alloc_insert_pos(p+16);
    r05_alloc_close_bracket(p+17);
    r05_alloc_close_call(p+18);
    r05_push_stack(p[18]);
    r05_push_stack(p[9]);
    r05_link_brackets(p[15], p[17]);
    r05_link_brackets(p[13], p[14]);
    r05_link_brackets(p[10], p[12]);
    r05_splice_evar(p[11], p+5);
    r05_splice_evar(p[16], p+7);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(DoPatternSteps, "DoPatternSteps") {
  R05_DEFINE_COND_FUNCTION(DoPatternSteps, "DoPatternSteps$1", 1)
  R05_DEFINE_COND_FUNCTION(DoPatternSteps, "DoPatternSteps$2", 2)
  R05_DEFINE_COND_FUNCTION(DoPatternSteps, "DoPatternSteps$3", 3)
  struct r05_node *p[69] = { 0 };

  r05_this_is_generated_function();
  switch (arg_begin->next->info.function->resume_entry >> 1) {
  case 0:
    p[0] = arg_begin;
    p[1] = arg_begin->next;
    p[2] = arg_end;

    do {
      /* t.UsedVariables: 3 */
      /* e.BoundEVariables: 7 */
      /* e.HolesAndItems: 9 */
      /* t.UsedVariables (e.BoundEVariables) e.HolesAndItems */
      if (! r05_tvar_left(p+3, p[1], p[2]))
        continue;
      if (! r05_brackets_left(p+5, p[4], p[2]))
        continue;
      r05_close_evar(p+7, p[5], p[6]);
      r05_close_evar(p+9, p[6], p[2]);

      r05_reset_allocator();
      r05_alloc_open_call(p+11);
      r05_alloc_function(&c1);
      r05_alloc_evar(p+9);
      r05_alloc_close_call(p+12);
      r05_push_stack(p[12]);
      r05_push_stack(p[11]);
      r05_push_context(p, 11);
      r05_splice_from_freelist(p[2]);
      return;

  case 1:
      r05_pop_context(p, 11);
      p[11] = arg_begin;
      p[12] = arg_begin->next;
      p[13] = arg_end;

      do {
        /* t.UsedVariables: 3 */
        /* e.BoundEVariables: 7 */
        /* e.HolesAndItems: 9 */
        /* e.HolesAndItems-B: 14 */
        /* e.HolesAndItems-E: 19 */
        /* t.Item: 21 */
        /* e.Pattern: 23 */
        /* e.HolesAndItems-B (HOLE t.Item e.Pattern) e.HolesAndItems-E */
        p[14] = NULL;
        p[15] = p[12];
        do {
          r05_start_e_loop();
          if (! r05_brackets_left(p+16, p[15], p[13]))
            continue;
          if (! r05_function_left(p+18, p[16], p[17], &r05f_HOLE))
            continue;
          r05_close_evar(p+19, p[17], p[13]);
          if (! r05_tvar_left(p+21, p[18], p[17]))
            continue;
          r05_close_evar(p+23, p[22], p[17]);

          r05_reset_allocator();
          r05_alloc_open_call(p+25);
          r05_alloc_function(&c2);
          r05_alloc_open_call(p+26);
          r05_alloc_function(&r05f_HardItem);
          r05_alloc_open_bracket(p+27);
          r05_alloc_evar(p+7);
          r05_alloc_close_bracket(p+28);
          r05_alloc_tvar(p+21);
          r05_alloc_close_call(p+29);
          r05_alloc_close_call(p+30);
          r05_push_stack(p[30]);
          r05_push_stack(p[25]);
          r05_push_stack(p[29]);
          r05_push_stack(p[26]);
          r05_link_brackets(p[27], p[28]);
          r05_push_context(p, 25);
          r05_splice_from_freelist(p[2]);
          return;

  case 2:
          r05_pop_context(p, 25);
          p[25] = arg_begin;
          p[26] = arg_begin->next;
          p[27] = arg_end;

          do {
            /* t.UsedVariables: 3 */
            /* e.BoundEVariables: 7 */
            /* e.HolesAndItems: 9 */
            /* e.HolesAndItems-B: 14 */
            /* e.HolesAndItems-E: 19 */
            /* t.Item: 21 */
            /* e.Pattern: 23 */
            /* True */
            if (! r05_function_left(p+28, p[26], p[27], &r05f_True))
              continue;
            if (! r05_empty_hole(p[28], p[27]))
              continue;

            r05_reset_allocator();
            r05_alloc_open_call(p+29);
            r05_alloc_function(&r05f_DoPatternSteps);
            r05_alloc_insert_pos(p+30);
            r05_alloc_open_bracket(p+31);
            r05_alloc_insert_pos(p+32);
            r05_alloc_close_bracket(p+33);
            r05_alloc_insert_pos(p+34);
            r05_alloc_open_bracket(p+35);
            r05_alloc_function(&r05f_HOLE);
            r05_alloc_insert_pos(p+36);
            r05_alloc_close_bracket(p+37);
            r05_alloc_insert_pos(p+38);
            r05_alloc_close_call(p+39);
            r05_push_stack(p[39]);
            r05_push_stack(p[29]);
            r05_link_brackets(p[35], p[37]);
            r05_link_brackets(p[31], p[33]);
            r05_splice_tvar(p[30], p+3);
            r05_splice_evar(p[32], p+7);
            r05_splice_evar(p[34], p+14);
            r05_splice_tvar(p[34], p+21);
            r05_splice_evar(p[36], p+23);
            r05_splice_evar(p[38], p+19);
            r05_splice_from_freelist(p[0]);
            r05_splice_to_freelist(p[0], p[2]);
            return;
          } while (0);
          r05_splice_to_freelist(p[25], p[27]);
        } while (r05_open_evar_advance(p+14, p[13]));
        r05_stop_e_loop();
      } while (0);

      do {
        /* t.UsedVariables: 3 */
        /* e.BoundEVariables: 7 */
        /* e.HolesAndItems: 9 */
        /* e.HolesAndItems-B: 14 */
        /* e.HolesAndItems-E: 19 */
        /* t.Item: 21 */
        /* e.Pattern: 23 */
        /* e.HolesAndItems-B (HOLE e.Pattern t.Item) e.HolesAndItems-E */
        p[14] = NULL;
        p[15] = p[12];
        do {
          r05_start_e_loop();
          if (! r05_brackets_left(p+16, p[15], p[13]))
            continue;
          if (! r05_function_left(p+18, p[16], p[17], &r05f_HOLE))
            continue;
          r05_close_evar(p+19, p[17], p[13]);
          if (! r05_tvar_right(p+21, p[18], p[17]))
            continue;
          r05_close_evar(p+23, p[18], p[21]);

          r05_reset_allocator();
          r05_alloc_open_call(p+25);
          r05_alloc_function(&c3);
          r05_alloc_open_call(p+26);
          r05_alloc_function(&r05f_HardItem);
          r05_alloc_open_bracket(p+27);
          r05_alloc_evar(p+7);
          r05_alloc_close_bracket(p+28);
          r05_alloc_tvar(p+21);
          r05_alloc_close_call(p+29);
          r05_alloc_close_call(p+30);
          r05_push_stack(p[30]);
          r05_push_stack(p[25]);
          r05_push_stack(p[29]);
          r05_push_stack(p[26]);
          r05_link_brackets(p[27], p[28]);
          r05_push_context(p, 25);
          r05_splice_from_freelist(p[2]);
          return;

  case 3:
          r05_pop_context(p, 25);
          p[25] = arg_begin;
          p[26] = arg_begin->next;
          p[27] = arg_end;

          do {
            /* t.UsedVariables: 3 */
            /* e.BoundEVariables: 7 */
            /* e.HolesAndItems: 9 */
            /* e.HolesAndItems-B: 14 */
            /* e.HolesAndItems-E: 19 */
            /* t.Item: 21 */
            /* e.Pattern: 23 */
            /* True */
            if (! r05_function_left(p+28, p[26], p[27], &r05f_True))
              continue;
            if (! r05_empty_hole(p[28], p[27]))
              continue;

            r05_reset_allocator();
            r05_alloc_open_call(p+29);
            r05_alloc_function(&r05f_DoPatternSteps);
            r05_alloc_insert_pos(p+30);
            r05_alloc_open_bracket(p+31);
            r05_alloc_insert_pos(p+32);
            r05_alloc_close_bracket(p+33);
            r05_alloc_insert_pos(p+34);
            r05_alloc_open_bracket(p+35);
            r05_alloc_function(&r05f_HOLE);
            r05_alloc_insert_pos(p+36);
            r05_alloc_close_bracket(p+37);
            r05_alloc_insert_pos(p+38);
            r05_alloc_close_call(p+39);
            r05_push_stack(p[39]);
            r05_push_stack(p[29]);
            r05_link_brackets(p[35], p[37]);
            r05_link_brackets(p[31], p[33]);
            r05_splice_tvar(p[30], p+3);
            r05_splice_evar(p[32], p+7);
            r05_splice_evar(p[34], p+14);
            r05_splice_evar(p[36], p+23);
            r05_splice_tvar(p[38], p+21);
            r05_splice_evar(p[38], p+19);
            r05_splice_from_freelist(p[0]);
            r05_splice_to_freelist(p[0], p[2]);
            return;
          } while (0);
          r05_splice_to_freelist(p[25], p[27]);
        } while (r05_open_evar_advance(p+14, p[13]));
        r05_stop_e_loop();
      } while (0);

      do {
        /* t.UsedVariables: 3 */
        /* e.BoundEVariables: 7 */
        /* e.HolesAndItems: 9 */
        /* e.HolesAndItems-B: 14 */
        /* e.HolesAndItems-E: 22 */
        /* t.SrcPos: 24 */
        /* e.Index: 27 */
        /* e.HolesAndItems-B (HOLE (Variable t.SrcPos 'e' e.Index)) e.HolesAndItems-E */
        p[14] = NULL;
        p[15] = p[12];
        do {
          r05_start_e_loop();
          if (! r05_brackets_left(p+16, p[15], p[13]))
            continue;
          if (! r05_function_left(p+18, p[16], p[17], &r05f_HOLE))
            continue;
          if (! r05_brackets_left(p+19, p[18], p[17]))
            continue;
          if (! r05_function_left(p+21, p[19], p[20], &r05f_Variable))
            continue;
          if (! r05_empty_hole(p[20], p[17]))
            continue;
          r05_close_evar(p+22, p[17], p[13]);
          if (! r05_tvar_left(p+24, p[21], p[20]))
            continue;
          if (! r05_char_left(p+26, p[25], p[20], 'e'))
            continue;
          r05_close_evar(p+27, p[26], p[20]);

          r05_reset_allocator();
          r05_alloc_open_call(p+29);
          r05_alloc_function(&r05f_DoPatternSteps);
          r05_alloc_insert_pos(p+30);
          r05_alloc_open_bracket(p+31);
          r05_alloc_insert_pos(p+32);
          r05_alloc_open_bracket(p+33);
          r05_alloc_insert_pos(p+34);
          r05_alloc_close_bracket(p+35);
          r05_alloc_close_bracket(p+36);
          r05_alloc_insert_pos(p+37);
          r05_alloc_open_bracket(p+38);
          r05_alloc_function(&r05f_Variable);
          r05_alloc_insert_pos(p+39);
          r05_alloc_char('e');
          r05_alloc_evar(p+27);
          r05_alloc_close_bracket(p+40);
          r05_alloc_insert_pos(p+41);
          r05_alloc_close_call(p+42);
          r05_push_stack(p[42]);
          r05_push_stack(p[29]);
          r05_link_brackets(p[38], p[40]);
          r05_link_brackets(p[31], p[36]);
          r05_link_brackets(p[33], p[35]);
          r05_splice_tvar(p[30], p+3);
          r05_splice_evar(p[32], p+7);
          r05_splice_evar(p[34], p+27);
          r05_splice_evar(p[37], p+14);
          r05_splice_tvar(p[39], p+24);
          r05_splice_evar(p[41], p+22);
          r05_splice_from_freelist(p[0]);
          r05_splice_to_freelist(p[0], p[2]);
          return;
        } while (r05_open_evar_advance(p+14, p[13]));
        r05_stop_e_loop();
      } while (0);

      do {
        /* t.UsedVariables: 3 */
        /* e.BoundEVariables: 7 */
        /* e.HolesAndItems: 9 */
        /* e.HolesAndItems-B: 14 */
        /* e.HolesAndItems-E: 19 */
        /* e.HolesAndItems-B (HOLE) e.HolesAndItems-E */
        p[14] = NULL;
        p[15] = p[12];
        do {
          r05_start_e_loop();
          if (! r05_brackets_left(p+16, p[15], p[13]))
            continue;
          if (! r05_function_left(p+18, p[16], p[17], &r05f_HOLE))
            continue;
          if (! r05_empty_hole(p[18], p[17]))
            continue;
          r05_close_evar(p+19, p[17], p[13]);

          r05_reset_allocator();
          r05_alloc_open_call(p+21);
          r05_alloc_function(&r05f_DoPatternSteps);
          r05_alloc_insert_pos(p+22);
          r05_alloc_open_bracket(p+23);
          r05_alloc_insert_pos(p+24);
          r05_alloc_close_bracket(p+25);
          r05_alloc_insert_pos(p+26);
          r05_alloc_close_call(p+27);
          r05_push_stack(p[27]);
          r05_push_stack(p[21]);
          r05_link_brackets(p[23], p[25]);
          r05_splice_tvar(p[22], p+3);
          r05_splice_evar(p[24], p+7);
          r05_splice_evar(p[26], p+14);
          r05_splice_evar(p[26], p+19);
          r05_splice_from_freelist(p[0]);
          r05_splice_to_freelist(p[0], p[2]);
          return;
        } while (r05_open_evar_advance(p+14, p[13]));
        r05_stop_e_loop();
      } while (0);

      do {
        /* t.UsedVariables: 3 */
        /* e.BoundEVariables: 7 */
        /* e.HolesAndItems: 9 */
        /* e.HolesAndItems-B: 14 */
        /* e.InBrackets: 22 */
        /* e.Pattern: 24 */
        /* e.HolesAndItems-E: 26 */
        /* e.HolesAndItems-B (HOLE (Brackets e.InBrackets) e.Pattern) e.HolesAndItems-E */
        p[14] = NULL;
        p[15] = p[12];
        do {
          r05_start_e_loop();
          if (! r05_brackets_left(p+16, p[15], p[13]))
            continue;
          if (! r05_function_left(p+18, p[16], p[17], &r05f_HOLE))
            continue;
          if (! r05_brackets_left(p+19, p[18], p[17]))
            continue;
          if (! r05_function_left(p+21, p[19], p[20], &r05f_Brackets))
            continue;
          r05_close_evar(p+22, p[21], p[20]);
          r05_close_evar(p+24, p[20], p[17]);
          r05_close_evar(p+26, p[17], p[13]);

          r05_reset_allocator();
          r05_alloc_open_call(p+28);
          r05_alloc_function(&r05f_DoPatternSteps);
          r05_alloc_insert_pos(p+29);
          r05_alloc_open_bracket(p+30);
          r05_alloc_insert_pos(p+31);
          r05_alloc_close_bracket(p+32);
          r05_alloc_insert_pos(p+33);
          r05_alloc_open_bracket(p+34);
          r05_alloc_function(&r05f_LeftBracket);
          r05_alloc_close_bracket(p+35);
          r05_alloc_open_bracket(p+36);
          r05_alloc_function(&r05f_HOLE);
          r05_alloc_insert_pos(p+37);
          r05_alloc_close_bracket(p+38);
          r05_alloc_open_bracket(p+39);
          r05_alloc_function(&r05f_RightBracket);
          r05_alloc_close_bracket(p+40);
          r05_alloc_open_bracket(p+41);
          r05_alloc_function(&r05f_HOLE);
          r05_alloc_insert_pos(p+42);
          r05_alloc_close_bracket(p+43);
          r05_alloc_insert_pos(p+44);
          r05_alloc_close_call(p+45);
          r05_push_stack(p[45]);
          r05_push_stack(p[28]);
          r05_link_brackets(p[41], p[43]);
          r05_link_brackets(p[39], p[40]);
          r05_link_brackets(p[36], p[38]);
          r05_link_brackets(p[34], p[35]);
          r05_link_brackets(p[30], p[32]);
          r05_splice_tvar(p[29], p+3);
          r05_splice_evar(p[31], p+7);
          r05_splice_evar(p[33], p+14);
          r05_splice_evar(p[37], p+22);
          r05_splice_evar(p[42], p+24);
          r05_splice_evar(p[44], p+26);
          r05_splice_from_freelist(p[0]);
          r05_splice_to_freelist(p[0], p[2]);
          return;
        } while (r05_open_evar_advance(p+14, p[13]));
        r05_stop_e_loop();
      } while (0);

      do {
        /* t.UsedVariables: 3 */
        /* e.BoundEVariables: 7 */
        /* e.HolesAndItems: 9 */
        /* e.HolesAndItems-B: 14 */
        /* e.Pattern: 22 */
        /* e.InBrackets: 24 */
        /* e.HolesAndItems-E: 26 */
        /* e.HolesAndItems-B (HOLE e.Pattern (Brackets e.InBrackets)) e.HolesAndItems-E */
        p[14] = NULL;
        p[15] = p[12];
        do {
          r05_start_e_loop();
          if (! r05_brackets_left(p+16, p[15], p[13]))
            continue;
          if (! r05_function_left(p+18, p[16], p[17], &r05f_HOLE))
            continue;
          if (! r05_brackets_right(p+19, p[18], p[17]))
            continue;
          if (! r05_function_left(p+21, p[19], p[20], &r05f_Brackets))
            continue;
          r05_close_evar(p+22, p[18], p[19]);
          r05_close_evar(p+24, p[21], p[20]);
          r05_close_evar(p+26, p[17], p[13]);

          r05_reset_allocator();
          r05_alloc_open_call(p+28);
          r05_alloc_function(&r05f_DoPatternSteps);
          r05_alloc_insert_pos(p+29);
          r05_alloc_open_bracket(p+30);
          r05_alloc_insert_pos(p+31);
          r05_alloc_close_bracket(p+32);
          r05_alloc_insert_pos(p+33);
          r05_alloc_open_bracket(p+34);
          r05_alloc_function(&r05f_HOLE);
          r05_alloc_insert_pos(p+35);
          r05_alloc_close_bracket(p+36);
          r05_alloc_open_bracket(p+37);
          r05_alloc_function(&r05f_LeftBracket);
          r05_alloc_close_bracket(p+38);
          r05_alloc_open_bracket(p+39);
          r05_alloc_function(&r05f_HOLE);
          r05_alloc_insert_pos(p+40);
          r05_alloc_close_bracket(p+41);
          r05_alloc_open_bracket(p+42);
          r05_alloc_function(&r05f_RightBracket);
          r05_alloc_close_bracket(p+43);
          r05_alloc_insert_pos(p+44);
          r05_alloc_close_call(p+45);
          r05_push_stack(p[45]);
          r05_push_stack(p[28]);
          r05_link_brackets(p[42], p[43]);
          r05_link_brackets(p[39], p[41]);
          r05_link_brackets(p[37], p[38]);
          r05_link_brackets(p[34], p[36]);
          r05_link_brackets(p[30], p[32]);
          r05_splice_tvar(p[29], p+3);
          r05_splice_evar(p[31], p+7);
          r05_splice_evar(p[33], p+14);
          r05_splice_evar(p[35], p+22);
          r05_splice_evar(p[40], p+24);
          r05_splice_evar(p[44], p+26);
          r05_splice_from_freelist(p[0]);
          r05_splice_to_freelist(p[0], p[2]);
          return;
        } while (r05_open_evar_advance(p+14, p[13]));
        r05_stop_e_loop();
      } while (0);

      do {
        /* t.UsedVariables: 3 */
        /* e.BoundEVariables: 7 */
        /* e.HolesAndItems: 9 */
        /* e.HolesAndItems-B: 14 */
        /* e.Pattern: 22 */
        /* e.HolesAndItems-E: 24 */
        /* t.SrcPos: 26 */
        /* e.Index: 29 */
        /* e.HolesAndItems-B (HOLE (Variable t.SrcPos 'e' e.Index) e.Pattern) e.HolesAndItems-E */
        p[14] = NULL;
        p[15] = p[12];
        do {
          r05_start_e_loop();
          if (! r05_brackets_left(p+16, p[15], p[13]))
            continue;
          if (! r05_function_left(p+18, p[16], p[17], &r05f_HOLE))
            continue;
          if (! r05_brackets_left(p+19, p[18], p[17]))
            continue;
          if (! r05_function_left(p+21, p[19], p[20], &r05f_Variable))
            continue;
          r05_close_evar(p+22, p[20], p[17]);
          r05_close_evar(p+24, p[17], p[13]);
          if (! r05_tvar_left(p+26, p[21], p[20]))
            continue;
          if (! r05_char_left(p+28, p[27], p[20], 'e'))
            continue;
          r05_close_evar(p+29, p[28], p[20]);

          r05_reset_allocator();
          r05_alloc_open_call(p+31);
          r05_alloc_function(&r05f_DoPatternSteps);
          r05_alloc_insert_pos(p+32);
          r05_alloc_open_bracket(p+33);
          r05_alloc_insert_pos(p+34);
          r05_alloc_open_bracket(p+35);
          r05_alloc_insert_pos(p+36);
          r05_alloc_close_bracket(p+37);
          r05_alloc_close_bracket(p+38);
          r05_alloc_insert_pos(p+39);
          r05_alloc_open_bracket(p+40);
          r05_alloc_function(&r05f_OpenE);
          r05_alloc_insert_pos(p+41);
          r05_alloc_char('e');
          r05_alloc_evar(p+29);
          r05_alloc_close_bracket(p+42);
          r05_alloc_open_bracket(p+43);
          r05_alloc_function(&r05f_HOLE);
          r05_alloc_insert_pos(p+44);
          r05_alloc_close_bracket(p+45);
          r05_alloc_insert_pos(p+46);
          r05_alloc_close_call(p+47);
          r05_alloc_open_bracket(p+48);
          r05_alloc_open_call(p+49);
          r05_alloc_function(&r05f_Map);
          r05_alloc_function(&r05f_r5fwm_transformeru_BindBrackets);
          r05_alloc_open_call(p+50);
          r05_alloc_function(&r05f_T1);
          r05_alloc_tvar(p+3);
          r05_alloc_insert_pos(p+51);
          r05_alloc_close_call(p+52);
          r05_alloc_open_call(p+53);
          r05_alloc_function(&r05f_T2);
          r05_alloc_tvar(p+3);
          r05_alloc_evar(p+9);
          r05_alloc_close_call(p+54);
          r05_alloc_open_call(p+55);
          r05_alloc_function(&r05f_T3);
          r05_alloc_tvar(p+3);
          r05_alloc_evar(p+9);
          r05_alloc_close_call(p+56);
          r05_alloc_open_call(p+57);
          r05_alloc_function(&r05f_T4);
          r05_alloc_tvar(p+3);
          r05_alloc_evar(p+9);
          r05_alloc_close_call(p+58);
          r05_alloc_open_call(p+59);
          r05_alloc_function(&r05f_T5);
          r05_alloc_tvar(p+3);
          r05_alloc_evar(p+9);
          r05_alloc_close_call(p+60);
          r05_alloc_open_call(p+61);
          r05_alloc_function(&r05f_T5m_sub);
          r05_alloc_tvar(p+3);
          r05_alloc_tvar(p+26);
          r05_alloc_evar(p+29);
          r05_alloc_close_call(p+62);
          r05_alloc_open_call(p+63);
          r05_alloc_function(&r05f_T6);
          r05_alloc_tvar(p+3);
          r05_alloc_evar(p+9);
          r05_alloc_close_call(p+64);
          r05_alloc_open_call(p+65);
          r05_alloc_function(&r05f_T7);
          r05_alloc_tvar(p+3);
          r05_alloc_evar(p+9);
          r05_alloc_close_call(p+66);
          r05_alloc_close_call(p+67);
          r05_alloc_close_bracket(p+68);
          r05_link_brackets(p[48], p[68]);
          r05_push_stack(p[67]);
          r05_push_stack(p[49]);
          r05_push_stack(p[66]);
          r05_push_stack(p[65]);
          r05_push_stack(p[64]);
          r05_push_stack(p[63]);
          r05_push_stack(p[62]);
          r05_push_stack(p[61]);
          r05_push_stack(p[60]);
          r05_push_stack(p[59]);
          r05_push_stack(p[58]);
          r05_push_stack(p[57]);
          r05_push_stack(p[56]);
          r05_push_stack(p[55]);
          r05_push_stack(p[54]);
          r05_push_stack(p[53]);
          r05_push_stack(p[52]);
          r05_push_stack(p[50]);
          r05_push_stack(p[47]);
          r05_push_stack(p[31]);
          r05_link_brackets(p[43], p[45]);
          r05_link_brackets(p[40], p[42]);
          r05_link_brackets(p[33], p[38]);
          r05_link_brackets(p[35], p[37]);
          r05_splice_tvar(p[32], p+3);
          r05_splice_evar(p[34], p+7);
          r05_splice_evar(p[36], p+29);
          r05_splice_evar(p[39], p+14);
          r05_splice_tvar(p[41], p+26);
          r05_splice_evar(p[44], p+22);
          r05_splice_evar(p[46], p+24);
          r05_splice_evar(p[51], p+9);
          r05_splice_from_freelist(p[0]);
          r05_splice_to_freelist(p[0], p[2]);
          return;
        } while (r05_open_evar_advance(p+14, p[13]));
        r05_stop_e_loop();
      } while (0);

      do {
        /* t.UsedVariables: 3 */
        /* e.BoundEVariables: 7 */
        /* e.HolesAndItems: 9 */
        /* e.OnlyItems: 14 */
        /* e.OnlyItems */
        r05_close_evar(p+14, p[12], p[13]);

        r05_reset_allocator();
        r05_alloc_open_bracket(p+16);
        r05_alloc_open_call(p+17);
        r05_alloc_function(&r05f_r5fwm_transformeru_BindBrackets);
        r05_alloc_open_call(p+18);
        r05_alloc_function(&r05f_T0);
        r05_alloc_insert_pos(p+19);
        r05_alloc_close_call(p+20);
        r05_alloc_close_call(p+21);
        r05_alloc_close_bracket(p+22);
        r05_link_brackets(p[16], p[22]);
        r05_push_stack(p[21]);
        r05_push_stack(p[17]);
        r05_push_stack(p[20]);
        r05_push_stack(p[18]);
        r05_splice_evar(p[19], p+14);
        r05_splice_from_freelist(p[0]);
        r05_splice_to_freelist(p[0], p[2]);
        return;
      } while (0);
    } while (0);

    r05_recognition_impossible();
  }
}

R05_DEFINE_LOCAL_FUNCTION(HardItem, "HardItem") {
  struct r05_node *p[21] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /* e.BoundEVariables: 8 */
    /* s.Type: 10 */
    /* e.Info: 11 */
    /* (e.BoundEVariables) (Symbol s.Type e.Info) */
    if (! r05_brackets_left(p+3, p[1], p[2]))
      continue;
    if (! r05_brackets_left(p+5, p[4], p[2]))
      continue;
    if (! r05_function_left(p+7, p[5], p[6], &r05f_Symbol))
      continue;
    if (! r05_empty_hole(p[6], p[2]))
      continue;
    r05_close_evar(p+8, p[3], p[4]);
    if (! r05_svar_left(p+10, p[7], p[6]))
      continue;
    r05_close_evar(p+11, p[10], p[6]);

    r05_reset_allocator();
    r05_alloc_function(&r05f_True);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  do {
    /* e.BoundEVariables: 8 */
    /* t.SrcPos: 10 */
    /* e.Index: 13 */
    /* (e.BoundEVariables) (Variable t.SrcPos 's' e.Index) */
    if (! r05_brackets_left(p+3, p[1], p[2]))
      continue;
    if (! r05_brackets_left(p+5, p[4], p[2]))
      continue;
    if (! r05_function_left(p+7, p[5], p[6], &r05f_Variable))
      continue;
    if (! r05_empty_hole(p[6], p[2]))
      continue;
    r05_close_evar(p+8, p[3], p[4]);
    if (! r05_tvar_left(p+10, p[7], p[6]))
      continue;
    if (! r05_char_left(p+12, p[11], p[6], 's'))
      continue;
    r05_close_evar(p+13, p[12], p[6]);

    r05_reset_allocator();
    r05_alloc_function(&r05f_True);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  do {
    /* e.BoundEVariables: 8 */
    /* t.SrcPos: 10 */
    /* e.Index: 13 */
    /* (e.BoundEVariables) (Variable t.SrcPos 't' e.Index) */
    if (! r05_brackets_left(p+3, p[1], p[2]))
      continue;
    if (! r05_brackets_left(p+5, p[4], p[2]))
      continue;
    if (! r05_function_left(p+7, p[5], p[6], &r05f_Variable))
      continue;
    if (! r05_empty_hole(p[6], p[2]))
      continue;
    r05_close_evar(p+8, p[3], p[4]);
    if (! r05_tvar_left(p+10, p[7], p[6]))
      continue;
    if (! r05_char_left(p+12, p[11], p[6], 't'))
      continue;
    r05_close_evar(p+13, p[12], p[6]);

    r05_reset_allocator();
    r05_alloc_function(&r05f_True);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  do {
    /* t.SrcPos: 8 */
    /* e.Index: 11, 17 */
    /* e.BoundEVariables-B: 13 */
    /* e.BoundEVariables-E: 19 */
    /* (e.BoundEVariables-B (e.Index) e.BoundEVariables-E) (Variable t.SrcPos 'e' e.Index) */
    if (! r05_brackets_left(p+3, p[1], p[2]))
      continue;
    if (! r05_brackets_left(p+5, p[4], p[2]))
      continue;
    if (! r05_function_left(p+7, p[5], p[6], &r05f_Variable))
      continue;
    if (! r05_empty_hole(p[6], p[2]))
      continue;
    if (! r05_tvar_left(p+8, p[7], p[6]))
      continue;
    if (! r05_char_left(p+10, p[9], p[6], 'e'))
      continue;
    r05_close_evar(p+11, p[10], p[6]);
    p[13] = NULL;
    p[14] = p[3];
    do {
      r05_start_e_loop();
      if (! r05_brackets_left(p+15, p[14], p[4]))
        continue;
      if (! r05_repeated_evar_left(p+17, p[15], p[16], p+11))
        continue;
      if (! r05_empty_hole(p[18], p[16]))
        continue;
      r05_close_evar(p+19, p[16], p[4]);

      r05_reset_allocator();
      r05_alloc_function(&r05f_True);
      r05_splice_from_freelist(p[0]);
      r05_splice_to_freelist(p[0], p[2]);
      return;
    } while (r05_open_evar_advance(p+13, p[4]));
    r05_stop_e_loop();
  } while (0);

  do {
    /* e.BoundEVariables: 8 */
    /* t.SrcPos: 10 */
    /* e.Index: 13 */
    /* (e.BoundEVariables) (Variable t.SrcPos 'e' e.Index) */
    if (! r05_brackets_left(p+3, p[1], p[2]))
      continue;
    if (! r05_brackets_left(p+5, p[4], p[2]))
      continue;
    if (! r05_function_left(p+7, p[5], p[6], &r05f_Variable))
      continue;
    if (! r05_empty_hole(p[6], p[2]))
      continue;
    r05_close_evar(p+8, p[3], p[4]);
    if (! r05_tvar_left(p+10, p[7], p[6]))
      continue;
    if (! r05_char_left(p+12, p[11], p[6], 'e'))
      continue;
    r05_close_evar(p+13, p[12], p[6]);

    r05_reset_allocator();
    r05_alloc_function(&r05f_False);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  do {
    /* e.BoundEVariables: 8 */
    /* e.Pattern: 10 */
    /* (e.BoundEVariables) (Brackets e.Pattern) */
    if (! r05_brackets_left(p+3, p[1], p[2]))
      continue;
    if (! r05_brackets_left(p+5, p[4], p[2]))
      continue;
    if (! r05_function_left(p+7, p[5], p[6], &r05f_Brackets))
      continue;
    if (! r05_empty_hole(p[6], p[2]))
      continue;
    r05_close_evar(p+8, p[3], p[4]);
    r05_close_evar(p+10, p[7], p[6]);

    r05_reset_allocator();
    r05_alloc_function(&r05f_False);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_ENTRY_FUNCTION(r5fwm_transformeru_BindBrackets, "r5fw-transformer_BindBrackets") {
  struct r05_node *p[14] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /* e.Expr: 5 */
    /* (e.Expr) */
    if (! r05_brackets_left(p+3, p[1], p[2]))
      continue;
    if (! r05_empty_hole(p[4], p[2]))
      continue;
    r05_close_evar(p+5, p[3], p[4]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+7);
    r05_alloc_open_call(p+8);
    r05_alloc_function(&r05f_DoBindBrackets);
    r05_alloc_open_bracket(p+9);
    r05_alloc_char('$');
    r05_alloc_close_bracket(p+10);
    r05_alloc_insert_pos(p+11);
    r05_alloc_close_call(p+12);
    r05_alloc_close_bracket(p+13);
    r05_link_brackets(p[7], p[13]);
    r05_push_stack(p[12]);
    r05_push_stack(p[8]);
    r05_link_brackets(p[9], p[10]);
    r05_splice_evar(p[11], p+5);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(DoBindBrackets, "DoBindBrackets") {
  R05_DEFINE_COND_FUNCTION(DoBindBrackets, "DoBindBrackets$1", 1)
  struct r05_node *p[31] = { 0 };

  r05_this_is_generated_function();
  switch (arg_begin->next->info.function->resume_entry >> 1) {
  case 0:
    p[0] = arg_begin;
    p[1] = arg_begin->next;
    p[2] = arg_end;

    do {
      /* t.MultiBracket: 5 */
      /* e.Scanned: 7 */
      /* t.Symbol: 9 */
      /* e.Tail: 11 */
      /* (t.MultiBracket e.Scanned) t.Symbol e.Tail */
      if (! r05_brackets_left(p+3, p[1], p[2]))
        continue;
      if (! r05_tvar_left(p+5, p[3], p[4]))
        continue;
      r05_close_evar(p+7, p[6], p[4]);
      if (! r05_tvar_left(p+9, p[4], p[2]))
        continue;
      r05_close_evar(p+11, p[10], p[2]);

      r05_reset_allocator();
      r05_alloc_open_call(p+13);
      r05_alloc_function(&c1);
      r05_alloc_tvar(p+9);
      r05_alloc_close_call(p+14);
      r05_push_stack(p[14]);
      r05_push_stack(p[13]);
      r05_push_context(p, 13);
      r05_splice_from_freelist(p[2]);
      return;

  case 1:
      r05_pop_context(p, 13);
      p[13] = arg_begin;
      p[14] = arg_begin->next;
      p[15] = arg_end;

      do {
        /* t.MultiBracket: 5 */
        /* e.Scanned: 7 */
        /* t.Symbol: 9 */
        /* e.Tail: 11 */
        /* s.Type: 19 */
        /* e.Info: 20 */
        /* (Symbol s.Type e.Info) */
        if (! r05_brackets_left(p+16, p[14], p[15]))
          continue;
        if (! r05_function_left(p+18, p[16], p[17], &r05f_Symbol))
          continue;
        if (! r05_empty_hole(p[17], p[15]))
          continue;
        if (! r05_svar_left(p+19, p[18], p[17]))
          continue;
        r05_close_evar(p+20, p[19], p[17]);

        r05_reset_allocator();
        r05_alloc_open_call(p+22);
        r05_alloc_function(&r05f_DoBindBrackets);
        r05_alloc_open_bracket(p+23);
        r05_alloc_insert_pos(p+24);
        r05_alloc_close_bracket(p+25);
        r05_alloc_insert_pos(p+26);
        r05_alloc_close_call(p+27);
        r05_push_stack(p[27]);
        r05_push_stack(p[22]);
        r05_link_brackets(p[23], p[25]);
        r05_splice_tvar(p[24], p+5);
        r05_splice_evar(p[24], p+7);
        r05_splice_tvar(p[24], p+9);
        r05_splice_evar(p[26], p+11);
        r05_splice_from_freelist(p[0]);
        r05_splice_to_freelist(p[0], p[2]);
        return;
      } while (0);
      r05_splice_to_freelist(p[13], p[15]);
    } while (0);

    do {
      /* e.Tail: 8 */
      /* t.MultiBracket: 10 */
      /* e.Scanned: 12 */
      /* t.SrcPos: 14 */
      /* s.Type: 16 */
      /* e.Index: 17 */
      /* (t.MultiBracket e.Scanned) (Variable t.SrcPos s.Type e.Index) e.Tail */
      if (! r05_brackets_left(p+3, p[1], p[2]))
        continue;
      if (! r05_brackets_left(p+5, p[4], p[2]))
        continue;
      if (! r05_function_left(p+7, p[5], p[6], &r05f_Variable))
        continue;
      r05_close_evar(p+8, p[6], p[2]);
      if (! r05_tvar_left(p+10, p[3], p[4]))
        continue;
      r05_close_evar(p+12, p[11], p[4]);
      if (! r05_tvar_left(p+14, p[7], p[6]))
        continue;
      if (! r05_svar_left(p+16, p[15], p[6]))
        continue;
      r05_close_evar(p+17, p[16], p[6]);

      r05_reset_allocator();
      r05_alloc_open_call(p+19);
      r05_alloc_function(&r05f_DoBindBrackets);
      r05_alloc_open_bracket(p+20);
      r05_alloc_insert_pos(p+21);
      r05_alloc_open_bracket(p+22);
      r05_alloc_function(&r05f_Variable);
      r05_alloc_insert_pos(p+23);
      r05_alloc_svar(p+16);
      r05_alloc_insert_pos(p+24);
      r05_alloc_close_bracket(p+25);
      r05_alloc_close_bracket(p+26);
      r05_alloc_insert_pos(p+27);
      r05_alloc_close_call(p+28);
      r05_push_stack(p[28]);
      r05_push_stack(p[19]);
      r05_link_brackets(p[20], p[26]);
      r05_link_brackets(p[22], p[25]);
      r05_splice_tvar(p[21], p+10);
      r05_splice_evar(p[21], p+12);
      r05_splice_tvar(p[23], p+14);
      r05_splice_evar(p[24], p+17);
      r05_splice_evar(p[27], p+8);
      r05_splice_from_freelist(p[0]);
      r05_splice_to_freelist(p[0], p[2]);
      return;
    } while (0);

    do {
      /* e.Tail: 8 */
      /* t.MultiBracket: 10 */
      /* e.Scanned: 12 */
      /* t.SrcPos: 14 */
      /* s.Type: 16 */
      /* e.Index: 17 */
      /* (t.MultiBracket e.Scanned) (OpenE t.SrcPos s.Type e.Index) e.Tail */
      if (! r05_brackets_left(p+3, p[1], p[2]))
        continue;
      if (! r05_brackets_left(p+5, p[4], p[2]))
        continue;
      if (! r05_function_left(p+7, p[5], p[6], &r05f_OpenE))
        continue;
      r05_close_evar(p+8, p[6], p[2]);
      if (! r05_tvar_left(p+10, p[3], p[4]))
        continue;
      r05_close_evar(p+12, p[11], p[4]);
      if (! r05_tvar_left(p+14, p[7], p[6]))
        continue;
      if (! r05_svar_left(p+16, p[15], p[6]))
        continue;
      r05_close_evar(p+17, p[16], p[6]);

      r05_reset_allocator();
      r05_alloc_open_call(p+19);
      r05_alloc_function(&r05f_DoBindBrackets);
      r05_alloc_open_bracket(p+20);
      r05_alloc_insert_pos(p+21);
      r05_alloc_open_bracket(p+22);
      r05_alloc_function(&r05f_Brackets);
      r05_alloc_open_bracket(p+23);
      r05_alloc_function(&r05f_Variable);
      r05_alloc_insert_pos(p+24);
      r05_alloc_svar(p+16);
      r05_alloc_insert_pos(p+25);
      r05_alloc_close_bracket(p+26);
      r05_alloc_close_bracket(p+27);
      r05_alloc_close_bracket(p+28);
      r05_alloc_insert_pos(p+29);
      r05_alloc_close_call(p+30);
      r05_push_stack(p[30]);
      r05_push_stack(p[19]);
      r05_link_brackets(p[20], p[28]);
      r05_link_brackets(p[22], p[27]);
      r05_link_brackets(p[23], p[26]);
      r05_splice_tvar(p[21], p+10);
      r05_splice_evar(p[21], p+12);
      r05_splice_tvar(p[24], p+14);
      r05_splice_evar(p[25], p+17);
      r05_splice_evar(p[29], p+8);
      r05_splice_from_freelist(p[0]);
      r05_splice_to_freelist(p[0], p[2]);
      return;
    } while (0);

    do {
      /* e.InBrackets: 8 */
      /* e.Tail: 10 */
      /* t.MultiBracket: 12 */
      /* e.Scanned: 14 */
      /* (t.MultiBracket e.Scanned) (Brackets e.InBrackets) e.Tail */
      if (! r05_brackets_left(p+3, p[1], p[2]))
        continue;
      if (! r05_brackets_left(p+5, p[4], p[2]))
        continue;
      if (! r05_function_left(p+7, p[5], p[6], &r05f_Brackets))
        continue;
      r05_close_evar(p+8, p[7], p[6]);
      r05_close_evar(p+10, p[6], p[2]);
      if (! r05_tvar_left(p+12, p[3], p[4]))
        continue;
      r05_close_evar(p+14, p[13], p[4]);

      r05_reset_allocator();
      r05_alloc_open_call(p+16);
      r05_alloc_function(&r05f_DoBindBrackets);
      r05_alloc_open_bracket(p+17);
      r05_alloc_insert_pos(p+18);
      r05_alloc_open_bracket(p+19);
      r05_alloc_function(&r05f_Brackets);
      r05_alloc_insert_pos(p+20);
      r05_alloc_close_bracket(p+21);
      r05_alloc_close_bracket(p+22);
      r05_alloc_insert_pos(p+23);
      r05_alloc_close_call(p+24);
      r05_push_stack(p[24]);
      r05_push_stack(p[16]);
      r05_link_brackets(p[17], p[22]);
      r05_link_brackets(p[19], p[21]);
      r05_splice_tvar(p[18], p+12);
      r05_splice_evar(p[18], p+14);
      r05_splice_evar(p[20], p+8);
      r05_splice_evar(p[23], p+10);
      r05_splice_from_freelist(p[0]);
      r05_splice_to_freelist(p[0], p[2]);
      return;
    } while (0);

    do {
      /* e.Tail: 8 */
      /* t.MultiBracket: 10 */
      /* e.Scanned: 12 */
      /* (t.MultiBracket e.Scanned) (LeftBracket) e.Tail */
      if (! r05_brackets_left(p+3, p[1], p[2]))
        continue;
      if (! r05_brackets_left(p+5, p[4], p[2]))
        continue;
      if (! r05_function_left(p+7, p[5], p[6], &r05f_LeftBracket))
        continue;
      if (! r05_empty_hole(p[7], p[6]))
        continue;
      r05_close_evar(p+8, p[6], p[2]);
      if (! r05_tvar_left(p+10, p[3], p[4]))
        continue;
      r05_close_evar(p+12, p[11], p[4]);

      r05_reset_allocator();
      r05_alloc_open_call(p+14);
      r05_alloc_function(&r05f_DoBindBrackets);
      r05_alloc_open_bracket(p+15);
      r05_alloc_open_bracket(p+16);
      r05_alloc_insert_pos(p+17);
      r05_alloc_close_bracket(p+18);
      r05_alloc_close_bracket(p+19);
      r05_alloc_insert_pos(p+20);
      r05_alloc_close_call(p+21);
      r05_push_stack(p[21]);
      r05_push_stack(p[14]);
      r05_link_brackets(p[15], p[19]);
      r05_link_brackets(p[16], p[18]);
      r05_splice_tvar(p[17], p+10);
      r05_splice_evar(p[17], p+12);
      r05_splice_evar(p[20], p+8);
      r05_splice_from_freelist(p[0]);
      r05_splice_to_freelist(p[0], p[2]);
      return;
    } while (0);

    do {
      /* e.InBrackets: 10 */
      /* e.Tail: 12 */
      /* t.MultiBracket: 14 */
      /* e.Scanned: 16 */
      /* ((t.MultiBracket e.Scanned) e.InBrackets) (RightBracket) e.Tail */
      if (! r05_brackets_left(p+3, p[1], p[2]))
        continue;
      if (! r05_brackets_left(p+5, p[3], p[4]))
        continue;
      if (! r05_brackets_left(p+7, p[4], p[2]))
        continue;
      if (! r05_function_left(p+9, p[7], p[8], &r05f_RightBracket))
        continue;
      if (! r05_empty_hole(p[9], p[8]))
        continue;
      r05_close_evar(p+10, p[6], p[4]);
      r05_close_evar(p+12, p[8], p[2]);
      if (! r05_tvar_left(p+14, p[5], p[6]))
        continue;
      r05_close_evar(p+16, p[15], p[6]);

      r05_reset_allocator();
      r05_alloc_open_call(p+18);
      r05_alloc_function(&r05f_DoBindBrackets);
      r05_alloc_open_bracket(p+19);
      r05_alloc_insert_pos(p+20);
      r05_alloc_open_bracket(p+21);
      r05_alloc_function(&r05f_Brackets);
      r05_alloc_insert_pos(p+22);
      r05_alloc_close_bracket(p+23);
      r05_alloc_close_bracket(p+24);
      r05_alloc_insert_pos(p+25);
      r05_alloc_close_call(p+26);
      r05_push_stack(p[26]);
      r05_push_stack(p[18]);
      r05_link_brackets(p[19], p[24]);
      r05_link_brackets(p[21], p[23]);
      r05_splice_tvar(p[20], p+14);
      r05_splice_evar(p[20], p+16);
      r05_splice_evar(p[22], p+10);
      r05_splice_evar(p[25], p+12);
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
      r05_alloc_insert_pos(p+8);
      r05_splice_evar(p[8], p+6);
      r05_splice_from_freelist(p[0]);
      r05_splice_to_freelist(p[0], p[2]);
      return;
    } while (0);

    r05_recognition_impossible();
  }
}

R05_DEFINE_LOCAL_FUNCTION(T1, "T1") {
  R05_DEFINE_COND_FUNCTION(T1, "T1$1", 1)
  R05_DEFINE_COND_FUNCTION(T1, "T1$2", 2)
  R05_DEFINE_COND_FUNCTION(T1, "T1$3", 3)
  struct r05_node *p[60] = { 0 };

  r05_this_is_generated_function();
  switch (arg_begin->next->info.function->resume_entry >> 1) {
  case 0:
    p[0] = arg_begin;
    p[1] = arg_begin->next;
    p[2] = arg_end;

    do {
      /* t.UsedVars: 3 */
      /* e.Items: 5 */
      /* e.Pattern: 13 */
      /* e.ItemsAndHoles: 15 */
      /* t.SrcPos: 17 */
      /* e.Index: 20 */
      /* t.UsedVars e.Items (HOLE (Variable t.SrcPos 'e' e.Index) e.Pattern) e.ItemsAndHoles */
      if (! r05_tvar_left(p+3, p[1], p[2]))
        continue;
      p[5] = NULL;
      p[6] = p[4];
      do {
        r05_start_e_loop();
        if (! r05_brackets_left(p+7, p[6], p[2]))
          continue;
        if (! r05_function_left(p+9, p[7], p[8], &r05f_HOLE))
          continue;
        if (! r05_brackets_left(p+10, p[9], p[8]))
          continue;
        if (! r05_function_left(p+12, p[10], p[11], &r05f_Variable))
          continue;
        r05_close_evar(p+13, p[11], p[8]);
        r05_close_evar(p+15, p[8], p[2]);
        if (! r05_tvar_left(p+17, p[12], p[11]))
          continue;
        if (! r05_char_left(p+19, p[18], p[11], 'e'))
          continue;
        r05_close_evar(p+20, p[19], p[11]);

        r05_reset_allocator();
        r05_alloc_open_call(p+22);
        r05_alloc_function(&c1);
        r05_alloc_open_call(p+23);
        r05_alloc_function(&r05f_NewName);
        r05_alloc_tvar(p+3);
        r05_alloc_char('e');
        r05_alloc_evar(p+20);
        r05_alloc_chars("_fix", 4);
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
          /* t.UsedVars: 3 */
          /* e.Items: 5 */
          /* e.Pattern: 13 */
          /* e.ItemsAndHoles: 15 */
          /* t.SrcPos: 17 */
          /* e.Index: 20 */
          /* t.UsedVars1: 25 */
          /* e.eX_fix: 27 */
          /* t.UsedVars1 e.eX_fix */
          if (! r05_tvar_left(p+25, p[23], p[24]))
            continue;
          r05_close_evar(p+27, p[26], p[24]);

          r05_reset_allocator();
          r05_alloc_open_call(p+29);
          r05_alloc_function(&c2);
          r05_alloc_open_call(p+30);
          r05_alloc_function(&r05f_NewName);
          r05_alloc_tvar(p+25);
          r05_alloc_char('t');
          r05_alloc_evar(p+20);
          r05_alloc_chars("_next", 5);
          r05_alloc_close_call(p+31);
          r05_alloc_close_call(p+32);
          r05_push_stack(p[32]);
          r05_push_stack(p[29]);
          r05_push_stack(p[31]);
          r05_push_stack(p[30]);
          r05_push_context(p, 29);
          r05_splice_from_freelist(p[2]);
          return;

  case 2:
          r05_pop_context(p, 29);
          p[29] = arg_begin;
          p[30] = arg_begin->next;
          p[31] = arg_end;

          do {
            /* t.UsedVars: 3 */
            /* e.Items: 5 */
            /* e.Pattern: 13 */
            /* e.ItemsAndHoles: 15 */
            /* t.SrcPos: 17 */
            /* e.Index: 20 */
            /* t.UsedVars1: 25 */
            /* e.eX_fix: 27 */
            /* t.UsedVars2: 32 */
            /* e.tX_next: 34 */
            /* t.UsedVars2 e.tX_next */
            if (! r05_tvar_left(p+32, p[30], p[31]))
              continue;
            r05_close_evar(p+34, p[33], p[31]);

            r05_reset_allocator();
            r05_alloc_open_call(p+36);
            r05_alloc_function(&c3);
            r05_alloc_open_call(p+37);
            r05_alloc_function(&r05f_NewName);
            r05_alloc_tvar(p+32);
            r05_alloc_char('e');
            r05_alloc_evar(p+20);
            r05_alloc_chars("_rest", 5);
            r05_alloc_close_call(p+38);
            r05_alloc_close_call(p+39);
            r05_push_stack(p[39]);
            r05_push_stack(p[36]);
            r05_push_stack(p[38]);
            r05_push_stack(p[37]);
            r05_push_context(p, 36);
            r05_splice_from_freelist(p[2]);
            return;

  case 3:
            r05_pop_context(p, 36);
            p[36] = arg_begin;
            p[37] = arg_begin->next;
            p[38] = arg_end;

            do {
              /* t.UsedVars: 3 */
              /* e.Items: 5 */
              /* e.Pattern: 13 */
              /* e.ItemsAndHoles: 15 */
              /* t.SrcPos: 17 */
              /* e.Index: 20 */
              /* t.UsedVars1: 25 */
              /* e.eX_fix: 27 */
              /* t.UsedVars2: 32 */
              /* e.tX_next: 34 */
              /* t.UsedVars3: 39 */
              /* e.eX_rest: 41 */
              /* t.UsedVars3 e.eX_rest */
              if (! r05_tvar_left(p+39, p[37], p[38]))
                continue;
              r05_close_evar(p+41, p[40], p[38]);

              r05_reset_allocator();
              r05_alloc_open_bracket(p+43);
              r05_alloc_insert_pos(p+44);
              r05_alloc_open_bracket(p+45);
              r05_alloc_function(&r05f_Brackets);
              r05_alloc_open_bracket(p+46);
              r05_alloc_function(&r05f_Variable);
              r05_alloc_insert_pos(p+47);
              r05_alloc_close_bracket(p+48);
              r05_alloc_close_bracket(p+49);
              r05_alloc_open_bracket(p+50);
              r05_alloc_function(&r05f_Variable);
              r05_alloc_tvar(p+17);
              r05_alloc_insert_pos(p+51);
              r05_alloc_close_bracket(p+52);
              r05_alloc_open_bracket(p+53);
              r05_alloc_function(&r05f_Variable);
              r05_alloc_tvar(p+17);
              r05_alloc_insert_pos(p+54);
              r05_alloc_close_bracket(p+55);
              r05_alloc_open_call(p+56);
              r05_alloc_function(&r05f_PassiveHoles);
              r05_alloc_insert_pos(p+57);
              r05_alloc_close_call(p+58);
              r05_alloc_close_bracket(p+59);
              r05_link_brackets(p[43], p[59]);
              r05_push_stack(p[58]);
              r05_push_stack(p[56]);
              r05_link_brackets(p[53], p[55]);
              r05_link_brackets(p[50], p[52]);
              r05_link_brackets(p[45], p[49]);
              r05_link_brackets(p[46], p[48]);
              r05_splice_evar(p[44], p+5);
              r05_splice_tvar(p[47], p+17);
              r05_splice_evar(p[47], p+27);
              r05_splice_evar(p[51], p+34);
              r05_splice_evar(p[54], p+41);
              r05_splice_tvar(p[57], p+39);
              r05_splice_evar(p[57], p+15);
              r05_splice_from_freelist(p[0]);
              r05_splice_to_freelist(p[0], p[2]);
              return;
            } while (0);
            r05_splice_to_freelist(p[36], p[38]);
          } while (0);
          r05_splice_to_freelist(p[29], p[31]);
        } while (0);
        r05_splice_to_freelist(p[22], p[24]);
      } while (r05_open_evar_advance(p+5, p[2]));
      r05_stop_e_loop();
    } while (0);

    r05_recognition_impossible();
  }
}

R05_DEFINE_LOCAL_FUNCTION(PassiveHoles, "PassiveHoles") {
  R05_DEFINE_COND_FUNCTION(PassiveHoles, "PassiveHoles$1", 1)
  struct r05_node *p[36] = { 0 };

  r05_this_is_generated_function();
  switch (arg_begin->next->info.function->resume_entry >> 1) {
  case 0:
    p[0] = arg_begin;
    p[1] = arg_begin->next;
    p[2] = arg_end;

    do {
      /* t.UsedVariables: 3 */
      /* e.Items: 5 */
      /* e.Pattern: 13 */
      /* e.ItemsAndHoles: 15 */
      /* t.SrcPos: 17 */
      /* e.Index: 20 */
      /* t.UsedVariables e.Items (HOLE (Variable t.SrcPos 'e' e.Index) e.Pattern) e.ItemsAndHoles */
      if (! r05_tvar_left(p+3, p[1], p[2]))
        continue;
      p[5] = NULL;
      p[6] = p[4];
      do {
        r05_start_e_loop();
        if (! r05_brackets_left(p+7, p[6], p[2]))
          continue;
        if (! r05_function_left(p+9, p[7], p[8], &r05f_HOLE))
          continue;
        if (! r05_brackets_left(p+10, p[9], p[8]))
          continue;
        if (! r05_function_left(p+12, p[10], p[11], &r05f_Variable))
          continue;
        r05_close_evar(p+13, p[11], p[8]);
        r05_close_evar(p+15, p[8], p[2]);
        if (! r05_tvar_left(p+17, p[12], p[11]))
          continue;
        if (! r05_char_left(p+19, p[18], p[11], 'e'))
          continue;
        r05_close_evar(p+20, p[19], p[11]);

        r05_reset_allocator();
        r05_alloc_open_call(p+22);
        r05_alloc_function(&c1);
        r05_alloc_open_call(p+23);
        r05_alloc_function(&r05f_NewName);
        r05_alloc_tvar(p+3);
        r05_alloc_char('e');
        r05_alloc_evar(p+20);
        r05_alloc_chars("_rest", 5);
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
          /* t.UsedVariables: 3 */
          /* e.Items: 5 */
          /* e.Pattern: 13 */
          /* e.ItemsAndHoles: 15 */
          /* t.SrcPos: 17 */
          /* e.Index: 20 */
          /* t.NewVars: 25 */
          /* e.eX_rest: 27 */
          /* t.NewVars e.eX_rest */
          if (! r05_tvar_left(p+25, p[23], p[24]))
            continue;
          r05_close_evar(p+27, p[26], p[24]);

          r05_reset_allocator();
          r05_alloc_insert_pos(p+29);
          r05_alloc_open_bracket(p+30);
          r05_alloc_function(&r05f_Variable);
          r05_alloc_insert_pos(p+31);
          r05_alloc_close_bracket(p+32);
          r05_alloc_open_call(p+33);
          r05_alloc_function(&r05f_PassiveHoles);
          r05_alloc_insert_pos(p+34);
          r05_alloc_close_call(p+35);
          r05_push_stack(p[35]);
          r05_push_stack(p[33]);
          r05_link_brackets(p[30], p[32]);
          r05_splice_evar(p[29], p+5);
          r05_splice_tvar(p[31], p+17);
          r05_splice_evar(p[31], p+27);
          r05_splice_tvar(p[34], p+25);
          r05_splice_evar(p[34], p+15);
          r05_splice_from_freelist(p[0]);
          r05_splice_to_freelist(p[0], p[2]);
          return;
        } while (0);
        r05_splice_to_freelist(p[22], p[24]);
      } while (r05_open_evar_advance(p+5, p[2]));
      r05_stop_e_loop();
    } while (0);

    do {
      /* t.UsedVariables: 3 */
      /* e.Items: 5 */
      /* t.UsedVariables e.Items */
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
}

R05_DEFINE_LOCAL_FUNCTION(T2, "T2") {
  R05_DEFINE_COND_FUNCTION(T2, "T2$1", 1)
  R05_DEFINE_COND_FUNCTION(T2, "T2$2", 2)
  R05_DEFINE_COND_FUNCTION(T2, "T2$3", 3)
  struct r05_node *p[60] = { 0 };

  r05_this_is_generated_function();
  switch (arg_begin->next->info.function->resume_entry >> 1) {
  case 0:
    p[0] = arg_begin;
    p[1] = arg_begin->next;
    p[2] = arg_end;

    do {
      /* t.UsedVars: 3 */
      /* e.Items: 5 */
      /* e.Pattern: 13 */
      /* e.ItemsAndHoles: 15 */
      /* t.SrcPos: 17 */
      /* e.Index: 20 */
      /* t.UsedVars e.Items (HOLE (Variable t.SrcPos 'e' e.Index) e.Pattern) e.ItemsAndHoles */
      if (! r05_tvar_left(p+3, p[1], p[2]))
        continue;
      p[5] = NULL;
      p[6] = p[4];
      do {
        r05_start_e_loop();
        if (! r05_brackets_left(p+7, p[6], p[2]))
          continue;
        if (! r05_function_left(p+9, p[7], p[8], &r05f_HOLE))
          continue;
        if (! r05_brackets_left(p+10, p[9], p[8]))
          continue;
        if (! r05_function_left(p+12, p[10], p[11], &r05f_Variable))
          continue;
        r05_close_evar(p+13, p[11], p[8]);
        r05_close_evar(p+15, p[8], p[2]);
        if (! r05_tvar_left(p+17, p[12], p[11]))
          continue;
        if (! r05_char_left(p+19, p[18], p[11], 'e'))
          continue;
        r05_close_evar(p+20, p[19], p[11]);

        r05_reset_allocator();
        r05_alloc_open_call(p+22);
        r05_alloc_function(&c1);
        r05_alloc_open_call(p+23);
        r05_alloc_function(&r05f_NewName);
        r05_alloc_tvar(p+3);
        r05_alloc_char('e');
        r05_alloc_evar(p+20);
        r05_alloc_chars("_fix", 4);
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
          /* t.UsedVars: 3 */
          /* e.Items: 5 */
          /* e.Pattern: 13 */
          /* e.ItemsAndHoles: 15 */
          /* t.SrcPos: 17 */
          /* e.Index: 20 */
          /* t.UsedVars1: 25 */
          /* e.eX_fix: 27 */
          /* t.UsedVars1 e.eX_fix */
          if (! r05_tvar_left(p+25, p[23], p[24]))
            continue;
          r05_close_evar(p+27, p[26], p[24]);

          r05_reset_allocator();
          r05_alloc_open_call(p+29);
          r05_alloc_function(&c2);
          r05_alloc_open_call(p+30);
          r05_alloc_function(&r05f_NewName);
          r05_alloc_tvar(p+25);
          r05_alloc_char('t');
          r05_alloc_evar(p+20);
          r05_alloc_chars("_next", 5);
          r05_alloc_close_call(p+31);
          r05_alloc_close_call(p+32);
          r05_push_stack(p[32]);
          r05_push_stack(p[29]);
          r05_push_stack(p[31]);
          r05_push_stack(p[30]);
          r05_push_context(p, 29);
          r05_splice_from_freelist(p[2]);
          return;

  case 2:
          r05_pop_context(p, 29);
          p[29] = arg_begin;
          p[30] = arg_begin->next;
          p[31] = arg_end;

          do {
            /* t.UsedVars: 3 */
            /* e.Items: 5 */
            /* e.Pattern: 13 */
            /* e.ItemsAndHoles: 15 */
            /* t.SrcPos: 17 */
            /* e.Index: 20 */
            /* t.UsedVars1: 25 */
            /* e.eX_fix: 27 */
            /* t.UsedVars2: 32 */
            /* e.tX_next: 34 */
            /* t.UsedVars2 e.tX_next */
            if (! r05_tvar_left(p+32, p[30], p[31]))
              continue;
            r05_close_evar(p+34, p[33], p[31]);

            r05_reset_allocator();
            r05_alloc_open_call(p+36);
            r05_alloc_function(&c3);
            r05_alloc_open_call(p+37);
            r05_alloc_function(&r05f_NewName);
            r05_alloc_tvar(p+32);
            r05_alloc_char('e');
            r05_alloc_evar(p+20);
            r05_alloc_chars("_rest", 5);
            r05_alloc_close_call(p+38);
            r05_alloc_close_call(p+39);
            r05_push_stack(p[39]);
            r05_push_stack(p[36]);
            r05_push_stack(p[38]);
            r05_push_stack(p[37]);
            r05_push_context(p, 36);
            r05_splice_from_freelist(p[2]);
            return;

  case 3:
            r05_pop_context(p, 36);
            p[36] = arg_begin;
            p[37] = arg_begin->next;
            p[38] = arg_end;

            do {
              /* t.UsedVars: 3 */
              /* e.Items: 5 */
              /* e.Pattern: 13 */
              /* e.ItemsAndHoles: 15 */
              /* t.SrcPos: 17 */
              /* e.Index: 20 */
              /* t.UsedVars1: 25 */
              /* e.eX_fix: 27 */
              /* t.UsedVars2: 32 */
              /* e.tX_next: 34 */
              /* t.UsedVars3: 39 */
              /* e.eX_rest: 41 */
              /* t.UsedVars3 e.eX_rest */
              if (! r05_tvar_left(p+39, p[37], p[38]))
                continue;
              r05_close_evar(p+41, p[40], p[38]);

              r05_reset_allocator();
              r05_alloc_open_bracket(p+43);
              r05_alloc_insert_pos(p+44);
              r05_alloc_open_bracket(p+45);
              r05_alloc_function(&r05f_Brackets);
              r05_alloc_open_bracket(p+46);
              r05_alloc_function(&r05f_Variable);
              r05_alloc_insert_pos(p+47);
              r05_alloc_close_bracket(p+48);
              r05_alloc_open_bracket(p+49);
              r05_alloc_function(&r05f_Variable);
              r05_alloc_tvar(p+17);
              r05_alloc_insert_pos(p+50);
              r05_alloc_close_bracket(p+51);
              r05_alloc_close_bracket(p+52);
              r05_alloc_open_bracket(p+53);
              r05_alloc_function(&r05f_Variable);
              r05_alloc_tvar(p+17);
              r05_alloc_insert_pos(p+54);
              r05_alloc_close_bracket(p+55);
              r05_alloc_open_call(p+56);
              r05_alloc_function(&r05f_PassiveHoles);
              r05_alloc_insert_pos(p+57);
              r05_alloc_close_call(p+58);
              r05_alloc_close_bracket(p+59);
              r05_link_brackets(p[43], p[59]);
              r05_push_stack(p[58]);
              r05_push_stack(p[56]);
              r05_link_brackets(p[53], p[55]);
              r05_link_brackets(p[45], p[52]);
              r05_link_brackets(p[49], p[51]);
              r05_link_brackets(p[46], p[48]);
              r05_splice_evar(p[44], p+5);
              r05_splice_tvar(p[47], p+17);
              r05_splice_evar(p[47], p+27);
              r05_splice_evar(p[50], p+34);
              r05_splice_evar(p[54], p+41);
              r05_splice_tvar(p[57], p+39);
              r05_splice_evar(p[57], p+15);
              r05_splice_from_freelist(p[0]);
              r05_splice_to_freelist(p[0], p[2]);
              return;
            } while (0);
            r05_splice_to_freelist(p[36], p[38]);
          } while (0);
          r05_splice_to_freelist(p[29], p[31]);
        } while (0);
        r05_splice_to_freelist(p[22], p[24]);
      } while (r05_open_evar_advance(p+5, p[2]));
      r05_stop_e_loop();
    } while (0);

    r05_recognition_impossible();
  }
}

R05_DEFINE_LOCAL_FUNCTION(T3, "T3") {
  R05_DEFINE_COND_FUNCTION(T3, "T3$1", 1)
  struct r05_node *p[40] = { 0 };

  r05_this_is_generated_function();
  switch (arg_begin->next->info.function->resume_entry >> 1) {
  case 0:
    p[0] = arg_begin;
    p[1] = arg_begin->next;
    p[2] = arg_end;

    do {
      /* t.UsedVars: 3 */
      /* e.Items: 5 */
      /* e.Pattern: 13 */
      /* e.ItemsAndHoles: 15 */
      /* t.SrcPos: 17 */
      /* e.Index: 20 */
      /* t.UsedVars e.Items (HOLE (Variable t.SrcPos 'e' e.Index) e.Pattern) e.ItemsAndHoles */
      if (! r05_tvar_left(p+3, p[1], p[2]))
        continue;
      p[5] = NULL;
      p[6] = p[4];
      do {
        r05_start_e_loop();
        if (! r05_brackets_left(p+7, p[6], p[2]))
          continue;
        if (! r05_function_left(p+9, p[7], p[8], &r05f_HOLE))
          continue;
        if (! r05_brackets_left(p+10, p[9], p[8]))
          continue;
        if (! r05_function_left(p+12, p[10], p[11], &r05f_Variable))
          continue;
        r05_close_evar(p+13, p[11], p[8]);
        r05_close_evar(p+15, p[8], p[2]);
        if (! r05_tvar_left(p+17, p[12], p[11]))
          continue;
        if (! r05_char_left(p+19, p[18], p[11], 'e'))
          continue;
        r05_close_evar(p+20, p[19], p[11]);

        r05_reset_allocator();
        r05_alloc_open_call(p+22);
        r05_alloc_function(&c1);
        r05_alloc_open_call(p+23);
        r05_alloc_function(&r05f_NewName);
        r05_alloc_tvar(p+3);
        r05_alloc_char('e');
        r05_alloc_evar(p+20);
        r05_alloc_chars("_fix", 4);
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
          /* t.UsedVars: 3 */
          /* e.Items: 5 */
          /* e.Pattern: 13 */
          /* e.ItemsAndHoles: 15 */
          /* t.SrcPos: 17 */
          /* e.Index: 20 */
          /* t.UsedVars1: 25 */
          /* e.eX_fix: 27 */
          /* t.UsedVars1 e.eX_fix */
          if (! r05_tvar_left(p+25, p[23], p[24]))
            continue;
          r05_close_evar(p+27, p[26], p[24]);

          r05_reset_allocator();
          r05_alloc_open_bracket(p+29);
          r05_alloc_insert_pos(p+30);
          r05_alloc_open_bracket(p+31);
          r05_alloc_function(&r05f_Brackets);
          r05_alloc_open_bracket(p+32);
          r05_alloc_function(&r05f_Variable);
          r05_alloc_insert_pos(p+33);
          r05_alloc_close_bracket(p+34);
          r05_alloc_close_bracket(p+35);
          r05_alloc_open_call(p+36);
          r05_alloc_function(&r05f_PassiveHoles);
          r05_alloc_insert_pos(p+37);
          r05_alloc_close_call(p+38);
          r05_alloc_close_bracket(p+39);
          r05_link_brackets(p[29], p[39]);
          r05_push_stack(p[38]);
          r05_push_stack(p[36]);
          r05_link_brackets(p[31], p[35]);
          r05_link_brackets(p[32], p[34]);
          r05_splice_evar(p[30], p+5);
          r05_splice_tvar(p[33], p+17);
          r05_splice_evar(p[33], p+27);
          r05_splice_tvar(p[37], p+25);
          r05_splice_evar(p[37], p+15);
          r05_splice_from_freelist(p[0]);
          r05_splice_to_freelist(p[0], p[2]);
          return;
        } while (0);
        r05_splice_to_freelist(p[22], p[24]);
      } while (r05_open_evar_advance(p+5, p[2]));
      r05_stop_e_loop();
    } while (0);

    r05_recognition_impossible();
  }
}

R05_DEFINE_LOCAL_FUNCTION(T4, "T4") {
  R05_DEFINE_COND_FUNCTION(T4, "T4$1", 1)
  struct r05_node *p[38] = { 0 };

  r05_this_is_generated_function();
  switch (arg_begin->next->info.function->resume_entry >> 1) {
  case 0:
    p[0] = arg_begin;
    p[1] = arg_begin->next;
    p[2] = arg_end;

    do {
      /* t.UsedVars: 3 */
      /* e.Items: 5 */
      /* e.Pattern: 13 */
      /* e.ItemsAndHoles: 15 */
      /* t.SrcPos: 17 */
      /* e.Index: 20 */
      /* t.UsedVars e.Items (HOLE (Variable t.SrcPos 'e' e.Index) e.Pattern) e.ItemsAndHoles */
      if (! r05_tvar_left(p+3, p[1], p[2]))
        continue;
      p[5] = NULL;
      p[6] = p[4];
      do {
        r05_start_e_loop();
        if (! r05_brackets_left(p+7, p[6], p[2]))
          continue;
        if (! r05_function_left(p+9, p[7], p[8], &r05f_HOLE))
          continue;
        if (! r05_brackets_left(p+10, p[9], p[8]))
          continue;
        if (! r05_function_left(p+12, p[10], p[11], &r05f_Variable))
          continue;
        r05_close_evar(p+13, p[11], p[8]);
        r05_close_evar(p+15, p[8], p[2]);
        if (! r05_tvar_left(p+17, p[12], p[11]))
          continue;
        if (! r05_char_left(p+19, p[18], p[11], 'e'))
          continue;
        r05_close_evar(p+20, p[19], p[11]);

        r05_reset_allocator();
        r05_alloc_open_call(p+22);
        r05_alloc_function(&c1);
        r05_alloc_open_call(p+23);
        r05_alloc_function(&r05f_NewName);
        r05_alloc_tvar(p+3);
        r05_alloc_char('e');
        r05_alloc_evar(p+20);
        r05_alloc_chars("_fix", 4);
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
          /* t.UsedVars: 3 */
          /* e.Items: 5 */
          /* e.Pattern: 13 */
          /* e.ItemsAndHoles: 15 */
          /* t.SrcPos: 17 */
          /* e.Index: 20 */
          /* t.UsedVars1: 25 */
          /* e.eX_fix: 27 */
          /* t.UsedVars1 e.eX_fix */
          if (! r05_tvar_left(p+25, p[23], p[24]))
            continue;
          r05_close_evar(p+27, p[26], p[24]);

          r05_reset_allocator();
          r05_alloc_open_bracket(p+29);
          r05_alloc_insert_pos(p+30);
          r05_alloc_open_bracket(p+31);
          r05_alloc_function(&r05f_Variable);
          r05_alloc_insert_pos(p+32);
          r05_alloc_close_bracket(p+33);
          r05_alloc_open_call(p+34);
          r05_alloc_function(&r05f_PassiveHoles);
          r05_alloc_insert_pos(p+35);
          r05_alloc_close_call(p+36);
          r05_alloc_close_bracket(p+37);
          r05_link_brackets(p[29], p[37]);
          r05_push_stack(p[36]);
          r05_push_stack(p[34]);
          r05_link_brackets(p[31], p[33]);
          r05_splice_evar(p[30], p+5);
          r05_splice_tvar(p[32], p+17);
          r05_splice_evar(p[32], p+27);
          r05_splice_tvar(p[35], p+25);
          r05_splice_evar(p[35], p+15);
          r05_splice_from_freelist(p[0]);
          r05_splice_to_freelist(p[0], p[2]);
          return;
        } while (0);
        r05_splice_to_freelist(p[22], p[24]);
      } while (r05_open_evar_advance(p+5, p[2]));
      r05_stop_e_loop();
    } while (0);

    r05_recognition_impossible();
  }
}

R05_DEFINE_LOCAL_FUNCTION(T5, "T5") {
  R05_DEFINE_COND_FUNCTION(T5, "T5$1", 1)
  struct r05_node *p[49] = { 0 };

  r05_this_is_generated_function();
  switch (arg_begin->next->info.function->resume_entry >> 1) {
  case 0:
    p[0] = arg_begin;
    p[1] = arg_begin->next;
    p[2] = arg_end;

    do {
      /* t.UsedVars: 3 */
      /* e.Items: 5 */
      /* e.Pattern: 13 */
      /* e.ItemsAndHoles: 15 */
      /* t.SrcPos: 17 */
      /* e.Index: 20 */
      /* t.UsedVars e.Items (HOLE (Variable t.SrcPos 'e' e.Index) e.Pattern) e.ItemsAndHoles */
      if (! r05_tvar_left(p+3, p[1], p[2]))
        continue;
      p[5] = NULL;
      p[6] = p[4];
      do {
        r05_start_e_loop();
        if (! r05_brackets_left(p+7, p[6], p[2]))
          continue;
        if (! r05_function_left(p+9, p[7], p[8], &r05f_HOLE))
          continue;
        if (! r05_brackets_left(p+10, p[9], p[8]))
          continue;
        if (! r05_function_left(p+12, p[10], p[11], &r05f_Variable))
          continue;
        r05_close_evar(p+13, p[11], p[8]);
        r05_close_evar(p+15, p[8], p[2]);
        if (! r05_tvar_left(p+17, p[12], p[11]))
          continue;
        if (! r05_char_left(p+19, p[18], p[11], 'e'))
          continue;
        r05_close_evar(p+20, p[19], p[11]);

        r05_reset_allocator();
        r05_alloc_open_call(p+22);
        r05_alloc_function(&c1);
        r05_alloc_open_call(p+23);
        r05_alloc_function(&r05f_T5m_sub);
        r05_alloc_tvar(p+3);
        r05_alloc_tvar(p+17);
        r05_alloc_evar(p+20);
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
          /* t.UsedVars: 3 */
          /* e.Items: 5 */
          /* e.Pattern: 13 */
          /* e.ItemsAndHoles: 15 */
          /* t.SrcPos: 17 */
          /* e.Index: 20 */
          /* t.SourceVar: 27 */
          /* t.eX_fix: 29 */
          /* t.eX_var: 31 */
          /* (t.SourceVar t.eX_fix t.eX_var) */
          if (! r05_brackets_left(p+25, p[23], p[24]))
            continue;
          if (! r05_empty_hole(p[26], p[24]))
            continue;
          if (! r05_tvar_left(p+27, p[25], p[26]))
            continue;
          if (! r05_tvar_left(p+29, p[28], p[26]))
            continue;
          if (! r05_tvar_left(p+31, p[30], p[26]))
            continue;
          if (! r05_empty_hole(p[32], p[26]))
            continue;

          r05_reset_allocator();
          r05_alloc_open_bracket(p+33);
          r05_alloc_insert_pos(p+34);
          r05_alloc_open_bracket(p+35);
          r05_alloc_function(&r05f_Brackets);
          r05_alloc_insert_pos(p+36);
          r05_alloc_close_bracket(p+37);
          r05_alloc_insert_pos(p+38);
          r05_alloc_open_call(p+39);
          r05_alloc_function(&r05f_Substitute);
          r05_alloc_insert_pos(p+40);
          r05_alloc_open_call(p+41);
          r05_alloc_function(&r05f_T5m_UnHole);
          r05_alloc_insert_pos(p+42);
          r05_alloc_close_call(p+43);
          r05_alloc_open_bracket(p+44);
          r05_alloc_insert_pos(p+45);
          r05_alloc_tvar(p+29);
          r05_alloc_tvar(p+31);
          r05_alloc_close_bracket(p+46);
          r05_alloc_close_call(p+47);
          r05_alloc_close_bracket(p+48);
          r05_link_brackets(p[33], p[48]);
          r05_push_stack(p[47]);
          r05_push_stack(p[39]);
          r05_link_brackets(p[44], p[46]);
          r05_push_stack(p[43]);
          r05_push_stack(p[41]);
          r05_link_brackets(p[35], p[37]);
          r05_splice_evar(p[34], p+5);
          r05_splice_tvar(p[36], p+29);
          r05_splice_tvar(p[38], p+31);
          r05_splice_evar(p[40], p+13);
          r05_splice_evar(p[42], p+15);
          r05_splice_tvar(p[45], p+27);
          r05_splice_from_freelist(p[0]);
          r05_splice_to_freelist(p[0], p[2]);
          return;
        } while (0);
        r05_splice_to_freelist(p[22], p[24]);
      } while (r05_open_evar_advance(p+5, p[2]));
      r05_stop_e_loop();
    } while (0);

    r05_recognition_impossible();
  }
}

R05_DEFINE_LOCAL_FUNCTION(T5m_UnHole, "T5-UnHole") {
  struct r05_node *p[16] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /* e.Items: 3 */
    /* e.Pattern: 8 */
    /* e.ItemsAndHoles: 10 */
    /* e.Items (HOLE e.Pattern) e.ItemsAndHoles */
    p[3] = NULL;
    p[4] = p[1];
    do {
      r05_start_e_loop();
      if (! r05_brackets_left(p+5, p[4], p[2]))
        continue;
      if (! r05_function_left(p+7, p[5], p[6], &r05f_HOLE))
        continue;
      r05_close_evar(p+8, p[7], p[6]);
      r05_close_evar(p+10, p[6], p[2]);

      r05_reset_allocator();
      r05_alloc_insert_pos(p+12);
      r05_alloc_open_call(p+13);
      r05_alloc_function(&r05f_T5m_UnHole);
      r05_alloc_insert_pos(p+14);
      r05_alloc_close_call(p+15);
      r05_push_stack(p[15]);
      r05_push_stack(p[13]);
      r05_splice_evar(p[12], p+3);
      r05_splice_evar(p[12], p+8);
      r05_splice_evar(p[14], p+10);
      r05_splice_from_freelist(p[0]);
      r05_splice_to_freelist(p[0], p[2]);
      return;
    } while (r05_open_evar_advance(p+3, p[2]));
    r05_stop_e_loop();
  } while (0);

  do {
    /* e.Items: 3 */
    /* e.Items */
    r05_close_evar(p+3, p[1], p[2]);

    r05_reset_allocator();
    r05_alloc_insert_pos(p+5);
    r05_splice_evar(p[5], p+3);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);
}

R05_DEFINE_LOCAL_FUNCTION(T5m_sub, "T5-sub") {
  R05_DEFINE_COND_FUNCTION(T5m_sub, "T5-sub$1", 1)
  R05_DEFINE_COND_FUNCTION(T5m_sub, "T5-sub$2", 2)
  struct r05_node *p[35] = { 0 };

  r05_this_is_generated_function();
  switch (arg_begin->next->info.function->resume_entry >> 1) {
  case 0:
    p[0] = arg_begin;
    p[1] = arg_begin->next;
    p[2] = arg_end;

    do {
      /* t.UsedVars: 3 */
      /* t.SrcPos: 5 */
      /* e.Index: 7 */
      /* t.UsedVars t.SrcPos e.Index */
      if (! r05_tvar_left(p+3, p[1], p[2]))
        continue;
      if (! r05_tvar_left(p+5, p[4], p[2]))
        continue;
      r05_close_evar(p+7, p[6], p[2]);

      r05_reset_allocator();
      r05_alloc_open_call(p+9);
      r05_alloc_function(&c1);
      r05_alloc_open_call(p+10);
      r05_alloc_function(&r05f_NewName);
      r05_alloc_tvar(p+3);
      r05_alloc_char('e');
      r05_alloc_evar(p+7);
      r05_alloc_chars("_fix", 4);
      r05_alloc_close_call(p+11);
      r05_alloc_close_call(p+12);
      r05_push_stack(p[12]);
      r05_push_stack(p[9]);
      r05_push_stack(p[11]);
      r05_push_stack(p[10]);
      r05_push_context(p, 9);
      r05_splice_from_freelist(p[2]);
      return;

  case 1:
      r05_pop_context(p, 9);
      p[9] = arg_begin;
      p[10] = arg_begin->next;
      p[11] = arg_end;

      do {
        /* t.UsedVars: 3 */
        /* t.SrcPos: 5 */
        /* e.Index: 7 */
        /* t.UsedVars1: 12 */
        /* e.eX_fix: 14 */
        /* t.UsedVars1 e.eX_fix */
        if (! r05_tvar_left(p+12, p[10], p[11]))
          continue;
        r05_close_evar(p+14, p[13], p[11]);

        r05_reset_allocator();
        r05_alloc_open_call(p+16);
        r05_alloc_function(&c2);
        r05_alloc_open_call(p+17);
        r05_alloc_function(&r05f_NewName);
        r05_alloc_tvar(p+3);
        r05_alloc_char('e');
        r05_alloc_evar(p+7);
        r05_alloc_chars("_var", 4);
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
          /* t.UsedVars: 3 */
          /* t.SrcPos: 5 */
          /* e.Index: 7 */
          /* t.UsedVars1: 12 */
          /* e.eX_fix: 14 */
          /* t.UsedVars2: 19 */
          /* e.eX_var: 21 */
          /* t.UsedVars2 e.eX_var */
          if (! r05_tvar_left(p+19, p[17], p[18]))
            continue;
          r05_close_evar(p+21, p[20], p[18]);

          r05_reset_allocator();
          r05_alloc_open_bracket(p+23);
          r05_alloc_open_bracket(p+24);
          r05_alloc_function(&r05f_Variable);
          r05_alloc_insert_pos(p+25);
          r05_alloc_char('e');
          r05_alloc_insert_pos(p+26);
          r05_alloc_close_bracket(p+27);
          r05_alloc_open_bracket(p+28);
          r05_alloc_function(&r05f_Variable);
          r05_alloc_tvar(p+5);
          r05_alloc_insert_pos(p+29);
          r05_alloc_close_bracket(p+30);
          r05_alloc_open_bracket(p+31);
          r05_alloc_function(&r05f_Variable);
          r05_alloc_tvar(p+5);
          r05_alloc_insert_pos(p+32);
          r05_alloc_close_bracket(p+33);
          r05_alloc_close_bracket(p+34);
          r05_link_brackets(p[23], p[34]);
          r05_link_brackets(p[31], p[33]);
          r05_link_brackets(p[28], p[30]);
          r05_link_brackets(p[24], p[27]);
          r05_splice_tvar(p[25], p+5);
          r05_splice_evar(p[26], p+7);
          r05_splice_evar(p[29], p+14);
          r05_splice_evar(p[32], p+21);
          r05_splice_from_freelist(p[0]);
          r05_splice_to_freelist(p[0], p[2]);
          return;
        } while (0);
        r05_splice_to_freelist(p[16], p[18]);
      } while (0);
      r05_splice_to_freelist(p[9], p[11]);
    } while (0);

    r05_recognition_impossible();
  }
}

R05_DEFINE_LOCAL_FUNCTION(Substitute, "Substitute") {
  struct r05_node *p[39] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /* e.Tail: 11 */
    /* e.Expr: 13 */
    /* t.SrcPos1: 15 */
    /* s.Type: 17, 22 */
    /* e.Index: 18, 20 */
    /* t.SrcPos2: 23 */
    /* (Variable t.SrcPos1 s.Type e.Index) e.Tail ((Variable t.SrcPos2 s.Type e.Index) e.Expr) */
    if (! r05_brackets_left(p+3, p[1], p[2]))
      continue;
    if (! r05_function_left(p+5, p[3], p[4], &r05f_Variable))
      continue;
    if (! r05_brackets_right(p+6, p[4], p[2]))
      continue;
    if (! r05_brackets_left(p+8, p[6], p[7]))
      continue;
    if (! r05_function_left(p+10, p[8], p[9], &r05f_Variable))
      continue;
    r05_close_evar(p+11, p[4], p[6]);
    r05_close_evar(p+13, p[9], p[7]);
    if (! r05_tvar_left(p+15, p[5], p[4]))
      continue;
    if (! r05_svar_left(p+17, p[16], p[4]))
      continue;
    r05_close_evar(p+18, p[17], p[4]);
    if (! r05_repeated_evar_right(p+20, p[10], p[9], p+18))
      continue;
    if (! r05_repeated_svar_right(p+22, p[10], r05_evar_true_begin(p+20), p+17))
      continue;
    if (! r05_tvar_left(p+23, p[10], p[22]))
      continue;
    if (! r05_empty_hole(p[24], p[22]))
      continue;

    r05_reset_allocator();
    r05_alloc_insert_pos(p+25);
    r05_alloc_open_call(p+26);
    r05_alloc_function(&r05f_Substitute);
    r05_alloc_insert_pos(p+27);
    r05_alloc_open_bracket(p+28);
    r05_alloc_open_bracket(p+29);
    r05_alloc_function(&r05f_Variable);
    r05_alloc_insert_pos(p+30);
    r05_alloc_svar(p+17);
    r05_alloc_insert_pos(p+31);
    r05_alloc_close_bracket(p+32);
    r05_alloc_evar(p+13);
    r05_alloc_close_bracket(p+33);
    r05_alloc_close_call(p+34);
    r05_push_stack(p[34]);
    r05_push_stack(p[26]);
    r05_link_brackets(p[28], p[33]);
    r05_link_brackets(p[29], p[32]);
    r05_splice_evar(p[25], p+13);
    r05_splice_evar(p[27], p+11);
    r05_splice_tvar(p[30], p+23);
    r05_splice_evar(p[31], p+18);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  do {
    /* e.InBrackets: 8 */
    /* e.Tail: 10 */
    /* t.Variable: 12 */
    /* e.Expr: 14 */
    /* (Brackets e.InBrackets) e.Tail (t.Variable e.Expr) */
    if (! r05_brackets_left(p+3, p[1], p[2]))
      continue;
    if (! r05_function_left(p+5, p[3], p[4], &r05f_Brackets))
      continue;
    if (! r05_brackets_right(p+6, p[4], p[2]))
      continue;
    r05_close_evar(p+8, p[5], p[4]);
    r05_close_evar(p+10, p[4], p[6]);
    if (! r05_tvar_left(p+12, p[6], p[7]))
      continue;
    r05_close_evar(p+14, p[13], p[7]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+16);
    r05_alloc_function(&r05f_Brackets);
    r05_alloc_open_call(p+17);
    r05_alloc_function(&r05f_Substitute);
    r05_alloc_insert_pos(p+18);
    r05_alloc_open_bracket(p+19);
    r05_alloc_insert_pos(p+20);
    r05_alloc_close_bracket(p+21);
    r05_alloc_close_call(p+22);
    r05_alloc_close_bracket(p+23);
    r05_alloc_open_call(p+24);
    r05_alloc_function(&r05f_Substitute);
    r05_alloc_insert_pos(p+25);
    r05_alloc_open_bracket(p+26);
    r05_alloc_tvar(p+12);
    r05_alloc_evar(p+14);
    r05_alloc_close_bracket(p+27);
    r05_alloc_close_call(p+28);
    r05_push_stack(p[28]);
    r05_push_stack(p[24]);
    r05_link_brackets(p[26], p[27]);
    r05_link_brackets(p[16], p[23]);
    r05_push_stack(p[22]);
    r05_push_stack(p[17]);
    r05_link_brackets(p[19], p[21]);
    r05_splice_evar(p[18], p+8);
    r05_splice_tvar(p[20], p+12);
    r05_splice_evar(p[20], p+14);
    r05_splice_evar(p[25], p+10);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  do {
    /* e.Tail: 8 */
    /* t.SrcPos: 10 */
    /* e.FuncName: 14 */
    /* e.InBrackets: 16 */
    /* t.Variable: 18 */
    /* e.Expr: 20 */
    /* (Call t.SrcPos (e.FuncName) e.InBrackets) e.Tail (t.Variable e.Expr) */
    if (! r05_brackets_left(p+3, p[1], p[2]))
      continue;
    if (! r05_function_left(p+5, p[3], p[4], &r05f_Call))
      continue;
    if (! r05_brackets_right(p+6, p[4], p[2]))
      continue;
    r05_close_evar(p+8, p[4], p[6]);
    if (! r05_tvar_left(p+10, p[5], p[4]))
      continue;
    if (! r05_brackets_left(p+12, p[11], p[4]))
      continue;
    r05_close_evar(p+14, p[12], p[13]);
    r05_close_evar(p+16, p[13], p[4]);
    if (! r05_tvar_left(p+18, p[6], p[7]))
      continue;
    r05_close_evar(p+20, p[19], p[7]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+22);
    r05_alloc_function(&r05f_Call);
    r05_alloc_insert_pos(p+23);
    r05_alloc_open_bracket(p+24);
    r05_alloc_insert_pos(p+25);
    r05_alloc_close_bracket(p+26);
    r05_alloc_open_call(p+27);
    r05_alloc_function(&r05f_Substitute);
    r05_alloc_insert_pos(p+28);
    r05_alloc_open_bracket(p+29);
    r05_alloc_insert_pos(p+30);
    r05_alloc_close_bracket(p+31);
    r05_alloc_close_call(p+32);
    r05_alloc_close_bracket(p+33);
    r05_alloc_open_call(p+34);
    r05_alloc_function(&r05f_Substitute);
    r05_alloc_insert_pos(p+35);
    r05_alloc_open_bracket(p+36);
    r05_alloc_tvar(p+18);
    r05_alloc_evar(p+20);
    r05_alloc_close_bracket(p+37);
    r05_alloc_close_call(p+38);
    r05_push_stack(p[38]);
    r05_push_stack(p[34]);
    r05_link_brackets(p[36], p[37]);
    r05_link_brackets(p[22], p[33]);
    r05_push_stack(p[32]);
    r05_push_stack(p[27]);
    r05_link_brackets(p[29], p[31]);
    r05_link_brackets(p[24], p[26]);
    r05_splice_tvar(p[23], p+10);
    r05_splice_evar(p[25], p+14);
    r05_splice_evar(p[28], p+16);
    r05_splice_tvar(p[30], p+18);
    r05_splice_evar(p[30], p+20);
    r05_splice_evar(p[35], p+8);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  do {
    /* t.OtherItem: 5 */
    /* e.Tail: 7 */
    /* t.Variable: 9 */
    /* e.Expr: 11 */
    /* t.OtherItem e.Tail (t.Variable e.Expr) */
    if (! r05_brackets_right(p+3, p[1], p[2]))
      continue;
    if (! r05_tvar_left(p+5, p[1], p[3]))
      continue;
    r05_close_evar(p+7, p[6], p[3]);
    if (! r05_tvar_left(p+9, p[3], p[4]))
      continue;
    r05_close_evar(p+11, p[10], p[4]);

    r05_reset_allocator();
    r05_alloc_insert_pos(p+13);
    r05_alloc_open_call(p+14);
    r05_alloc_function(&r05f_Substitute);
    r05_alloc_insert_pos(p+15);
    r05_alloc_open_bracket(p+16);
    r05_alloc_insert_pos(p+17);
    r05_alloc_close_bracket(p+18);
    r05_alloc_close_call(p+19);
    r05_push_stack(p[19]);
    r05_push_stack(p[14]);
    r05_link_brackets(p[16], p[18]);
    r05_splice_tvar(p[13], p+5);
    r05_splice_evar(p[15], p+7);
    r05_splice_tvar(p[17], p+9);
    r05_splice_evar(p[17], p+11);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  do {
    /* t.Variable: 5 */
    /* e.Expr: 7 */
    /* (t.Variable e.Expr) */
    if (! r05_brackets_left(p+3, p[1], p[2]))
      continue;
    if (! r05_empty_hole(p[4], p[2]))
      continue;
    if (! r05_tvar_left(p+5, p[3], p[4]))
      continue;
    r05_close_evar(p+7, p[6], p[4]);

    r05_reset_allocator();
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(T6, "T6") {
  R05_DEFINE_COND_FUNCTION(T6, "T6$1", 1)
  R05_DEFINE_COND_FUNCTION(T6, "T6$2", 2)
  struct r05_node *p[50] = { 0 };

  r05_this_is_generated_function();
  switch (arg_begin->next->info.function->resume_entry >> 1) {
  case 0:
    p[0] = arg_begin;
    p[1] = arg_begin->next;
    p[2] = arg_end;

    do {
      /* t.UsedVars: 3 */
      /* e.Items: 5 */
      /* e.Pattern: 13 */
      /* e.ItemsAndHoles: 15 */
      /* t.SrcPos: 17 */
      /* e.Index: 20 */
      /* t.UsedVars e.Items (HOLE (Variable t.SrcPos 'e' e.Index) e.Pattern) e.ItemsAndHoles */
      if (! r05_tvar_left(p+3, p[1], p[2]))
        continue;
      p[5] = NULL;
      p[6] = p[4];
      do {
        r05_start_e_loop();
        if (! r05_brackets_left(p+7, p[6], p[2]))
          continue;
        if (! r05_function_left(p+9, p[7], p[8], &r05f_HOLE))
          continue;
        if (! r05_brackets_left(p+10, p[9], p[8]))
          continue;
        if (! r05_function_left(p+12, p[10], p[11], &r05f_Variable))
          continue;
        r05_close_evar(p+13, p[11], p[8]);
        r05_close_evar(p+15, p[8], p[2]);
        if (! r05_tvar_left(p+17, p[12], p[11]))
          continue;
        if (! r05_char_left(p+19, p[18], p[11], 'e'))
          continue;
        r05_close_evar(p+20, p[19], p[11]);

        r05_reset_allocator();
        r05_alloc_open_call(p+22);
        r05_alloc_function(&c1);
        r05_alloc_open_call(p+23);
        r05_alloc_function(&r05f_NewName);
        r05_alloc_tvar(p+3);
        r05_alloc_char('e');
        r05_alloc_evar(p+20);
        r05_alloc_chars("_fix", 4);
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
          /* t.UsedVars: 3 */
          /* e.Items: 5 */
          /* e.Pattern: 13 */
          /* e.ItemsAndHoles: 15 */
          /* t.SrcPos: 17 */
          /* e.Index: 20 */
          /* t.UsedVars1: 25 */
          /* e.eX_fix: 27 */
          /* t.UsedVars1 e.eX_fix */
          if (! r05_tvar_left(p+25, p[23], p[24]))
            continue;
          r05_close_evar(p+27, p[26], p[24]);

          r05_reset_allocator();
          r05_alloc_open_call(p+29);
          r05_alloc_function(&c2);
          r05_alloc_open_call(p+30);
          r05_alloc_function(&r05f_NewName);
          r05_alloc_tvar(p+25);
          r05_alloc_char('e');
          r05_alloc_evar(p+20);
          r05_alloc_chars("_rest", 5);
          r05_alloc_close_call(p+31);
          r05_alloc_close_call(p+32);
          r05_push_stack(p[32]);
          r05_push_stack(p[29]);
          r05_push_stack(p[31]);
          r05_push_stack(p[30]);
          r05_push_context(p, 29);
          r05_splice_from_freelist(p[2]);
          return;

  case 2:
          r05_pop_context(p, 29);
          p[29] = arg_begin;
          p[30] = arg_begin->next;
          p[31] = arg_end;

          do {
            /* t.UsedVars: 3 */
            /* e.Items: 5 */
            /* e.Pattern: 13 */
            /* e.ItemsAndHoles: 15 */
            /* t.SrcPos: 17 */
            /* e.Index: 20 */
            /* t.UsedVars1: 25 */
            /* e.eX_fix: 27 */
            /* t.UsedVars2: 32 */
            /* e.eX_rest: 34 */
            /* t.UsedVars2 e.eX_rest */
            if (! r05_tvar_left(p+32, p[30], p[31]))
              continue;
            r05_close_evar(p+34, p[33], p[31]);

            r05_reset_allocator();
            r05_alloc_open_bracket(p+36);
            r05_alloc_insert_pos(p+37);
            r05_alloc_open_bracket(p+38);
            r05_alloc_function(&r05f_Brackets);
            r05_alloc_open_bracket(p+39);
            r05_alloc_function(&r05f_Variable);
            r05_alloc_insert_pos(p+40);
            r05_alloc_close_bracket(p+41);
            r05_alloc_close_bracket(p+42);
            r05_alloc_open_bracket(p+43);
            r05_alloc_function(&r05f_Variable);
            r05_alloc_tvar(p+17);
            r05_alloc_insert_pos(p+44);
            r05_alloc_close_bracket(p+45);
            r05_alloc_open_call(p+46);
            r05_alloc_function(&r05f_PassiveHoles);
            r05_alloc_insert_pos(p+47);
            r05_alloc_close_call(p+48);
            r05_alloc_close_bracket(p+49);
            r05_link_brackets(p[36], p[49]);
            r05_push_stack(p[48]);
            r05_push_stack(p[46]);
            r05_link_brackets(p[43], p[45]);
            r05_link_brackets(p[38], p[42]);
            r05_link_brackets(p[39], p[41]);
            r05_splice_evar(p[37], p+5);
            r05_splice_tvar(p[40], p+17);
            r05_splice_evar(p[40], p+27);
            r05_splice_evar(p[44], p+34);
            r05_splice_tvar(p[47], p+32);
            r05_splice_evar(p[47], p+15);
            r05_splice_from_freelist(p[0]);
            r05_splice_to_freelist(p[0], p[2]);
            return;
          } while (0);
          r05_splice_to_freelist(p[29], p[31]);
        } while (0);
        r05_splice_to_freelist(p[22], p[24]);
      } while (r05_open_evar_advance(p+5, p[2]));
      r05_stop_e_loop();
    } while (0);

    r05_recognition_impossible();
  }
}

R05_DEFINE_LOCAL_FUNCTION(T7, "T7") {
  R05_DEFINE_COND_FUNCTION(T7, "T7$1", 1)
  R05_DEFINE_COND_FUNCTION(T7, "T7$2", 2)
  struct r05_node *p[48] = { 0 };

  r05_this_is_generated_function();
  switch (arg_begin->next->info.function->resume_entry >> 1) {
  case 0:
    p[0] = arg_begin;
    p[1] = arg_begin->next;
    p[2] = arg_end;

    do {
      /* t.UsedVars: 3 */
      /* e.Items: 5 */
      /* e.Pattern: 13 */
      /* e.ItemsAndHoles: 15 */
      /* t.SrcPos: 17 */
      /* e.Index: 20 */
      /* t.UsedVars e.Items (HOLE (Variable t.SrcPos 'e' e.Index) e.Pattern) e.ItemsAndHoles */
      if (! r05_tvar_left(p+3, p[1], p[2]))
        continue;
      p[5] = NULL;
      p[6] = p[4];
      do {
        r05_start_e_loop();
        if (! r05_brackets_left(p+7, p[6], p[2]))
          continue;
        if (! r05_function_left(p+9, p[7], p[8], &r05f_HOLE))
          continue;
        if (! r05_brackets_left(p+10, p[9], p[8]))
          continue;
        if (! r05_function_left(p+12, p[10], p[11], &r05f_Variable))
          continue;
        r05_close_evar(p+13, p[11], p[8]);
        r05_close_evar(p+15, p[8], p[2]);
        if (! r05_tvar_left(p+17, p[12], p[11]))
          continue;
        if (! r05_char_left(p+19, p[18], p[11], 'e'))
          continue;
        r05_close_evar(p+20, p[19], p[11]);

        r05_reset_allocator();
        r05_alloc_open_call(p+22);
        r05_alloc_function(&c1);
        r05_alloc_open_call(p+23);
        r05_alloc_function(&r05f_NewName);
        r05_alloc_tvar(p+3);
        r05_alloc_char('e');
        r05_alloc_evar(p+20);
        r05_alloc_chars("_fix", 4);
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
          /* t.UsedVars: 3 */
          /* e.Items: 5 */
          /* e.Pattern: 13 */
          /* e.ItemsAndHoles: 15 */
          /* t.SrcPos: 17 */
          /* e.Index: 20 */
          /* t.UsedVars1: 25 */
          /* e.eX_fix: 27 */
          /* t.UsedVars1 e.eX_fix */
          if (! r05_tvar_left(p+25, p[23], p[24]))
            continue;
          r05_close_evar(p+27, p[26], p[24]);

          r05_reset_allocator();
          r05_alloc_open_call(p+29);
          r05_alloc_function(&c2);
          r05_alloc_open_call(p+30);
          r05_alloc_function(&r05f_NewName);
          r05_alloc_tvar(p+25);
          r05_alloc_char('e');
          r05_alloc_evar(p+20);
          r05_alloc_chars("_rest", 5);
          r05_alloc_close_call(p+31);
          r05_alloc_close_call(p+32);
          r05_push_stack(p[32]);
          r05_push_stack(p[29]);
          r05_push_stack(p[31]);
          r05_push_stack(p[30]);
          r05_push_context(p, 29);
          r05_splice_from_freelist(p[2]);
          return;

  case 2:
          r05_pop_context(p, 29);
          p[29] = arg_begin;
          p[30] = arg_begin->next;
          p[31] = arg_end;

          do {
            /* t.UsedVars: 3 */
            /* e.Items: 5 */
            /* e.Pattern: 13 */
            /* e.ItemsAndHoles: 15 */
            /* t.SrcPos: 17 */
            /* e.Index: 20 */
            /* t.UsedVars1: 25 */
            /* e.eX_fix: 27 */
            /* t.UsedVars2: 32 */
            /* e.eX_rest: 34 */
            /* t.UsedVars2 e.eX_rest */
            if (! r05_tvar_left(p+32, p[30], p[31]))
              continue;
            r05_close_evar(p+34, p[33], p[31]);

            r05_reset_allocator();
            r05_alloc_open_bracket(p+36);
            r05_alloc_insert_pos(p+37);
            r05_alloc_open_bracket(p+38);
            r05_alloc_function(&r05f_Variable);
            r05_alloc_insert_pos(p+39);
            r05_alloc_close_bracket(p+40);
            r05_alloc_open_bracket(p+41);
            r05_alloc_function(&r05f_Variable);
            r05_alloc_tvar(p+17);
            r05_alloc_insert_pos(p+42);
            r05_alloc_close_bracket(p+43);
            r05_alloc_open_call(p+44);
            r05_alloc_function(&r05f_PassiveHoles);
            r05_alloc_insert_pos(p+45);
            r05_alloc_close_call(p+46);
            r05_alloc_close_bracket(p+47);
            r05_link_brackets(p[36], p[47]);
            r05_push_stack(p[46]);
            r05_push_stack(p[44]);
            r05_link_brackets(p[41], p[43]);
            r05_link_brackets(p[38], p[40]);
            r05_splice_evar(p[37], p+5);
            r05_splice_tvar(p[39], p+17);
            r05_splice_evar(p[39], p+27);
            r05_splice_evar(p[42], p+34);
            r05_splice_tvar(p[45], p+32);
            r05_splice_evar(p[45], p+15);
            r05_splice_from_freelist(p[0]);
            r05_splice_to_freelist(p[0], p[2]);
            return;
          } while (0);
          r05_splice_to_freelist(p[29], p[31]);
        } while (0);
        r05_splice_to_freelist(p[22], p[24]);
      } while (r05_open_evar_advance(p+5, p[2]));
      r05_stop_e_loop();
    } while (0);

    r05_recognition_impossible();
  }
}

R05_DEFINE_LOCAL_FUNCTION(T0, "T0") {
  struct r05_node *p[10] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /* e.Items: 3 */
    /* e.Items */
    r05_close_evar(p+3, p[1], p[2]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+5);
    r05_alloc_open_call(p+6);
    r05_alloc_function(&r05f_DoT0);
    r05_alloc_insert_pos(p+7);
    r05_alloc_close_call(p+8);
    r05_alloc_close_bracket(p+9);
    r05_link_brackets(p[5], p[9]);
    r05_push_stack(p[8]);
    r05_push_stack(p[6]);
    r05_splice_evar(p[7], p+3);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);
}

R05_DEFINE_LOCAL_FUNCTION(DoT0, "DoT0") {
  struct r05_node *p[22] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /* e.Tail: 6 */
    /* t.SrcPos: 8 */
    /* e.Index: 11 */
    /* (OpenE t.SrcPos 'e' e.Index) e.Tail */
    if (! r05_brackets_left(p+3, p[1], p[2]))
      continue;
    if (! r05_function_left(p+5, p[3], p[4], &r05f_OpenE))
      continue;
    r05_close_evar(p+6, p[4], p[2]);
    if (! r05_tvar_left(p+8, p[5], p[4]))
      continue;
    if (! r05_char_left(p+10, p[9], p[4], 'e'))
      continue;
    r05_close_evar(p+11, p[10], p[4]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+13);
    r05_alloc_function(&r05f_Brackets);
    r05_alloc_open_bracket(p+14);
    r05_alloc_function(&r05f_Variable);
    r05_alloc_insert_pos(p+15);
    r05_alloc_char('e');
    r05_alloc_insert_pos(p+16);
    r05_alloc_close_bracket(p+17);
    r05_alloc_close_bracket(p+18);
    r05_alloc_open_call(p+19);
    r05_alloc_function(&r05f_DoT0);
    r05_alloc_insert_pos(p+20);
    r05_alloc_close_call(p+21);
    r05_push_stack(p[21]);
    r05_push_stack(p[19]);
    r05_link_brackets(p[13], p[18]);
    r05_link_brackets(p[14], p[17]);
    r05_splice_tvar(p[15], p+8);
    r05_splice_evar(p[16], p+11);
    r05_splice_evar(p[20], p+6);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  do {
    /* e.InBrackets: 6 */
    /* e.Tail: 8 */
    /* (Brackets e.InBrackets) e.Tail */
    if (! r05_brackets_left(p+3, p[1], p[2]))
      continue;
    if (! r05_function_left(p+5, p[3], p[4], &r05f_Brackets))
      continue;
    r05_close_evar(p+6, p[5], p[4]);
    r05_close_evar(p+8, p[4], p[2]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+10);
    r05_alloc_function(&r05f_Brackets);
    r05_alloc_open_call(p+11);
    r05_alloc_function(&r05f_DoT0);
    r05_alloc_insert_pos(p+12);
    r05_alloc_close_call(p+13);
    r05_alloc_close_bracket(p+14);
    r05_alloc_open_call(p+15);
    r05_alloc_function(&r05f_DoT0);
    r05_alloc_insert_pos(p+16);
    r05_alloc_close_call(p+17);
    r05_push_stack(p[17]);
    r05_push_stack(p[15]);
    r05_link_brackets(p[10], p[14]);
    r05_push_stack(p[13]);
    r05_push_stack(p[11]);
    r05_splice_evar(p[12], p+6);
    r05_splice_evar(p[16], p+8);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  do {
    /* t.OtherItem: 3 */
    /* e.Tail: 5 */
    /* t.OtherItem e.Tail */
    if (! r05_tvar_left(p+3, p[1], p[2]))
      continue;
    r05_close_evar(p+5, p[4], p[2]);

    r05_reset_allocator();
    r05_alloc_insert_pos(p+7);
    r05_alloc_open_call(p+8);
    r05_alloc_function(&r05f_DoT0);
    r05_alloc_insert_pos(p+9);
    r05_alloc_close_call(p+10);
    r05_push_stack(p[10]);
    r05_push_stack(p[8]);
    r05_splice_tvar(p[7], p+3);
    r05_splice_evar(p[9], p+5);
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

R05_DEFINE_LOCAL_FUNCTION(ConditionSubFunctions, "ConditionSubFunctions") {
  struct r05_node *p[27] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /* e.Names: 7 */
    /* e.Prefix: 9 */
    /* t.ContName: 11 */
    /* e.Sentence: 13 */
    /* (e.Names) (e.Prefix) t.ContName e.Sentence */
    if (! r05_brackets_left(p+3, p[1], p[2]))
      continue;
    if (! r05_brackets_left(p+5, p[4], p[2]))
      continue;
    r05_close_evar(p+7, p[3], p[4]);
    r05_close_evar(p+9, p[5], p[6]);
    if (! r05_tvar_left(p+11, p[6], p[2]))
      continue;
    r05_close_evar(p+13, p[12], p[2]);

    r05_reset_allocator();
    r05_alloc_open_call(p+15);
    r05_alloc_function(&r05f_ConditionSubFunctionsm_SplitSentence);
    r05_alloc_open_bracket(p+16);
    r05_alloc_insert_pos(p+17);
    r05_alloc_close_bracket(p+18);
    r05_alloc_open_bracket(p+19);
    r05_alloc_insert_pos(p+20);
    r05_alloc_close_bracket(p+21);
    r05_alloc_insert_pos(p+22);
    r05_alloc_open_bracket(p+23);
    r05_alloc_insert_pos(p+24);
    r05_alloc_close_bracket(p+25);
    r05_alloc_evar(p+13);
    r05_alloc_close_call(p+26);
    r05_push_stack(p[26]);
    r05_push_stack(p[15]);
    r05_link_brackets(p[23], p[25]);
    r05_link_brackets(p[19], p[21]);
    r05_link_brackets(p[16], p[18]);
    r05_splice_evar(p[17], p+7);
    r05_splice_evar(p[20], p+9);
    r05_splice_tvar(p[22], p+11);
    r05_splice_evar(p[24], p+13);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(ConditionSubFunctionsm_SplitSentence, "ConditionSubFunctions-SplitSentence") {
  struct r05_node *p[62] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /* e.Names: 7 */
    /* e.Prefix: 9 */
    /* t.ContName: 11 */
    /* e.Sentence: 24 */
    /* e.Pattern: 26 */
    /* e.CondResult: 28 */
    /* e.CondPattern: 30 */
    /* e.SentenceTail: 32 */
    /* (e.Names) (e.Prefix) t.ContName (e.Sentence) (e.Pattern) (Condition (e.CondResult) (e.CondPattern)) e.SentenceTail */
    if (! r05_brackets_left(p+3, p[1], p[2]))
      continue;
    if (! r05_brackets_left(p+5, p[4], p[2]))
      continue;
    r05_close_evar(p+7, p[3], p[4]);
    r05_close_evar(p+9, p[5], p[6]);
    if (! r05_tvar_left(p+11, p[6], p[2]))
      continue;
    if (! r05_brackets_left(p+13, p[12], p[2]))
      continue;
    if (! r05_brackets_left(p+15, p[14], p[2]))
      continue;
    if (! r05_brackets_left(p+17, p[16], p[2]))
      continue;
    if (! r05_function_left(p+19, p[17], p[18], &r05f_Condition))
      continue;
    if (! r05_brackets_left(p+20, p[19], p[18]))
      continue;
    if (! r05_brackets_left(p+22, p[21], p[18]))
      continue;
    if (! r05_empty_hole(p[23], p[18]))
      continue;
    r05_close_evar(p+24, p[13], p[14]);
    r05_close_evar(p+26, p[15], p[16]);
    r05_close_evar(p+28, p[20], p[21]);
    r05_close_evar(p+30, p[22], p[23]);
    r05_close_evar(p+32, p[18], p[2]);

    r05_reset_allocator();
    r05_alloc_open_call(p+34);
    r05_alloc_function(&r05f_ConditionSubFunctionsm_CheckFunction);
    r05_alloc_open_bracket(p+35);
    r05_alloc_open_call(p+36);
    r05_alloc_function(&r05f_NewName);
    r05_alloc_open_bracket(p+37);
    r05_alloc_insert_pos(p+38);
    r05_alloc_close_bracket(p+39);
    r05_alloc_insert_pos(p+40);
    r05_alloc_chars("_check", 6);
    r05_alloc_close_call(p+41);
    r05_alloc_close_bracket(p+42);
    r05_alloc_open_bracket(p+43);
    r05_alloc_evar(p+9);
    r05_alloc_close_bracket(p+44);
    r05_alloc_insert_pos(p+45);
    r05_alloc_open_bracket(p+46);
    r05_alloc_insert_pos(p+47);
    r05_alloc_close_bracket(p+48);
    r05_alloc_open_bracket(p+49);
    r05_alloc_insert_pos(p+50);
    r05_alloc_close_bracket(p+51);
    r05_alloc_open_bracket(p+52);
    r05_alloc_function(&r05f_Condition);
    r05_alloc_open_bracket(p+53);
    r05_alloc_insert_pos(p+54);
    r05_alloc_close_bracket(p+55);
    r05_alloc_open_bracket(p+56);
    r05_alloc_insert_pos(p+57);
    r05_alloc_close_bracket(p+58);
    r05_alloc_close_bracket(p+59);
    r05_alloc_insert_pos(p+60);
    r05_alloc_close_call(p+61);
    r05_push_stack(p[61]);
    r05_push_stack(p[34]);
    r05_link_brackets(p[52], p[59]);
    r05_link_brackets(p[56], p[58]);
    r05_link_brackets(p[53], p[55]);
    r05_link_brackets(p[49], p[51]);
    r05_link_brackets(p[46], p[48]);
    r05_link_brackets(p[43], p[44]);
    r05_link_brackets(p[35], p[42]);
    r05_push_stack(p[41]);
    r05_push_stack(p[36]);
    r05_link_brackets(p[37], p[39]);
    r05_splice_evar(p[38], p+7);
    r05_splice_evar(p[40], p+9);
    r05_splice_tvar(p[45], p+11);
    r05_splice_evar(p[47], p+24);
    r05_splice_evar(p[50], p+26);
    r05_splice_evar(p[54], p+28);
    r05_splice_evar(p[57], p+30);
    r05_splice_evar(p[60], p+32);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(ConditionSubFunctionsm_CheckFunction, "ConditionSubFunctions-CheckFunction") {
  R05_DEFINE_COND_FUNCTION(ConditionSubFunctionsm_CheckFunction, "ConditionSubFunctions-CheckFunction$1", 1)
  R05_DEFINE_COND_FUNCTION(ConditionSubFunctionsm_CheckFunction, "ConditionSubFunctions-CheckFunction$2", 2)
  struct r05_node *p[92] = { 0 };

  r05_this_is_generated_function();
  switch (arg_begin->next->info.function->resume_entry >> 1) {
  case 0:
    p[0] = arg_begin;
    p[1] = arg_begin->next;
    p[2] = arg_end;

    do {
      /* e.Names: 9 */
      /* e.CheckFunction: 11 */
      /* e.Prefix: 13 */
      /* t.ContName: 15 */
      /* e.Sentence: 28 */
      /* e.Pattern: 30 */
      /* e.CondResult: 32 */
      /* e.CondPattern: 34 */
      /* e.SentenceTail: 36 */
      /* ((e.Names) e.CheckFunction) (e.Prefix) t.ContName (e.Sentence) (e.Pattern) (Condition (e.CondResult) (e.CondPattern)) e.SentenceTail */
      if (! r05_brackets_left(p+3, p[1], p[2]))
        continue;
      if (! r05_brackets_left(p+5, p[3], p[4]))
        continue;
      if (! r05_brackets_left(p+7, p[4], p[2]))
        continue;
      r05_close_evar(p+9, p[5], p[6]);
      r05_close_evar(p+11, p[6], p[4]);
      r05_close_evar(p+13, p[7], p[8]);
      if (! r05_tvar_left(p+15, p[8], p[2]))
        continue;
      if (! r05_brackets_left(p+17, p[16], p[2]))
        continue;
      if (! r05_brackets_left(p+19, p[18], p[2]))
        continue;
      if (! r05_brackets_left(p+21, p[20], p[2]))
        continue;
      if (! r05_function_left(p+23, p[21], p[22], &r05f_Condition))
        continue;
      if (! r05_brackets_left(p+24, p[23], p[22]))
        continue;
      if (! r05_brackets_left(p+26, p[25], p[22]))
        continue;
      if (! r05_empty_hole(p[27], p[22]))
        continue;
      r05_close_evar(p+28, p[17], p[18]);
      r05_close_evar(p+30, p[19], p[20]);
      r05_close_evar(p+32, p[24], p[25]);
      r05_close_evar(p+34, p[26], p[27]);
      r05_close_evar(p+36, p[22], p[2]);

      r05_reset_allocator();
      r05_alloc_open_call(p+38);
      r05_alloc_function(&c1);
      r05_alloc_open_call(p+39);
      r05_alloc_function(&r05f_ExtractVariables);
      r05_alloc_open_bracket(p+40);
      r05_alloc_evar(p+28);
      r05_alloc_close_bracket(p+41);
      r05_alloc_close_call(p+42);
      r05_alloc_close_call(p+43);
      r05_push_stack(p[43]);
      r05_push_stack(p[38]);
      r05_push_stack(p[42]);
      r05_push_stack(p[39]);
      r05_link_brackets(p[40], p[41]);
      r05_push_context(p, 38);
      r05_splice_from_freelist(p[2]);
      return;

  case 1:
      r05_pop_context(p, 38);
      p[38] = arg_begin;
      p[39] = arg_begin->next;
      p[40] = arg_end;

      do {
        /* e.Names: 9 */
        /* e.CheckFunction: 11 */
        /* e.Prefix: 13 */
        /* t.ContName: 15 */
        /* e.Sentence: 28 */
        /* e.Pattern: 30 */
        /* e.CondResult: 32 */
        /* e.CondPattern: 34 */
        /* e.SentenceTail: 36 */
        /* e.SentenceVariables: 41 */
        /* e.SentenceVariables */
        r05_close_evar(p+41, p[39], p[40]);

        r05_reset_allocator();
        r05_alloc_open_call(p+43);
        r05_alloc_function(&c2);
        r05_alloc_open_call(p+44);
        r05_alloc_function(&r05f_BlockScopeVars);
        r05_alloc_open_bracket(p+45);
        r05_alloc_evar(p+30);
        r05_alloc_close_bracket(p+46);
        r05_alloc_close_call(p+47);
        r05_alloc_close_call(p+48);
        r05_push_stack(p[48]);
        r05_push_stack(p[43]);
        r05_push_stack(p[47]);
        r05_push_stack(p[44]);
        r05_link_brackets(p[45], p[46]);
        r05_push_context(p, 43);
        r05_splice_from_freelist(p[2]);
        return;

  case 2:
        r05_pop_context(p, 43);
        p[43] = arg_begin;
        p[44] = arg_begin->next;
        p[45] = arg_end;

        do {
          /* e.Names: 9 */
          /* e.CheckFunction: 11 */
          /* e.Prefix: 13 */
          /* t.ContName: 15 */
          /* e.Sentence: 28 */
          /* e.Pattern: 30 */
          /* e.CondResult: 32 */
          /* e.CondPattern: 34 */
          /* e.SentenceTail: 36 */
          /* e.SentenceVariables: 41 */
          /* e.PatternVarsAsExpr: 46 */
          /* e.PatternVarsAsExpr */
          r05_close_evar(p+46, p[44], p[45]);

          r05_reset_allocator();
          r05_alloc_open_call(p+48);
          r05_alloc_function(&r05f_ConditionSubFunctionsm_OpenEChain);
          r05_alloc_open_bracket(p+49);
          r05_alloc_insert_pos(p+50);
          r05_alloc_close_bracket(p+51);
          r05_alloc_open_bracket(p+52);
          r05_alloc_insert_pos(p+53);
          r05_alloc_close_bracket(p+54);
          r05_alloc_open_bracket(p+55);
          r05_alloc_insert_pos(p+56);
          r05_alloc_close_bracket(p+57);
          r05_alloc_open_bracket(p+58);
          r05_alloc_function(&r05f_Condition);
          r05_alloc_open_bracket(p+59);
          r05_alloc_insert_pos(p+60);
          r05_alloc_close_bracket(p+61);
          r05_alloc_open_bracket(p+62);
          r05_alloc_insert_pos(p+63);
          r05_alloc_close_bracket(p+64);
          r05_alloc_close_bracket(p+65);
          r05_alloc_open_bracket(p+66);
          r05_alloc_insert_pos(p+67);
          r05_alloc_close_bracket(p+68);
          r05_alloc_open_call(p+69);
          r05_alloc_function(&r05f_OpenEChain);
          r05_alloc_open_bracket(p+70);
          r05_alloc_insert_pos(p+71);
          r05_alloc_close_bracket(p+72);
          r05_alloc_open_bracket(p+73);
          r05_alloc_insert_pos(p+74);
          r05_alloc_close_bracket(p+75);
          r05_alloc_open_bracket(p+76);
          r05_alloc_insert_pos(p+77);
          r05_alloc_close_bracket(p+78);
          r05_alloc_insert_pos(p+79);
          r05_alloc_open_bracket(p+80);
          r05_alloc_evar(p+11);
          r05_alloc_close_bracket(p+81);
          r05_alloc_open_bracket(p+82);
          r05_alloc_evar(p+46);
          r05_alloc_close_bracket(p+83);
          r05_alloc_open_bracket(p+84);
          r05_alloc_evar(p+32);
          r05_alloc_close_bracket(p+85);
          r05_alloc_open_call(p+86);
          r05_alloc_function(&r05f_PatternSteps);
          r05_alloc_open_bracket(p+87);
          r05_alloc_evar(p+41);
          r05_alloc_close_bracket(p+88);
          r05_alloc_evar(p+30);
          r05_alloc_close_call(p+89);
          r05_alloc_close_call(p+90);
          r05_alloc_close_call(p+91);
          r05_push_stack(p[91]);
          r05_push_stack(p[48]);
          r05_push_stack(p[90]);
          r05_push_stack(p[69]);
          r05_push_stack(p[89]);
          r05_push_stack(p[86]);
          r05_link_brackets(p[87], p[88]);
          r05_link_brackets(p[84], p[85]);
          r05_link_brackets(p[82], p[83]);
          r05_link_brackets(p[80], p[81]);
          r05_link_brackets(p[76], p[78]);
          r05_link_brackets(p[73], p[75]);
          r05_link_brackets(p[70], p[72]);
          r05_link_brackets(p[66], p[68]);
          r05_link_brackets(p[58], p[65]);
          r05_link_brackets(p[62], p[64]);
          r05_link_brackets(p[59], p[61]);
          r05_link_brackets(p[55], p[57]);
          r05_link_brackets(p[52], p[54]);
          r05_link_brackets(p[49], p[51]);
          r05_splice_evar(p[50], p+11);
          r05_splice_evar(p[53], p+46);
          r05_splice_evar(p[56], p+30);
          r05_splice_evar(p[60], p+32);
          r05_splice_evar(p[63], p+34);
          r05_splice_evar(p[67], p+36);
          r05_splice_evar(p[71], p+9);
          r05_splice_evar(p[74], p+41);
          r05_splice_evar(p[77], p+13);
          r05_splice_tvar(p[79], p+15);
          r05_splice_from_freelist(p[0]);
          r05_splice_to_freelist(p[0], p[2]);
          return;
        } while (0);
        r05_splice_to_freelist(p[43], p[45]);
      } while (0);
      r05_splice_to_freelist(p[38], p[40]);
    } while (0);

    r05_recognition_impossible();
  }
}

R05_DEFINE_LOCAL_FUNCTION(ConditionSubFunctionsm_OpenEChain, "ConditionSubFunctions-OpenEChain") {
  struct r05_node *p[68] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /* e.CheckFunction: 22 */
    /* e.PatternVarsAsExpr: 24 */
    /* e.Pattern: 26 */
    /* e.CondResult: 28 */
    /* e.CondPattern: 30 */
    /* e.SentenceTail: 32 */
    /* e.Names: 34 */
    /* e.ContSentence: 36 */
    /* e.OpenEFunctions: 38 */
    /* (e.CheckFunction) (e.PatternVarsAsExpr) (e.Pattern) (Condition (e.CondResult) (e.CondPattern)) (e.SentenceTail) (e.Names) (e.ContSentence) e.OpenEFunctions */
    if (! r05_brackets_left(p+3, p[1], p[2]))
      continue;
    if (! r05_brackets_left(p+5, p[4], p[2]))
      continue;
    if (! r05_brackets_left(p+7, p[6], p[2]))
      continue;
    if (! r05_brackets_left(p+9, p[8], p[2]))
      continue;
    if (! r05_function_left(p+11, p[9], p[10], &r05f_Condition))
      continue;
    if (! r05_brackets_left(p+12, p[11], p[10]))
      continue;
    if (! r05_brackets_left(p+14, p[13], p[10]))
      continue;
    if (! r05_brackets_left(p+16, p[10], p[2]))
      continue;
    if (! r05_brackets_left(p+18, p[17], p[2]))
      continue;
    if (! r05_brackets_left(p+20, p[19], p[2]))
      continue;
    if (! r05_empty_hole(p[15], p[10]))
      continue;
    r05_close_evar(p+22, p[3], p[4]);
    r05_close_evar(p+24, p[5], p[6]);
    r05_close_evar(p+26, p[7], p[8]);
    r05_close_evar(p+28, p[12], p[13]);
    r05_close_evar(p+30, p[14], p[15]);
    r05_close_evar(p+32, p[16], p[17]);
    r05_close_evar(p+34, p[18], p[19]);
    r05_close_evar(p+36, p[20], p[21]);
    r05_close_evar(p+38, p[21], p[2]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+40);
    r05_alloc_insert_pos(p+41);
    r05_alloc_close_bracket(p+42);
    r05_alloc_open_bracket(p+43);
    r05_alloc_open_bracket(p+44);
    r05_alloc_insert_pos(p+45);
    r05_alloc_close_bracket(p+46);
    r05_alloc_function(&r05f_RETURN);
    r05_alloc_open_bracket(p+47);
    r05_alloc_open_bracket(p+48);
    r05_alloc_function(&r05f_Call);
    r05_alloc_function(&r05f_NOm_POS);
    r05_alloc_open_bracket(p+49);
    r05_alloc_insert_pos(p+50);
    r05_alloc_close_bracket(p+51);
    r05_alloc_insert_pos(p+52);
    r05_alloc_close_bracket(p+53);
    r05_alloc_close_bracket(p+54);
    r05_alloc_close_bracket(p+55);
    r05_alloc_open_bracket(p+56);
    r05_alloc_open_bracket(p+57);
    r05_alloc_evar(p+22);
    r05_alloc_close_bracket(p+58);
    r05_alloc_open_bracket(p+59);
    r05_alloc_open_bracket(p+60);
    r05_alloc_evar(p+24);
    r05_alloc_insert_pos(p+61);
    r05_alloc_close_bracket(p+62);
    r05_alloc_insert_pos(p+63);
    r05_alloc_close_bracket(p+64);
    r05_alloc_insert_pos(p+65);
    r05_alloc_close_bracket(p+66);
    r05_alloc_insert_pos(p+67);
    r05_link_brackets(p[56], p[66]);
    r05_link_brackets(p[59], p[64]);
    r05_link_brackets(p[60], p[62]);
    r05_link_brackets(p[57], p[58]);
    r05_link_brackets(p[43], p[55]);
    r05_link_brackets(p[47], p[54]);
    r05_link_brackets(p[48], p[53]);
    r05_link_brackets(p[49], p[51]);
    r05_link_brackets(p[44], p[46]);
    r05_link_brackets(p[40], p[42]);
    r05_splice_evar(p[41], p+34);
    r05_splice_evar(p[45], p+26);
    r05_splice_evar(p[50], p+22);
    r05_splice_evar(p[52], p+24);
    r05_splice_evar(p[52], p+28);
    r05_splice_evar(p[61], p+30);
    r05_splice_evar(p[63], p+32);
    r05_splice_evar(p[65], p+36);
    r05_splice_evar(p[67], p+38);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(OpenEChain, "OpenEChain") {
  R05_DEFINE_COND_FUNCTION(OpenEChain, "OpenEChain$1", 1)
  R05_DEFINE_COND_FUNCTION(OpenEChain, "OpenEChain$2", 2)
  R05_DEFINE_COND_FUNCTION(OpenEChain, "OpenEChain$3", 3)
  R05_DEFINE_COND_FUNCTION(OpenEChain, "OpenEChain$4", 4)
  struct r05_node *p[86] = { 0 };

  r05_this_is_generated_function();
  switch (arg_begin->next->info.function->resume_entry >> 1) {
  case 0:
    p[0] = arg_begin;
    p[1] = arg_begin->next;
    p[2] = arg_end;

    do {
      /* e.Names: 20 */
      /* e.VarNames: 22 */
      /* e.Prefix: 24 */
      /* e.CheckFunction: 26 */
      /* e.PatternVarsAsExpr: 28 */
      /* e.CondResult: 30 */
      /* e.T0: 32 */
      /* (e.Names) (e.VarNames) (e.Prefix) NoContinuation (e.CheckFunction) (e.PatternVarsAsExpr) (e.CondResult) ((e.T0)) */
      if (! r05_brackets_left(p+3, p[1], p[2]))
        continue;
      if (! r05_brackets_left(p+5, p[4], p[2]))
        continue;
      if (! r05_brackets_left(p+7, p[6], p[2]))
        continue;
      if (! r05_function_left(p+9, p[8], p[2], &r05f_NoContinuation))
        continue;
      if (! r05_brackets_left(p+10, p[9], p[2]))
        continue;
      if (! r05_brackets_left(p+12, p[11], p[2]))
        continue;
      if (! r05_brackets_left(p+14, p[13], p[2]))
        continue;
      if (! r05_brackets_left(p+16, p[15], p[2]))
        continue;
      if (! r05_brackets_left(p+18, p[16], p[17]))
        continue;
      if (! r05_empty_hole(p[19], p[17]))
        continue;
      if (! r05_empty_hole(p[17], p[2]))
        continue;
      r05_close_evar(p+20, p[3], p[4]);
      r05_close_evar(p+22, p[5], p[6]);
      r05_close_evar(p+24, p[7], p[8]);
      r05_close_evar(p+26, p[10], p[11]);
      r05_close_evar(p+28, p[12], p[13]);
      r05_close_evar(p+30, p[14], p[15]);
      r05_close_evar(p+32, p[18], p[19]);

      r05_reset_allocator();
      r05_alloc_open_bracket(p+34);
      r05_alloc_insert_pos(p+35);
      r05_alloc_close_bracket(p+36);
      r05_alloc_open_bracket(p+37);
      r05_alloc_close_bracket(p+38);
      r05_link_brackets(p[37], p[38]);
      r05_link_brackets(p[34], p[36]);
      r05_splice_evar(p[35], p+20);
      r05_splice_from_freelist(p[0]);
      r05_splice_to_freelist(p[0], p[2]);
      return;
    } while (0);

    do {
      /* e.Names: 21 */
      /* e.VarNames: 23 */
      /* e.Prefix: 25 */
      /* e.ContName: 27 */
      /* e.CheckFunction: 29 */
      /* e.PatternVarsAsExpr: 31 */
      /* e.CondResult: 33 */
      /* e.T0: 35 */
      /* (e.Names) (e.VarNames) (e.Prefix) (e.ContName) (e.CheckFunction) (e.PatternVarsAsExpr) (e.CondResult) ((e.T0)) */
      if (! r05_brackets_left(p+3, p[1], p[2]))
        continue;
      if (! r05_brackets_left(p+5, p[4], p[2]))
        continue;
      if (! r05_brackets_left(p+7, p[6], p[2]))
        continue;
      if (! r05_brackets_left(p+9, p[8], p[2]))
        continue;
      if (! r05_brackets_left(p+11, p[10], p[2]))
        continue;
      if (! r05_brackets_left(p+13, p[12], p[2]))
        continue;
      if (! r05_brackets_left(p+15, p[14], p[2]))
        continue;
      if (! r05_brackets_left(p+17, p[16], p[2]))
        continue;
      if (! r05_brackets_left(p+19, p[17], p[18]))
        continue;
      if (! r05_empty_hole(p[20], p[18]))
        continue;
      if (! r05_empty_hole(p[18], p[2]))
        continue;
      r05_close_evar(p+21, p[3], p[4]);
      r05_close_evar(p+23, p[5], p[6]);
      r05_close_evar(p+25, p[7], p[8]);
      r05_close_evar(p+27, p[9], p[10]);
      r05_close_evar(p+29, p[11], p[12]);
      r05_close_evar(p+31, p[13], p[14]);
      r05_close_evar(p+33, p[15], p[16]);
      r05_close_evar(p+35, p[19], p[20]);

      r05_reset_allocator();
      r05_alloc_open_call(p+37);
      r05_alloc_function(&c1);
      r05_alloc_open_call(p+38);
      r05_alloc_function(&r05f_NewName);
      r05_alloc_open_bracket(p+39);
      r05_alloc_evar(p+23);
      r05_alloc_close_bracket(p+40);
      r05_alloc_chars("eOther", 6);
      r05_alloc_close_call(p+41);
      r05_alloc_close_call(p+42);
      r05_push_stack(p[42]);
      r05_push_stack(p[37]);
      r05_push_stack(p[41]);
      r05_push_stack(p[38]);
      r05_link_brackets(p[39], p[40]);
      r05_push_context(p, 37);
      r05_splice_from_freelist(p[2]);
      return;

  case 1:
      r05_pop_context(p, 37);
      p[37] = arg_begin;
      p[38] = arg_begin->next;
      p[39] = arg_end;

      do {
        /* e.Names: 21 */
        /* e.VarNames: 23 */
        /* e.Prefix: 25 */
        /* e.ContName: 27 */
        /* e.CheckFunction: 29 */
        /* e.PatternVarsAsExpr: 31 */
        /* e.CondResult: 33 */
        /* e.T0: 35 */
        /* e.NewVarNames: 42 */
        /* e.eOther: 44 */
        /* (e.NewVarNames) e.eOther */
        if (! r05_brackets_left(p+40, p[38], p[39]))
          continue;
        r05_close_evar(p+42, p[40], p[41]);
        r05_close_evar(p+44, p[41], p[39]);

        r05_reset_allocator();
        r05_alloc_open_bracket(p+46);
        r05_alloc_insert_pos(p+47);
        r05_alloc_close_bracket(p+48);
        r05_alloc_open_bracket(p+49);
        r05_alloc_open_bracket(p+50);
        r05_alloc_open_bracket(p+51);
        r05_alloc_insert_pos(p+52);
        r05_alloc_open_bracket(p+53);
        r05_alloc_function(&r05f_Variable);
        r05_alloc_function(&r05f_NOm_POS);
        r05_alloc_insert_pos(p+54);
        r05_alloc_close_bracket(p+55);
        r05_alloc_close_bracket(p+56);
        r05_alloc_function(&r05f_RETURN);
        r05_alloc_open_bracket(p+57);
        r05_alloc_open_bracket(p+58);
        r05_alloc_function(&r05f_Call);
        r05_alloc_function(&r05f_NOm_POS);
        r05_alloc_open_bracket(p+59);
        r05_alloc_insert_pos(p+60);
        r05_alloc_close_bracket(p+61);
        r05_alloc_insert_pos(p+62);
        r05_alloc_close_bracket(p+63);
        r05_alloc_close_bracket(p+64);
        r05_alloc_close_bracket(p+65);
        r05_alloc_close_bracket(p+66);
        r05_link_brackets(p[49], p[66]);
        r05_link_brackets(p[50], p[65]);
        r05_link_brackets(p[57], p[64]);
        r05_link_brackets(p[58], p[63]);
        r05_link_brackets(p[59], p[61]);
        r05_link_brackets(p[51], p[56]);
        r05_link_brackets(p[53], p[55]);
        r05_link_brackets(p[46], p[48]);
        r05_splice_evar(p[47], p+21);
        r05_splice_evar(p[52], p+31);
        r05_splice_evar(p[54], p+44);
        r05_splice_evar(p[60], p+27);
        r05_splice_evar(p[62], p+35);
        r05_splice_from_freelist(p[0]);
        r05_splice_to_freelist(p[0], p[2]);
        return;
      } while (0);
      r05_splice_to_freelist(p[37], p[39]);
    } while (0);

    do {
      /* e.Names: 9 */
      /* e.VarNames: 11 */
      /* e.Prefix: 13 */
      /* t.ContName: 15 */
      /* e.CheckFunction: 27 */
      /* e.PatternVarsAsExpr: 29 */
      /* e.CondResult: 31 */
      /* e.T0: 33 */
      /* e.Templates: 35 */
      /* (e.Names) (e.VarNames) (e.Prefix) t.ContName (e.CheckFunction) (e.PatternVarsAsExpr) (e.CondResult) ((e.T0)) e.Templates */
      if (! r05_brackets_left(p+3, p[1], p[2]))
        continue;
      if (! r05_brackets_left(p+5, p[4], p[2]))
        continue;
      if (! r05_brackets_left(p+7, p[6], p[2]))
        continue;
      r05_close_evar(p+9, p[3], p[4]);
      r05_close_evar(p+11, p[5], p[6]);
      r05_close_evar(p+13, p[7], p[8]);
      if (! r05_tvar_left(p+15, p[8], p[2]))
        continue;
      if (! r05_brackets_left(p+17, p[16], p[2]))
        continue;
      if (! r05_brackets_left(p+19, p[18], p[2]))
        continue;
      if (! r05_brackets_left(p+21, p[20], p[2]))
        continue;
      if (! r05_brackets_left(p+23, p[22], p[2]))
        continue;
      if (! r05_brackets_left(p+25, p[23], p[24]))
        continue;
      if (! r05_empty_hole(p[26], p[24]))
        continue;
      r05_close_evar(p+27, p[17], p[18]);
      r05_close_evar(p+29, p[19], p[20]);
      r05_close_evar(p+31, p[21], p[22]);
      r05_close_evar(p+33, p[25], p[26]);
      r05_close_evar(p+35, p[24], p[2]);

      r05_reset_allocator();
      r05_alloc_open_call(p+37);
      r05_alloc_function(&c2);
      r05_alloc_open_call(p+38);
      r05_alloc_function(&r05f_NewName);
      r05_alloc_open_bracket(p+39);
      r05_alloc_evar(p+9);
      r05_alloc_close_bracket(p+40);
      r05_alloc_evar(p+13);
      r05_alloc_chars("_forward", 8);
      r05_alloc_close_call(p+41);
      r05_alloc_close_call(p+42);
      r05_push_stack(p[42]);
      r05_push_stack(p[37]);
      r05_push_stack(p[41]);
      r05_push_stack(p[38]);
      r05_link_brackets(p[39], p[40]);
      r05_push_context(p, 37);
      r05_splice_from_freelist(p[2]);
      return;

  case 2:
      r05_pop_context(p, 37);
      p[37] = arg_begin;
      p[38] = arg_begin->next;
      p[39] = arg_end;

      do {
        /* e.Names: 9 */
        /* e.VarNames: 11 */
        /* e.Prefix: 13 */
        /* t.ContName: 15 */
        /* e.CheckFunction: 27 */
        /* e.PatternVarsAsExpr: 29 */
        /* e.CondResult: 31 */
        /* e.T0: 33 */
        /* e.Templates: 35 */
        /* e.NewNames: 42 */
        /* e.NextForward: 44 */
        /* (e.NewNames) e.NextForward */
        if (! r05_brackets_left(p+40, p[38], p[39]))
          continue;
        r05_close_evar(p+42, p[40], p[41]);
        r05_close_evar(p+44, p[41], p[39]);

        r05_reset_allocator();
        r05_alloc_open_call(p+46);
        r05_alloc_function(&c3);
        r05_alloc_open_call(p+47);
        r05_alloc_function(&r05f_DoOpenEChain);
        r05_alloc_open_bracket(p+48);
        r05_alloc_evar(p+44);
        r05_alloc_close_bracket(p+49);
        r05_alloc_open_bracket(p+50);
        r05_alloc_evar(p+42);
        r05_alloc_close_bracket(p+51);
        r05_alloc_open_bracket(p+52);
        r05_alloc_evar(p+13);
        r05_alloc_close_bracket(p+53);
        r05_alloc_tvar(p+15);
        r05_alloc_open_bracket(p+54);
        r05_alloc_evar(p+27);
        r05_alloc_close_bracket(p+55);
        r05_alloc_open_bracket(p+56);
        r05_alloc_evar(p+29);
        r05_alloc_evar(p+31);
        r05_alloc_close_bracket(p+57);
        r05_alloc_open_bracket(p+58);
        r05_alloc_close_bracket(p+59);
        r05_alloc_evar(p+35);
        r05_alloc_close_call(p+60);
        r05_alloc_close_call(p+61);
        r05_push_stack(p[61]);
        r05_push_stack(p[46]);
        r05_push_stack(p[60]);
        r05_push_stack(p[47]);
        r05_link_brackets(p[58], p[59]);
        r05_link_brackets(p[56], p[57]);
        r05_link_brackets(p[54], p[55]);
        r05_link_brackets(p[52], p[53]);
        r05_link_brackets(p[50], p[51]);
        r05_link_brackets(p[48], p[49]);
        r05_push_context(p, 46);
        r05_splice_from_freelist(p[2]);
        return;

  case 3:
        r05_pop_context(p, 46);
        p[46] = arg_begin;
        p[47] = arg_begin->next;
        p[48] = arg_end;

        do {
          /* e.Names: 9 */
          /* e.VarNames: 11 */
          /* e.Prefix: 13 */
          /* t.ContName: 15 */
          /* e.CheckFunction: 27 */
          /* e.PatternVarsAsExpr: 29 */
          /* e.CondResult: 31 */
          /* e.T0: 33 */
          /* e.Templates: 35 */
          /* e.NewNames: 42 */
          /* e.NextForward: 44 */
          /* e.RefilledNames: 51 */
          /* e.NewFunctions: 53 */
          /* (e.RefilledNames) e.NewFunctions */
          if (! r05_brackets_left(p+49, p[47], p[48]))
            continue;
          r05_close_evar(p+51, p[49], p[50]);
          r05_close_evar(p+53, p[50], p[48]);

          r05_reset_allocator();
          r05_alloc_open_call(p+55);
          r05_alloc_function(&c4);
          r05_alloc_open_call(p+56);
          r05_alloc_function(&r05f_NewName);
          r05_alloc_open_bracket(p+57);
          r05_alloc_evar(p+11);
          r05_alloc_close_bracket(p+58);
          r05_alloc_chars("eOther", 6);
          r05_alloc_close_call(p+59);
          r05_alloc_close_call(p+60);
          r05_push_stack(p[60]);
          r05_push_stack(p[55]);
          r05_push_stack(p[59]);
          r05_push_stack(p[56]);
          r05_link_brackets(p[57], p[58]);
          r05_push_context(p, 55);
          r05_splice_from_freelist(p[2]);
          return;

  case 4:
          r05_pop_context(p, 55);
          p[55] = arg_begin;
          p[56] = arg_begin->next;
          p[57] = arg_end;

          do {
            /* e.Names: 9 */
            /* e.VarNames: 11 */
            /* e.Prefix: 13 */
            /* t.ContName: 15 */
            /* e.CheckFunction: 27 */
            /* e.PatternVarsAsExpr: 29 */
            /* e.CondResult: 31 */
            /* e.T0: 33 */
            /* e.Templates: 35 */
            /* e.NewNames: 42 */
            /* e.NextForward: 44 */
            /* e.RefilledNames: 51 */
            /* e.NewFunctions: 53 */
            /* e.NewVarNames: 60 */
            /* e.eOther: 62 */
            /* (e.NewVarNames) e.eOther */
            if (! r05_brackets_left(p+58, p[56], p[57]))
              continue;
            r05_close_evar(p+60, p[58], p[59]);
            r05_close_evar(p+62, p[59], p[57]);

            r05_reset_allocator();
            r05_alloc_open_bracket(p+64);
            r05_alloc_insert_pos(p+65);
            r05_alloc_close_bracket(p+66);
            r05_alloc_open_bracket(p+67);
            r05_alloc_open_bracket(p+68);
            r05_alloc_open_bracket(p+69);
            r05_alloc_insert_pos(p+70);
            r05_alloc_open_bracket(p+71);
            r05_alloc_function(&r05f_Variable);
            r05_alloc_function(&r05f_NOm_POS);
            r05_alloc_insert_pos(p+72);
            r05_alloc_close_bracket(p+73);
            r05_alloc_close_bracket(p+74);
            r05_alloc_function(&r05f_RETURN);
            r05_alloc_open_bracket(p+75);
            r05_alloc_open_bracket(p+76);
            r05_alloc_function(&r05f_Call);
            r05_alloc_function(&r05f_NOm_POS);
            r05_alloc_open_bracket(p+77);
            r05_alloc_insert_pos(p+78);
            r05_alloc_close_bracket(p+79);
            r05_alloc_insert_pos(p+80);
            r05_alloc_close_bracket(p+81);
            r05_alloc_close_bracket(p+82);
            r05_alloc_close_bracket(p+83);
            r05_alloc_close_bracket(p+84);
            r05_alloc_insert_pos(p+85);
            r05_link_brackets(p[67], p[84]);
            r05_link_brackets(p[68], p[83]);
            r05_link_brackets(p[75], p[82]);
            r05_link_brackets(p[76], p[81]);
            r05_link_brackets(p[77], p[79]);
            r05_link_brackets(p[69], p[74]);
            r05_link_brackets(p[71], p[73]);
            r05_link_brackets(p[64], p[66]);
            r05_splice_evar(p[65], p+51);
            r05_splice_evar(p[70], p+29);
            r05_splice_evar(p[72], p+62);
            r05_splice_evar(p[78], p+44);
            r05_splice_evar(p[80], p+33);
            r05_splice_evar(p[85], p+53);
            r05_splice_from_freelist(p[0]);
            r05_splice_to_freelist(p[0], p[2]);
            return;
          } while (0);
          r05_splice_to_freelist(p[55], p[57]);
        } while (0);
        r05_splice_to_freelist(p[46], p[48]);
      } while (0);
      r05_splice_to_freelist(p[37], p[39]);
    } while (0);

    r05_recognition_impossible();
  }
}

R05_DEFINE_LOCAL_FUNCTION(DoOpenEChain, "DoOpenEChain") {
  R05_DEFINE_COND_FUNCTION(DoOpenEChain, "DoOpenEChain$1", 1)
  R05_DEFINE_COND_FUNCTION(DoOpenEChain, "DoOpenEChain$2", 2)
  R05_DEFINE_COND_FUNCTION(DoOpenEChain, "DoOpenEChain$3", 3)
  struct r05_node *p[75] = { 0 };

  r05_this_is_generated_function();
  switch (arg_begin->next->info.function->resume_entry >> 1) {
  case 0:
    p[0] = arg_begin;
    p[1] = arg_begin->next;
    p[2] = arg_end;

    do {
      /* e.CurrentForward: 17 */
      /* e.Names: 19 */
      /* e.Prefix: 21 */
      /* e.CheckFunction: 23 */
      /* e.CheckFunctionArg: 25 */
      /* e.GeneratedFunctions: 27 */
      /* e.TemplateSet: 29 */
      /* t.ContName: 31 */
      /* (e.CurrentForward) (e.Names) (e.Prefix) t.ContName (e.CheckFunction) (e.CheckFunctionArg) (e.GeneratedFunctions) (e.TemplateSet) */
      if (! r05_brackets_left(p+3, p[1], p[2]))
        continue;
      if (! r05_brackets_left(p+5, p[4], p[2]))
        continue;
      if (! r05_brackets_left(p+7, p[6], p[2]))
        continue;
      if (! r05_brackets_right(p+9, p[8], p[2]))
        continue;
      if (! r05_brackets_right(p+11, p[8], p[9]))
        continue;
      if (! r05_brackets_right(p+13, p[8], p[11]))
        continue;
      if (! r05_brackets_right(p+15, p[8], p[13]))
        continue;
      r05_close_evar(p+17, p[3], p[4]);
      r05_close_evar(p+19, p[5], p[6]);
      r05_close_evar(p+21, p[7], p[8]);
      r05_close_evar(p+23, p[15], p[16]);
      r05_close_evar(p+25, p[13], p[14]);
      r05_close_evar(p+27, p[11], p[12]);
      r05_close_evar(p+29, p[9], p[10]);
      if (! r05_tvar_left(p+31, p[8], p[15]))
        continue;
      if (! r05_empty_hole(p[32], p[15]))
        continue;

      r05_reset_allocator();
      r05_alloc_open_call(p+33);
      r05_alloc_function(&c1);
      r05_alloc_open_call(p+34);
      r05_alloc_function(&r05f_MakeOpenEm_ForwardNext);
      r05_alloc_open_bracket(p+35);
      r05_alloc_evar(p+17);
      r05_alloc_close_bracket(p+36);
      r05_alloc_open_bracket(p+37);
      r05_alloc_evar(p+19);
      r05_alloc_close_bracket(p+38);
      r05_alloc_open_bracket(p+39);
      r05_alloc_evar(p+21);
      r05_alloc_close_bracket(p+40);
      r05_alloc_tvar(p+31);
      r05_alloc_open_bracket(p+41);
      r05_alloc_evar(p+23);
      r05_alloc_close_bracket(p+42);
      r05_alloc_open_bracket(p+43);
      r05_alloc_evar(p+25);
      r05_alloc_close_bracket(p+44);
      r05_alloc_evar(p+29);
      r05_alloc_close_call(p+45);
      r05_alloc_close_call(p+46);
      r05_push_stack(p[46]);
      r05_push_stack(p[33]);
      r05_push_stack(p[45]);
      r05_push_stack(p[34]);
      r05_link_brackets(p[43], p[44]);
      r05_link_brackets(p[41], p[42]);
      r05_link_brackets(p[39], p[40]);
      r05_link_brackets(p[37], p[38]);
      r05_link_brackets(p[35], p[36]);
      r05_push_context(p, 33);
      r05_splice_from_freelist(p[2]);
      return;

  case 1:
      r05_pop_context(p, 33);
      p[33] = arg_begin;
      p[34] = arg_begin->next;
      p[35] = arg_end;

      do {
        /* e.CurrentForward: 17 */
        /* e.Names: 19 */
        /* e.Prefix: 21 */
        /* e.CheckFunction: 23 */
        /* e.CheckFunctionArg: 25 */
        /* e.GeneratedFunctions: 27 */
        /* e.TemplateSet: 29 */
        /* t.ContName: 31 */
        /* e.RefilledNames: 38 */
        /* e.NewFunctions: 40 */
        /* (e.RefilledNames) e.NewFunctions */
        if (! r05_brackets_left(p+36, p[34], p[35]))
          continue;
        r05_close_evar(p+38, p[36], p[37]);
        r05_close_evar(p+40, p[37], p[35]);

        r05_reset_allocator();
        r05_alloc_open_bracket(p+42);
        r05_alloc_insert_pos(p+43);
        r05_alloc_close_bracket(p+44);
        r05_alloc_insert_pos(p+45);
        r05_link_brackets(p[42], p[44]);
        r05_splice_evar(p[43], p+38);
        r05_splice_evar(p[45], p+27);
        r05_splice_evar(p[45], p+40);
        r05_splice_from_freelist(p[0]);
        r05_splice_to_freelist(p[0], p[2]);
        return;
      } while (0);
      r05_splice_to_freelist(p[33], p[35]);
    } while (0);

    do {
      /* e.CurrentForward: 9 */
      /* e.Names: 11 */
      /* e.Prefix: 13 */
      /* t.ContName: 15 */
      /* e.CheckFunction: 25 */
      /* e.CheckFunctionArg: 27 */
      /* e.GeneratedFunctions: 29 */
      /* e.TemplateSet: 31 */
      /* e.TemplateSets: 33 */
      /* (e.CurrentForward) (e.Names) (e.Prefix) t.ContName (e.CheckFunction) (e.CheckFunctionArg) (e.GeneratedFunctions) (e.TemplateSet) e.TemplateSets */
      if (! r05_brackets_left(p+3, p[1], p[2]))
        continue;
      if (! r05_brackets_left(p+5, p[4], p[2]))
        continue;
      if (! r05_brackets_left(p+7, p[6], p[2]))
        continue;
      r05_close_evar(p+9, p[3], p[4]);
      r05_close_evar(p+11, p[5], p[6]);
      r05_close_evar(p+13, p[7], p[8]);
      if (! r05_tvar_left(p+15, p[8], p[2]))
        continue;
      if (! r05_brackets_left(p+17, p[16], p[2]))
        continue;
      if (! r05_brackets_left(p+19, p[18], p[2]))
        continue;
      if (! r05_brackets_left(p+21, p[20], p[2]))
        continue;
      if (! r05_brackets_left(p+23, p[22], p[2]))
        continue;
      r05_close_evar(p+25, p[17], p[18]);
      r05_close_evar(p+27, p[19], p[20]);
      r05_close_evar(p+29, p[21], p[22]);
      r05_close_evar(p+31, p[23], p[24]);
      r05_close_evar(p+33, p[24], p[2]);

      r05_reset_allocator();
      r05_alloc_open_call(p+35);
      r05_alloc_function(&c2);
      r05_alloc_open_call(p+36);
      r05_alloc_function(&r05f_NewName);
      r05_alloc_open_bracket(p+37);
      r05_alloc_evar(p+11);
      r05_alloc_close_bracket(p+38);
      r05_alloc_evar(p+13);
      r05_alloc_chars("_forward", 8);
      r05_alloc_close_call(p+39);
      r05_alloc_close_call(p+40);
      r05_push_stack(p[40]);
      r05_push_stack(p[35]);
      r05_push_stack(p[39]);
      r05_push_stack(p[36]);
      r05_link_brackets(p[37], p[38]);
      r05_push_context(p, 35);
      r05_splice_from_freelist(p[2]);
      return;

  case 2:
      r05_pop_context(p, 35);
      p[35] = arg_begin;
      p[36] = arg_begin->next;
      p[37] = arg_end;

      do {
        /* e.CurrentForward: 9 */
        /* e.Names: 11 */
        /* e.Prefix: 13 */
        /* t.ContName: 15 */
        /* e.CheckFunction: 25 */
        /* e.CheckFunctionArg: 27 */
        /* e.GeneratedFunctions: 29 */
        /* e.TemplateSet: 31 */
        /* e.TemplateSets: 33 */
        /* e.Names1: 40 */
        /* e.NextForward: 42 */
        /* (e.Names1) e.NextForward */
        if (! r05_brackets_left(p+38, p[36], p[37]))
          continue;
        r05_close_evar(p+40, p[38], p[39]);
        r05_close_evar(p+42, p[39], p[37]);

        r05_reset_allocator();
        r05_alloc_open_call(p+44);
        r05_alloc_function(&c3);
        r05_alloc_open_call(p+45);
        r05_alloc_function(&r05f_MakeOpenEm_ForwardNext);
        r05_alloc_open_bracket(p+46);
        r05_alloc_evar(p+9);
        r05_alloc_close_bracket(p+47);
        r05_alloc_open_bracket(p+48);
        r05_alloc_evar(p+40);
        r05_alloc_close_bracket(p+49);
        r05_alloc_open_bracket(p+50);
        r05_alloc_evar(p+13);
        r05_alloc_close_bracket(p+51);
        r05_alloc_open_bracket(p+52);
        r05_alloc_evar(p+42);
        r05_alloc_close_bracket(p+53);
        r05_alloc_open_bracket(p+54);
        r05_alloc_evar(p+25);
        r05_alloc_close_bracket(p+55);
        r05_alloc_open_bracket(p+56);
        r05_alloc_evar(p+27);
        r05_alloc_close_bracket(p+57);
        r05_alloc_evar(p+31);
        r05_alloc_close_call(p+58);
        r05_alloc_close_call(p+59);
        r05_push_stack(p[59]);
        r05_push_stack(p[44]);
        r05_push_stack(p[58]);
        r05_push_stack(p[45]);
        r05_link_brackets(p[56], p[57]);
        r05_link_brackets(p[54], p[55]);
        r05_link_brackets(p[52], p[53]);
        r05_link_brackets(p[50], p[51]);
        r05_link_brackets(p[48], p[49]);
        r05_link_brackets(p[46], p[47]);
        r05_push_context(p, 44);
        r05_splice_from_freelist(p[2]);
        return;

  case 3:
        r05_pop_context(p, 44);
        p[44] = arg_begin;
        p[45] = arg_begin->next;
        p[46] = arg_end;

        do {
          /* e.CurrentForward: 9 */
          /* e.Names: 11 */
          /* e.Prefix: 13 */
          /* t.ContName: 15 */
          /* e.CheckFunction: 25 */
          /* e.CheckFunctionArg: 27 */
          /* e.GeneratedFunctions: 29 */
          /* e.TemplateSet: 31 */
          /* e.TemplateSets: 33 */
          /* e.Names1: 40 */
          /* e.NextForward: 42 */
          /* e.RefilledNames: 49 */
          /* e.NewFunctions: 51 */
          /* (e.RefilledNames) e.NewFunctions */
          if (! r05_brackets_left(p+47, p[45], p[46]))
            continue;
          r05_close_evar(p+49, p[47], p[48]);
          r05_close_evar(p+51, p[48], p[46]);

          r05_reset_allocator();
          r05_alloc_open_call(p+53);
          r05_alloc_function(&r05f_DoOpenEChain);
          r05_alloc_open_bracket(p+54);
          r05_alloc_insert_pos(p+55);
          r05_alloc_close_bracket(p+56);
          r05_alloc_open_bracket(p+57);
          r05_alloc_insert_pos(p+58);
          r05_alloc_close_bracket(p+59);
          r05_alloc_open_bracket(p+60);
          r05_alloc_insert_pos(p+61);
          r05_alloc_close_bracket(p+62);
          r05_alloc_insert_pos(p+63);
          r05_alloc_open_bracket(p+64);
          r05_alloc_insert_pos(p+65);
          r05_alloc_close_bracket(p+66);
          r05_alloc_open_bracket(p+67);
          r05_alloc_insert_pos(p+68);
          r05_alloc_close_bracket(p+69);
          r05_alloc_open_bracket(p+70);
          r05_alloc_insert_pos(p+71);
          r05_alloc_close_bracket(p+72);
          r05_alloc_insert_pos(p+73);
          r05_alloc_close_call(p+74);
          r05_push_stack(p[74]);
          r05_push_stack(p[53]);
          r05_link_brackets(p[70], p[72]);
          r05_link_brackets(p[67], p[69]);
          r05_link_brackets(p[64], p[66]);
          r05_link_brackets(p[60], p[62]);
          r05_link_brackets(p[57], p[59]);
          r05_link_brackets(p[54], p[56]);
          r05_splice_evar(p[55], p+42);
          r05_splice_evar(p[58], p+49);
          r05_splice_evar(p[61], p+13);
          r05_splice_tvar(p[63], p+15);
          r05_splice_evar(p[65], p+25);
          r05_splice_evar(p[68], p+27);
          r05_splice_evar(p[71], p+29);
          r05_splice_evar(p[71], p+51);
          r05_splice_evar(p[73], p+33);
          r05_splice_from_freelist(p[0]);
          r05_splice_to_freelist(p[0], p[2]);
          return;
        } while (0);
        r05_splice_to_freelist(p[44], p[46]);
      } while (0);
      r05_splice_to_freelist(p[35], p[37]);
    } while (0);

    r05_recognition_impossible();
  }
}

R05_DEFINE_LOCAL_FUNCTION(MakeOpenEm_ForwardNext, "MakeOpenE-ForwardNext") {
  R05_DEFINE_COND_FUNCTION(MakeOpenEm_ForwardNext, "MakeOpenE-ForwardNext$1", 1)
  struct r05_node *p[126] = { 0 };

  r05_this_is_generated_function();
  switch (arg_begin->next->info.function->resume_entry >> 1) {
  case 0:
    p[0] = arg_begin;
    p[1] = arg_begin->next;
    p[2] = arg_end;

    do {
      /* e.CurrentForwardName: 29 */
      /* e.Names: 31 */
      /* e.Prefix: 33 */
      /* e.CheckFunction: 35 */
      /* e.CheckFunctionArg: 37 */
      /* e.T1: 39 */
      /* e.T2: 41 */
      /* e.T3: 43 */
      /* e.T4: 45 */
      /* e.T5: 47 */
      /* e.T5-sub: 49 */
      /* e.T6: 51 */
      /* e.T7: 53 */
      /* t.ContName: 55 */
      /* (e.CurrentForwardName) (e.Names) (e.Prefix) t.ContName (e.CheckFunction) (e.CheckFunctionArg) (e.T1) (e.T2) (e.T3) (e.T4) (e.T5) (e.T5-sub) (e.T6) (e.T7) */
      if (! r05_brackets_left(p+3, p[1], p[2]))
        continue;
      if (! r05_brackets_left(p+5, p[4], p[2]))
        continue;
      if (! r05_brackets_left(p+7, p[6], p[2]))
        continue;
      if (! r05_brackets_right(p+9, p[8], p[2]))
        continue;
      if (! r05_brackets_right(p+11, p[8], p[9]))
        continue;
      if (! r05_brackets_right(p+13, p[8], p[11]))
        continue;
      if (! r05_brackets_right(p+15, p[8], p[13]))
        continue;
      if (! r05_brackets_right(p+17, p[8], p[15]))
        continue;
      if (! r05_brackets_right(p+19, p[8], p[17]))
        continue;
      if (! r05_brackets_right(p+21, p[8], p[19]))
        continue;
      if (! r05_brackets_right(p+23, p[8], p[21]))
        continue;
      if (! r05_brackets_right(p+25, p[8], p[23]))
        continue;
      if (! r05_brackets_right(p+27, p[8], p[25]))
        continue;
      r05_close_evar(p+29, p[3], p[4]);
      r05_close_evar(p+31, p[5], p[6]);
      r05_close_evar(p+33, p[7], p[8]);
      r05_close_evar(p+35, p[27], p[28]);
      r05_close_evar(p+37, p[25], p[26]);
      r05_close_evar(p+39, p[23], p[24]);
      r05_close_evar(p+41, p[21], p[22]);
      r05_close_evar(p+43, p[19], p[20]);
      r05_close_evar(p+45, p[17], p[18]);
      r05_close_evar(p+47, p[15], p[16]);
      r05_close_evar(p+49, p[13], p[14]);
      r05_close_evar(p+51, p[11], p[12]);
      r05_close_evar(p+53, p[9], p[10]);
      if (! r05_tvar_left(p+55, p[8], p[27]))
        continue;
      if (! r05_empty_hole(p[56], p[27]))
        continue;

      r05_reset_allocator();
      r05_alloc_open_call(p+57);
      r05_alloc_function(&c1);
      r05_alloc_open_call(p+58);
      r05_alloc_function(&r05f_NewName);
      r05_alloc_open_bracket(p+59);
      r05_alloc_evar(p+31);
      r05_alloc_close_bracket(p+60);
      r05_alloc_evar(p+33);
      r05_alloc_chars("_next", 5);
      r05_alloc_close_call(p+61);
      r05_alloc_close_call(p+62);
      r05_push_stack(p[62]);
      r05_push_stack(p[57]);
      r05_push_stack(p[61]);
      r05_push_stack(p[58]);
      r05_link_brackets(p[59], p[60]);
      r05_push_context(p, 57);
      r05_splice_from_freelist(p[2]);
      return;

  case 1:
      r05_pop_context(p, 57);
      p[57] = arg_begin;
      p[58] = arg_begin->next;
      p[59] = arg_end;

      do {
        /* e.CurrentForwardName: 29 */
        /* e.Names: 31 */
        /* e.Prefix: 33 */
        /* e.CheckFunction: 35 */
        /* e.CheckFunctionArg: 37 */
        /* e.T1: 39 */
        /* e.T2: 41 */
        /* e.T3: 43 */
        /* e.T4: 45 */
        /* e.T5: 47 */
        /* e.T5-sub: 49 */
        /* e.T6: 51 */
        /* e.T7: 53 */
        /* t.ContName: 55 */
        /* e.RefilledNames: 62 */
        /* e.NextName: 64 */
        /* (e.RefilledNames) e.NextName */
        if (! r05_brackets_left(p+60, p[58], p[59]))
          continue;
        r05_close_evar(p+62, p[60], p[61]);
        r05_close_evar(p+64, p[61], p[59]);

        r05_reset_allocator();
        r05_alloc_open_bracket(p+66);
        r05_alloc_insert_pos(p+67);
        r05_alloc_close_bracket(p+68);
        r05_alloc_open_bracket(p+69);
        r05_alloc_open_bracket(p+70);
        r05_alloc_insert_pos(p+71);
        r05_alloc_close_bracket(p+72);
        r05_alloc_open_bracket(p+73);
        r05_alloc_open_bracket(p+74);
        r05_alloc_insert_pos(p+75);
        r05_alloc_close_bracket(p+76);
        r05_alloc_function(&r05f_RETURN);
        r05_alloc_open_bracket(p+77);
        r05_alloc_open_bracket(p+78);
        r05_alloc_function(&r05f_Call);
        r05_alloc_function(&r05f_NOm_POS);
        r05_alloc_open_bracket(p+79);
        r05_alloc_insert_pos(p+80);
        r05_alloc_close_bracket(p+81);
        r05_alloc_insert_pos(p+82);
        r05_alloc_close_bracket(p+83);
        r05_alloc_close_bracket(p+84);
        r05_alloc_close_bracket(p+85);
        r05_alloc_open_call(p+86);
        r05_alloc_function(&r05f_MakeContinuationSentence);
        r05_alloc_insert_pos(p+87);
        r05_alloc_open_bracket(p+88);
        r05_alloc_insert_pos(p+89);
        r05_alloc_close_bracket(p+90);
        r05_alloc_open_bracket(p+91);
        r05_alloc_insert_pos(p+92);
        r05_alloc_close_bracket(p+93);
        r05_alloc_close_call(p+94);
        r05_alloc_close_bracket(p+95);
        r05_alloc_open_bracket(p+96);
        r05_alloc_open_bracket(p+97);
        r05_alloc_evar(p+64);
        r05_alloc_close_bracket(p+98);
        r05_alloc_open_bracket(p+99);
        r05_alloc_open_bracket(p+100);
        r05_alloc_insert_pos(p+101);
        r05_alloc_close_bracket(p+102);
        r05_alloc_function(&r05f_RETURN);
        r05_alloc_open_bracket(p+103);
        r05_alloc_open_bracket(p+104);
        r05_alloc_function(&r05f_Call);
        r05_alloc_function(&r05f_NOm_POS);
        r05_alloc_open_bracket(p+105);
        r05_alloc_insert_pos(p+106);
        r05_alloc_close_bracket(p+107);
        r05_alloc_open_call(p+108);
        r05_alloc_function(&r05f_Substitute);
        r05_alloc_insert_pos(p+109);
        r05_alloc_open_bracket(p+110);
        r05_alloc_insert_pos(p+111);
        r05_alloc_close_bracket(p+112);
        r05_alloc_close_call(p+113);
        r05_alloc_close_bracket(p+114);
        r05_alloc_close_bracket(p+115);
        r05_alloc_close_bracket(p+116);
        r05_alloc_open_call(p+117);
        r05_alloc_function(&r05f_MakeContinuationSentence);
        r05_alloc_tvar(p+55);
        r05_alloc_open_bracket(p+118);
        r05_alloc_insert_pos(p+119);
        r05_alloc_close_bracket(p+120);
        r05_alloc_open_bracket(p+121);
        r05_alloc_insert_pos(p+122);
        r05_alloc_close_bracket(p+123);
        r05_alloc_close_call(p+124);
        r05_alloc_close_bracket(p+125);
        r05_link_brackets(p[96], p[125]);
        r05_push_stack(p[124]);
        r05_push_stack(p[117]);
        r05_link_brackets(p[121], p[123]);
        r05_link_brackets(p[118], p[120]);
        r05_link_brackets(p[99], p[116]);
        r05_link_brackets(p[103], p[115]);
        r05_link_brackets(p[104], p[114]);
        r05_push_stack(p[113]);
        r05_push_stack(p[108]);
        r05_link_brackets(p[110], p[112]);
        r05_link_brackets(p[105], p[107]);
        r05_link_brackets(p[100], p[102]);
        r05_link_brackets(p[97], p[98]);
        r05_link_brackets(p[69], p[95]);
        r05_push_stack(p[94]);
        r05_push_stack(p[86]);
        r05_link_brackets(p[91], p[93]);
        r05_link_brackets(p[88], p[90]);
        r05_link_brackets(p[73], p[85]);
        r05_link_brackets(p[77], p[84]);
        r05_link_brackets(p[78], p[83]);
        r05_link_brackets(p[79], p[81]);
        r05_link_brackets(p[74], p[76]);
        r05_link_brackets(p[70], p[72]);
        r05_link_brackets(p[66], p[68]);
        r05_splice_evar(p[67], p+62);
        r05_splice_evar(p[71], p+29);
        r05_splice_evar(p[75], p+39);
        r05_splice_evar(p[80], p+64);
        r05_splice_evar(p[82], p+41);
        r05_splice_tvar(p[87], p+55);
        r05_splice_evar(p[89], p+43);
        r05_splice_evar(p[92], p+45);
        r05_splice_evar(p[101], p+47);
        r05_splice_evar(p[106], p+35);
        r05_splice_evar(p[109], p+37);
        r05_splice_evar(p[111], p+49);
        r05_splice_evar(p[119], p+51);
        r05_splice_evar(p[122], p+53);
        r05_splice_from_freelist(p[0]);
        r05_splice_to_freelist(p[0], p[2]);
        return;
      } while (0);
      r05_splice_to_freelist(p[57], p[59]);
    } while (0);

    r05_recognition_impossible();
  }
}

R05_DEFINE_LOCAL_FUNCTION(ExtractVariables, "ExtractVariables") {
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
    r05_alloc_function(&r05f_ExtractVariablesm_Sentences);
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

R05_DEFINE_LOCAL_FUNCTION(ExtractVariablesm_Sentences, "ExtractVariables-Sentences") {
  struct r05_node *p[22] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /* e.Pattern: 7 */
    /* e.Tail: 9 */
    /* e.Sentences: 11 */
    /* ((e.Pattern) e.Tail) e.Sentences */
    if (! r05_brackets_left(p+3, p[1], p[2]))
      continue;
    if (! r05_brackets_left(p+5, p[3], p[4]))
      continue;
    r05_close_evar(p+7, p[5], p[6]);
    r05_close_evar(p+9, p[6], p[4]);
    r05_close_evar(p+11, p[4], p[2]);

    r05_reset_allocator();
    r05_alloc_open_call(p+13);
    r05_alloc_function(&r05f_ExtractVariablesm_Expr);
    r05_alloc_insert_pos(p+14);
    r05_alloc_close_call(p+15);
    r05_alloc_open_call(p+16);
    r05_alloc_function(&r05f_ExtractVariablesm_Tail);
    r05_alloc_insert_pos(p+17);
    r05_alloc_close_call(p+18);
    r05_alloc_open_call(p+19);
    r05_alloc_function(&r05f_ExtractVariablesm_Sentences);
    r05_alloc_insert_pos(p+20);
    r05_alloc_close_call(p+21);
    r05_push_stack(p[21]);
    r05_push_stack(p[19]);
    r05_push_stack(p[18]);
    r05_push_stack(p[16]);
    r05_push_stack(p[15]);
    r05_push_stack(p[13]);
    r05_splice_evar(p[14], p+7);
    r05_splice_evar(p[17], p+9);
    r05_splice_evar(p[20], p+11);
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

R05_DEFINE_LOCAL_FUNCTION(ExtractVariablesm_Tail, "ExtractVariables-Tail") {
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
    r05_alloc_function(&r05f_ExtractVariablesm_Expr);
    r05_alloc_insert_pos(p+17);
    r05_alloc_close_call(p+18);
    r05_alloc_open_call(p+19);
    r05_alloc_function(&r05f_ExtractVariablesm_Expr);
    r05_alloc_insert_pos(p+20);
    r05_alloc_close_call(p+21);
    r05_alloc_open_call(p+22);
    r05_alloc_function(&r05f_ExtractVariablesm_Tail);
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
    r05_alloc_function(&r05f_ExtractVariablesm_Expr);
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
    r05_alloc_function(&r05f_ExtractVariablesm_Expr);
    r05_alloc_insert_pos(p+11);
    r05_alloc_close_call(p+12);
    r05_alloc_open_call(p+13);
    r05_alloc_function(&r05f_ExtractVariablesm_Sentences);
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

R05_DEFINE_LOCAL_FUNCTION(ExtractVariablesm_Expr, "ExtractVariables-Expr") {
  struct r05_node *p[19] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /* e.Terms: 6 */
    /* t.SrcPos: 8 */
    /* s.VarType: 10 */
    /* e.Index: 11 */
    /* (Variable t.SrcPos s.VarType e.Index) e.Terms */
    if (! r05_brackets_left(p+3, p[1], p[2]))
      continue;
    if (! r05_function_left(p+5, p[3], p[4], &r05f_Variable))
      continue;
    r05_close_evar(p+6, p[4], p[2]);
    if (! r05_tvar_left(p+8, p[5], p[4]))
      continue;
    if (! r05_svar_left(p+10, p[9], p[4]))
      continue;
    r05_close_evar(p+11, p[10], p[4]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+13);
    r05_alloc_svar(p+10);
    r05_alloc_insert_pos(p+14);
    r05_alloc_close_bracket(p+15);
    r05_alloc_open_call(p+16);
    r05_alloc_function(&r05f_ExtractVariablesm_Expr);
    r05_alloc_insert_pos(p+17);
    r05_alloc_close_call(p+18);
    r05_push_stack(p[18]);
    r05_push_stack(p[16]);
    r05_link_brackets(p[13], p[15]);
    r05_splice_evar(p[14], p+11);
    r05_splice_evar(p[17], p+6);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  do {
    /* e.Inner: 6 */
    /* e.Terms: 8 */
    /* (Brackets e.Inner) e.Terms */
    if (! r05_brackets_left(p+3, p[1], p[2]))
      continue;
    if (! r05_function_left(p+5, p[3], p[4], &r05f_Brackets))
      continue;
    r05_close_evar(p+6, p[5], p[4]);
    r05_close_evar(p+8, p[4], p[2]);

    r05_reset_allocator();
    r05_alloc_open_call(p+10);
    r05_alloc_function(&r05f_ExtractVariablesm_Expr);
    r05_alloc_insert_pos(p+11);
    r05_alloc_close_call(p+12);
    r05_push_stack(p[12]);
    r05_push_stack(p[10]);
    r05_splice_evar(p[11], p+6);
    r05_splice_evar(p[11], p+8);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  do {
    /* e.Terms: 6 */
    /* t.SrcPos: 8 */
    /* e.Function: 12 */
    /* e.Inner: 14 */
    /* (Call t.SrcPos (e.Function) e.Inner) e.Terms */
    if (! r05_brackets_left(p+3, p[1], p[2]))
      continue;
    if (! r05_function_left(p+5, p[3], p[4], &r05f_Call))
      continue;
    r05_close_evar(p+6, p[4], p[2]);
    if (! r05_tvar_left(p+8, p[5], p[4]))
      continue;
    if (! r05_brackets_left(p+10, p[9], p[4]))
      continue;
    r05_close_evar(p+12, p[10], p[11]);
    r05_close_evar(p+14, p[11], p[4]);

    r05_reset_allocator();
    r05_alloc_open_call(p+16);
    r05_alloc_function(&r05f_ExtractVariablesm_Expr);
    r05_alloc_insert_pos(p+17);
    r05_alloc_close_call(p+18);
    r05_push_stack(p[18]);
    r05_push_stack(p[16]);
    r05_splice_evar(p[17], p+14);
    r05_splice_evar(p[17], p+6);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  do {
    /* t.Other: 3 */
    /* e.Terms: 5 */
    /* t.Other e.Terms */
    if (! r05_tvar_left(p+3, p[1], p[2]))
      continue;
    r05_close_evar(p+5, p[4], p[2]);

    r05_reset_allocator();
    r05_alloc_open_call(p+7);
    r05_alloc_function(&r05f_ExtractVariablesm_Expr);
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

R05_DEFINE_LOCAL_FUNCTION(NewName, "NewName") {
  struct r05_node *p[24] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /* e.Prefix: 5, 11 */
    /* e.Names-B: 7 */
    /* e.Names-E: 13 */
    /* (e.Names-B (e.Prefix) e.Names-E) e.Prefix */
    if (! r05_brackets_left(p+3, p[1], p[2]))
      continue;
    r05_close_evar(p+5, p[4], p[2]);
    p[7] = NULL;
    p[8] = p[3];
    do {
      r05_start_e_loop();
      if (! r05_brackets_left(p+9, p[8], p[4]))
        continue;
      if (! r05_repeated_evar_left(p+11, p[9], p[10], p+5))
        continue;
      if (! r05_empty_hole(p[12], p[10]))
        continue;
      r05_close_evar(p+13, p[10], p[4]);

      r05_reset_allocator();
      r05_alloc_open_call(p+15);
      r05_alloc_function(&r05f_DoNewName);
      r05_alloc_open_bracket(p+16);
      r05_alloc_open_bracket(p+17);
      r05_alloc_insert_pos(p+18);
      r05_alloc_close_bracket(p+19);
      r05_alloc_insert_pos(p+20);
      r05_alloc_close_bracket(p+21);
      r05_alloc_insert_pos(p+22);
      r05_alloc_number(0UL);
      r05_alloc_close_call(p+23);
      r05_push_stack(p[23]);
      r05_push_stack(p[15]);
      r05_link_brackets(p[16], p[21]);
      r05_link_brackets(p[17], p[19]);
      r05_splice_evar(p[18], p+5);
      r05_splice_evar(p[20], p+7);
      r05_splice_evar(p[20], p+13);
      r05_splice_evar(p[22], p+11);
      r05_splice_from_freelist(p[0]);
      r05_splice_to_freelist(p[0], p[2]);
      return;
    } while (r05_open_evar_advance(p+7, p[4]));
    r05_stop_e_loop();
  } while (0);

  do {
    /* e.Names: 5 */
    /* e.Prefix: 7 */
    /* (e.Names) e.Prefix */
    if (! r05_brackets_left(p+3, p[1], p[2]))
      continue;
    r05_close_evar(p+5, p[3], p[4]);
    r05_close_evar(p+7, p[4], p[2]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+9);
    r05_alloc_open_bracket(p+10);
    r05_alloc_insert_pos(p+11);
    r05_alloc_close_bracket(p+12);
    r05_alloc_insert_pos(p+13);
    r05_alloc_close_bracket(p+14);
    r05_alloc_evar(p+7);
    r05_link_brackets(p[9], p[14]);
    r05_link_brackets(p[10], p[12]);
    r05_splice_evar(p[11], p+7);
    r05_splice_evar(p[13], p+5);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(DoNewName, "DoNewName") {
  struct r05_node *p[20] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /* e.Names: 5 */
    /* s.SufNo: 7 */
    /* e.Prefix: 8 */
    /* (e.Names) e.Prefix s.SufNo */
    if (! r05_brackets_left(p+3, p[1], p[2]))
      continue;
    r05_close_evar(p+5, p[3], p[4]);
    if (! r05_svar_right(p+7, p[4], p[2]))
      continue;
    r05_close_evar(p+8, p[4], p[7]);

    r05_reset_allocator();
    r05_alloc_open_call(p+10);
    r05_alloc_function(&r05f_DoNewNamem_NameGenerated);
    r05_alloc_open_bracket(p+11);
    r05_alloc_insert_pos(p+12);
    r05_alloc_close_bracket(p+13);
    r05_alloc_svar(p+7);
    r05_alloc_open_bracket(p+14);
    r05_alloc_evar(p+8);
    r05_alloc_open_call(p+15);
    r05_alloc_function(&r05f_Symb);
    r05_alloc_svar(p+7);
    r05_alloc_close_call(p+16);
    r05_alloc_close_bracket(p+17);
    r05_alloc_insert_pos(p+18);
    r05_alloc_close_call(p+19);
    r05_push_stack(p[19]);
    r05_push_stack(p[10]);
    r05_link_brackets(p[14], p[17]);
    r05_push_stack(p[16]);
    r05_push_stack(p[15]);
    r05_link_brackets(p[11], p[13]);
    r05_splice_evar(p[12], p+8);
    r05_splice_evar(p[18], p+5);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(DoNewNamem_NameGenerated, "DoNewName-NameGenerated") {
  struct r05_node *p[31] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /* e.Prefix: 5 */
    /* s.SufNo: 7 */
    /* e.NewName: 10, 16 */
    /* e.Names-B: 12 */
    /* e.Names-E: 18 */
    /* (e.Prefix) s.SufNo (e.NewName) e.Names-B (e.NewName) e.Names-E */
    if (! r05_brackets_left(p+3, p[1], p[2]))
      continue;
    r05_close_evar(p+5, p[3], p[4]);
    if (! r05_svar_left(p+7, p[4], p[2]))
      continue;
    if (! r05_brackets_left(p+8, p[7], p[2]))
      continue;
    r05_close_evar(p+10, p[8], p[9]);
    p[12] = NULL;
    p[13] = p[9];
    do {
      r05_start_e_loop();
      if (! r05_brackets_left(p+14, p[13], p[2]))
        continue;
      if (! r05_repeated_evar_left(p+16, p[14], p[15], p+10))
        continue;
      if (! r05_empty_hole(p[17], p[15]))
        continue;
      r05_close_evar(p+18, p[15], p[2]);

      r05_reset_allocator();
      r05_alloc_open_call(p+20);
      r05_alloc_function(&r05f_DoNewName);
      r05_alloc_open_bracket(p+21);
      r05_alloc_open_bracket(p+22);
      r05_alloc_insert_pos(p+23);
      r05_alloc_close_bracket(p+24);
      r05_alloc_insert_pos(p+25);
      r05_alloc_close_bracket(p+26);
      r05_alloc_insert_pos(p+27);
      r05_alloc_open_call(p+28);
      r05_alloc_function(&r05f_k2B_);
      r05_alloc_svar(p+7);
      r05_alloc_number(1UL);
      r05_alloc_close_call(p+29);
      r05_alloc_close_call(p+30);
      r05_push_stack(p[30]);
      r05_push_stack(p[20]);
      r05_push_stack(p[29]);
      r05_push_stack(p[28]);
      r05_link_brackets(p[21], p[26]);
      r05_link_brackets(p[22], p[24]);
      r05_splice_evar(p[23], p+10);
      r05_splice_evar(p[25], p+12);
      r05_splice_evar(p[25], p+18);
      r05_splice_evar(p[27], p+5);
      r05_splice_from_freelist(p[0]);
      r05_splice_to_freelist(p[0], p[2]);
      return;
    } while (r05_open_evar_advance(p+12, p[2]));
    r05_stop_e_loop();
  } while (0);

  do {
    /* e.Prefix: 5 */
    /* s.SufNo: 7 */
    /* e.NewName: 10 */
    /* e.Names: 12 */
    /* (e.Prefix) s.SufNo (e.NewName) e.Names */
    if (! r05_brackets_left(p+3, p[1], p[2]))
      continue;
    r05_close_evar(p+5, p[3], p[4]);
    if (! r05_svar_left(p+7, p[4], p[2]))
      continue;
    if (! r05_brackets_left(p+8, p[7], p[2]))
      continue;
    r05_close_evar(p+10, p[8], p[9]);
    r05_close_evar(p+12, p[9], p[2]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+14);
    r05_alloc_open_bracket(p+15);
    r05_alloc_insert_pos(p+16);
    r05_alloc_close_bracket(p+17);
    r05_alloc_insert_pos(p+18);
    r05_alloc_close_bracket(p+19);
    r05_alloc_evar(p+10);
    r05_link_brackets(p[14], p[19]);
    r05_link_brackets(p[15], p[17]);
    r05_splice_evar(p[16], p+10);
    r05_splice_evar(p[18], p+12);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  r05_recognition_impossible();
}

static const struct r05_function *metatable_entries[] = {
  &r05f_MapAccum,
  &r05f_DelAccumulator,
  &r05f_Map,
  &r05f_Unique,
  &r05f_Transform,
  &r05f_Transformm_Step,
  &r05f_r5fwm_transformeru_BuiltinName,
  &r05f_r5fwm_transformeru_GetFunctionName,
  &r05f_r5fwm_transformeru_RemovePos,
  &r05f_r5fwm_transformeru_TransformUnit,
  &r05f_UnBlock,
  &r05f_DoUnBlock,
  &r05f_DoUnBlockm_NextFunction,
  &r05f_WithBlock,
  &r05f_DoWithBlock,
  &r05f_BlockScopeVars,
  &r05f_r5fwm_transformeru_MakeVariables,
  &r05f_r5fwm_transformeru_AddScopeVars,
  &r05f_UnCondition,
  &r05f_DoUnCondition,
  &r05f_DoUnConditionm_ConditionSentence,
  &r05f_DoUnConditionm_NextFunction,
  &r05f_UnConditionSentence,
  &r05f_UnConditionSentencem_AnalyzeContinuation,
  &r05f_UnConditionSentencem_ConditionSubFunctions,
  &r05f_AnalyzeContinuation,
  &r05f_MakeContinuationSentence,
  &r05f_PatternSteps,
  &r05f_DoPatternSteps,
  &r05f_HardItem,
  &r05f_r5fwm_transformeru_BindBrackets,
  &r05f_DoBindBrackets,
  &r05f_T1,
  &r05f_PassiveHoles,
  &r05f_T2,
  &r05f_T3,
  &r05f_T4,
  &r05f_T5,
  &r05f_T5m_UnHole,
  &r05f_T5m_sub,
  &r05f_Substitute,
  &r05f_T6,
  &r05f_T7,
  &r05f_T0,
  &r05f_DoT0,
  &r05f_ConditionSubFunctions,
  &r05f_ConditionSubFunctionsm_SplitSentence,
  &r05f_ConditionSubFunctionsm_CheckFunction,
  &r05f_ConditionSubFunctionsm_OpenEChain,
  &r05f_OpenEChain,
  &r05f_DoOpenEChain,
  &r05f_MakeOpenEm_ForwardNext,
  &r05f_ExtractVariables,
  &r05f_ExtractVariablesm_Sentences,
  &r05f_ExtractVariablesm_Tail,
  &r05f_ExtractVariablesm_Expr,
  &r05f_NewName,
  &r05f_DoNewName,
  &r05f_DoNewNamem_NameGenerated,
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
