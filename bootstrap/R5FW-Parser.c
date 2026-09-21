/* Automatically generated file. Don't edit! */
#include "refal05rts.h"


R05_DECLARE_ENTRY_FUNCTION(LoadFile)
R05_DECLARE_ENTRY_FUNCTION(Inc)
R05_DECLARE_ENTRY_FUNCTION(Map)
R05_DECLARE_ENTRY_FUNCTION(MapAccum)
R05_DECLARE_ENTRY_FUNCTION(TokName)
R05_DECLARE_ENTRY_FUNCTION(Builtins)
R05_DECLARE_LOCAL_FUNCTION(DoBuiltins)
R05_DECLARE_ENTRY_FUNCTION(Scan)
R05_DECLARE_ENTRY_FUNCTION(ScanStringm_FromPos)
R05_DECLARE_LOCAL_FUNCTION(SkipBOM)
R05_DECLARE_LOCAL_FUNCTION(IncLine)
R05_DECLARE_LOCAL_FUNCTION(IncCol)
R05_DECLARE_LOCAL_FUNCTION(DoScan)
R05_DECLARE_LOCAL_FUNCTION(IsVarType)
R05_DECLARE_LOCAL_FUNCTION(IsPunctuation)
R05_DECLARE_LOCAL_FUNCTION(DoScanm_Keyword)
R05_DECLARE_LOCAL_FUNCTION(DoScanm_BuildKeyword)
R05_DECLARE_LOCAL_FUNCTION(DoScanm_Number)
R05_DECLARE_LOCAL_FUNCTION(DropZero)
R05_DECLARE_LOCAL_FUNCTION(CheckNumber)
R05_DECLARE_LOCAL_FUNCTION(DoCheckNumber)
R05_DECLARE_LOCAL_FUNCTION(CheckNumberm_AppendDigit)
R05_DECLARE_LOCAL_FUNCTION(DoScanm_Var)
R05_DECLARE_LOCAL_FUNCTION(IsIdentTail)
R05_DECLARE_LOCAL_FUNCTION(CheckIndex)
R05_DECLARE_LOCAL_FUNCTION(CheckIndexm_Digits)
R05_DECLARE_LOCAL_FUNCTION(DoScanm_CComment)
R05_DECLARE_LOCAL_FUNCTION(DoScanm_Ident)
R05_DECLARE_LOCAL_FUNCTION(DoScanm_Chars)
R05_DECLARE_LOCAL_FUNCTION(Escape)
R05_DECLARE_LOCAL_FUNCTION(DoScanm_Charsm_Escape)
R05_DECLARE_LOCAL_FUNCTION(HexDigit)
R05_DECLARE_LOCAL_FUNCTION(DoHexDigit)
R05_DECLARE_LOCAL_FUNCTION(DoScanm_Compound)
R05_DECLARE_LOCAL_FUNCTION(DoScanm_Compoundm_HandleEscape)
R05_DECLARE_LOCAL_FUNCTION(DoScanm_Escape)
R05_DECLARE_ENTRY_FUNCTION(Parse)
R05_DECLARE_LOCAL_FUNCTION(Parsem_Aux)
R05_DECLARE_LOCAL_FUNCTION(SeparateLexerErrors)
R05_DECLARE_LOCAL_FUNCTION(Program)
R05_DECLARE_LOCAL_FUNCTION(FIRSTu_Unit)
R05_DECLARE_LOCAL_FUNCTION(Unit)
R05_DECLARE_LOCAL_FUNCTION(NameList)
R05_DECLARE_LOCAL_FUNCTION(FunctionDef)
R05_DECLARE_LOCAL_FUNCTION(Block)
R05_DECLARE_LOCAL_FUNCTION(CheckEmptyBlock)
R05_DECLARE_LOCAL_FUNCTION(Sentences)
R05_DECLARE_LOCAL_FUNCTION(FIRSTu_Sentence)
R05_DECLARE_LOCAL_FUNCTION(Sentence)
R05_DECLARE_LOCAL_FUNCTION(UnexpectedTokenInSentence)
R05_DECLARE_LOCAL_FUNCTION(SentenceTail)
R05_DECLARE_LOCAL_FUNCTION(Pattern)
R05_DECLARE_LOCAL_FUNCTION(Result)
R05_DECLARE_LOCAL_FUNCTION(DirtyExpression)
R05_DECLARE_LOCAL_FUNCTION(Expression)
R05_DECLARE_LOCAL_FUNCTION(FIRSTu_Term)
R05_DECLARE_LOCAL_FUNCTION(Term)
R05_DECLARE_LOCAL_FUNCTION(CallBracketInPattern)
R05_DECLARE_LOCAL_FUNCTION(Unbalanced)
R05_DECLARE_LOCAL_FUNCTION(UnexpectedToken)
R05_DECLARE_LOCAL_FUNCTION(SemanticCheck)
R05_DECLARE_ENTRY_FUNCTION(r5fwm_parseru_FormatError)
R05_DECLARE_LOCAL_FUNCTION(NoEntryError)
R05_DECLARE_LOCAL_FUNCTION(GetFuncNames)
R05_DECLARE_ENTRY_FUNCTION(r5fwm_parseru_GetNames)
R05_DECLARE_LOCAL_FUNCTION(UpdateHasEntry)
R05_DECLARE_ENTRY_FUNCTION(r5fwm_parseru_RemovePos)
R05_DECLARE_LOCAL_FUNCTION(FindSemanticsErrors)
R05_DECLARE_LOCAL_FUNCTION(FindRedefinitions)
R05_DECLARE_ENTRY_FUNCTION(r5fwm_parseru_BuiltinDefinition)
R05_DECLARE_ENTRY_FUNCTION(r5fwm_parseru_ExtractDefinition)
R05_DECLARE_ENTRY_FUNCTION(r5fwm_parseru_MarkExternalName)
R05_DECLARE_LOCAL_FUNCTION(DoFindRedefinitions)
R05_DECLARE_LOCAL_FUNCTION(MakeRedefinitionError)
R05_DECLARE_LOCAL_FUNCTION(DeclType)
R05_DECLARE_ENTRY_FUNCTION(r5fwm_parseru_FindSemanticsErrors)
R05_DECLARE_LOCAL_FUNCTION(CheckSentences)
R05_DECLARE_LOCAL_FUNCTION(ExtractCheckable)
R05_DECLARE_LOCAL_FUNCTION(ExtractCheckablem_Tail)
R05_DECLARE_LOCAL_FUNCTION(ExtractCheckablem_Sentences)
R05_DECLARE_LOCAL_FUNCTION(ExtractCheckablem_Expr)
R05_DECLARE_ENTRY_FUNCTION(r5fwm_parseru_ExtractCheckablem_Term)
R05_DECLARE_ENTRY_FUNCTION(r5fwm_parseru_CheckSentence)
R05_DECLARE_LOCAL_FUNCTION(CheckSentencem_Tail)
R05_DECLARE_LOCAL_FUNCTION(CheckResult)
R05_DECLARE_ENTRY_FUNCTION(ListOfBuiltin)
R05_DECLARE_ENTRY_FUNCTION(Explode)
R05_DECLARE_ENTRY_FUNCTION(Type)
R05_DECLARE_ENTRY_FUNCTION(Ord)
R05_DECLARE_ENTRY_FUNCTION(Chr)
R05_DECLARE_ENTRY_FUNCTION(k2B_)
R05_DECLARE_ENTRY_FUNCTION(k2A_)
R05_DECLARE_ENTRY_FUNCTION(Numb)
R05_DECLARE_ENTRY_FUNCTION(Divmod)
R05_DEFINE_LOCAL_ENUM(TkName, "TkName")
R05_DEFINE_LOCAL_ENUM(TkCompound, "TkCompound")
R05_DEFINE_LOCAL_ENUM(TkMacroDigit, "TkMacroDigit")
R05_DEFINE_LOCAL_ENUM(TkChar, "TkChar")
R05_DEFINE_LOCAL_ENUM(TkVariable, "TkVariable")
R05_DEFINE_LOCAL_ENUM(TkOpenBracket, "TkOpenBracket")
R05_DEFINE_LOCAL_ENUM(TkCloseBracket, "TkCloseBracket")
R05_DEFINE_LOCAL_ENUM(TkOpenBlock, "TkOpenBlock")
R05_DEFINE_LOCAL_ENUM(TkCloseBlock, "TkCloseBlock")
R05_DEFINE_LOCAL_ENUM(TkOpenCall, "TkOpenCall")
R05_DEFINE_LOCAL_ENUM(TkCloseCall, "TkCloseCall")
R05_DEFINE_LOCAL_ENUM(TkComma, "TkComma")
R05_DEFINE_LOCAL_ENUM(TkColon, "TkColon")
R05_DEFINE_LOCAL_ENUM(TkAssign, "TkAssign")
R05_DEFINE_LOCAL_ENUM(TkSemicolon, "TkSemicolon")
R05_DEFINE_LOCAL_ENUM(TkExtern, "TkExtern")
R05_DEFINE_LOCAL_ENUM(TkEntry, "TkEntry")
R05_DEFINE_LOCAL_ENUM(TkSpecComment, "TkSpecComment")
R05_DEFINE_LOCAL_ENUM(TkEOF, "TkEOF")
R05_DEFINE_LOCAL_ENUM(Error, "Error")
R05_DEFINE_LOCAL_ENUM(SpecialComment, "SpecialComment")
R05_DEFINE_LOCAL_ENUM(Function, "Function")
R05_DEFINE_LOCAL_ENUM(Extern, "Extern")
R05_DEFINE_LOCAL_ENUM(Builtin, "Builtin")
R05_DEFINE_LOCAL_ENUM(NOm_POS, "NO-POS")
R05_DEFINE_LOCAL_ENUM(Define, "Define")
R05_DEFINE_LOCAL_ENUM(External, "External")
R05_DEFINE_LOCAL_ENUM(Variable, "Variable")
R05_DEFINE_LOCAL_ENUM(Brackets, "Brackets")
R05_DEFINE_LOCAL_ENUM(Call, "Call")
R05_DEFINE_LOCAL_ENUM(True, "True")
R05_DEFINE_LOCAL_ENUM(Len, "Len")
R05_DEFINE_LOCAL_ENUM(TkError, "TkError")
R05_DEFINE_LOCAL_ENUM(Entry, "Entry")
R05_DEFINE_LOCAL_ENUM(HasEntry, "HasEntry")
R05_DEFINE_LOCAL_ENUM(Local, "Local")
R05_DEFINE_LOCAL_ENUM(Condition, "Condition")
R05_DEFINE_LOCAL_ENUM(RETURN, "RETURN")
R05_DEFINE_LOCAL_ENUM(CALLm_BLOCK, "CALL-BLOCK")
R05_DEFINE_LOCAL_ENUM(False, "False")
R05_DEFINE_LOCAL_ENUM(Ok, "Ok")
R05_DEFINE_LOCAL_ENUM(Errorm_EOL, "Error-EOL")
R05_DEFINE_LOCAL_ENUM(Success, "Success")
R05_DEFINE_LOCAL_ENUM(Fails, "Fails")
R05_DEFINE_LOCAL_ENUM(Overflow, "Overflow")
R05_DEFINE_LOCAL_ENUM(NoEntry, "NoEntry")
R05_DEFINE_LOCAL_ENUM(Word, "Word")
R05_DEFINE_LOCAL_ENUM(Number, "Number")
R05_DEFINE_LOCAL_ENUM(Char, "Char")
R05_DEFINE_LOCAL_ENUM(Symbol, "Symbol")

R05_DEFINE_ENTRY_FUNCTION(TokName, "TokName") {
  struct r05_node *p[4] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /* TkName */
    if (! r05_function_left(p+3, p[1], p[2], &r05f_TkName))
      continue;
    if (! r05_empty_hole(p[3], p[2]))
      continue;

    r05_reset_allocator();
    r05_alloc_chars("identifier", 10);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  do {
    /* TkCompound */
    if (! r05_function_left(p+3, p[1], p[2], &r05f_TkCompound))
      continue;
    if (! r05_empty_hole(p[3], p[2]))
      continue;

    r05_reset_allocator();
    r05_alloc_chars("compound symbol", 15);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  do {
    /* TkMacroDigit */
    if (! r05_function_left(p+3, p[1], p[2], &r05f_TkMacroDigit))
      continue;
    if (! r05_empty_hole(p[3], p[2]))
      continue;

    r05_reset_allocator();
    r05_alloc_chars("number", 6);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  do {
    /* TkChar */
    if (! r05_function_left(p+3, p[1], p[2], &r05f_TkChar))
      continue;
    if (! r05_empty_hole(p[3], p[2]))
      continue;

    r05_reset_allocator();
    r05_alloc_chars("character", 9);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  do {
    /* TkVariable */
    if (! r05_function_left(p+3, p[1], p[2], &r05f_TkVariable))
      continue;
    if (! r05_empty_hole(p[3], p[2]))
      continue;

    r05_reset_allocator();
    r05_alloc_chars("variable", 8);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  do {
    /* TkOpenBracket */
    if (! r05_function_left(p+3, p[1], p[2], &r05f_TkOpenBracket))
      continue;
    if (! r05_empty_hole(p[3], p[2]))
      continue;

    r05_reset_allocator();
    r05_alloc_chars("\'(\'", 3);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  do {
    /* TkCloseBracket */
    if (! r05_function_left(p+3, p[1], p[2], &r05f_TkCloseBracket))
      continue;
    if (! r05_empty_hole(p[3], p[2]))
      continue;

    r05_reset_allocator();
    r05_alloc_chars("\')\'", 3);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  do {
    /* TkOpenBlock */
    if (! r05_function_left(p+3, p[1], p[2], &r05f_TkOpenBlock))
      continue;
    if (! r05_empty_hole(p[3], p[2]))
      continue;

    r05_reset_allocator();
    r05_alloc_chars("\'{\'", 3);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  do {
    /* TkCloseBlock */
    if (! r05_function_left(p+3, p[1], p[2], &r05f_TkCloseBlock))
      continue;
    if (! r05_empty_hole(p[3], p[2]))
      continue;

    r05_reset_allocator();
    r05_alloc_chars("\'}\'", 3);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  do {
    /* TkOpenCall */
    if (! r05_function_left(p+3, p[1], p[2], &r05f_TkOpenCall))
      continue;
    if (! r05_empty_hole(p[3], p[2]))
      continue;

    r05_reset_allocator();
    r05_alloc_chars("\'<\'", 3);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  do {
    /* TkCloseCall */
    if (! r05_function_left(p+3, p[1], p[2], &r05f_TkCloseCall))
      continue;
    if (! r05_empty_hole(p[3], p[2]))
      continue;

    r05_reset_allocator();
    r05_alloc_chars("\'>\'", 3);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  do {
    /* TkComma */
    if (! r05_function_left(p+3, p[1], p[2], &r05f_TkComma))
      continue;
    if (! r05_empty_hole(p[3], p[2]))
      continue;

    r05_reset_allocator();
    r05_alloc_chars("\',\'", 3);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  do {
    /* TkColon */
    if (! r05_function_left(p+3, p[1], p[2], &r05f_TkColon))
      continue;
    if (! r05_empty_hole(p[3], p[2]))
      continue;

    r05_reset_allocator();
    r05_alloc_chars("\':\'", 3);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  do {
    /* TkAssign */
    if (! r05_function_left(p+3, p[1], p[2], &r05f_TkAssign))
      continue;
    if (! r05_empty_hole(p[3], p[2]))
      continue;

    r05_reset_allocator();
    r05_alloc_chars("\'=\'", 3);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  do {
    /* TkSemicolon */
    if (! r05_function_left(p+3, p[1], p[2], &r05f_TkSemicolon))
      continue;
    if (! r05_empty_hole(p[3], p[2]))
      continue;

    r05_reset_allocator();
    r05_alloc_chars("\';\'", 3);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  do {
    /* TkExtern */
    if (! r05_function_left(p+3, p[1], p[2], &r05f_TkExtern))
      continue;
    if (! r05_empty_hole(p[3], p[2]))
      continue;

    r05_reset_allocator();
    r05_alloc_chars("$EXTERN", 7);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  do {
    /* TkEntry */
    if (! r05_function_left(p+3, p[1], p[2], &r05f_TkEntry))
      continue;
    if (! r05_empty_hole(p[3], p[2]))
      continue;

    r05_reset_allocator();
    r05_alloc_chars("$ENTRY", 6);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  do {
    /* TkSpecComment */
    if (! r05_function_left(p+3, p[1], p[2], &r05f_TkSpecComment))
      continue;
    if (! r05_empty_hole(p[3], p[2]))
      continue;

    r05_reset_allocator();
    r05_alloc_chars("\'*$\'-comment", 12);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  do {
    /* TkEOF */
    if (! r05_function_left(p+3, p[1], p[2], &r05f_TkEOF))
      continue;
    if (! r05_empty_hole(p[3], p[2]))
      continue;

    r05_reset_allocator();
    r05_alloc_chars("end of file", 11);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_ENTRY_FUNCTION(Builtins, "Builtins") {
  struct r05_node *p[19] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /*  */
    if (! r05_empty_hole(p[1], p[2]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_bracket(p+3);
    r05_alloc_char('+');
    r05_alloc_close_bracket(p+4);
    r05_alloc_open_bracket(p+5);
    r05_alloc_char('-');
    r05_alloc_close_bracket(p+6);
    r05_alloc_open_bracket(p+7);
    r05_alloc_char('*');
    r05_alloc_close_bracket(p+8);
    r05_alloc_open_bracket(p+9);
    r05_alloc_char('/');
    r05_alloc_close_bracket(p+10);
    r05_alloc_open_bracket(p+11);
    r05_alloc_char('%');
    r05_alloc_close_bracket(p+12);
    r05_alloc_open_bracket(p+13);
    r05_alloc_char('?');
    r05_alloc_close_bracket(p+14);
    r05_alloc_open_call(p+15);
    r05_alloc_function(&r05f_DoBuiltins);
    r05_alloc_open_call(p+16);
    r05_alloc_function(&r05f_ListOfBuiltin);
    r05_alloc_close_call(p+17);
    r05_alloc_close_call(p+18);
    r05_push_stack(p[18]);
    r05_push_stack(p[15]);
    r05_push_stack(p[17]);
    r05_push_stack(p[16]);
    r05_link_brackets(p[13], p[14]);
    r05_link_brackets(p[11], p[12]);
    r05_link_brackets(p[9], p[10]);
    r05_link_brackets(p[7], p[8]);
    r05_link_brackets(p[5], p[6]);
    r05_link_brackets(p[3], p[4]);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(DoBuiltins, "DoBuiltins") {
  struct r05_node *p[17] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /* e.Builtins: 5 */
    /* s.Number: 7 */
    /* s.Name: 8 */
    /* s.Type: 9 */
    /* (s.Number s.Name s.Type) e.Builtins */
    if (! r05_brackets_left(p+3, p[1], p[2]))
      continue;
    r05_close_evar(p+5, p[4], p[2]);
    if (! r05_svar_left(p+7, p[3], p[4]))
      continue;
    if (! r05_svar_left(p+8, p[7], p[4]))
      continue;
    if (! r05_svar_left(p+9, p[8], p[4]))
      continue;
    if (! r05_empty_hole(p[9], p[4]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_bracket(p+10);
    r05_alloc_open_call(p+11);
    r05_alloc_function(&r05f_Explode);
    r05_alloc_svar(p+8);
    r05_alloc_close_call(p+12);
    r05_alloc_close_bracket(p+13);
    r05_alloc_open_call(p+14);
    r05_alloc_function(&r05f_DoBuiltins);
    r05_alloc_insert_pos(p+15);
    r05_alloc_close_call(p+16);
    r05_push_stack(p[16]);
    r05_push_stack(p[14]);
    r05_link_brackets(p[10], p[13]);
    r05_push_stack(p[12]);
    r05_push_stack(p[11]);
    r05_splice_evar(p[15], p+5);
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

R05_DEFINE_ENTRY_FUNCTION(Scan, "Scan") {
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
    r05_alloc_function(&r05f_DoScan);
    r05_alloc_open_bracket(p+6);
    r05_alloc_number(1UL);
    r05_alloc_number(1UL);
    r05_alloc_insert_pos(p+7);
    r05_alloc_close_bracket(p+8);
    r05_alloc_open_call(p+9);
    r05_alloc_function(&r05f_SkipBOM);
    r05_alloc_open_call(p+10);
    r05_alloc_function(&r05f_LoadFile);
    r05_alloc_evar(p+3);
    r05_alloc_close_call(p+11);
    r05_alloc_close_call(p+12);
    r05_alloc_close_call(p+13);
    r05_push_stack(p[13]);
    r05_push_stack(p[5]);
    r05_push_stack(p[12]);
    r05_push_stack(p[9]);
    r05_push_stack(p[11]);
    r05_push_stack(p[10]);
    r05_link_brackets(p[6], p[8]);
    r05_splice_evar(p[7], p+3);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);
}

R05_DEFINE_ENTRY_FUNCTION(ScanStringm_FromPos, "ScanString-FromPos") {
  struct r05_node *p[13] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /* t.Pos: 3 */
    /* e.String: 5 */
    /* t.Pos e.String */
    if (! r05_tvar_left(p+3, p[1], p[2]))
      continue;
    r05_close_evar(p+5, p[4], p[2]);

    r05_reset_allocator();
    r05_alloc_open_call(p+7);
    r05_alloc_function(&r05f_DoScan);
    r05_alloc_insert_pos(p+8);
    r05_alloc_open_bracket(p+9);
    r05_alloc_insert_pos(p+10);
    r05_alloc_close_bracket(p+11);
    r05_alloc_close_call(p+12);
    r05_push_stack(p[12]);
    r05_push_stack(p[7]);
    r05_link_brackets(p[9], p[11]);
    r05_splice_tvar(p[8], p+3);
    r05_splice_evar(p[10], p+5);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(SkipBOM, "SkipBOM") {
  R05_DEFINE_COND_FUNCTION(SkipBOM, "SkipBOM$1", 1)
  struct r05_node *p[18] = { 0 };

  r05_this_is_generated_function();
  switch (arg_begin->next->info.function->resume_entry >> 1) {
  case 0:
    p[0] = arg_begin;
    p[1] = arg_begin->next;
    p[2] = arg_end;

    do {
      /* e.FirstLine: 8 */
      /* e.Lines: 10 */
      /* ('﻿' e.FirstLine) e.Lines */
      if (! r05_brackets_left(p+3, p[1], p[2]))
        continue;
      if (! r05_char_left(p+5, p[3], p[4], '\357'))
        continue;
      if (! r05_char_left(p+6, p[5], p[4], '\273'))
        continue;
      if (! r05_char_left(p+7, p[6], p[4], '\277'))
        continue;
      r05_close_evar(p+8, p[7], p[4]);
      r05_close_evar(p+10, p[4], p[2]);

      r05_reset_allocator();
      r05_alloc_open_bracket(p+12);
      r05_alloc_insert_pos(p+13);
      r05_alloc_close_bracket(p+14);
      r05_alloc_insert_pos(p+15);
      r05_link_brackets(p[12], p[14]);
      r05_splice_evar(p[13], p+8);
      r05_splice_evar(p[15], p+10);
      r05_splice_from_freelist(p[0]);
      r05_splice_to_freelist(p[0], p[2]);
      return;
    } while (0);

    do {
      /* e.Lines: 5 */
      /* s.BOM: 7 */
      /* e.FirstLine: 8 */
      /* (s.BOM e.FirstLine) e.Lines */
      if (! r05_brackets_left(p+3, p[1], p[2]))
        continue;
      r05_close_evar(p+5, p[4], p[2]);
      if (! r05_svar_left(p+7, p[3], p[4]))
        continue;
      r05_close_evar(p+8, p[7], p[4]);

      r05_reset_allocator();
      r05_alloc_open_call(p+10);
      r05_alloc_function(&c1);
      r05_alloc_open_call(p+11);
      r05_alloc_function(&r05f_Ord);
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
        /* e.Lines: 5 */
        /* s.BOM: 7 */
        /* e.FirstLine: 8 */
        /* 65279 */
        if (! r05_number_left(p+13, p[11], p[12], 65279UL))
          continue;
        if (! r05_empty_hole(p[13], p[12]))
          continue;

        r05_reset_allocator();
        r05_alloc_open_bracket(p+14);
        r05_alloc_insert_pos(p+15);
        r05_alloc_close_bracket(p+16);
        r05_alloc_insert_pos(p+17);
        r05_link_brackets(p[14], p[16]);
        r05_splice_evar(p[15], p+8);
        r05_splice_evar(p[17], p+5);
        r05_splice_from_freelist(p[0]);
        r05_splice_to_freelist(p[0], p[2]);
        return;
      } while (0);
      r05_splice_to_freelist(p[10], p[12]);
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
}

R05_DEFINE_LOCAL_FUNCTION(IncLine, "IncLine") {
  struct r05_node *p[14] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /* s.Line: 5 */
    /* s.Col: 6 */
    /* e.FileName: 7 */
    /* (s.Line s.Col e.FileName) */
    if (! r05_brackets_left(p+3, p[1], p[2]))
      continue;
    if (! r05_empty_hole(p[4], p[2]))
      continue;
    if (! r05_svar_left(p+5, p[3], p[4]))
      continue;
    if (! r05_svar_left(p+6, p[5], p[4]))
      continue;
    r05_close_evar(p+7, p[6], p[4]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+9);
    r05_alloc_open_call(p+10);
    r05_alloc_function(&r05f_Inc);
    r05_alloc_svar(p+5);
    r05_alloc_close_call(p+11);
    r05_alloc_number(1UL);
    r05_alloc_insert_pos(p+12);
    r05_alloc_close_bracket(p+13);
    r05_link_brackets(p[9], p[13]);
    r05_push_stack(p[11]);
    r05_push_stack(p[10]);
    r05_splice_evar(p[12], p+7);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(IncCol, "IncCol") {
  struct r05_node *p[16] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /* s.Line: 5 */
    /* s.Col: 6 */
    /* e.FileName: 7 */
    /* (s.Line s.Col e.FileName) */
    if (! r05_brackets_left(p+3, p[1], p[2]))
      continue;
    if (! r05_empty_hole(p[4], p[2]))
      continue;
    if (! r05_svar_left(p+5, p[3], p[4]))
      continue;
    if (! r05_svar_left(p+6, p[5], p[4]))
      continue;
    r05_close_evar(p+7, p[6], p[4]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+9);
    r05_alloc_svar(p+5);
    r05_alloc_open_call(p+10);
    r05_alloc_function(&r05f_Inc);
    r05_alloc_svar(p+6);
    r05_alloc_close_call(p+11);
    r05_alloc_insert_pos(p+12);
    r05_alloc_close_bracket(p+13);
    r05_link_brackets(p[9], p[13]);
    r05_push_stack(p[11]);
    r05_push_stack(p[10]);
    r05_splice_evar(p[12], p+7);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  do {
    /* t.Pos: 4 */
    /* t.Pos Len */
    if (! r05_function_right(p+3, p[1], p[2], &r05f_Len))
      continue;
    if (! r05_tvar_left(p+4, p[1], p[3]))
      continue;
    if (! r05_empty_hole(p[5], p[3]))
      continue;

    r05_reset_allocator();
    r05_alloc_insert_pos(p+6);
    r05_splice_tvar(p[6], p+4);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  do {
    /* t.Pos: 3 */
    /* s.First: 6 */
    /* e.String: 7 */
    /* t.Pos Len s.First e.String */
    if (! r05_tvar_left(p+3, p[1], p[2]))
      continue;
    if (! r05_function_left(p+5, p[4], p[2], &r05f_Len))
      continue;
    if (! r05_svar_left(p+6, p[5], p[2]))
      continue;
    r05_close_evar(p+7, p[6], p[2]);

    r05_reset_allocator();
    r05_alloc_open_call(p+9);
    r05_alloc_function(&r05f_IncCol);
    r05_alloc_open_call(p+10);
    r05_alloc_function(&r05f_IncCol);
    r05_alloc_insert_pos(p+11);
    r05_alloc_close_call(p+12);
    r05_alloc_function(&r05f_Len);
    r05_alloc_insert_pos(p+13);
    r05_alloc_close_call(p+14);
    r05_push_stack(p[14]);
    r05_push_stack(p[9]);
    r05_push_stack(p[12]);
    r05_push_stack(p[10]);
    r05_splice_tvar(p[11], p+3);
    r05_splice_evar(p[13], p+7);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  do {
    /* s.Line: 6 */
    /* s.Col: 7 */
    /* e.FileName: 8 */
    /* s.Number: 10 */
    /* (s.Line s.Col e.FileName) '+' s.Number */
    if (! r05_brackets_left(p+3, p[1], p[2]))
      continue;
    if (! r05_char_left(p+5, p[4], p[2], '+'))
      continue;
    if (! r05_svar_left(p+6, p[3], p[4]))
      continue;
    if (! r05_svar_left(p+7, p[6], p[4]))
      continue;
    r05_close_evar(p+8, p[7], p[4]);
    if (! r05_svar_left(p+10, p[5], p[2]))
      continue;
    if (! r05_empty_hole(p[10], p[2]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_bracket(p+11);
    r05_alloc_svar(p+6);
    r05_alloc_open_call(p+12);
    r05_alloc_function(&r05f_k2B_);
    r05_alloc_svar(p+7);
    r05_alloc_svar(p+10);
    r05_alloc_close_call(p+13);
    r05_alloc_insert_pos(p+14);
    r05_alloc_close_bracket(p+15);
    r05_link_brackets(p[11], p[15]);
    r05_push_stack(p[13]);
    r05_push_stack(p[12]);
    r05_splice_evar(p[14], p+8);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(DoScan, "DoScan") {
  R05_DEFINE_COND_FUNCTION(DoScan, "DoScan$1", 1)
  R05_DEFINE_COND_FUNCTION(DoScan, "DoScan$2", 2)
  R05_DEFINE_COND_FUNCTION(DoScan, "DoScan$3", 3)
  R05_DEFINE_COND_FUNCTION(DoScan, "DoScan$4", 4)
  R05_DEFINE_COND_FUNCTION(DoScan, "DoScan$5", 5)
  R05_DEFINE_COND_FUNCTION(DoScan, "DoScan$6", 6)
  struct r05_node *p[32] = { 0 };

  r05_this_is_generated_function();
  switch (arg_begin->next->info.function->resume_entry >> 1) {
  case 0:
    p[0] = arg_begin;
    p[1] = arg_begin->next;
    p[2] = arg_end;

    do {
      /* t.Pos: 3 */
      /* t.Pos */
      if (! r05_tvar_left(p+3, p[1], p[2]))
        continue;
      if (! r05_empty_hole(p[4], p[2]))
        continue;

      r05_reset_allocator();
      r05_alloc_open_bracket(p+5);
      r05_alloc_function(&r05f_TkEOF);
      r05_alloc_insert_pos(p+6);
      r05_alloc_close_bracket(p+7);
      r05_link_brackets(p[5], p[7]);
      r05_splice_tvar(p[6], p+3);
      r05_splice_from_freelist(p[0]);
      r05_splice_to_freelist(p[0], p[2]);
      return;
    } while (0);

    do {
      /* t.Pos: 3 */
      /* e.Lines: 7 */
      /* t.Pos () e.Lines */
      if (! r05_tvar_left(p+3, p[1], p[2]))
        continue;
      if (! r05_brackets_left(p+5, p[4], p[2]))
        continue;
      if (! r05_empty_hole(p[5], p[6]))
        continue;
      r05_close_evar(p+7, p[6], p[2]);

      r05_reset_allocator();
      r05_alloc_open_call(p+9);
      r05_alloc_function(&r05f_DoScan);
      r05_alloc_open_call(p+10);
      r05_alloc_function(&r05f_IncLine);
      r05_alloc_insert_pos(p+11);
      r05_alloc_close_call(p+12);
      r05_alloc_insert_pos(p+13);
      r05_alloc_close_call(p+14);
      r05_push_stack(p[14]);
      r05_push_stack(p[9]);
      r05_push_stack(p[12]);
      r05_push_stack(p[10]);
      r05_splice_tvar(p[11], p+3);
      r05_splice_evar(p[13], p+7);
      r05_splice_from_freelist(p[0]);
      r05_splice_to_freelist(p[0], p[2]);
      return;
    } while (0);

    do {
      /* t.Pos: 3 */
      /* e.Line: 8 */
      /* e.Lines: 10 */
      /* t.Pos (' ' e.Line) e.Lines */
      if (! r05_tvar_left(p+3, p[1], p[2]))
        continue;
      if (! r05_brackets_left(p+5, p[4], p[2]))
        continue;
      if (! r05_char_left(p+7, p[5], p[6], ' '))
        continue;
      r05_close_evar(p+8, p[7], p[6]);
      r05_close_evar(p+10, p[6], p[2]);

      r05_reset_allocator();
      r05_alloc_open_call(p+12);
      r05_alloc_function(&r05f_DoScan);
      r05_alloc_open_call(p+13);
      r05_alloc_function(&r05f_IncCol);
      r05_alloc_insert_pos(p+14);
      r05_alloc_close_call(p+15);
      r05_alloc_open_bracket(p+16);
      r05_alloc_insert_pos(p+17);
      r05_alloc_close_bracket(p+18);
      r05_alloc_insert_pos(p+19);
      r05_alloc_close_call(p+20);
      r05_push_stack(p[20]);
      r05_push_stack(p[12]);
      r05_link_brackets(p[16], p[18]);
      r05_push_stack(p[15]);
      r05_push_stack(p[13]);
      r05_splice_tvar(p[14], p+3);
      r05_splice_evar(p[17], p+8);
      r05_splice_evar(p[19], p+10);
      r05_splice_from_freelist(p[0]);
      r05_splice_to_freelist(p[0], p[2]);
      return;
    } while (0);

    do {
      /* t.Pos: 3 */
      /* e.Line: 8 */
      /* e.Lines: 10 */
      /* t.Pos ('\t' e.Line) e.Lines */
      if (! r05_tvar_left(p+3, p[1], p[2]))
        continue;
      if (! r05_brackets_left(p+5, p[4], p[2]))
        continue;
      if (! r05_char_left(p+7, p[5], p[6], '\t'))
        continue;
      r05_close_evar(p+8, p[7], p[6]);
      r05_close_evar(p+10, p[6], p[2]);

      r05_reset_allocator();
      r05_alloc_open_call(p+12);
      r05_alloc_function(&r05f_DoScan);
      r05_alloc_open_call(p+13);
      r05_alloc_function(&r05f_IncCol);
      r05_alloc_insert_pos(p+14);
      r05_alloc_close_call(p+15);
      r05_alloc_open_bracket(p+16);
      r05_alloc_insert_pos(p+17);
      r05_alloc_close_bracket(p+18);
      r05_alloc_insert_pos(p+19);
      r05_alloc_close_call(p+20);
      r05_push_stack(p[20]);
      r05_push_stack(p[12]);
      r05_link_brackets(p[16], p[18]);
      r05_push_stack(p[15]);
      r05_push_stack(p[13]);
      r05_splice_tvar(p[14], p+3);
      r05_splice_evar(p[17], p+8);
      r05_splice_evar(p[19], p+10);
      r05_splice_from_freelist(p[0]);
      r05_splice_to_freelist(p[0], p[2]);
      return;
    } while (0);

    do {
      /* t.Pos: 3 */
      /* e.Line: 8 */
      /* e.Lines: 10 */
      /* t.Pos ('\r' e.Line) e.Lines */
      if (! r05_tvar_left(p+3, p[1], p[2]))
        continue;
      if (! r05_brackets_left(p+5, p[4], p[2]))
        continue;
      if (! r05_char_left(p+7, p[5], p[6], '\r'))
        continue;
      r05_close_evar(p+8, p[7], p[6]);
      r05_close_evar(p+10, p[6], p[2]);

      r05_reset_allocator();
      r05_alloc_open_call(p+12);
      r05_alloc_function(&r05f_DoScan);
      r05_alloc_open_call(p+13);
      r05_alloc_function(&r05f_IncCol);
      r05_alloc_insert_pos(p+14);
      r05_alloc_close_call(p+15);
      r05_alloc_open_bracket(p+16);
      r05_alloc_insert_pos(p+17);
      r05_alloc_close_bracket(p+18);
      r05_alloc_insert_pos(p+19);
      r05_alloc_close_call(p+20);
      r05_push_stack(p[20]);
      r05_push_stack(p[12]);
      r05_link_brackets(p[16], p[18]);
      r05_push_stack(p[15]);
      r05_push_stack(p[13]);
      r05_splice_tvar(p[14], p+3);
      r05_splice_evar(p[17], p+8);
      r05_splice_evar(p[19], p+10);
      r05_splice_from_freelist(p[0]);
      r05_splice_to_freelist(p[0], p[2]);
      return;
    } while (0);

    do {
      /* t.Pos: 3 */
      /* e.Line: 8 */
      /* e.Lines: 10 */
      /* t.Pos ('$' e.Line) e.Lines */
      if (! r05_tvar_left(p+3, p[1], p[2]))
        continue;
      if (! r05_brackets_left(p+5, p[4], p[2]))
        continue;
      if (! r05_char_left(p+7, p[5], p[6], '$'))
        continue;
      r05_close_evar(p+8, p[7], p[6]);
      r05_close_evar(p+10, p[6], p[2]);

      r05_reset_allocator();
      r05_alloc_open_call(p+12);
      r05_alloc_function(&r05f_DoScanm_Keyword);
      r05_alloc_insert_pos(p+13);
      r05_alloc_open_bracket(p+14);
      r05_alloc_insert_pos(p+15);
      r05_alloc_close_bracket(p+16);
      r05_alloc_insert_pos(p+17);
      r05_alloc_close_call(p+18);
      r05_push_stack(p[18]);
      r05_push_stack(p[12]);
      r05_link_brackets(p[14], p[16]);
      r05_splice_tvar(p[13], p+3);
      r05_splice_evar(p[15], p+8);
      r05_splice_evar(p[17], p+10);
      r05_splice_from_freelist(p[0]);
      r05_splice_to_freelist(p[0], p[2]);
      return;
    } while (0);

    do {
      /* t.Pos: 3 */
      /* e.Lines: 7 */
      /* s.Digit: 9 */
      /* e.Line: 10 */
      /* t.Pos (s.Digit e.Line) e.Lines */
      if (! r05_tvar_left(p+3, p[1], p[2]))
        continue;
      if (! r05_brackets_left(p+5, p[4], p[2]))
        continue;
      r05_close_evar(p+7, p[6], p[2]);
      if (! r05_svar_left(p+9, p[5], p[6]))
        continue;
      r05_close_evar(p+10, p[9], p[6]);

      r05_reset_allocator();
      r05_alloc_open_call(p+12);
      r05_alloc_function(&c1);
      r05_alloc_open_call(p+13);
      r05_alloc_function(&r05f_Type);
      r05_alloc_svar(p+9);
      r05_alloc_close_call(p+14);
      r05_alloc_close_call(p+15);
      r05_push_stack(p[15]);
      r05_push_stack(p[12]);
      r05_push_stack(p[14]);
      r05_push_stack(p[13]);
      r05_push_context(p, 12);
      r05_splice_from_freelist(p[2]);
      return;

  case 1:
      r05_pop_context(p, 12);
      p[12] = arg_begin;
      p[13] = arg_begin->next;
      p[14] = arg_end;

      do {
        /* t.Pos: 3 */
        /* e.Lines: 7 */
        /* s.Digit: 9, 17 */
        /* e.Line: 10 */
        /* 'D0' s.Digit */
        if (! r05_char_left(p+15, p[13], p[14], 'D'))
          continue;
        if (! r05_char_left(p+16, p[15], p[14], '0'))
          continue;
        if (! r05_repeated_svar_left(p+17, p[16], p[14], p+9))
          continue;
        if (! r05_empty_hole(p[17], p[14]))
          continue;

        r05_reset_allocator();
        r05_alloc_open_call(p+18);
        r05_alloc_function(&r05f_DoScanm_Number);
        r05_alloc_insert_pos(p+19);
        r05_alloc_tvar(p+3);
        r05_alloc_open_bracket(p+20);
        r05_alloc_svar(p+9);
        r05_alloc_close_bracket(p+21);
        r05_alloc_open_bracket(p+22);
        r05_alloc_insert_pos(p+23);
        r05_alloc_close_bracket(p+24);
        r05_alloc_insert_pos(p+25);
        r05_alloc_close_call(p+26);
        r05_push_stack(p[26]);
        r05_push_stack(p[18]);
        r05_link_brackets(p[22], p[24]);
        r05_link_brackets(p[20], p[21]);
        r05_splice_tvar(p[19], p+3);
        r05_splice_evar(p[23], p+10);
        r05_splice_evar(p[25], p+7);
        r05_splice_from_freelist(p[0]);
        r05_splice_to_freelist(p[0], p[2]);
        return;
      } while (0);
      r05_splice_to_freelist(p[12], p[14]);
    } while (0);

    do {
      /* t.Pos: 3 */
      /* e.Lines: 7 */
      /* s.Var: 9 */
      /* e.Line: 11 */
      /* t.Pos (s.Var '.' e.Line) e.Lines */
      if (! r05_tvar_left(p+3, p[1], p[2]))
        continue;
      if (! r05_brackets_left(p+5, p[4], p[2]))
        continue;
      r05_close_evar(p+7, p[6], p[2]);
      if (! r05_svar_left(p+9, p[5], p[6]))
        continue;
      if (! r05_char_left(p+10, p[9], p[6], '.'))
        continue;
      r05_close_evar(p+11, p[10], p[6]);

      r05_reset_allocator();
      r05_alloc_open_call(p+13);
      r05_alloc_function(&c2);
      r05_alloc_open_call(p+14);
      r05_alloc_function(&r05f_IsVarType);
      r05_alloc_svar(p+9);
      r05_alloc_close_call(p+15);
      r05_alloc_close_call(p+16);
      r05_push_stack(p[16]);
      r05_push_stack(p[13]);
      r05_push_stack(p[15]);
      r05_push_stack(p[14]);
      r05_push_context(p, 13);
      r05_splice_from_freelist(p[2]);
      return;

  case 2:
      r05_pop_context(p, 13);
      p[13] = arg_begin;
      p[14] = arg_begin->next;
      p[15] = arg_end;

      do {
        /* t.Pos: 3 */
        /* e.Lines: 7 */
        /* s.Var: 9 */
        /* e.Line: 11 */
        /* True */
        if (! r05_function_left(p+16, p[14], p[15], &r05f_True))
          continue;
        if (! r05_empty_hole(p[16], p[15]))
          continue;

        r05_reset_allocator();
        r05_alloc_open_call(p+17);
        r05_alloc_function(&r05f_DoScanm_Var);
        r05_alloc_insert_pos(p+18);
        r05_alloc_open_bracket(p+19);
        r05_alloc_svar(p+9);
        r05_alloc_char('.');
        r05_alloc_close_bracket(p+20);
        r05_alloc_open_bracket(p+21);
        r05_alloc_insert_pos(p+22);
        r05_alloc_close_bracket(p+23);
        r05_alloc_insert_pos(p+24);
        r05_alloc_close_call(p+25);
        r05_push_stack(p[25]);
        r05_push_stack(p[17]);
        r05_link_brackets(p[21], p[23]);
        r05_link_brackets(p[19], p[20]);
        r05_splice_tvar(p[18], p+3);
        r05_splice_evar(p[22], p+11);
        r05_splice_evar(p[24], p+7);
        r05_splice_from_freelist(p[0]);
        r05_splice_to_freelist(p[0], p[2]);
        return;
      } while (0);
      r05_splice_to_freelist(p[13], p[15]);
    } while (0);

    do {
      /* t.Pos: 3 */
      /* e.Line: 9 */
      /* e.Lines: 11 */
      /* t.Pos ('/' '*' e.Line) e.Lines */
      if (! r05_tvar_left(p+3, p[1], p[2]))
        continue;
      if (! r05_brackets_left(p+5, p[4], p[2]))
        continue;
      if (! r05_char_left(p+7, p[5], p[6], '/'))
        continue;
      if (! r05_char_left(p+8, p[7], p[6], '*'))
        continue;
      r05_close_evar(p+9, p[8], p[6]);
      r05_close_evar(p+11, p[6], p[2]);

      r05_reset_allocator();
      r05_alloc_open_call(p+13);
      r05_alloc_function(&r05f_DoScanm_CComment);
      r05_alloc_insert_pos(p+14);
      r05_alloc_open_bracket(p+15);
      r05_alloc_chars("/*", 2);
      r05_alloc_close_bracket(p+16);
      r05_alloc_open_bracket(p+17);
      r05_alloc_insert_pos(p+18);
      r05_alloc_close_bracket(p+19);
      r05_alloc_insert_pos(p+20);
      r05_alloc_close_call(p+21);
      r05_push_stack(p[21]);
      r05_push_stack(p[13]);
      r05_link_brackets(p[17], p[19]);
      r05_link_brackets(p[15], p[16]);
      r05_splice_tvar(p[14], p+3);
      r05_splice_evar(p[18], p+9);
      r05_splice_evar(p[20], p+11);
      r05_splice_from_freelist(p[0]);
      r05_splice_to_freelist(p[0], p[2]);
      return;
    } while (0);

    do {
      /* e.Line: 9 */
      /* e.Lines: 11 */
      /* s.Line: 13 */
      /* e.FileName: 15 */
      /* (s.Line 1 e.FileName) ('*$' e.Line) e.Lines */
      if (! r05_brackets_left(p+3, p[1], p[2]))
        continue;
      if (! r05_brackets_left(p+5, p[4], p[2]))
        continue;
      if (! r05_char_left(p+7, p[5], p[6], '*'))
        continue;
      if (! r05_char_left(p+8, p[7], p[6], '$'))
        continue;
      r05_close_evar(p+9, p[8], p[6]);
      r05_close_evar(p+11, p[6], p[2]);
      if (! r05_svar_left(p+13, p[3], p[4]))
        continue;
      if (! r05_number_left(p+14, p[13], p[4], 1UL))
        continue;
      r05_close_evar(p+15, p[14], p[4]);

      r05_reset_allocator();
      r05_alloc_open_bracket(p+17);
      r05_alloc_function(&r05f_TkSpecComment);
      r05_alloc_open_bracket(p+18);
      r05_alloc_svar(p+13);
      r05_alloc_number(1UL);
      r05_alloc_insert_pos(p+19);
      r05_alloc_close_bracket(p+20);
      r05_alloc_chars("*$", 2);
      r05_alloc_insert_pos(p+21);
      r05_alloc_close_bracket(p+22);
      r05_alloc_open_call(p+23);
      r05_alloc_function(&r05f_DoScan);
      r05_alloc_open_bracket(p+24);
      r05_alloc_open_call(p+25);
      r05_alloc_function(&r05f_Inc);
      r05_alloc_svar(p+13);
      r05_alloc_close_call(p+26);
      r05_alloc_number(1UL);
      r05_alloc_evar(p+15);
      r05_alloc_close_bracket(p+27);
      r05_alloc_insert_pos(p+28);
      r05_alloc_close_call(p+29);
      r05_push_stack(p[29]);
      r05_push_stack(p[23]);
      r05_link_brackets(p[24], p[27]);
      r05_push_stack(p[26]);
      r05_push_stack(p[25]);
      r05_link_brackets(p[17], p[22]);
      r05_link_brackets(p[18], p[20]);
      r05_splice_evar(p[19], p+15);
      r05_splice_evar(p[21], p+9);
      r05_splice_evar(p[28], p+11);
      r05_splice_from_freelist(p[0]);
      r05_splice_to_freelist(p[0], p[2]);
      return;
    } while (0);

    do {
      /* e.Comment: 8 */
      /* e.Lines: 10 */
      /* s.Line: 12 */
      /* e.FileName: 14 */
      /* (s.Line 1 e.FileName) ('*' e.Comment) e.Lines */
      if (! r05_brackets_left(p+3, p[1], p[2]))
        continue;
      if (! r05_brackets_left(p+5, p[4], p[2]))
        continue;
      if (! r05_char_left(p+7, p[5], p[6], '*'))
        continue;
      r05_close_evar(p+8, p[7], p[6]);
      r05_close_evar(p+10, p[6], p[2]);
      if (! r05_svar_left(p+12, p[3], p[4]))
        continue;
      if (! r05_number_left(p+13, p[12], p[4], 1UL))
        continue;
      r05_close_evar(p+14, p[13], p[4]);

      r05_reset_allocator();
      r05_alloc_open_call(p+16);
      r05_alloc_function(&r05f_DoScan);
      r05_alloc_open_bracket(p+17);
      r05_alloc_open_call(p+18);
      r05_alloc_function(&r05f_Inc);
      r05_alloc_svar(p+12);
      r05_alloc_close_call(p+19);
      r05_alloc_number(1UL);
      r05_alloc_insert_pos(p+20);
      r05_alloc_close_bracket(p+21);
      r05_alloc_insert_pos(p+22);
      r05_alloc_close_call(p+23);
      r05_push_stack(p[23]);
      r05_push_stack(p[16]);
      r05_link_brackets(p[17], p[21]);
      r05_push_stack(p[19]);
      r05_push_stack(p[18]);
      r05_splice_evar(p[20], p+14);
      r05_splice_evar(p[22], p+10);
      r05_splice_from_freelist(p[0]);
      r05_splice_to_freelist(p[0], p[2]);
      return;
    } while (0);

    do {
      /* t.Pos: 3 */
      /* e.Lines: 7 */
      /* s.StartIdent: 9 */
      /* e.Line: 10 */
      /* t.Pos (s.StartIdent e.Line) e.Lines */
      if (! r05_tvar_left(p+3, p[1], p[2]))
        continue;
      if (! r05_brackets_left(p+5, p[4], p[2]))
        continue;
      r05_close_evar(p+7, p[6], p[2]);
      if (! r05_svar_left(p+9, p[5], p[6]))
        continue;
      r05_close_evar(p+10, p[9], p[6]);

      r05_reset_allocator();
      r05_alloc_open_call(p+12);
      r05_alloc_function(&c3);
      r05_alloc_open_call(p+13);
      r05_alloc_function(&r05f_Type);
      r05_alloc_svar(p+9);
      r05_alloc_close_call(p+14);
      r05_alloc_close_call(p+15);
      r05_push_stack(p[15]);
      r05_push_stack(p[12]);
      r05_push_stack(p[14]);
      r05_push_stack(p[13]);
      r05_push_context(p, 12);
      r05_splice_from_freelist(p[2]);
      return;

  case 3:
      r05_pop_context(p, 12);
      p[12] = arg_begin;
      p[13] = arg_begin->next;
      p[14] = arg_end;

      do {
        /* t.Pos: 3 */
        /* e.Lines: 7 */
        /* s.StartIdent: 9, 16 */
        /* e.Line: 10 */
        /* s.Case: 17 */
        /* 'L' s.Case s.StartIdent */
        if (! r05_char_left(p+15, p[13], p[14], 'L'))
          continue;
        if (! r05_repeated_svar_right(p+16, p[15], p[14], p+9))
          continue;
        if (! r05_svar_left(p+17, p[15], p[16]))
          continue;
        if (! r05_empty_hole(p[17], p[16]))
          continue;

        r05_reset_allocator();
        r05_alloc_open_call(p+18);
        r05_alloc_function(&r05f_DoScanm_Ident);
        r05_alloc_insert_pos(p+19);
        r05_alloc_open_bracket(p+20);
        r05_alloc_svar(p+9);
        r05_alloc_close_bracket(p+21);
        r05_alloc_open_bracket(p+22);
        r05_alloc_insert_pos(p+23);
        r05_alloc_close_bracket(p+24);
        r05_alloc_insert_pos(p+25);
        r05_alloc_close_call(p+26);
        r05_push_stack(p[26]);
        r05_push_stack(p[18]);
        r05_link_brackets(p[22], p[24]);
        r05_link_brackets(p[20], p[21]);
        r05_splice_tvar(p[19], p+3);
        r05_splice_evar(p[23], p+10);
        r05_splice_evar(p[25], p+7);
        r05_splice_from_freelist(p[0]);
        r05_splice_to_freelist(p[0], p[2]);
        return;
      } while (0);
      r05_splice_to_freelist(p[12], p[14]);
    } while (0);

    do {
      /* t.Pos: 3 */
      /* e.Lines: 7 */
      /* s.Punctuation: 9 */
      /* e.Line: 10 */
      /* t.Pos (s.Punctuation e.Line) e.Lines */
      if (! r05_tvar_left(p+3, p[1], p[2]))
        continue;
      if (! r05_brackets_left(p+5, p[4], p[2]))
        continue;
      r05_close_evar(p+7, p[6], p[2]);
      if (! r05_svar_left(p+9, p[5], p[6]))
        continue;
      r05_close_evar(p+10, p[9], p[6]);

      r05_reset_allocator();
      r05_alloc_open_call(p+12);
      r05_alloc_function(&c4);
      r05_alloc_open_call(p+13);
      r05_alloc_function(&r05f_IsPunctuation);
      r05_alloc_svar(p+9);
      r05_alloc_close_call(p+14);
      r05_alloc_close_call(p+15);
      r05_push_stack(p[15]);
      r05_push_stack(p[12]);
      r05_push_stack(p[14]);
      r05_push_stack(p[13]);
      r05_push_context(p, 12);
      r05_splice_from_freelist(p[2]);
      return;

  case 4:
      r05_pop_context(p, 12);
      p[12] = arg_begin;
      p[13] = arg_begin->next;
      p[14] = arg_end;

      do {
        /* t.Pos: 3 */
        /* e.Lines: 7 */
        /* s.Punctuation: 9 */
        /* e.Line: 10 */
        /* s.TokType: 15 */
        /* s.TokType */
        if (! r05_svar_left(p+15, p[13], p[14]))
          continue;
        if (! r05_empty_hole(p[15], p[14]))
          continue;

        r05_reset_allocator();
        r05_alloc_open_bracket(p+16);
        r05_alloc_svar(p+15);
        r05_alloc_insert_pos(p+17);
        r05_alloc_close_bracket(p+18);
        r05_alloc_open_call(p+19);
        r05_alloc_function(&r05f_DoScan);
        r05_alloc_open_call(p+20);
        r05_alloc_function(&r05f_IncCol);
        r05_alloc_tvar(p+3);
        r05_alloc_close_call(p+21);
        r05_alloc_open_bracket(p+22);
        r05_alloc_insert_pos(p+23);
        r05_alloc_close_bracket(p+24);
        r05_alloc_insert_pos(p+25);
        r05_alloc_close_call(p+26);
        r05_push_stack(p[26]);
        r05_push_stack(p[19]);
        r05_link_brackets(p[22], p[24]);
        r05_push_stack(p[21]);
        r05_push_stack(p[20]);
        r05_link_brackets(p[16], p[18]);
        r05_splice_tvar(p[17], p+3);
        r05_splice_evar(p[23], p+10);
        r05_splice_evar(p[25], p+7);
        r05_splice_from_freelist(p[0]);
        r05_splice_to_freelist(p[0], p[2]);
        return;
      } while (0);
      r05_splice_to_freelist(p[12], p[14]);
    } while (0);

    do {
      /* t.Pos: 3 */
      /* e.Lines: 8 */
      /* s.StartIdent: 10 */
      /* e.Line: 11 */
      /* t.Pos ('<' s.StartIdent e.Line) e.Lines */
      if (! r05_tvar_left(p+3, p[1], p[2]))
        continue;
      if (! r05_brackets_left(p+5, p[4], p[2]))
        continue;
      if (! r05_char_left(p+7, p[5], p[6], '<'))
        continue;
      r05_close_evar(p+8, p[6], p[2]);
      if (! r05_svar_left(p+10, p[7], p[6]))
        continue;
      r05_close_evar(p+11, p[10], p[6]);

      r05_reset_allocator();
      r05_alloc_open_call(p+13);
      r05_alloc_function(&c5);
      r05_alloc_open_call(p+14);
      r05_alloc_function(&r05f_Type);
      r05_alloc_svar(p+10);
      r05_alloc_close_call(p+15);
      r05_alloc_close_call(p+16);
      r05_push_stack(p[16]);
      r05_push_stack(p[13]);
      r05_push_stack(p[15]);
      r05_push_stack(p[14]);
      r05_push_context(p, 13);
      r05_splice_from_freelist(p[2]);
      return;

  case 5:
      r05_pop_context(p, 13);
      p[13] = arg_begin;
      p[14] = arg_begin->next;
      p[15] = arg_end;

      do {
        /* t.Pos: 3 */
        /* e.Lines: 8 */
        /* s.StartIdent: 10, 17 */
        /* e.Line: 11 */
        /* s.Case: 18 */
        /* 'L' s.Case s.StartIdent */
        if (! r05_char_left(p+16, p[14], p[15], 'L'))
          continue;
        if (! r05_repeated_svar_right(p+17, p[16], p[15], p+10))
          continue;
        if (! r05_svar_left(p+18, p[16], p[17]))
          continue;
        if (! r05_empty_hole(p[18], p[17]))
          continue;

        r05_reset_allocator();
        r05_alloc_open_call(p+19);
        r05_alloc_function(&r05f_DoScanm_Ident);
        r05_alloc_insert_pos(p+20);
        r05_alloc_open_bracket(p+21);
        r05_alloc_char('<');
        r05_alloc_svar(p+10);
        r05_alloc_close_bracket(p+22);
        r05_alloc_open_bracket(p+23);
        r05_alloc_insert_pos(p+24);
        r05_alloc_close_bracket(p+25);
        r05_alloc_insert_pos(p+26);
        r05_alloc_close_call(p+27);
        r05_push_stack(p[27]);
        r05_push_stack(p[19]);
        r05_link_brackets(p[23], p[25]);
        r05_link_brackets(p[21], p[22]);
        r05_splice_tvar(p[20], p+3);
        r05_splice_evar(p[24], p+11);
        r05_splice_evar(p[26], p+8);
        r05_splice_from_freelist(p[0]);
        r05_splice_to_freelist(p[0], p[2]);
        return;
      } while (0);
      r05_splice_to_freelist(p[13], p[15]);
    } while (0);

    do {
      /* t.Pos: 3 */
      /* e.Lines: 8 */
      /* s.Arithm: 10 */
      /* e.Line: 11 */
      /* t.Pos ('<' s.Arithm e.Line) e.Lines */
      if (! r05_tvar_left(p+3, p[1], p[2]))
        continue;
      if (! r05_brackets_left(p+5, p[4], p[2]))
        continue;
      if (! r05_char_left(p+7, p[5], p[6], '<'))
        continue;
      r05_close_evar(p+8, p[6], p[2]);
      if (! r05_svar_left(p+10, p[7], p[6]))
        continue;
      r05_close_evar(p+11, p[10], p[6]);

      r05_reset_allocator();
      r05_alloc_open_call(p+13);
      r05_alloc_function(&c6);
      r05_alloc_chars("+-*/%?", 6);
      r05_alloc_close_call(p+14);
      r05_push_stack(p[14]);
      r05_push_stack(p[13]);
      r05_push_context(p, 13);
      r05_splice_from_freelist(p[2]);
      return;

  case 6:
      r05_pop_context(p, 13);
      p[13] = arg_begin;
      p[14] = arg_begin->next;
      p[15] = arg_end;

      do {
        /* t.Pos: 3 */
        /* e.Lines: 8 */
        /* s.Arithm: 10, 18 */
        /* e.Line: 11 */
        /* e.Arithms-B: 16 */
        /* e.Arithms-E: 19 */
        /* e.Arithms-B s.Arithm e.Arithms-E */
        p[16] = NULL;
        p[17] = p[14];
        do {
          r05_start_e_loop();
          if (! r05_repeated_svar_left(p+18, p[17], p[15], p+10))
            continue;
          r05_close_evar(p+19, p[18], p[15]);

          r05_reset_allocator();
          r05_alloc_open_bracket(p+21);
          r05_alloc_function(&r05f_TkOpenCall);
          r05_alloc_insert_pos(p+22);
          r05_alloc_svar(p+10);
          r05_alloc_close_bracket(p+23);
          r05_alloc_open_call(p+24);
          r05_alloc_function(&r05f_DoScan);
          r05_alloc_open_call(p+25);
          r05_alloc_function(&r05f_IncCol);
          r05_alloc_tvar(p+3);
          r05_alloc_function(&r05f_Len);
          r05_alloc_char('<');
          r05_alloc_svar(p+10);
          r05_alloc_close_call(p+26);
          r05_alloc_open_bracket(p+27);
          r05_alloc_insert_pos(p+28);
          r05_alloc_close_bracket(p+29);
          r05_alloc_insert_pos(p+30);
          r05_alloc_close_call(p+31);
          r05_push_stack(p[31]);
          r05_push_stack(p[24]);
          r05_link_brackets(p[27], p[29]);
          r05_push_stack(p[26]);
          r05_push_stack(p[25]);
          r05_link_brackets(p[21], p[23]);
          r05_splice_tvar(p[22], p+3);
          r05_splice_evar(p[28], p+11);
          r05_splice_evar(p[30], p+8);
          r05_splice_from_freelist(p[0]);
          r05_splice_to_freelist(p[0], p[2]);
          return;
        } while (r05_open_evar_advance(p+16, p[15]));
        r05_stop_e_loop();
      } while (0);
      r05_splice_to_freelist(p[13], p[15]);
    } while (0);

    do {
      /* t.Pos: 3 */
      /* e.Line: 8 */
      /* e.Lines: 10 */
      /* t.Pos ('<' e.Line) e.Lines */
      if (! r05_tvar_left(p+3, p[1], p[2]))
        continue;
      if (! r05_brackets_left(p+5, p[4], p[2]))
        continue;
      if (! r05_char_left(p+7, p[5], p[6], '<'))
        continue;
      r05_close_evar(p+8, p[7], p[6]);
      r05_close_evar(p+10, p[6], p[2]);

      r05_reset_allocator();
      r05_alloc_open_bracket(p+12);
      r05_alloc_function(&r05f_TkError);
      r05_alloc_insert_pos(p+13);
      r05_alloc_chars("Identifier expected after \'<\'", 29);
      r05_alloc_close_bracket(p+14);
      r05_alloc_open_call(p+15);
      r05_alloc_function(&r05f_DoScan);
      r05_alloc_open_call(p+16);
      r05_alloc_function(&r05f_IncCol);
      r05_alloc_tvar(p+3);
      r05_alloc_close_call(p+17);
      r05_alloc_open_bracket(p+18);
      r05_alloc_insert_pos(p+19);
      r05_alloc_close_bracket(p+20);
      r05_alloc_insert_pos(p+21);
      r05_alloc_close_call(p+22);
      r05_push_stack(p[22]);
      r05_push_stack(p[15]);
      r05_link_brackets(p[18], p[20]);
      r05_push_stack(p[17]);
      r05_push_stack(p[16]);
      r05_link_brackets(p[12], p[14]);
      r05_splice_tvar(p[13], p+3);
      r05_splice_evar(p[19], p+8);
      r05_splice_evar(p[21], p+10);
      r05_splice_from_freelist(p[0]);
      r05_splice_to_freelist(p[0], p[2]);
      return;
    } while (0);

    do {
      /* t.Pos: 3 */
      /* e.Line: 8 */
      /* e.Lines: 10 */
      /* t.Pos ('\'' e.Line) e.Lines */
      if (! r05_tvar_left(p+3, p[1], p[2]))
        continue;
      if (! r05_brackets_left(p+5, p[4], p[2]))
        continue;
      if (! r05_char_left(p+7, p[5], p[6], '\''))
        continue;
      r05_close_evar(p+8, p[7], p[6]);
      r05_close_evar(p+10, p[6], p[2]);

      r05_reset_allocator();
      r05_alloc_open_call(p+12);
      r05_alloc_function(&r05f_DoScanm_Chars);
      r05_alloc_open_call(p+13);
      r05_alloc_function(&r05f_IncCol);
      r05_alloc_insert_pos(p+14);
      r05_alloc_close_call(p+15);
      r05_alloc_open_bracket(p+16);
      r05_alloc_insert_pos(p+17);
      r05_alloc_close_bracket(p+18);
      r05_alloc_insert_pos(p+19);
      r05_alloc_close_call(p+20);
      r05_push_stack(p[20]);
      r05_push_stack(p[12]);
      r05_link_brackets(p[16], p[18]);
      r05_push_stack(p[15]);
      r05_push_stack(p[13]);
      r05_splice_tvar(p[14], p+3);
      r05_splice_evar(p[17], p+8);
      r05_splice_evar(p[19], p+10);
      r05_splice_from_freelist(p[0]);
      r05_splice_to_freelist(p[0], p[2]);
      return;
    } while (0);

    do {
      /* t.Pos: 3 */
      /* e.Line: 8 */
      /* e.Lines: 10 */
      /* t.Pos ('\"' e.Line) e.Lines */
      if (! r05_tvar_left(p+3, p[1], p[2]))
        continue;
      if (! r05_brackets_left(p+5, p[4], p[2]))
        continue;
      if (! r05_char_left(p+7, p[5], p[6], '\"'))
        continue;
      r05_close_evar(p+8, p[7], p[6]);
      r05_close_evar(p+10, p[6], p[2]);

      r05_reset_allocator();
      r05_alloc_open_call(p+12);
      r05_alloc_function(&r05f_DoScanm_Compound);
      r05_alloc_insert_pos(p+13);
      r05_alloc_open_call(p+14);
      r05_alloc_function(&r05f_IncCol);
      r05_alloc_tvar(p+3);
      r05_alloc_close_call(p+15);
      r05_alloc_open_bracket(p+16);
      r05_alloc_close_bracket(p+17);
      r05_alloc_open_bracket(p+18);
      r05_alloc_insert_pos(p+19);
      r05_alloc_close_bracket(p+20);
      r05_alloc_insert_pos(p+21);
      r05_alloc_close_call(p+22);
      r05_push_stack(p[22]);
      r05_push_stack(p[12]);
      r05_link_brackets(p[18], p[20]);
      r05_link_brackets(p[16], p[17]);
      r05_push_stack(p[15]);
      r05_push_stack(p[14]);
      r05_splice_tvar(p[13], p+3);
      r05_splice_evar(p[19], p+8);
      r05_splice_evar(p[21], p+10);
      r05_splice_from_freelist(p[0]);
      r05_splice_to_freelist(p[0], p[2]);
      return;
    } while (0);

    do {
      /* t.Pos: 3 */
      /* e.Line: 8 */
      /* e.Lines: 10 */
      /* t.Pos ('\\' e.Line) e.Lines */
      if (! r05_tvar_left(p+3, p[1], p[2]))
        continue;
      if (! r05_brackets_left(p+5, p[4], p[2]))
        continue;
      if (! r05_char_left(p+7, p[5], p[6], '\\'))
        continue;
      r05_close_evar(p+8, p[7], p[6]);
      r05_close_evar(p+10, p[6], p[2]);

      r05_reset_allocator();
      r05_alloc_open_call(p+12);
      r05_alloc_function(&r05f_DoScanm_Escape);
      r05_alloc_insert_pos(p+13);
      r05_alloc_open_call(p+14);
      r05_alloc_function(&r05f_Escape);
      r05_alloc_open_call(p+15);
      r05_alloc_function(&r05f_IncCol);
      r05_alloc_tvar(p+3);
      r05_alloc_close_call(p+16);
      r05_alloc_insert_pos(p+17);
      r05_alloc_close_call(p+18);
      r05_alloc_insert_pos(p+19);
      r05_alloc_close_call(p+20);
      r05_push_stack(p[20]);
      r05_push_stack(p[12]);
      r05_push_stack(p[18]);
      r05_push_stack(p[14]);
      r05_push_stack(p[16]);
      r05_push_stack(p[15]);
      r05_splice_tvar(p[13], p+3);
      r05_splice_evar(p[17], p+8);
      r05_splice_evar(p[19], p+10);
      r05_splice_from_freelist(p[0]);
      r05_splice_to_freelist(p[0], p[2]);
      return;
    } while (0);

    do {
      /* t.Pos: 3 */
      /* e.Lines: 7 */
      /* s.Other: 9 */
      /* e.Line: 10 */
      /* t.Pos (s.Other e.Line) e.Lines */
      if (! r05_tvar_left(p+3, p[1], p[2]))
        continue;
      if (! r05_brackets_left(p+5, p[4], p[2]))
        continue;
      r05_close_evar(p+7, p[6], p[2]);
      if (! r05_svar_left(p+9, p[5], p[6]))
        continue;
      r05_close_evar(p+10, p[9], p[6]);

      r05_reset_allocator();
      r05_alloc_open_bracket(p+12);
      r05_alloc_function(&r05f_TkError);
      r05_alloc_insert_pos(p+13);
      r05_alloc_chars("Bad character \'", 15);
      r05_alloc_svar(p+9);
      r05_alloc_char('\'');
      r05_alloc_close_bracket(p+14);
      r05_alloc_open_call(p+15);
      r05_alloc_function(&r05f_DoScan);
      r05_alloc_open_call(p+16);
      r05_alloc_function(&r05f_IncCol);
      r05_alloc_tvar(p+3);
      r05_alloc_close_call(p+17);
      r05_alloc_open_bracket(p+18);
      r05_alloc_insert_pos(p+19);
      r05_alloc_close_bracket(p+20);
      r05_alloc_insert_pos(p+21);
      r05_alloc_close_call(p+22);
      r05_push_stack(p[22]);
      r05_push_stack(p[15]);
      r05_link_brackets(p[18], p[20]);
      r05_push_stack(p[17]);
      r05_push_stack(p[16]);
      r05_link_brackets(p[12], p[14]);
      r05_splice_tvar(p[13], p+3);
      r05_splice_evar(p[19], p+10);
      r05_splice_evar(p[21], p+7);
      r05_splice_from_freelist(p[0]);
      r05_splice_to_freelist(p[0], p[2]);
      return;
    } while (0);

    r05_recognition_impossible();
  }
}

R05_DEFINE_LOCAL_FUNCTION(IsVarType, "IsVarType") {
  struct r05_node *p[4] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /* 's' */
    if (! r05_char_left(p+3, p[1], p[2], 's'))
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
    /* 't' */
    if (! r05_char_left(p+3, p[1], p[2], 't'))
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
    /* 'e' */
    if (! r05_char_left(p+3, p[1], p[2], 'e'))
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

R05_DEFINE_LOCAL_FUNCTION(IsPunctuation, "IsPunctuation") {
  R05_DEFINE_COND_FUNCTION(IsPunctuation, "IsPunctuation$1", 1)
  struct r05_node *p[24] = { 0 };

  r05_this_is_generated_function();
  switch (arg_begin->next->info.function->resume_entry >> 1) {
  case 0:
    p[0] = arg_begin;
    p[1] = arg_begin->next;
    p[2] = arg_end;

    do {
      /* s.Punct: 3 */
      /* s.Punct */
      if (! r05_svar_left(p+3, p[1], p[2]))
        continue;
      if (! r05_empty_hole(p[3], p[2]))
        continue;

      r05_reset_allocator();
      r05_alloc_open_call(p+4);
      r05_alloc_function(&c1);
      r05_alloc_open_bracket(p+5);
      r05_alloc_char('(');
      r05_alloc_function(&r05f_TkOpenBracket);
      r05_alloc_close_bracket(p+6);
      r05_alloc_open_bracket(p+7);
      r05_alloc_char(')');
      r05_alloc_function(&r05f_TkCloseBracket);
      r05_alloc_close_bracket(p+8);
      r05_alloc_open_bracket(p+9);
      r05_alloc_char('{');
      r05_alloc_function(&r05f_TkOpenBlock);
      r05_alloc_close_bracket(p+10);
      r05_alloc_open_bracket(p+11);
      r05_alloc_char('}');
      r05_alloc_function(&r05f_TkCloseBlock);
      r05_alloc_close_bracket(p+12);
      r05_alloc_open_bracket(p+13);
      r05_alloc_char('>');
      r05_alloc_function(&r05f_TkCloseCall);
      r05_alloc_close_bracket(p+14);
      r05_alloc_open_bracket(p+15);
      r05_alloc_char(',');
      r05_alloc_function(&r05f_TkComma);
      r05_alloc_close_bracket(p+16);
      r05_alloc_open_bracket(p+17);
      r05_alloc_char(':');
      r05_alloc_function(&r05f_TkColon);
      r05_alloc_close_bracket(p+18);
      r05_alloc_open_bracket(p+19);
      r05_alloc_char('=');
      r05_alloc_function(&r05f_TkAssign);
      r05_alloc_close_bracket(p+20);
      r05_alloc_open_bracket(p+21);
      r05_alloc_char(';');
      r05_alloc_function(&r05f_TkSemicolon);
      r05_alloc_close_bracket(p+22);
      r05_alloc_close_call(p+23);
      r05_push_stack(p[23]);
      r05_push_stack(p[4]);
      r05_link_brackets(p[21], p[22]);
      r05_link_brackets(p[19], p[20]);
      r05_link_brackets(p[17], p[18]);
      r05_link_brackets(p[15], p[16]);
      r05_link_brackets(p[13], p[14]);
      r05_link_brackets(p[11], p[12]);
      r05_link_brackets(p[9], p[10]);
      r05_link_brackets(p[7], p[8]);
      r05_link_brackets(p[5], p[6]);
      r05_push_context(p, 4);
      r05_splice_from_freelist(p[2]);
      return;

  case 1:
      r05_pop_context(p, 4);
      p[4] = arg_begin;
      p[5] = arg_begin->next;
      p[6] = arg_end;

      do {
        /* s.Punct: 3, 11 */
        /* e.Types-B: 7 */
        /* e.Types-E: 12 */
        /* s.TokType: 14 */
        /* e.Types-B (s.Punct s.TokType) e.Types-E */
        p[7] = NULL;
        p[8] = p[5];
        do {
          r05_start_e_loop();
          if (! r05_brackets_left(p+9, p[8], p[6]))
            continue;
          if (! r05_repeated_svar_left(p+11, p[9], p[10], p+3))
            continue;
          r05_close_evar(p+12, p[10], p[6]);
          if (! r05_svar_left(p+14, p[11], p[10]))
            continue;
          if (! r05_empty_hole(p[14], p[10]))
            continue;

          r05_reset_allocator();
          r05_alloc_svar(p+14);
          r05_splice_from_freelist(p[0]);
          r05_splice_to_freelist(p[0], p[2]);
          return;
        } while (r05_open_evar_advance(p+7, p[6]));
        r05_stop_e_loop();
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

R05_DEFINE_LOCAL_FUNCTION(DoScanm_Keyword, "DoScan-Keyword") {
  struct r05_node *p[20] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /* t.Pos: 3 */
    /* e.Line: 7 */
    /* e.Lines: 9 */
    /* t.Pos (e.Line) e.Lines */
    if (! r05_tvar_left(p+3, p[1], p[2]))
      continue;
    if (! r05_brackets_left(p+5, p[4], p[2]))
      continue;
    r05_close_evar(p+7, p[5], p[6]);
    r05_close_evar(p+9, p[6], p[2]);

    r05_reset_allocator();
    r05_alloc_open_call(p+11);
    r05_alloc_function(&r05f_DoScanm_BuildKeyword);
    r05_alloc_insert_pos(p+12);
    r05_alloc_open_bracket(p+13);
    r05_alloc_char('$');
    r05_alloc_close_bracket(p+14);
    r05_alloc_open_bracket(p+15);
    r05_alloc_insert_pos(p+16);
    r05_alloc_close_bracket(p+17);
    r05_alloc_insert_pos(p+18);
    r05_alloc_close_call(p+19);
    r05_push_stack(p[19]);
    r05_push_stack(p[11]);
    r05_link_brackets(p[15], p[17]);
    r05_link_brackets(p[13], p[14]);
    r05_splice_tvar(p[12], p+3);
    r05_splice_evar(p[16], p+7);
    r05_splice_evar(p[18], p+9);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(DoScanm_BuildKeyword, "DoScan-BuildKeyword") {
  R05_DEFINE_COND_FUNCTION(DoScanm_BuildKeyword, "DoScan-BuildKeyword$1", 1)
  R05_DEFINE_COND_FUNCTION(DoScanm_BuildKeyword, "DoScan-BuildKeyword$2", 2)
  struct r05_node *p[39] = { 0 };

  r05_this_is_generated_function();
  switch (arg_begin->next->info.function->resume_entry >> 1) {
  case 0:
    p[0] = arg_begin;
    p[1] = arg_begin->next;
    p[2] = arg_end;

    do {
      /* t.Pos: 3 */
      /* e.KeywordChars: 9 */
      /* e.Lines: 11 */
      /* s.Next: 13 */
      /* e.Line: 14 */
      /* t.Pos (e.KeywordChars) (s.Next e.Line) e.Lines */
      if (! r05_tvar_left(p+3, p[1], p[2]))
        continue;
      if (! r05_brackets_left(p+5, p[4], p[2]))
        continue;
      if (! r05_brackets_left(p+7, p[6], p[2]))
        continue;
      r05_close_evar(p+9, p[5], p[6]);
      r05_close_evar(p+11, p[8], p[2]);
      if (! r05_svar_left(p+13, p[7], p[8]))
        continue;
      r05_close_evar(p+14, p[13], p[8]);

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
        /* t.Pos: 3 */
        /* e.KeywordChars: 9 */
        /* e.Lines: 11 */
        /* s.Next: 13, 20 */
        /* e.Line: 14 */
        /* s.SubType: 21 */
        /* 'L' s.SubType s.Next */
        if (! r05_char_left(p+19, p[17], p[18], 'L'))
          continue;
        if (! r05_repeated_svar_right(p+20, p[19], p[18], p+13))
          continue;
        if (! r05_svar_left(p+21, p[19], p[20]))
          continue;
        if (! r05_empty_hole(p[21], p[20]))
          continue;

        r05_reset_allocator();
        r05_alloc_open_call(p+22);
        r05_alloc_function(&r05f_DoScanm_BuildKeyword);
        r05_alloc_insert_pos(p+23);
        r05_alloc_open_bracket(p+24);
        r05_alloc_insert_pos(p+25);
        r05_alloc_svar(p+13);
        r05_alloc_close_bracket(p+26);
        r05_alloc_open_bracket(p+27);
        r05_alloc_insert_pos(p+28);
        r05_alloc_close_bracket(p+29);
        r05_alloc_insert_pos(p+30);
        r05_alloc_close_call(p+31);
        r05_push_stack(p[31]);
        r05_push_stack(p[22]);
        r05_link_brackets(p[27], p[29]);
        r05_link_brackets(p[24], p[26]);
        r05_splice_tvar(p[23], p+3);
        r05_splice_evar(p[25], p+9);
        r05_splice_evar(p[28], p+14);
        r05_splice_evar(p[30], p+11);
        r05_splice_from_freelist(p[0]);
        r05_splice_to_freelist(p[0], p[2]);
        return;
      } while (0);
      r05_splice_to_freelist(p[16], p[18]);
    } while (0);

    do {
      /* t.Pos: 3 */
      /* e.KeywordChars: 9 */
      /* e.Line: 11 */
      /* e.Lines: 13 */
      /* t.Pos (e.KeywordChars) (e.Line) e.Lines */
      if (! r05_tvar_left(p+3, p[1], p[2]))
        continue;
      if (! r05_brackets_left(p+5, p[4], p[2]))
        continue;
      if (! r05_brackets_left(p+7, p[6], p[2]))
        continue;
      r05_close_evar(p+9, p[5], p[6]);
      r05_close_evar(p+11, p[7], p[8]);
      r05_close_evar(p+13, p[8], p[2]);

      r05_reset_allocator();
      r05_alloc_open_call(p+15);
      r05_alloc_function(&c2);
      r05_alloc_open_bracket(p+16);
      r05_alloc_function(&r05f_TkExtern);
      r05_alloc_chars("$EXTERN", 7);
      r05_alloc_close_bracket(p+17);
      r05_alloc_open_bracket(p+18);
      r05_alloc_function(&r05f_TkExtern);
      r05_alloc_chars("$EXTRN", 6);
      r05_alloc_close_bracket(p+19);
      r05_alloc_open_bracket(p+20);
      r05_alloc_function(&r05f_TkExtern);
      r05_alloc_chars("$EXTERNAL", 9);
      r05_alloc_close_bracket(p+21);
      r05_alloc_open_bracket(p+22);
      r05_alloc_function(&r05f_TkEntry);
      r05_alloc_chars("$ENTRY", 6);
      r05_alloc_close_bracket(p+23);
      r05_alloc_close_call(p+24);
      r05_push_stack(p[24]);
      r05_push_stack(p[15]);
      r05_link_brackets(p[22], p[23]);
      r05_link_brackets(p[20], p[21]);
      r05_link_brackets(p[18], p[19]);
      r05_link_brackets(p[16], p[17]);
      r05_push_context(p, 15);
      r05_splice_from_freelist(p[2]);
      return;

  case 2:
      r05_pop_context(p, 15);
      p[15] = arg_begin;
      p[16] = arg_begin->next;
      p[17] = arg_end;

      do {
        /* t.Pos: 3 */
        /* e.KeywordChars: 9, 22 */
        /* e.Line: 11 */
        /* e.Lines: 13 */
        /* e.Keywords-B: 18 */
        /* e.Keywords-E: 24 */
        /* s.Tag: 26 */
        /* e.Keywords-B (s.Tag e.KeywordChars) e.Keywords-E */
        p[18] = NULL;
        p[19] = p[16];
        do {
          r05_start_e_loop();
          if (! r05_brackets_left(p+20, p[19], p[17]))
            continue;
          if (! r05_repeated_evar_right(p+22, p[20], p[21], p+9))
            continue;
          r05_close_evar(p+24, p[21], p[17]);
          if (! r05_svar_left(p+26, p[20], r05_evar_true_begin(p+22)))
            continue;
          if (! r05_empty_hole(p[26], r05_evar_true_begin(p+22)))
            continue;

          r05_reset_allocator();
          r05_alloc_open_bracket(p+27);
          r05_alloc_svar(p+26);
          r05_alloc_insert_pos(p+28);
          r05_alloc_close_bracket(p+29);
          r05_alloc_open_call(p+30);
          r05_alloc_function(&r05f_DoScan);
          r05_alloc_open_call(p+31);
          r05_alloc_function(&r05f_IncCol);
          r05_alloc_tvar(p+3);
          r05_alloc_function(&r05f_Len);
          r05_alloc_insert_pos(p+32);
          r05_alloc_close_call(p+33);
          r05_alloc_open_bracket(p+34);
          r05_alloc_insert_pos(p+35);
          r05_alloc_close_bracket(p+36);
          r05_alloc_insert_pos(p+37);
          r05_alloc_close_call(p+38);
          r05_push_stack(p[38]);
          r05_push_stack(p[30]);
          r05_link_brackets(p[34], p[36]);
          r05_push_stack(p[33]);
          r05_push_stack(p[31]);
          r05_link_brackets(p[27], p[29]);
          r05_splice_tvar(p[28], p+3);
          r05_splice_evar(p[32], p+9);
          r05_splice_evar(p[35], p+11);
          r05_splice_evar(p[37], p+13);
          r05_splice_from_freelist(p[0]);
          r05_splice_to_freelist(p[0], p[2]);
          return;
        } while (r05_open_evar_advance(p+18, p[17]));
        r05_stop_e_loop();
      } while (0);
      r05_splice_to_freelist(p[15], p[17]);
    } while (0);

    do {
      /* t.Pos: 3 */
      /* e.KeywordChars: 9 */
      /* e.Line: 11 */
      /* e.Lines: 13 */
      /* t.Pos (e.KeywordChars) (e.Line) e.Lines */
      if (! r05_tvar_left(p+3, p[1], p[2]))
        continue;
      if (! r05_brackets_left(p+5, p[4], p[2]))
        continue;
      if (! r05_brackets_left(p+7, p[6], p[2]))
        continue;
      r05_close_evar(p+9, p[5], p[6]);
      r05_close_evar(p+11, p[7], p[8]);
      r05_close_evar(p+13, p[8], p[2]);

      r05_reset_allocator();
      r05_alloc_open_bracket(p+15);
      r05_alloc_function(&r05f_TkError);
      r05_alloc_insert_pos(p+16);
      r05_alloc_chars("Bad keyword \'", 13);
      r05_alloc_insert_pos(p+17);
      r05_alloc_char('\'');
      r05_alloc_close_bracket(p+18);
      r05_alloc_open_call(p+19);
      r05_alloc_function(&r05f_DoScan);
      r05_alloc_open_call(p+20);
      r05_alloc_function(&r05f_IncCol);
      r05_alloc_tvar(p+3);
      r05_alloc_function(&r05f_Len);
      r05_alloc_evar(p+9);
      r05_alloc_close_call(p+21);
      r05_alloc_open_bracket(p+22);
      r05_alloc_insert_pos(p+23);
      r05_alloc_close_bracket(p+24);
      r05_alloc_insert_pos(p+25);
      r05_alloc_close_call(p+26);
      r05_push_stack(p[26]);
      r05_push_stack(p[19]);
      r05_link_brackets(p[22], p[24]);
      r05_push_stack(p[21]);
      r05_push_stack(p[20]);
      r05_link_brackets(p[15], p[18]);
      r05_splice_tvar(p[16], p+3);
      r05_splice_evar(p[17], p+9);
      r05_splice_evar(p[23], p+11);
      r05_splice_evar(p[25], p+13);
      r05_splice_from_freelist(p[0]);
      r05_splice_to_freelist(p[0], p[2]);
      return;
    } while (0);

    r05_recognition_impossible();
  }
}

R05_DEFINE_LOCAL_FUNCTION(DoScanm_Number, "DoScan-Number") {
  R05_DEFINE_COND_FUNCTION(DoScanm_Number, "DoScan-Number$1", 1)
  struct r05_node *p[39] = { 0 };

  r05_this_is_generated_function();
  switch (arg_begin->next->info.function->resume_entry >> 1) {
  case 0:
    p[0] = arg_begin;
    p[1] = arg_begin->next;
    p[2] = arg_end;

    do {
      /* t.Pos: 3 */
      /* t.Start: 5 */
      /* e.Number: 11 */
      /* e.Lines: 13 */
      /* s.Next: 15 */
      /* e.Line: 16 */
      /* t.Pos t.Start (e.Number) (s.Next e.Line) e.Lines */
      if (! r05_tvar_left(p+3, p[1], p[2]))
        continue;
      if (! r05_tvar_left(p+5, p[4], p[2]))
        continue;
      if (! r05_brackets_left(p+7, p[6], p[2]))
        continue;
      if (! r05_brackets_left(p+9, p[8], p[2]))
        continue;
      r05_close_evar(p+11, p[7], p[8]);
      r05_close_evar(p+13, p[10], p[2]);
      if (! r05_svar_left(p+15, p[9], p[10]))
        continue;
      r05_close_evar(p+16, p[15], p[10]);

      r05_reset_allocator();
      r05_alloc_open_call(p+18);
      r05_alloc_function(&c1);
      r05_alloc_open_call(p+19);
      r05_alloc_function(&r05f_Type);
      r05_alloc_svar(p+15);
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
        /* t.Pos: 3 */
        /* t.Start: 5 */
        /* e.Number: 11 */
        /* e.Lines: 13 */
        /* s.Next: 15, 23 */
        /* e.Line: 16 */
        /* 'D0' s.Next */
        if (! r05_char_left(p+21, p[19], p[20], 'D'))
          continue;
        if (! r05_char_left(p+22, p[21], p[20], '0'))
          continue;
        if (! r05_repeated_svar_left(p+23, p[22], p[20], p+15))
          continue;
        if (! r05_empty_hole(p[23], p[20]))
          continue;

        r05_reset_allocator();
        r05_alloc_open_call(p+24);
        r05_alloc_function(&r05f_DoScanm_Number);
        r05_alloc_open_call(p+25);
        r05_alloc_function(&r05f_IncCol);
        r05_alloc_insert_pos(p+26);
        r05_alloc_close_call(p+27);
        r05_alloc_insert_pos(p+28);
        r05_alloc_open_bracket(p+29);
        r05_alloc_open_call(p+30);
        r05_alloc_function(&r05f_DropZero);
        r05_alloc_insert_pos(p+31);
        r05_alloc_close_call(p+32);
        r05_alloc_svar(p+15);
        r05_alloc_close_bracket(p+33);
        r05_alloc_open_bracket(p+34);
        r05_alloc_insert_pos(p+35);
        r05_alloc_close_bracket(p+36);
        r05_alloc_insert_pos(p+37);
        r05_alloc_close_call(p+38);
        r05_push_stack(p[38]);
        r05_push_stack(p[24]);
        r05_link_brackets(p[34], p[36]);
        r05_link_brackets(p[29], p[33]);
        r05_push_stack(p[32]);
        r05_push_stack(p[30]);
        r05_push_stack(p[27]);
        r05_push_stack(p[25]);
        r05_splice_tvar(p[26], p+3);
        r05_splice_tvar(p[28], p+5);
        r05_splice_evar(p[31], p+11);
        r05_splice_evar(p[35], p+16);
        r05_splice_evar(p[37], p+13);
        r05_splice_from_freelist(p[0]);
        r05_splice_to_freelist(p[0], p[2]);
        return;
      } while (0);
      r05_splice_to_freelist(p[18], p[20]);
    } while (0);

    do {
      /* t.Pos: 3 */
      /* t.Start: 5 */
      /* e.Number: 11 */
      /* e.Line: 13 */
      /* e.Lines: 15 */
      /* t.Pos t.Start (e.Number) (e.Line) e.Lines */
      if (! r05_tvar_left(p+3, p[1], p[2]))
        continue;
      if (! r05_tvar_left(p+5, p[4], p[2]))
        continue;
      if (! r05_brackets_left(p+7, p[6], p[2]))
        continue;
      if (! r05_brackets_left(p+9, p[8], p[2]))
        continue;
      r05_close_evar(p+11, p[7], p[8]);
      r05_close_evar(p+13, p[9], p[10]);
      r05_close_evar(p+15, p[10], p[2]);

      r05_reset_allocator();
      r05_alloc_open_call(p+17);
      r05_alloc_function(&r05f_CheckNumber);
      r05_alloc_insert_pos(p+18);
      r05_alloc_close_call(p+19);
      r05_alloc_open_call(p+20);
      r05_alloc_function(&r05f_DoScan);
      r05_alloc_insert_pos(p+21);
      r05_alloc_open_bracket(p+22);
      r05_alloc_insert_pos(p+23);
      r05_alloc_close_bracket(p+24);
      r05_alloc_insert_pos(p+25);
      r05_alloc_close_call(p+26);
      r05_push_stack(p[26]);
      r05_push_stack(p[20]);
      r05_link_brackets(p[22], p[24]);
      r05_push_stack(p[19]);
      r05_push_stack(p[17]);
      r05_splice_tvar(p[18], p+5);
      r05_splice_evar(p[18], p+11);
      r05_splice_tvar(p[21], p+3);
      r05_splice_evar(p[23], p+13);
      r05_splice_evar(p[25], p+15);
      r05_splice_from_freelist(p[0]);
      r05_splice_to_freelist(p[0], p[2]);
      return;
    } while (0);

    r05_recognition_impossible();
  }
}

R05_DEFINE_LOCAL_FUNCTION(DropZero, "DropZero") {
  struct r05_node *p[6] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /* '0' */
    if (! r05_char_left(p+3, p[1], p[2], '0'))
      continue;
    if (! r05_empty_hole(p[3], p[2]))
      continue;

    r05_reset_allocator();
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  do {
    /* e.Number: 3 */
    /* e.Number */
    r05_close_evar(p+3, p[1], p[2]);

    r05_reset_allocator();
    r05_alloc_insert_pos(p+5);
    r05_splice_evar(p[5], p+3);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);
}

R05_DEFINE_LOCAL_FUNCTION(CheckNumber, "CheckNumber") {
  R05_DEFINE_COND_FUNCTION(CheckNumber, "CheckNumber$1", 1)
  struct r05_node *p[15] = { 0 };

  r05_this_is_generated_function();
  switch (arg_begin->next->info.function->resume_entry >> 1) {
  case 0:
    p[0] = arg_begin;
    p[1] = arg_begin->next;
    p[2] = arg_end;

    do {
      /* t.Pos: 3 */
      /* e.Number: 5 */
      /* t.Pos e.Number */
      if (! r05_tvar_left(p+3, p[1], p[2]))
        continue;
      r05_close_evar(p+5, p[4], p[2]);

      r05_reset_allocator();
      r05_alloc_open_call(p+7);
      r05_alloc_function(&c1);
      r05_alloc_open_call(p+8);
      r05_alloc_function(&r05f_DoCheckNumber);
      r05_alloc_number(0UL);
      r05_alloc_evar(p+5);
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
        /* t.Pos: 3 */
        /* e.Number: 5 */
        /* s.Value: 11 */
        /* Ok s.Value */
        if (! r05_function_left(p+10, p[8], p[9], &r05f_Ok))
          continue;
        if (! r05_svar_left(p+11, p[10], p[9]))
          continue;
        if (! r05_empty_hole(p[11], p[9]))
          continue;

        r05_reset_allocator();
        r05_alloc_open_bracket(p+12);
        r05_alloc_function(&r05f_TkMacroDigit);
        r05_alloc_insert_pos(p+13);
        r05_alloc_svar(p+11);
        r05_alloc_close_bracket(p+14);
        r05_link_brackets(p[12], p[14]);
        r05_splice_tvar(p[13], p+3);
        r05_splice_from_freelist(p[0]);
        r05_splice_to_freelist(p[0], p[2]);
        return;
      } while (0);

      do {
        /* t.Pos: 3 */
        /* e.Number: 5 */
        /* Overflow */
        if (! r05_function_left(p+10, p[8], p[9], &r05f_Overflow))
          continue;
        if (! r05_empty_hole(p[10], p[9]))
          continue;

        r05_reset_allocator();
        r05_alloc_open_bracket(p+11);
        r05_alloc_function(&r05f_TkError);
        r05_alloc_insert_pos(p+12);
        r05_alloc_chars("Very big numeric literal: ", 26);
        r05_alloc_insert_pos(p+13);
        r05_alloc_close_bracket(p+14);
        r05_link_brackets(p[11], p[14]);
        r05_splice_tvar(p[12], p+3);
        r05_splice_evar(p[13], p+5);
        r05_splice_from_freelist(p[0]);
        r05_splice_to_freelist(p[0], p[2]);
        return;
      } while (0);

      r05_recognition_impossible();
    } while (0);

    r05_recognition_impossible();
  }
}

R05_DEFINE_LOCAL_FUNCTION(DoCheckNumber, "DoCheckNumber") {
  R05_DEFINE_COND_FUNCTION(DoCheckNumber, "DoCheckNumber$1", 1)
  struct r05_node *p[15] = { 0 };

  r05_this_is_generated_function();
  switch (arg_begin->next->info.function->resume_entry >> 1) {
  case 0:
    p[0] = arg_begin;
    p[1] = arg_begin->next;
    p[2] = arg_end;

    do {
      /* s.Value: 3 */
      /* s.Value */
      if (! r05_svar_left(p+3, p[1], p[2]))
        continue;
      if (! r05_empty_hole(p[3], p[2]))
        continue;

      r05_reset_allocator();
      r05_alloc_function(&r05f_Ok);
      r05_alloc_svar(p+3);
      r05_splice_from_freelist(p[0]);
      r05_splice_to_freelist(p[0], p[2]);
      return;
    } while (0);

    do {
      /* s.Value: 3 */
      /* s.Digit: 4 */
      /* e.Digits: 5 */
      /* s.Value s.Digit e.Digits */
      if (! r05_svar_left(p+3, p[1], p[2]))
        continue;
      if (! r05_svar_left(p+4, p[3], p[2]))
        continue;
      r05_close_evar(p+5, p[4], p[2]);

      r05_reset_allocator();
      r05_alloc_open_call(p+7);
      r05_alloc_function(&c1);
      r05_alloc_open_call(p+8);
      r05_alloc_function(&r05f_CheckNumberm_AppendDigit);
      r05_alloc_svar(p+3);
      r05_alloc_svar(p+4);
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
        /* s.Value: 3 */
        /* s.Digit: 4 */
        /* e.Digits: 5 */
        /* s.NewValue: 11 */
        /* Ok s.NewValue */
        if (! r05_function_left(p+10, p[8], p[9], &r05f_Ok))
          continue;
        if (! r05_svar_left(p+11, p[10], p[9]))
          continue;
        if (! r05_empty_hole(p[11], p[9]))
          continue;

        r05_reset_allocator();
        r05_alloc_open_call(p+12);
        r05_alloc_function(&r05f_DoCheckNumber);
        r05_alloc_svar(p+11);
        r05_alloc_insert_pos(p+13);
        r05_alloc_close_call(p+14);
        r05_push_stack(p[14]);
        r05_push_stack(p[12]);
        r05_splice_evar(p[13], p+5);
        r05_splice_from_freelist(p[0]);
        r05_splice_to_freelist(p[0], p[2]);
        return;
      } while (0);

      do {
        /* s.Value: 3 */
        /* s.Digit: 4 */
        /* e.Digits: 5 */
        /* Overflow */
        if (! r05_function_left(p+10, p[8], p[9], &r05f_Overflow))
          continue;
        if (! r05_empty_hole(p[10], p[9]))
          continue;

        r05_reset_allocator();
        r05_alloc_function(&r05f_Overflow);
        r05_splice_from_freelist(p[0]);
        r05_splice_to_freelist(p[0], p[2]);
        return;
      } while (0);

      r05_recognition_impossible();
    } while (0);

    r05_recognition_impossible();
  }
}

R05_DEFINE_LOCAL_FUNCTION(CheckNumberm_AppendDigit, "CheckNumber-AppendDigit") {
  R05_DEFINE_COND_FUNCTION(CheckNumberm_AppendDigit, "CheckNumber-AppendDigit$1", 1)
  R05_DEFINE_COND_FUNCTION(CheckNumberm_AppendDigit, "CheckNumber-AppendDigit$2", 2)
  R05_DEFINE_COND_FUNCTION(CheckNumberm_AppendDigit, "CheckNumber-AppendDigit$3", 3)
  R05_DEFINE_COND_FUNCTION(CheckNumberm_AppendDigit, "CheckNumber-AppendDigit$4", 4)
  struct r05_node *p[24] = { 0 };

  r05_this_is_generated_function();
  switch (arg_begin->next->info.function->resume_entry >> 1) {
  case 0:
    p[0] = arg_begin;
    p[1] = arg_begin->next;
    p[2] = arg_end;

    do {
      /* s.Value: 3 */
      /* s.Digit: 4 */
      /* s.Value s.Digit */
      if (! r05_svar_left(p+3, p[1], p[2]))
        continue;
      if (! r05_svar_left(p+4, p[3], p[2]))
        continue;
      if (! r05_empty_hole(p[4], p[2]))
        continue;

      r05_reset_allocator();
      r05_alloc_open_call(p+5);
      r05_alloc_function(&c1);
      r05_alloc_open_call(p+6);
      r05_alloc_function(&r05f_Numb);
      r05_alloc_svar(p+4);
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
        /* s.Value: 3 */
        /* s.Digit: 4 */
        /* s.DigitValue: 8 */
        /* s.DigitValue */
        if (! r05_svar_left(p+8, p[6], p[7]))
          continue;
        if (! r05_empty_hole(p[8], p[7]))
          continue;

        r05_reset_allocator();
        r05_alloc_open_call(p+9);
        r05_alloc_function(&c2);
        r05_alloc_open_call(p+10);
        r05_alloc_function(&r05f_k2A_);
        r05_alloc_svar(p+3);
        r05_alloc_number(10UL);
        r05_alloc_close_call(p+11);
        r05_alloc_close_call(p+12);
        r05_push_stack(p[12]);
        r05_push_stack(p[9]);
        r05_push_stack(p[11]);
        r05_push_stack(p[10]);
        r05_push_context(p, 9);
        r05_splice_from_freelist(p[2]);
        return;

  case 2:
        r05_pop_context(p, 9);
        p[9] = arg_begin;
        p[10] = arg_begin->next;
        p[11] = arg_end;

        do {
          /* s.Value: 3 */
          /* s.Digit: 4 */
          /* s.DigitValue: 8 */
          /* s.Value10: 12 */
          /* s.Value10 */
          if (! r05_svar_left(p+12, p[10], p[11]))
            continue;
          if (! r05_empty_hole(p[12], p[11]))
            continue;

          r05_reset_allocator();
          r05_alloc_open_call(p+13);
          r05_alloc_function(&c3);
          r05_alloc_open_call(p+14);
          r05_alloc_function(&r05f_k2B_);
          r05_alloc_svar(p+12);
          r05_alloc_svar(p+8);
          r05_alloc_close_call(p+15);
          r05_alloc_close_call(p+16);
          r05_push_stack(p[16]);
          r05_push_stack(p[13]);
          r05_push_stack(p[15]);
          r05_push_stack(p[14]);
          r05_push_context(p, 13);
          r05_splice_from_freelist(p[2]);
          return;

  case 3:
          r05_pop_context(p, 13);
          p[13] = arg_begin;
          p[14] = arg_begin->next;
          p[15] = arg_end;

          do {
            /* s.Value: 3 */
            /* s.Digit: 4 */
            /* s.DigitValue: 8 */
            /* s.Value10: 12 */
            /* s.NewValue: 16 */
            /* s.NewValue */
            if (! r05_svar_left(p+16, p[14], p[15]))
              continue;
            if (! r05_empty_hole(p[16], p[15]))
              continue;

            r05_reset_allocator();
            r05_alloc_open_call(p+17);
            r05_alloc_function(&c4);
            r05_alloc_open_call(p+18);
            r05_alloc_function(&r05f_Divmod);
            r05_alloc_svar(p+16);
            r05_alloc_number(10UL);
            r05_alloc_close_call(p+19);
            r05_alloc_close_call(p+20);
            r05_push_stack(p[20]);
            r05_push_stack(p[17]);
            r05_push_stack(p[19]);
            r05_push_stack(p[18]);
            r05_push_context(p, 17);
            r05_splice_from_freelist(p[2]);
            return;

  case 4:
            r05_pop_context(p, 17);
            p[17] = arg_begin;
            p[18] = arg_begin->next;
            p[19] = arg_end;

            do {
              /* s.Value: 3, 22 */
              /* s.Digit: 4 */
              /* s.DigitValue: 8, 23 */
              /* s.Value10: 12 */
              /* s.NewValue: 16 */
              /* (s.Value) s.DigitValue */
              if (! r05_brackets_left(p+20, p[18], p[19]))
                continue;
              if (! r05_repeated_svar_left(p+22, p[20], p[21], p+3))
                continue;
              if (! r05_empty_hole(p[22], p[21]))
                continue;
              if (! r05_repeated_svar_left(p+23, p[21], p[19], p+8))
                continue;
              if (! r05_empty_hole(p[23], p[19]))
                continue;

              r05_reset_allocator();
              r05_alloc_function(&r05f_Ok);
              r05_alloc_svar(p+16);
              r05_splice_from_freelist(p[0]);
              r05_splice_to_freelist(p[0], p[2]);
              return;
            } while (0);
            r05_splice_to_freelist(p[17], p[19]);
          } while (0);
          r05_splice_to_freelist(p[13], p[15]);
        } while (0);
        r05_splice_to_freelist(p[9], p[11]);
      } while (0);
      r05_splice_to_freelist(p[5], p[7]);
    } while (0);

    do {
      /* s.Value: 3 */
      /* s.Digit: 4 */
      /* s.Value s.Digit */
      if (! r05_svar_left(p+3, p[1], p[2]))
        continue;
      if (! r05_svar_left(p+4, p[3], p[2]))
        continue;
      if (! r05_empty_hole(p[4], p[2]))
        continue;

      r05_reset_allocator();
      r05_alloc_function(&r05f_Overflow);
      r05_splice_from_freelist(p[0]);
      r05_splice_to_freelist(p[0], p[2]);
      return;
    } while (0);

    r05_recognition_impossible();
  }
}

R05_DEFINE_LOCAL_FUNCTION(DoScanm_Var, "DoScan-Var") {
  R05_DEFINE_COND_FUNCTION(DoScanm_Var, "DoScan-Var$1", 1)
  struct r05_node *p[31] = { 0 };

  r05_this_is_generated_function();
  switch (arg_begin->next->info.function->resume_entry >> 1) {
  case 0:
    p[0] = arg_begin;
    p[1] = arg_begin->next;
    p[2] = arg_end;

    do {
      /* t.Pos: 3 */
      /* e.Variable: 9 */
      /* e.Lines: 11 */
      /* s.Next: 13 */
      /* e.Line: 14 */
      /* t.Pos (e.Variable) (s.Next e.Line) e.Lines */
      if (! r05_tvar_left(p+3, p[1], p[2]))
        continue;
      if (! r05_brackets_left(p+5, p[4], p[2]))
        continue;
      if (! r05_brackets_left(p+7, p[6], p[2]))
        continue;
      r05_close_evar(p+9, p[5], p[6]);
      r05_close_evar(p+11, p[8], p[2]);
      if (! r05_svar_left(p+13, p[7], p[8]))
        continue;
      r05_close_evar(p+14, p[13], p[8]);

      r05_reset_allocator();
      r05_alloc_open_call(p+16);
      r05_alloc_function(&c1);
      r05_alloc_open_call(p+17);
      r05_alloc_function(&r05f_IsIdentTail);
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
        /* t.Pos: 3 */
        /* e.Variable: 9 */
        /* e.Lines: 11 */
        /* s.Next: 13 */
        /* e.Line: 14 */
        /* True */
        if (! r05_function_left(p+19, p[17], p[18], &r05f_True))
          continue;
        if (! r05_empty_hole(p[19], p[18]))
          continue;

        r05_reset_allocator();
        r05_alloc_open_call(p+20);
        r05_alloc_function(&r05f_DoScanm_Var);
        r05_alloc_insert_pos(p+21);
        r05_alloc_open_bracket(p+22);
        r05_alloc_insert_pos(p+23);
        r05_alloc_svar(p+13);
        r05_alloc_close_bracket(p+24);
        r05_alloc_open_bracket(p+25);
        r05_alloc_insert_pos(p+26);
        r05_alloc_close_bracket(p+27);
        r05_alloc_insert_pos(p+28);
        r05_alloc_close_call(p+29);
        r05_push_stack(p[29]);
        r05_push_stack(p[20]);
        r05_link_brackets(p[25], p[27]);
        r05_link_brackets(p[22], p[24]);
        r05_splice_tvar(p[21], p+3);
        r05_splice_evar(p[23], p+9);
        r05_splice_evar(p[26], p+14);
        r05_splice_evar(p[28], p+11);
        r05_splice_from_freelist(p[0]);
        r05_splice_to_freelist(p[0], p[2]);
        return;
      } while (0);
      r05_splice_to_freelist(p[16], p[18]);
    } while (0);

    do {
      /* t.Pos: 3 */
      /* e.Line: 9 */
      /* e.Lines: 11 */
      /* s.Type: 13 */
      /* e.Index: 15 */
      /* t.Pos (s.Type '.' e.Index) (e.Line) e.Lines */
      if (! r05_tvar_left(p+3, p[1], p[2]))
        continue;
      if (! r05_brackets_left(p+5, p[4], p[2]))
        continue;
      if (! r05_brackets_left(p+7, p[6], p[2]))
        continue;
      r05_close_evar(p+9, p[7], p[8]);
      r05_close_evar(p+11, p[8], p[2]);
      if (! r05_svar_left(p+13, p[5], p[6]))
        continue;
      if (! r05_char_left(p+14, p[13], p[6], '.'))
        continue;
      r05_close_evar(p+15, p[14], p[6]);

      r05_reset_allocator();
      r05_alloc_open_bracket(p+17);
      r05_alloc_function(&r05f_TkVariable);
      r05_alloc_insert_pos(p+18);
      r05_alloc_svar(p+13);
      r05_alloc_insert_pos(p+19);
      r05_alloc_close_bracket(p+20);
      r05_alloc_open_call(p+21);
      r05_alloc_function(&r05f_CheckIndex);
      r05_alloc_tvar(p+3);
      r05_alloc_evar(p+15);
      r05_alloc_close_call(p+22);
      r05_alloc_open_call(p+23);
      r05_alloc_function(&r05f_DoScan);
      r05_alloc_open_call(p+24);
      r05_alloc_function(&r05f_IncCol);
      r05_alloc_tvar(p+3);
      r05_alloc_function(&r05f_Len);
      r05_alloc_svar(p+13);
      r05_alloc_char('.');
      r05_alloc_evar(p+15);
      r05_alloc_close_call(p+25);
      r05_alloc_open_bracket(p+26);
      r05_alloc_insert_pos(p+27);
      r05_alloc_close_bracket(p+28);
      r05_alloc_insert_pos(p+29);
      r05_alloc_close_call(p+30);
      r05_push_stack(p[30]);
      r05_push_stack(p[23]);
      r05_link_brackets(p[26], p[28]);
      r05_push_stack(p[25]);
      r05_push_stack(p[24]);
      r05_push_stack(p[22]);
      r05_push_stack(p[21]);
      r05_link_brackets(p[17], p[20]);
      r05_splice_tvar(p[18], p+3);
      r05_splice_evar(p[19], p+15);
      r05_splice_evar(p[27], p+9);
      r05_splice_evar(p[29], p+11);
      r05_splice_from_freelist(p[0]);
      r05_splice_to_freelist(p[0], p[2]);
      return;
    } while (0);

    r05_recognition_impossible();
  }
}

R05_DEFINE_LOCAL_FUNCTION(IsIdentTail, "IsIdentTail") {
  R05_DEFINE_COND_FUNCTION(IsIdentTail, "IsIdentTail$1", 1)
  struct r05_node *p[10] = { 0 };

  r05_this_is_generated_function();
  switch (arg_begin->next->info.function->resume_entry >> 1) {
  case 0:
    p[0] = arg_begin;
    p[1] = arg_begin->next;
    p[2] = arg_end;

    do {
      /* '-' */
      if (! r05_char_left(p+3, p[1], p[2], '-'))
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
      /* '_' */
      if (! r05_char_left(p+3, p[1], p[2], '_'))
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
        /* s.Other: 3, 9 */
        /* 'D0' s.Other */
        if (! r05_char_left(p+7, p[5], p[6], 'D'))
          continue;
        if (! r05_char_left(p+8, p[7], p[6], '0'))
          continue;
        if (! r05_repeated_svar_left(p+9, p[8], p[6], p+3))
          continue;
        if (! r05_empty_hole(p[9], p[6]))
          continue;

        r05_reset_allocator();
        r05_alloc_function(&r05f_True);
        r05_splice_from_freelist(p[0]);
        r05_splice_to_freelist(p[0], p[2]);
        return;
      } while (0);

      do {
        /* s.Other: 3, 8 */
        /* s.Case: 9 */
        /* 'L' s.Case s.Other */
        if (! r05_char_left(p+7, p[5], p[6], 'L'))
          continue;
        if (! r05_repeated_svar_right(p+8, p[7], p[6], p+3))
          continue;
        if (! r05_svar_left(p+9, p[7], p[8]))
          continue;
        if (! r05_empty_hole(p[9], p[8]))
          continue;

        r05_reset_allocator();
        r05_alloc_function(&r05f_True);
        r05_splice_from_freelist(p[0]);
        r05_splice_to_freelist(p[0], p[2]);
        return;
      } while (0);

      do {
        /* s.Other: 3 */
        /* e.OtherType: 7 */
        /* e.OtherType */
        r05_close_evar(p+7, p[5], p[6]);

        r05_reset_allocator();
        r05_alloc_function(&r05f_False);
        r05_splice_from_freelist(p[0]);
        r05_splice_to_freelist(p[0], p[2]);
        return;
      } while (0);
    } while (0);

    r05_recognition_impossible();
  }
}

R05_DEFINE_LOCAL_FUNCTION(CheckIndex, "CheckIndex") {
  R05_DEFINE_COND_FUNCTION(CheckIndex, "CheckIndex$1", 1)
  R05_DEFINE_COND_FUNCTION(CheckIndex, "CheckIndex$2", 2)
  struct r05_node *p[17] = { 0 };

  r05_this_is_generated_function();
  switch (arg_begin->next->info.function->resume_entry >> 1) {
  case 0:
    p[0] = arg_begin;
    p[1] = arg_begin->next;
    p[2] = arg_end;

    do {
      /* t.Pos: 3 */
      /* s.Digit: 5 */
      /* e.MustBeDigits: 6 */
      /* t.Pos s.Digit e.MustBeDigits */
      if (! r05_tvar_left(p+3, p[1], p[2]))
        continue;
      if (! r05_svar_left(p+5, p[4], p[2]))
        continue;
      r05_close_evar(p+6, p[5], p[2]);

      r05_reset_allocator();
      r05_alloc_open_call(p+8);
      r05_alloc_function(&c1);
      r05_alloc_open_call(p+9);
      r05_alloc_function(&r05f_Type);
      r05_alloc_svar(p+5);
      r05_alloc_close_call(p+10);
      r05_alloc_close_call(p+11);
      r05_push_stack(p[11]);
      r05_push_stack(p[8]);
      r05_push_stack(p[10]);
      r05_push_stack(p[9]);
      r05_push_context(p, 8);
      r05_splice_from_freelist(p[2]);
      return;

  case 1:
      r05_pop_context(p, 8);
      p[8] = arg_begin;
      p[9] = arg_begin->next;
      p[10] = arg_end;

      do {
        /* t.Pos: 3 */
        /* s.Digit: 5 */
        /* e.MustBeDigits: 6 */
        /* s.Digit_: 13 */
        /* 'D0' s.Digit_ */
        if (! r05_char_left(p+11, p[9], p[10], 'D'))
          continue;
        if (! r05_char_left(p+12, p[11], p[10], '0'))
          continue;
        if (! r05_svar_left(p+13, p[12], p[10]))
          continue;
        if (! r05_empty_hole(p[13], p[10]))
          continue;

        r05_reset_allocator();
        r05_alloc_open_call(p+14);
        r05_alloc_function(&r05f_CheckIndexm_Digits);
        r05_alloc_insert_pos(p+15);
        r05_alloc_close_call(p+16);
        r05_push_stack(p[16]);
        r05_push_stack(p[14]);
        r05_splice_tvar(p[15], p+3);
        r05_splice_evar(p[15], p+6);
        r05_splice_from_freelist(p[0]);
        r05_splice_to_freelist(p[0], p[2]);
        return;
      } while (0);
      r05_splice_to_freelist(p[8], p[10]);
    } while (0);

    do {
      /* t.Pos: 3 */
      /* s.Letter: 5 */
      /* e.Any: 6 */
      /* t.Pos s.Letter e.Any */
      if (! r05_tvar_left(p+3, p[1], p[2]))
        continue;
      if (! r05_svar_left(p+5, p[4], p[2]))
        continue;
      r05_close_evar(p+6, p[5], p[2]);

      r05_reset_allocator();
      r05_alloc_open_call(p+8);
      r05_alloc_function(&c2);
      r05_alloc_open_call(p+9);
      r05_alloc_function(&r05f_Type);
      r05_alloc_svar(p+5);
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
        /* t.Pos: 3 */
        /* s.Letter: 5 */
        /* e.Any: 6 */
        /* s.st: 12 */
        /* s.Letter_: 13 */
        /* 'L' s.st s.Letter_ */
        if (! r05_char_left(p+11, p[9], p[10], 'L'))
          continue;
        if (! r05_svar_left(p+12, p[11], p[10]))
          continue;
        if (! r05_svar_left(p+13, p[12], p[10]))
          continue;
        if (! r05_empty_hole(p[13], p[10]))
          continue;

        r05_reset_allocator();
        r05_splice_from_freelist(p[0]);
        r05_splice_to_freelist(p[0], p[2]);
        return;
      } while (0);
      r05_splice_to_freelist(p[8], p[10]);
    } while (0);

    do {
      /* t.Pos: 3 */
      /* s.Other: 5 */
      /* e.Any: 6 */
      /* t.Pos s.Other e.Any */
      if (! r05_tvar_left(p+3, p[1], p[2]))
        continue;
      if (! r05_svar_left(p+5, p[4], p[2]))
        continue;
      r05_close_evar(p+6, p[5], p[2]);

      r05_reset_allocator();
      r05_alloc_open_bracket(p+8);
      r05_alloc_function(&r05f_TkError);
      r05_alloc_insert_pos(p+9);
      r05_alloc_chars("index must start with a letter or a number", 42);
      r05_alloc_close_bracket(p+10);
      r05_link_brackets(p[8], p[10]);
      r05_splice_tvar(p[9], p+3);
      r05_splice_from_freelist(p[0]);
      r05_splice_to_freelist(p[0], p[2]);
      return;
    } while (0);

    do {
      /* t.Pos: 3 */
      /* t.Pos */
      if (! r05_tvar_left(p+3, p[1], p[2]))
        continue;
      if (! r05_empty_hole(p[4], p[2]))
        continue;

      r05_reset_allocator();
      r05_alloc_open_bracket(p+5);
      r05_alloc_function(&r05f_TkError);
      r05_alloc_insert_pos(p+6);
      r05_alloc_chars("empty variable index", 20);
      r05_alloc_close_bracket(p+7);
      r05_link_brackets(p[5], p[7]);
      r05_splice_tvar(p[6], p+3);
      r05_splice_from_freelist(p[0]);
      r05_splice_to_freelist(p[0], p[2]);
      return;
    } while (0);

    r05_recognition_impossible();
  }
}

R05_DEFINE_LOCAL_FUNCTION(CheckIndexm_Digits, "CheckIndex-Digits") {
  R05_DEFINE_COND_FUNCTION(CheckIndexm_Digits, "CheckIndex-Digits$1", 1)
  struct r05_node *p[17] = { 0 };

  r05_this_is_generated_function();
  switch (arg_begin->next->info.function->resume_entry >> 1) {
  case 0:
    p[0] = arg_begin;
    p[1] = arg_begin->next;
    p[2] = arg_end;

    do {
      /* t.Pos: 3 */
      /* t.Pos */
      if (! r05_tvar_left(p+3, p[1], p[2]))
        continue;
      if (! r05_empty_hole(p[4], p[2]))
        continue;

      r05_reset_allocator();
      r05_splice_from_freelist(p[0]);
      r05_splice_to_freelist(p[0], p[2]);
      return;
    } while (0);

    do {
      /* t.Pos: 3 */
      /* s.Digit: 5 */
      /* e.MustBeDigits: 6 */
      /* t.Pos s.Digit e.MustBeDigits */
      if (! r05_tvar_left(p+3, p[1], p[2]))
        continue;
      if (! r05_svar_left(p+5, p[4], p[2]))
        continue;
      r05_close_evar(p+6, p[5], p[2]);

      r05_reset_allocator();
      r05_alloc_open_call(p+8);
      r05_alloc_function(&c1);
      r05_alloc_open_call(p+9);
      r05_alloc_function(&r05f_Type);
      r05_alloc_svar(p+5);
      r05_alloc_close_call(p+10);
      r05_alloc_close_call(p+11);
      r05_push_stack(p[11]);
      r05_push_stack(p[8]);
      r05_push_stack(p[10]);
      r05_push_stack(p[9]);
      r05_push_context(p, 8);
      r05_splice_from_freelist(p[2]);
      return;

  case 1:
      r05_pop_context(p, 8);
      p[8] = arg_begin;
      p[9] = arg_begin->next;
      p[10] = arg_end;

      do {
        /* t.Pos: 3 */
        /* s.Digit: 5 */
        /* e.MustBeDigits: 6 */
        /* s.Digit_: 13 */
        /* 'D0' s.Digit_ */
        if (! r05_char_left(p+11, p[9], p[10], 'D'))
          continue;
        if (! r05_char_left(p+12, p[11], p[10], '0'))
          continue;
        if (! r05_svar_left(p+13, p[12], p[10]))
          continue;
        if (! r05_empty_hole(p[13], p[10]))
          continue;

        r05_reset_allocator();
        r05_alloc_open_call(p+14);
        r05_alloc_function(&r05f_CheckIndexm_Digits);
        r05_alloc_insert_pos(p+15);
        r05_alloc_close_call(p+16);
        r05_push_stack(p[16]);
        r05_push_stack(p[14]);
        r05_splice_tvar(p[15], p+3);
        r05_splice_evar(p[15], p+6);
        r05_splice_from_freelist(p[0]);
        r05_splice_to_freelist(p[0], p[2]);
        return;
      } while (0);
      r05_splice_to_freelist(p[8], p[10]);
    } while (0);

    do {
      /* t.Pos: 3 */
      /* s.Unexpected: 5 */
      /* e.Tail: 6 */
      /* t.Pos s.Unexpected e.Tail */
      if (! r05_tvar_left(p+3, p[1], p[2]))
        continue;
      if (! r05_svar_left(p+5, p[4], p[2]))
        continue;
      r05_close_evar(p+6, p[5], p[2]);

      r05_reset_allocator();
      r05_alloc_open_bracket(p+8);
      r05_alloc_function(&r05f_TkError);
      r05_alloc_insert_pos(p+9);
      r05_alloc_chars("index must be whole number", 26);
      r05_alloc_close_bracket(p+10);
      r05_link_brackets(p[8], p[10]);
      r05_splice_tvar(p[9], p+3);
      r05_splice_from_freelist(p[0]);
      r05_splice_to_freelist(p[0], p[2]);
      return;
    } while (0);

    r05_recognition_impossible();
  }
}

R05_DEFINE_LOCAL_FUNCTION(DoScanm_CComment, "DoScan-CComment") {
  struct r05_node *p[27] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /* t.Pos: 3 */
    /* e.Comment: 11 */
    /* e.Line: 13 */
    /* e.Lines: 15 */
    /* t.Pos (e.Comment) ('*' '/' e.Line) e.Lines */
    if (! r05_tvar_left(p+3, p[1], p[2]))
      continue;
    if (! r05_brackets_left(p+5, p[4], p[2]))
      continue;
    if (! r05_brackets_left(p+7, p[6], p[2]))
      continue;
    if (! r05_char_left(p+9, p[7], p[8], '*'))
      continue;
    if (! r05_char_left(p+10, p[9], p[8], '/'))
      continue;
    r05_close_evar(p+11, p[5], p[6]);
    r05_close_evar(p+13, p[10], p[8]);
    r05_close_evar(p+15, p[8], p[2]);

    r05_reset_allocator();
    r05_alloc_open_call(p+17);
    r05_alloc_function(&r05f_DoScan);
    r05_alloc_open_call(p+18);
    r05_alloc_function(&r05f_IncCol);
    r05_alloc_insert_pos(p+19);
    r05_alloc_function(&r05f_Len);
    r05_alloc_insert_pos(p+20);
    r05_alloc_chars("*/", 2);
    r05_alloc_close_call(p+21);
    r05_alloc_open_bracket(p+22);
    r05_alloc_insert_pos(p+23);
    r05_alloc_close_bracket(p+24);
    r05_alloc_insert_pos(p+25);
    r05_alloc_close_call(p+26);
    r05_push_stack(p[26]);
    r05_push_stack(p[17]);
    r05_link_brackets(p[22], p[24]);
    r05_push_stack(p[21]);
    r05_push_stack(p[18]);
    r05_splice_tvar(p[19], p+3);
    r05_splice_evar(p[20], p+11);
    r05_splice_evar(p[23], p+13);
    r05_splice_evar(p[25], p+15);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  do {
    /* t.Pos: 3 */
    /* e.Comment: 9 */
    /* e.Lines: 11 */
    /* s.Char: 13 */
    /* e.Line: 14 */
    /* t.Pos (e.Comment) (s.Char e.Line) e.Lines */
    if (! r05_tvar_left(p+3, p[1], p[2]))
      continue;
    if (! r05_brackets_left(p+5, p[4], p[2]))
      continue;
    if (! r05_brackets_left(p+7, p[6], p[2]))
      continue;
    r05_close_evar(p+9, p[5], p[6]);
    r05_close_evar(p+11, p[8], p[2]);
    if (! r05_svar_left(p+13, p[7], p[8]))
      continue;
    r05_close_evar(p+14, p[13], p[8]);

    r05_reset_allocator();
    r05_alloc_open_call(p+16);
    r05_alloc_function(&r05f_DoScanm_CComment);
    r05_alloc_insert_pos(p+17);
    r05_alloc_open_bracket(p+18);
    r05_alloc_insert_pos(p+19);
    r05_alloc_svar(p+13);
    r05_alloc_close_bracket(p+20);
    r05_alloc_open_bracket(p+21);
    r05_alloc_insert_pos(p+22);
    r05_alloc_close_bracket(p+23);
    r05_alloc_insert_pos(p+24);
    r05_alloc_close_call(p+25);
    r05_push_stack(p[25]);
    r05_push_stack(p[16]);
    r05_link_brackets(p[21], p[23]);
    r05_link_brackets(p[18], p[20]);
    r05_splice_tvar(p[17], p+3);
    r05_splice_evar(p[19], p+9);
    r05_splice_evar(p[22], p+14);
    r05_splice_evar(p[24], p+11);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  do {
    /* t.Pos: 3 */
    /* e.Comment: 9 */
    /* e.Lines: 11 */
    /* t.Pos (e.Comment) () e.Lines */
    if (! r05_tvar_left(p+3, p[1], p[2]))
      continue;
    if (! r05_brackets_left(p+5, p[4], p[2]))
      continue;
    if (! r05_brackets_left(p+7, p[6], p[2]))
      continue;
    if (! r05_empty_hole(p[7], p[8]))
      continue;
    r05_close_evar(p+9, p[5], p[6]);
    r05_close_evar(p+11, p[8], p[2]);

    r05_reset_allocator();
    r05_alloc_open_call(p+13);
    r05_alloc_function(&r05f_DoScanm_CComment);
    r05_alloc_open_call(p+14);
    r05_alloc_function(&r05f_IncLine);
    r05_alloc_insert_pos(p+15);
    r05_alloc_close_call(p+16);
    r05_alloc_open_bracket(p+17);
    r05_alloc_close_bracket(p+18);
    r05_alloc_insert_pos(p+19);
    r05_alloc_close_call(p+20);
    r05_push_stack(p[20]);
    r05_push_stack(p[13]);
    r05_link_brackets(p[17], p[18]);
    r05_push_stack(p[16]);
    r05_push_stack(p[14]);
    r05_splice_tvar(p[15], p+3);
    r05_splice_evar(p[19], p+11);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  do {
    /* e.Comment: 5 */
    /* t.Pos: 7 */
    /* t.Pos (e.Comment) */
    if (! r05_brackets_right(p+3, p[1], p[2]))
      continue;
    r05_close_evar(p+5, p[3], p[4]);
    if (! r05_tvar_left(p+7, p[1], p[3]))
      continue;
    if (! r05_empty_hole(p[8], p[3]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_bracket(p+9);
    r05_alloc_function(&r05f_TkError);
    r05_alloc_insert_pos(p+10);
    r05_alloc_chars("Unexpected EOF, unclosed comment", 32);
    r05_alloc_close_bracket(p+11);
    r05_alloc_open_bracket(p+12);
    r05_alloc_function(&r05f_TkEOF);
    r05_alloc_open_call(p+13);
    r05_alloc_function(&r05f_IncCol);
    r05_alloc_tvar(p+7);
    r05_alloc_function(&r05f_Len);
    r05_alloc_insert_pos(p+14);
    r05_alloc_close_call(p+15);
    r05_alloc_close_bracket(p+16);
    r05_link_brackets(p[12], p[16]);
    r05_push_stack(p[15]);
    r05_push_stack(p[13]);
    r05_link_brackets(p[9], p[11]);
    r05_splice_tvar(p[10], p+7);
    r05_splice_evar(p[14], p+5);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(DoScanm_Ident, "DoScan-Ident") {
  R05_DEFINE_COND_FUNCTION(DoScanm_Ident, "DoScan-Ident$1", 1)
  struct r05_node *p[30] = { 0 };

  r05_this_is_generated_function();
  switch (arg_begin->next->info.function->resume_entry >> 1) {
  case 0:
    p[0] = arg_begin;
    p[1] = arg_begin->next;
    p[2] = arg_end;

    do {
      /* t.Pos: 3 */
      /* e.Ident: 9 */
      /* e.Lines: 11 */
      /* s.Next: 13 */
      /* e.Line: 14 */
      /* t.Pos (e.Ident) (s.Next e.Line) e.Lines */
      if (! r05_tvar_left(p+3, p[1], p[2]))
        continue;
      if (! r05_brackets_left(p+5, p[4], p[2]))
        continue;
      if (! r05_brackets_left(p+7, p[6], p[2]))
        continue;
      r05_close_evar(p+9, p[5], p[6]);
      r05_close_evar(p+11, p[8], p[2]);
      if (! r05_svar_left(p+13, p[7], p[8]))
        continue;
      r05_close_evar(p+14, p[13], p[8]);

      r05_reset_allocator();
      r05_alloc_open_call(p+16);
      r05_alloc_function(&c1);
      r05_alloc_open_call(p+17);
      r05_alloc_function(&r05f_IsIdentTail);
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
        /* t.Pos: 3 */
        /* e.Ident: 9 */
        /* e.Lines: 11 */
        /* s.Next: 13 */
        /* e.Line: 14 */
        /* True */
        if (! r05_function_left(p+19, p[17], p[18], &r05f_True))
          continue;
        if (! r05_empty_hole(p[19], p[18]))
          continue;

        r05_reset_allocator();
        r05_alloc_open_call(p+20);
        r05_alloc_function(&r05f_DoScanm_Ident);
        r05_alloc_insert_pos(p+21);
        r05_alloc_open_bracket(p+22);
        r05_alloc_insert_pos(p+23);
        r05_alloc_svar(p+13);
        r05_alloc_close_bracket(p+24);
        r05_alloc_open_bracket(p+25);
        r05_alloc_insert_pos(p+26);
        r05_alloc_close_bracket(p+27);
        r05_alloc_insert_pos(p+28);
        r05_alloc_close_call(p+29);
        r05_push_stack(p[29]);
        r05_push_stack(p[20]);
        r05_link_brackets(p[25], p[27]);
        r05_link_brackets(p[22], p[24]);
        r05_splice_tvar(p[21], p+3);
        r05_splice_evar(p[23], p+9);
        r05_splice_evar(p[26], p+14);
        r05_splice_evar(p[28], p+11);
        r05_splice_from_freelist(p[0]);
        r05_splice_to_freelist(p[0], p[2]);
        return;
      } while (0);
      r05_splice_to_freelist(p[16], p[18]);
    } while (0);

    do {
      /* t.Pos: 3 */
      /* e.Ident: 10 */
      /* e.Line: 12 */
      /* e.Lines: 14 */
      /* t.Pos ('<' e.Ident) (e.Line) e.Lines */
      if (! r05_tvar_left(p+3, p[1], p[2]))
        continue;
      if (! r05_brackets_left(p+5, p[4], p[2]))
        continue;
      if (! r05_char_left(p+7, p[5], p[6], '<'))
        continue;
      if (! r05_brackets_left(p+8, p[6], p[2]))
        continue;
      r05_close_evar(p+10, p[7], p[6]);
      r05_close_evar(p+12, p[8], p[9]);
      r05_close_evar(p+14, p[9], p[2]);

      r05_reset_allocator();
      r05_alloc_open_bracket(p+16);
      r05_alloc_function(&r05f_TkOpenCall);
      r05_alloc_insert_pos(p+17);
      r05_alloc_close_bracket(p+18);
      r05_alloc_open_call(p+19);
      r05_alloc_function(&r05f_DoScan);
      r05_alloc_open_call(p+20);
      r05_alloc_function(&r05f_IncCol);
      r05_alloc_tvar(p+3);
      r05_alloc_function(&r05f_Len);
      r05_alloc_char('<');
      r05_alloc_evar(p+10);
      r05_alloc_close_call(p+21);
      r05_alloc_open_bracket(p+22);
      r05_alloc_insert_pos(p+23);
      r05_alloc_close_bracket(p+24);
      r05_alloc_insert_pos(p+25);
      r05_alloc_close_call(p+26);
      r05_push_stack(p[26]);
      r05_push_stack(p[19]);
      r05_link_brackets(p[22], p[24]);
      r05_push_stack(p[21]);
      r05_push_stack(p[20]);
      r05_link_brackets(p[16], p[18]);
      r05_splice_tvar(p[17], p+3);
      r05_splice_evar(p[17], p+10);
      r05_splice_evar(p[23], p+12);
      r05_splice_evar(p[25], p+14);
      r05_splice_from_freelist(p[0]);
      r05_splice_to_freelist(p[0], p[2]);
      return;
    } while (0);

    do {
      /* t.Pos: 3 */
      /* e.Ident: 9 */
      /* e.Line: 11 */
      /* e.Lines: 13 */
      /* t.Pos (e.Ident) (e.Line) e.Lines */
      if (! r05_tvar_left(p+3, p[1], p[2]))
        continue;
      if (! r05_brackets_left(p+5, p[4], p[2]))
        continue;
      if (! r05_brackets_left(p+7, p[6], p[2]))
        continue;
      r05_close_evar(p+9, p[5], p[6]);
      r05_close_evar(p+11, p[7], p[8]);
      r05_close_evar(p+13, p[8], p[2]);

      r05_reset_allocator();
      r05_alloc_open_bracket(p+15);
      r05_alloc_function(&r05f_TkName);
      r05_alloc_insert_pos(p+16);
      r05_alloc_close_bracket(p+17);
      r05_alloc_open_call(p+18);
      r05_alloc_function(&r05f_DoScan);
      r05_alloc_open_call(p+19);
      r05_alloc_function(&r05f_IncCol);
      r05_alloc_tvar(p+3);
      r05_alloc_function(&r05f_Len);
      r05_alloc_evar(p+9);
      r05_alloc_close_call(p+20);
      r05_alloc_open_bracket(p+21);
      r05_alloc_insert_pos(p+22);
      r05_alloc_close_bracket(p+23);
      r05_alloc_insert_pos(p+24);
      r05_alloc_close_call(p+25);
      r05_push_stack(p[25]);
      r05_push_stack(p[18]);
      r05_link_brackets(p[21], p[23]);
      r05_push_stack(p[20]);
      r05_push_stack(p[19]);
      r05_link_brackets(p[15], p[17]);
      r05_splice_tvar(p[16], p+3);
      r05_splice_evar(p[16], p+9);
      r05_splice_evar(p[22], p+11);
      r05_splice_evar(p[24], p+13);
      r05_splice_from_freelist(p[0]);
      r05_splice_to_freelist(p[0], p[2]);
      return;
    } while (0);

    r05_recognition_impossible();
  }
}

R05_DEFINE_LOCAL_FUNCTION(DoScanm_Chars, "DoScan-Chars") {
  struct r05_node *p[23] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /* t.Pos: 3 */
    /* e.Line: 8 */
    /* e.Lines: 10 */
    /* t.Pos ('\\' e.Line) e.Lines */
    if (! r05_tvar_left(p+3, p[1], p[2]))
      continue;
    if (! r05_brackets_left(p+5, p[4], p[2]))
      continue;
    if (! r05_char_left(p+7, p[5], p[6], '\\'))
      continue;
    r05_close_evar(p+8, p[7], p[6]);
    r05_close_evar(p+10, p[6], p[2]);

    r05_reset_allocator();
    r05_alloc_open_call(p+12);
    r05_alloc_function(&r05f_DoScanm_Charsm_Escape);
    r05_alloc_insert_pos(p+13);
    r05_alloc_open_call(p+14);
    r05_alloc_function(&r05f_Escape);
    r05_alloc_open_call(p+15);
    r05_alloc_function(&r05f_IncCol);
    r05_alloc_tvar(p+3);
    r05_alloc_close_call(p+16);
    r05_alloc_insert_pos(p+17);
    r05_alloc_close_call(p+18);
    r05_alloc_insert_pos(p+19);
    r05_alloc_close_call(p+20);
    r05_push_stack(p[20]);
    r05_push_stack(p[12]);
    r05_push_stack(p[18]);
    r05_push_stack(p[14]);
    r05_push_stack(p[16]);
    r05_push_stack(p[15]);
    r05_splice_tvar(p[13], p+3);
    r05_splice_evar(p[17], p+8);
    r05_splice_evar(p[19], p+10);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  do {
    /* t.Pos: 3 */
    /* e.Line: 8 */
    /* e.Lines: 10 */
    /* t.Pos ('\'' e.Line) e.Lines */
    if (! r05_tvar_left(p+3, p[1], p[2]))
      continue;
    if (! r05_brackets_left(p+5, p[4], p[2]))
      continue;
    if (! r05_char_left(p+7, p[5], p[6], '\''))
      continue;
    r05_close_evar(p+8, p[7], p[6]);
    r05_close_evar(p+10, p[6], p[2]);

    r05_reset_allocator();
    r05_alloc_open_call(p+12);
    r05_alloc_function(&r05f_DoScan);
    r05_alloc_open_call(p+13);
    r05_alloc_function(&r05f_IncCol);
    r05_alloc_insert_pos(p+14);
    r05_alloc_close_call(p+15);
    r05_alloc_open_bracket(p+16);
    r05_alloc_insert_pos(p+17);
    r05_alloc_close_bracket(p+18);
    r05_alloc_insert_pos(p+19);
    r05_alloc_close_call(p+20);
    r05_push_stack(p[20]);
    r05_push_stack(p[12]);
    r05_link_brackets(p[16], p[18]);
    r05_push_stack(p[15]);
    r05_push_stack(p[13]);
    r05_splice_tvar(p[14], p+3);
    r05_splice_evar(p[17], p+8);
    r05_splice_evar(p[19], p+10);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  do {
    /* t.Pos: 3 */
    /* e.Lines: 7 */
    /* s.Char: 9 */
    /* e.Line: 10 */
    /* t.Pos (s.Char e.Line) e.Lines */
    if (! r05_tvar_left(p+3, p[1], p[2]))
      continue;
    if (! r05_brackets_left(p+5, p[4], p[2]))
      continue;
    r05_close_evar(p+7, p[6], p[2]);
    if (! r05_svar_left(p+9, p[5], p[6]))
      continue;
    r05_close_evar(p+10, p[9], p[6]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+12);
    r05_alloc_function(&r05f_TkChar);
    r05_alloc_insert_pos(p+13);
    r05_alloc_svar(p+9);
    r05_alloc_close_bracket(p+14);
    r05_alloc_open_call(p+15);
    r05_alloc_function(&r05f_DoScanm_Chars);
    r05_alloc_open_call(p+16);
    r05_alloc_function(&r05f_IncCol);
    r05_alloc_tvar(p+3);
    r05_alloc_close_call(p+17);
    r05_alloc_open_bracket(p+18);
    r05_alloc_insert_pos(p+19);
    r05_alloc_close_bracket(p+20);
    r05_alloc_insert_pos(p+21);
    r05_alloc_close_call(p+22);
    r05_push_stack(p[22]);
    r05_push_stack(p[15]);
    r05_link_brackets(p[18], p[20]);
    r05_push_stack(p[17]);
    r05_push_stack(p[16]);
    r05_link_brackets(p[12], p[14]);
    r05_splice_tvar(p[13], p+3);
    r05_splice_evar(p[19], p+10);
    r05_splice_evar(p[21], p+7);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  do {
    /* t.Pos: 3 */
    /* e.Lines: 7 */
    /* t.Pos () e.Lines */
    if (! r05_tvar_left(p+3, p[1], p[2]))
      continue;
    if (! r05_brackets_left(p+5, p[4], p[2]))
      continue;
    if (! r05_empty_hole(p[5], p[6]))
      continue;
    r05_close_evar(p+7, p[6], p[2]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+9);
    r05_alloc_function(&r05f_TkError);
    r05_alloc_insert_pos(p+10);
    r05_alloc_chars("Unclosed \' - single quote", 25);
    r05_alloc_close_bracket(p+11);
    r05_alloc_open_call(p+12);
    r05_alloc_function(&r05f_DoScan);
    r05_alloc_open_call(p+13);
    r05_alloc_function(&r05f_IncLine);
    r05_alloc_tvar(p+3);
    r05_alloc_close_call(p+14);
    r05_alloc_insert_pos(p+15);
    r05_alloc_close_call(p+16);
    r05_push_stack(p[16]);
    r05_push_stack(p[12]);
    r05_push_stack(p[14]);
    r05_push_stack(p[13]);
    r05_link_brackets(p[9], p[11]);
    r05_splice_tvar(p[10], p+3);
    r05_splice_evar(p[15], p+7);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(Escape, "Escape") {
  R05_DEFINE_COND_FUNCTION(Escape, "Escape$1", 1)
  R05_DEFINE_COND_FUNCTION(Escape, "Escape$2", 2)
  R05_DEFINE_COND_FUNCTION(Escape, "Escape$3", 3)
  struct r05_node *p[30] = { 0 };

  r05_this_is_generated_function();
  switch (arg_begin->next->info.function->resume_entry >> 1) {
  case 0:
    p[0] = arg_begin;
    p[1] = arg_begin->next;
    p[2] = arg_end;

    do {
      /* t.Pos: 3 */
      /* s.Escaped: 5 */
      /* e.Line: 6 */
      /* t.Pos s.Escaped e.Line */
      if (! r05_tvar_left(p+3, p[1], p[2]))
        continue;
      if (! r05_svar_left(p+5, p[4], p[2]))
        continue;
      r05_close_evar(p+6, p[5], p[2]);

      r05_reset_allocator();
      r05_alloc_open_call(p+8);
      r05_alloc_function(&c1);
      r05_alloc_open_bracket(p+9);
      r05_alloc_chars("\'\'", 2);
      r05_alloc_close_bracket(p+10);
      r05_alloc_open_bracket(p+11);
      r05_alloc_chars("\"\"", 2);
      r05_alloc_close_bracket(p+12);
      r05_alloc_open_bracket(p+13);
      r05_alloc_chars("\\\\", 2);
      r05_alloc_close_bracket(p+14);
      r05_alloc_open_bracket(p+15);
      r05_alloc_chars("n\n", 2);
      r05_alloc_close_bracket(p+16);
      r05_alloc_open_bracket(p+17);
      r05_alloc_chars("r\r", 2);
      r05_alloc_close_bracket(p+18);
      r05_alloc_open_bracket(p+19);
      r05_alloc_chars("t\t", 2);
      r05_alloc_close_bracket(p+20);
      r05_alloc_open_bracket(p+21);
      r05_alloc_chars("<<", 2);
      r05_alloc_close_bracket(p+22);
      r05_alloc_open_bracket(p+23);
      r05_alloc_chars(">>", 2);
      r05_alloc_close_bracket(p+24);
      r05_alloc_open_bracket(p+25);
      r05_alloc_chars("((", 2);
      r05_alloc_close_bracket(p+26);
      r05_alloc_open_bracket(p+27);
      r05_alloc_chars("))", 2);
      r05_alloc_close_bracket(p+28);
      r05_alloc_close_call(p+29);
      r05_push_stack(p[29]);
      r05_push_stack(p[8]);
      r05_link_brackets(p[27], p[28]);
      r05_link_brackets(p[25], p[26]);
      r05_link_brackets(p[23], p[24]);
      r05_link_brackets(p[21], p[22]);
      r05_link_brackets(p[19], p[20]);
      r05_link_brackets(p[17], p[18]);
      r05_link_brackets(p[15], p[16]);
      r05_link_brackets(p[13], p[14]);
      r05_link_brackets(p[11], p[12]);
      r05_link_brackets(p[9], p[10]);
      r05_push_context(p, 8);
      r05_splice_from_freelist(p[2]);
      return;

  case 1:
      r05_pop_context(p, 8);
      p[8] = arg_begin;
      p[9] = arg_begin->next;
      p[10] = arg_end;

      do {
        /* t.Pos: 3 */
        /* s.Escaped: 5, 15 */
        /* e.Line: 6 */
        /* e.Escapes-B: 11 */
        /* e.Escapes-E: 16 */
        /* s.Char: 18 */
        /* e.Escapes-B (s.Escaped s.Char) e.Escapes-E */
        p[11] = NULL;
        p[12] = p[9];
        do {
          r05_start_e_loop();
          if (! r05_brackets_left(p+13, p[12], p[10]))
            continue;
          if (! r05_repeated_svar_left(p+15, p[13], p[14], p+5))
            continue;
          r05_close_evar(p+16, p[14], p[10]);
          if (! r05_svar_left(p+18, p[15], p[14]))
            continue;
          if (! r05_empty_hole(p[18], p[14]))
            continue;

          r05_reset_allocator();
          r05_alloc_function(&r05f_Ok);
          r05_alloc_svar(p+18);
          r05_alloc_open_call(p+19);
          r05_alloc_function(&r05f_IncCol);
          r05_alloc_insert_pos(p+20);
          r05_alloc_close_call(p+21);
          r05_alloc_open_bracket(p+22);
          r05_alloc_insert_pos(p+23);
          r05_alloc_close_bracket(p+24);
          r05_link_brackets(p[22], p[24]);
          r05_push_stack(p[21]);
          r05_push_stack(p[19]);
          r05_splice_tvar(p[20], p+3);
          r05_splice_evar(p[23], p+6);
          r05_splice_from_freelist(p[0]);
          r05_splice_to_freelist(p[0], p[2]);
          return;
        } while (r05_open_evar_advance(p+11, p[10]));
        r05_stop_e_loop();
      } while (0);
      r05_splice_to_freelist(p[8], p[10]);
    } while (0);

    do {
      /* t.Pos: 3 */
      /* s.Hex1: 6 */
      /* s.Hex2: 7 */
      /* e.Line: 8 */
      /* t.Pos 'x' s.Hex1 s.Hex2 e.Line */
      if (! r05_tvar_left(p+3, p[1], p[2]))
        continue;
      if (! r05_char_left(p+5, p[4], p[2], 'x'))
        continue;
      if (! r05_svar_left(p+6, p[5], p[2]))
        continue;
      if (! r05_svar_left(p+7, p[6], p[2]))
        continue;
      r05_close_evar(p+8, p[7], p[2]);

      r05_reset_allocator();
      r05_alloc_open_call(p+10);
      r05_alloc_function(&c2);
      r05_alloc_open_call(p+11);
      r05_alloc_function(&r05f_HexDigit);
      r05_alloc_svar(p+6);
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
        /* t.Pos: 3 */
        /* s.Hex1: 6 */
        /* s.Hex2: 7 */
        /* e.Line: 8 */
        /* s.Num1: 13 */
        /* s.Num1 */
        if (! r05_svar_left(p+13, p[11], p[12]))
          continue;
        if (! r05_empty_hole(p[13], p[12]))
          continue;

        r05_reset_allocator();
        r05_alloc_open_call(p+14);
        r05_alloc_function(&c3);
        r05_alloc_open_call(p+15);
        r05_alloc_function(&r05f_HexDigit);
        r05_alloc_svar(p+7);
        r05_alloc_close_call(p+16);
        r05_alloc_close_call(p+17);
        r05_push_stack(p[17]);
        r05_push_stack(p[14]);
        r05_push_stack(p[16]);
        r05_push_stack(p[15]);
        r05_push_context(p, 14);
        r05_splice_from_freelist(p[2]);
        return;

  case 3:
        r05_pop_context(p, 14);
        p[14] = arg_begin;
        p[15] = arg_begin->next;
        p[16] = arg_end;

        do {
          /* t.Pos: 3 */
          /* s.Hex1: 6 */
          /* s.Hex2: 7 */
          /* e.Line: 8 */
          /* s.Num1: 13 */
          /* s.Num2: 17 */
          /* s.Num2 */
          if (! r05_svar_left(p+17, p[15], p[16]))
            continue;
          if (! r05_empty_hole(p[17], p[16]))
            continue;

          r05_reset_allocator();
          r05_alloc_function(&r05f_Ok);
          r05_alloc_open_call(p+18);
          r05_alloc_function(&r05f_Chr);
          r05_alloc_open_call(p+19);
          r05_alloc_function(&r05f_k2B_);
          r05_alloc_open_call(p+20);
          r05_alloc_function(&r05f_k2A_);
          r05_alloc_svar(p+13);
          r05_alloc_number(16UL);
          r05_alloc_close_call(p+21);
          r05_alloc_svar(p+17);
          r05_alloc_close_call(p+22);
          r05_alloc_close_call(p+23);
          r05_alloc_open_call(p+24);
          r05_alloc_function(&r05f_IncCol);
          r05_alloc_insert_pos(p+25);
          r05_alloc_function(&r05f_Len);
          r05_alloc_char('x');
          r05_alloc_svar(p+6);
          r05_alloc_svar(p+7);
          r05_alloc_close_call(p+26);
          r05_alloc_open_bracket(p+27);
          r05_alloc_insert_pos(p+28);
          r05_alloc_close_bracket(p+29);
          r05_link_brackets(p[27], p[29]);
          r05_push_stack(p[26]);
          r05_push_stack(p[24]);
          r05_push_stack(p[23]);
          r05_push_stack(p[18]);
          r05_push_stack(p[22]);
          r05_push_stack(p[19]);
          r05_push_stack(p[21]);
          r05_push_stack(p[20]);
          r05_splice_tvar(p[25], p+3);
          r05_splice_evar(p[28], p+8);
          r05_splice_from_freelist(p[0]);
          r05_splice_to_freelist(p[0], p[2]);
          return;
        } while (0);
        r05_splice_to_freelist(p[14], p[16]);
      } while (0);
      r05_splice_to_freelist(p[10], p[12]);
    } while (0);

    do {
      /* t.Pos: 3 */
      /* e.Line: 6 */
      /* t.Pos 'x' e.Line */
      if (! r05_tvar_left(p+3, p[1], p[2]))
        continue;
      if (! r05_char_left(p+5, p[4], p[2], 'x'))
        continue;
      r05_close_evar(p+6, p[5], p[2]);

      r05_reset_allocator();
      r05_alloc_function(&r05f_Error);
      r05_alloc_open_bracket(p+8);
      r05_alloc_chars("After \\x must be two hex digits", 31);
      r05_alloc_close_bracket(p+9);
      r05_alloc_open_call(p+10);
      r05_alloc_function(&r05f_IncCol);
      r05_alloc_insert_pos(p+11);
      r05_alloc_close_call(p+12);
      r05_alloc_open_bracket(p+13);
      r05_alloc_insert_pos(p+14);
      r05_alloc_close_bracket(p+15);
      r05_link_brackets(p[13], p[15]);
      r05_push_stack(p[12]);
      r05_push_stack(p[10]);
      r05_link_brackets(p[8], p[9]);
      r05_splice_tvar(p[11], p+3);
      r05_splice_evar(p[14], p+6);
      r05_splice_from_freelist(p[0]);
      r05_splice_to_freelist(p[0], p[2]);
      return;
    } while (0);

    do {
      /* t.Pos: 3 */
      /* s.Other: 5 */
      /* e.Line: 6 */
      /* t.Pos s.Other e.Line */
      if (! r05_tvar_left(p+3, p[1], p[2]))
        continue;
      if (! r05_svar_left(p+5, p[4], p[2]))
        continue;
      r05_close_evar(p+6, p[5], p[2]);

      r05_reset_allocator();
      r05_alloc_function(&r05f_Error);
      r05_alloc_open_bracket(p+8);
      r05_alloc_chars("Bad escape sequence \\", 21);
      r05_alloc_svar(p+5);
      r05_alloc_close_bracket(p+9);
      r05_alloc_open_call(p+10);
      r05_alloc_function(&r05f_IncCol);
      r05_alloc_insert_pos(p+11);
      r05_alloc_close_call(p+12);
      r05_alloc_open_bracket(p+13);
      r05_alloc_insert_pos(p+14);
      r05_alloc_close_bracket(p+15);
      r05_link_brackets(p[13], p[15]);
      r05_push_stack(p[12]);
      r05_push_stack(p[10]);
      r05_link_brackets(p[8], p[9]);
      r05_splice_tvar(p[11], p+3);
      r05_splice_evar(p[14], p+6);
      r05_splice_from_freelist(p[0]);
      r05_splice_to_freelist(p[0], p[2]);
      return;
    } while (0);

    do {
      /* t.Pos: 3 */
      /* t.Pos */
      if (! r05_tvar_left(p+3, p[1], p[2]))
        continue;
      if (! r05_empty_hole(p[4], p[2]))
        continue;

      r05_reset_allocator();
      r05_alloc_function(&r05f_Errorm_EOL);
      r05_splice_from_freelist(p[0]);
      r05_splice_to_freelist(p[0], p[2]);
      return;
    } while (0);

    r05_recognition_impossible();
  }
}

R05_DEFINE_LOCAL_FUNCTION(DoScanm_Charsm_Escape, "DoScan-Chars-Escape") {
  struct r05_node *p[28] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /* t.Pos: 3 */
    /* s.Char: 6 */
    /* t.NextPos: 7 */
    /* e.Line: 11 */
    /* e.Lines: 13 */
    /* t.Pos Ok s.Char t.NextPos (e.Line) e.Lines */
    if (! r05_tvar_left(p+3, p[1], p[2]))
      continue;
    if (! r05_function_left(p+5, p[4], p[2], &r05f_Ok))
      continue;
    if (! r05_svar_left(p+6, p[5], p[2]))
      continue;
    if (! r05_tvar_left(p+7, p[6], p[2]))
      continue;
    if (! r05_brackets_left(p+9, p[8], p[2]))
      continue;
    r05_close_evar(p+11, p[9], p[10]);
    r05_close_evar(p+13, p[10], p[2]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+15);
    r05_alloc_function(&r05f_TkChar);
    r05_alloc_insert_pos(p+16);
    r05_alloc_svar(p+6);
    r05_alloc_close_bracket(p+17);
    r05_alloc_open_call(p+18);
    r05_alloc_function(&r05f_DoScanm_Chars);
    r05_alloc_insert_pos(p+19);
    r05_alloc_open_bracket(p+20);
    r05_alloc_insert_pos(p+21);
    r05_alloc_close_bracket(p+22);
    r05_alloc_insert_pos(p+23);
    r05_alloc_close_call(p+24);
    r05_push_stack(p[24]);
    r05_push_stack(p[18]);
    r05_link_brackets(p[20], p[22]);
    r05_link_brackets(p[15], p[17]);
    r05_splice_tvar(p[16], p+3);
    r05_splice_tvar(p[19], p+7);
    r05_splice_evar(p[21], p+11);
    r05_splice_evar(p[23], p+13);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  do {
    /* t.Pos: 3 */
    /* e.Message: 8 */
    /* t.NextPos: 10 */
    /* e.Line: 14 */
    /* e.Lines: 16 */
    /* t.Pos Error (e.Message) t.NextPos (e.Line) e.Lines */
    if (! r05_tvar_left(p+3, p[1], p[2]))
      continue;
    if (! r05_function_left(p+5, p[4], p[2], &r05f_Error))
      continue;
    if (! r05_brackets_left(p+6, p[5], p[2]))
      continue;
    r05_close_evar(p+8, p[6], p[7]);
    if (! r05_tvar_left(p+10, p[7], p[2]))
      continue;
    if (! r05_brackets_left(p+12, p[11], p[2]))
      continue;
    r05_close_evar(p+14, p[12], p[13]);
    r05_close_evar(p+16, p[13], p[2]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+18);
    r05_alloc_function(&r05f_TkError);
    r05_alloc_insert_pos(p+19);
    r05_alloc_close_bracket(p+20);
    r05_alloc_open_call(p+21);
    r05_alloc_function(&r05f_DoScanm_Chars);
    r05_alloc_insert_pos(p+22);
    r05_alloc_open_bracket(p+23);
    r05_alloc_insert_pos(p+24);
    r05_alloc_close_bracket(p+25);
    r05_alloc_insert_pos(p+26);
    r05_alloc_close_call(p+27);
    r05_push_stack(p[27]);
    r05_push_stack(p[21]);
    r05_link_brackets(p[23], p[25]);
    r05_link_brackets(p[18], p[20]);
    r05_splice_tvar(p[19], p+3);
    r05_splice_evar(p[19], p+8);
    r05_splice_tvar(p[22], p+10);
    r05_splice_evar(p[24], p+14);
    r05_splice_evar(p[26], p+16);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  do {
    /* t.Pos: 3 */
    /* e.Lines: 6 */
    /* t.Pos Error-EOL e.Lines */
    if (! r05_tvar_left(p+3, p[1], p[2]))
      continue;
    if (! r05_function_left(p+5, p[4], p[2], &r05f_Errorm_EOL))
      continue;
    r05_close_evar(p+6, p[5], p[2]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+8);
    r05_alloc_function(&r05f_TkError);
    r05_alloc_insert_pos(p+9);
    r05_alloc_chars("Unexpected \\ at end of string literal", 37);
    r05_alloc_close_bracket(p+10);
    r05_alloc_open_call(p+11);
    r05_alloc_function(&r05f_DoScan);
    r05_alloc_open_call(p+12);
    r05_alloc_function(&r05f_IncLine);
    r05_alloc_tvar(p+3);
    r05_alloc_close_call(p+13);
    r05_alloc_insert_pos(p+14);
    r05_alloc_close_call(p+15);
    r05_push_stack(p[15]);
    r05_push_stack(p[11]);
    r05_push_stack(p[13]);
    r05_push_stack(p[12]);
    r05_link_brackets(p[8], p[10]);
    r05_splice_tvar(p[9], p+3);
    r05_splice_evar(p[14], p+6);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(HexDigit, "HexDigit") {
  R05_DEFINE_COND_FUNCTION(HexDigit, "HexDigit$1", 1)
  struct r05_node *p[12] = { 0 };

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
        /* s.Digit: 3, 9 */
        /* 'D0' s.Digit */
        if (! r05_char_left(p+7, p[5], p[6], 'D'))
          continue;
        if (! r05_char_left(p+8, p[7], p[6], '0'))
          continue;
        if (! r05_repeated_svar_left(p+9, p[8], p[6], p+3))
          continue;
        if (! r05_empty_hole(p[9], p[6]))
          continue;

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

      do {
        /* s.Digit: 3, 9 */
        /* 'Lu' s.Digit */
        if (! r05_char_left(p+7, p[5], p[6], 'L'))
          continue;
        if (! r05_char_left(p+8, p[7], p[6], 'u'))
          continue;
        if (! r05_repeated_svar_left(p+9, p[8], p[6], p+3))
          continue;
        if (! r05_empty_hole(p[9], p[6]))
          continue;

        r05_reset_allocator();
        r05_alloc_open_call(p+10);
        r05_alloc_function(&r05f_DoHexDigit);
        r05_alloc_chars("ABCDEF", 6);
        r05_alloc_number(10UL);
        r05_alloc_svar(p+3);
        r05_alloc_close_call(p+11);
        r05_push_stack(p[11]);
        r05_push_stack(p[10]);
        r05_splice_from_freelist(p[0]);
        r05_splice_to_freelist(p[0], p[2]);
        return;
      } while (0);

      do {
        /* s.Digit: 3, 9 */
        /* 'Ll' s.Digit */
        if (! r05_char_left(p+7, p[5], p[6], 'L'))
          continue;
        if (! r05_char_left(p+8, p[7], p[6], 'l'))
          continue;
        if (! r05_repeated_svar_left(p+9, p[8], p[6], p+3))
          continue;
        if (! r05_empty_hole(p[9], p[6]))
          continue;

        r05_reset_allocator();
        r05_alloc_open_call(p+10);
        r05_alloc_function(&r05f_DoHexDigit);
        r05_alloc_chars("abcdef", 6);
        r05_alloc_number(10UL);
        r05_alloc_svar(p+3);
        r05_alloc_close_call(p+11);
        r05_push_stack(p[11]);
        r05_push_stack(p[10]);
        r05_splice_from_freelist(p[0]);
        r05_splice_to_freelist(p[0], p[2]);
        return;
      } while (0);

      do {
        /* s.Digit: 3 */
        /* s.OtherType: 7 */
        /* s.OtherSubtype: 8 */
        /* s.OtherChar: 9 */
        /* s.OtherType s.OtherSubtype s.OtherChar */
        if (! r05_svar_left(p+7, p[5], p[6]))
          continue;
        if (! r05_svar_left(p+8, p[7], p[6]))
          continue;
        if (! r05_svar_left(p+9, p[8], p[6]))
          continue;
        if (! r05_empty_hole(p[9], p[6]))
          continue;

        r05_reset_allocator();
        r05_splice_from_freelist(p[0]);
        r05_splice_to_freelist(p[0], p[2]);
        return;
      } while (0);

      r05_recognition_impossible();
    } while (0);

    r05_recognition_impossible();
  }
}

R05_DEFINE_LOCAL_FUNCTION(DoHexDigit, "DoHexDigit") {
  struct r05_node *p[13] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /* s.Digit: 3, 4 */
    /* s.Val: 5 */
    /* e.Samples: 6 */
    /* s.Digit e.Samples s.Val s.Digit */
    if (! r05_svar_left(p+3, p[1], p[2]))
      continue;
    if (! r05_repeated_svar_right(p+4, p[3], p[2], p+3))
      continue;
    if (! r05_svar_right(p+5, p[3], p[4]))
      continue;
    r05_close_evar(p+6, p[3], p[5]);

    r05_reset_allocator();
    r05_alloc_svar(p+5);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  do {
    /* s.OtherDigit: 3 */
    /* s.Digit: 4 */
    /* s.Val: 5 */
    /* e.Samples: 6 */
    /* s.OtherDigit e.Samples s.Val s.Digit */
    if (! r05_svar_left(p+3, p[1], p[2]))
      continue;
    if (! r05_svar_right(p+4, p[3], p[2]))
      continue;
    if (! r05_svar_right(p+5, p[3], p[4]))
      continue;
    r05_close_evar(p+6, p[3], p[5]);

    r05_reset_allocator();
    r05_alloc_open_call(p+8);
    r05_alloc_function(&r05f_DoHexDigit);
    r05_alloc_insert_pos(p+9);
    r05_alloc_open_call(p+10);
    r05_alloc_function(&r05f_Inc);
    r05_alloc_svar(p+5);
    r05_alloc_close_call(p+11);
    r05_alloc_svar(p+4);
    r05_alloc_close_call(p+12);
    r05_push_stack(p[12]);
    r05_push_stack(p[8]);
    r05_push_stack(p[11]);
    r05_push_stack(p[10]);
    r05_splice_evar(p[9], p+6);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  do {
    /* s.BadVal: 3 */
    /* s.Digit: 4 */
    /* s.BadVal s.Digit */
    if (! r05_svar_left(p+3, p[1], p[2]))
      continue;
    if (! r05_svar_left(p+4, p[3], p[2]))
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

R05_DEFINE_LOCAL_FUNCTION(DoScanm_Compound, "DoScan-Compound") {
  struct r05_node *p[31] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /* t.StartPos: 3 */
    /* t.Pos: 5 */
    /* e.Compound: 12 */
    /* e.Line: 14 */
    /* e.Lines: 16 */
    /* t.StartPos t.Pos (e.Compound) ('\"' e.Line) e.Lines */
    if (! r05_tvar_left(p+3, p[1], p[2]))
      continue;
    if (! r05_tvar_left(p+5, p[4], p[2]))
      continue;
    if (! r05_brackets_left(p+7, p[6], p[2]))
      continue;
    if (! r05_brackets_left(p+9, p[8], p[2]))
      continue;
    if (! r05_char_left(p+11, p[9], p[10], '\"'))
      continue;
    r05_close_evar(p+12, p[7], p[8]);
    r05_close_evar(p+14, p[11], p[10]);
    r05_close_evar(p+16, p[10], p[2]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+18);
    r05_alloc_function(&r05f_TkCompound);
    r05_alloc_insert_pos(p+19);
    r05_alloc_close_bracket(p+20);
    r05_alloc_open_call(p+21);
    r05_alloc_function(&r05f_DoScan);
    r05_alloc_open_call(p+22);
    r05_alloc_function(&r05f_IncCol);
    r05_alloc_insert_pos(p+23);
    r05_alloc_close_call(p+24);
    r05_alloc_open_bracket(p+25);
    r05_alloc_insert_pos(p+26);
    r05_alloc_close_bracket(p+27);
    r05_alloc_insert_pos(p+28);
    r05_alloc_close_call(p+29);
    r05_push_stack(p[29]);
    r05_push_stack(p[21]);
    r05_link_brackets(p[25], p[27]);
    r05_push_stack(p[24]);
    r05_push_stack(p[22]);
    r05_link_brackets(p[18], p[20]);
    r05_splice_tvar(p[19], p+3);
    r05_splice_evar(p[19], p+12);
    r05_splice_tvar(p[23], p+5);
    r05_splice_evar(p[26], p+14);
    r05_splice_evar(p[28], p+16);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  do {
    /* t.StartPos: 3 */
    /* t.Pos: 5 */
    /* e.Compound: 12 */
    /* e.Line: 14 */
    /* e.Lines: 16 */
    /* t.StartPos t.Pos (e.Compound) ('\\' e.Line) e.Lines */
    if (! r05_tvar_left(p+3, p[1], p[2]))
      continue;
    if (! r05_tvar_left(p+5, p[4], p[2]))
      continue;
    if (! r05_brackets_left(p+7, p[6], p[2]))
      continue;
    if (! r05_brackets_left(p+9, p[8], p[2]))
      continue;
    if (! r05_char_left(p+11, p[9], p[10], '\\'))
      continue;
    r05_close_evar(p+12, p[7], p[8]);
    r05_close_evar(p+14, p[11], p[10]);
    r05_close_evar(p+16, p[10], p[2]);

    r05_reset_allocator();
    r05_alloc_open_call(p+18);
    r05_alloc_function(&r05f_DoScanm_Compoundm_HandleEscape);
    r05_alloc_insert_pos(p+19);
    r05_alloc_open_bracket(p+20);
    r05_alloc_insert_pos(p+21);
    r05_alloc_close_bracket(p+22);
    r05_alloc_open_call(p+23);
    r05_alloc_function(&r05f_Escape);
    r05_alloc_open_call(p+24);
    r05_alloc_function(&r05f_IncCol);
    r05_alloc_tvar(p+5);
    r05_alloc_close_call(p+25);
    r05_alloc_insert_pos(p+26);
    r05_alloc_close_call(p+27);
    r05_alloc_insert_pos(p+28);
    r05_alloc_close_call(p+29);
    r05_push_stack(p[29]);
    r05_push_stack(p[18]);
    r05_push_stack(p[27]);
    r05_push_stack(p[23]);
    r05_push_stack(p[25]);
    r05_push_stack(p[24]);
    r05_link_brackets(p[20], p[22]);
    r05_splice_tvar(p[19], p+3);
    r05_splice_tvar(p[19], p+5);
    r05_splice_evar(p[21], p+12);
    r05_splice_evar(p[26], p+14);
    r05_splice_evar(p[28], p+16);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  do {
    /* t.StartPos: 3 */
    /* t.Pos: 5 */
    /* e.Compound: 11 */
    /* e.Lines: 13 */
    /* s.Char: 15 */
    /* e.Line: 16 */
    /* t.StartPos t.Pos (e.Compound) (s.Char e.Line) e.Lines */
    if (! r05_tvar_left(p+3, p[1], p[2]))
      continue;
    if (! r05_tvar_left(p+5, p[4], p[2]))
      continue;
    if (! r05_brackets_left(p+7, p[6], p[2]))
      continue;
    if (! r05_brackets_left(p+9, p[8], p[2]))
      continue;
    r05_close_evar(p+11, p[7], p[8]);
    r05_close_evar(p+13, p[10], p[2]);
    if (! r05_svar_left(p+15, p[9], p[10]))
      continue;
    r05_close_evar(p+16, p[15], p[10]);

    r05_reset_allocator();
    r05_alloc_open_call(p+18);
    r05_alloc_function(&r05f_DoScanm_Compound);
    r05_alloc_insert_pos(p+19);
    r05_alloc_open_call(p+20);
    r05_alloc_function(&r05f_IncCol);
    r05_alloc_insert_pos(p+21);
    r05_alloc_close_call(p+22);
    r05_alloc_open_bracket(p+23);
    r05_alloc_insert_pos(p+24);
    r05_alloc_svar(p+15);
    r05_alloc_close_bracket(p+25);
    r05_alloc_open_bracket(p+26);
    r05_alloc_insert_pos(p+27);
    r05_alloc_close_bracket(p+28);
    r05_alloc_insert_pos(p+29);
    r05_alloc_close_call(p+30);
    r05_push_stack(p[30]);
    r05_push_stack(p[18]);
    r05_link_brackets(p[26], p[28]);
    r05_link_brackets(p[23], p[25]);
    r05_push_stack(p[22]);
    r05_push_stack(p[20]);
    r05_splice_tvar(p[19], p+3);
    r05_splice_tvar(p[21], p+5);
    r05_splice_evar(p[24], p+11);
    r05_splice_evar(p[27], p+16);
    r05_splice_evar(p[29], p+13);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  do {
    /* t.StartPos: 3 */
    /* t.Pos: 5 */
    /* e.Compound: 11 */
    /* e.Lines: 13 */
    /* t.StartPos t.Pos (e.Compound) () e.Lines */
    if (! r05_tvar_left(p+3, p[1], p[2]))
      continue;
    if (! r05_tvar_left(p+5, p[4], p[2]))
      continue;
    if (! r05_brackets_left(p+7, p[6], p[2]))
      continue;
    if (! r05_brackets_left(p+9, p[8], p[2]))
      continue;
    if (! r05_empty_hole(p[9], p[10]))
      continue;
    r05_close_evar(p+11, p[7], p[8]);
    r05_close_evar(p+13, p[10], p[2]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+15);
    r05_alloc_function(&r05f_TkError);
    r05_alloc_insert_pos(p+16);
    r05_alloc_chars("Unclosed \" - double quote", 25);
    r05_alloc_close_bracket(p+17);
    r05_alloc_open_call(p+18);
    r05_alloc_function(&r05f_DoScan);
    r05_alloc_open_call(p+19);
    r05_alloc_function(&r05f_IncLine);
    r05_alloc_tvar(p+5);
    r05_alloc_close_call(p+20);
    r05_alloc_insert_pos(p+21);
    r05_alloc_close_call(p+22);
    r05_push_stack(p[22]);
    r05_push_stack(p[18]);
    r05_push_stack(p[20]);
    r05_push_stack(p[19]);
    r05_link_brackets(p[15], p[17]);
    r05_splice_tvar(p[16], p+5);
    r05_splice_evar(p[21], p+13);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(DoScanm_Compoundm_HandleEscape, "DoScan-Compound-HandleEscape") {
  struct r05_node *p[37] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /* t.StartPos: 3 */
    /* t.EscapePos: 5 */
    /* e.Compound: 10 */
    /* s.Char: 12 */
    /* t.NextPos: 13 */
    /* e.Line: 17 */
    /* e.Lines: 19 */
    /* t.StartPos t.EscapePos (e.Compound) Ok s.Char t.NextPos (e.Line) e.Lines */
    if (! r05_tvar_left(p+3, p[1], p[2]))
      continue;
    if (! r05_tvar_left(p+5, p[4], p[2]))
      continue;
    if (! r05_brackets_left(p+7, p[6], p[2]))
      continue;
    if (! r05_function_left(p+9, p[8], p[2], &r05f_Ok))
      continue;
    r05_close_evar(p+10, p[7], p[8]);
    if (! r05_svar_left(p+12, p[9], p[2]))
      continue;
    if (! r05_tvar_left(p+13, p[12], p[2]))
      continue;
    if (! r05_brackets_left(p+15, p[14], p[2]))
      continue;
    r05_close_evar(p+17, p[15], p[16]);
    r05_close_evar(p+19, p[16], p[2]);

    r05_reset_allocator();
    r05_alloc_open_call(p+21);
    r05_alloc_function(&r05f_DoScanm_Compound);
    r05_alloc_insert_pos(p+22);
    r05_alloc_open_bracket(p+23);
    r05_alloc_insert_pos(p+24);
    r05_alloc_svar(p+12);
    r05_alloc_close_bracket(p+25);
    r05_alloc_open_bracket(p+26);
    r05_alloc_insert_pos(p+27);
    r05_alloc_close_bracket(p+28);
    r05_alloc_insert_pos(p+29);
    r05_alloc_close_call(p+30);
    r05_push_stack(p[30]);
    r05_push_stack(p[21]);
    r05_link_brackets(p[26], p[28]);
    r05_link_brackets(p[23], p[25]);
    r05_splice_tvar(p[22], p+3);
    r05_splice_tvar(p[22], p+13);
    r05_splice_evar(p[24], p+10);
    r05_splice_evar(p[27], p+17);
    r05_splice_evar(p[29], p+19);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  do {
    /* t.StartPos: 3 */
    /* t.EscapePos: 5 */
    /* e.Compound: 12 */
    /* e.Message: 14 */
    /* t.NextPos: 16 */
    /* e.Line: 20 */
    /* e.Lines: 22 */
    /* t.StartPos t.EscapePos (e.Compound) Error (e.Message) t.NextPos (e.Line) e.Lines */
    if (! r05_tvar_left(p+3, p[1], p[2]))
      continue;
    if (! r05_tvar_left(p+5, p[4], p[2]))
      continue;
    if (! r05_brackets_left(p+7, p[6], p[2]))
      continue;
    if (! r05_function_left(p+9, p[8], p[2], &r05f_Error))
      continue;
    if (! r05_brackets_left(p+10, p[9], p[2]))
      continue;
    r05_close_evar(p+12, p[7], p[8]);
    r05_close_evar(p+14, p[10], p[11]);
    if (! r05_tvar_left(p+16, p[11], p[2]))
      continue;
    if (! r05_brackets_left(p+18, p[17], p[2]))
      continue;
    r05_close_evar(p+20, p[18], p[19]);
    r05_close_evar(p+22, p[19], p[2]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+24);
    r05_alloc_function(&r05f_TkError);
    r05_alloc_insert_pos(p+25);
    r05_alloc_close_bracket(p+26);
    r05_alloc_open_call(p+27);
    r05_alloc_function(&r05f_DoScanm_Compound);
    r05_alloc_insert_pos(p+28);
    r05_alloc_open_bracket(p+29);
    r05_alloc_insert_pos(p+30);
    r05_alloc_close_bracket(p+31);
    r05_alloc_open_bracket(p+32);
    r05_alloc_insert_pos(p+33);
    r05_alloc_close_bracket(p+34);
    r05_alloc_insert_pos(p+35);
    r05_alloc_close_call(p+36);
    r05_push_stack(p[36]);
    r05_push_stack(p[27]);
    r05_link_brackets(p[32], p[34]);
    r05_link_brackets(p[29], p[31]);
    r05_link_brackets(p[24], p[26]);
    r05_splice_tvar(p[25], p+5);
    r05_splice_evar(p[25], p+14);
    r05_splice_tvar(p[28], p+3);
    r05_splice_tvar(p[28], p+16);
    r05_splice_evar(p[30], p+12);
    r05_splice_evar(p[33], p+20);
    r05_splice_evar(p[35], p+22);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  do {
    /* t.StartPos: 3 */
    /* t.EscapePos: 5 */
    /* e.Compound: 10 */
    /* e.Lines: 12 */
    /* t.StartPos t.EscapePos (e.Compound) Error-EOL e.Lines */
    if (! r05_tvar_left(p+3, p[1], p[2]))
      continue;
    if (! r05_tvar_left(p+5, p[4], p[2]))
      continue;
    if (! r05_brackets_left(p+7, p[6], p[2]))
      continue;
    if (! r05_function_left(p+9, p[8], p[2], &r05f_Errorm_EOL))
      continue;
    r05_close_evar(p+10, p[7], p[8]);
    r05_close_evar(p+12, p[9], p[2]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+14);
    r05_alloc_function(&r05f_TkError);
    r05_alloc_insert_pos(p+15);
    r05_alloc_chars("Unexpected \\ at end of compound literal", 39);
    r05_alloc_close_bracket(p+16);
    r05_alloc_open_bracket(p+17);
    r05_alloc_function(&r05f_TkCompound);
    r05_alloc_insert_pos(p+18);
    r05_alloc_close_bracket(p+19);
    r05_alloc_open_call(p+20);
    r05_alloc_function(&r05f_DoScan);
    r05_alloc_open_call(p+21);
    r05_alloc_function(&r05f_IncLine);
    r05_alloc_tvar(p+5);
    r05_alloc_close_call(p+22);
    r05_alloc_insert_pos(p+23);
    r05_alloc_close_call(p+24);
    r05_push_stack(p[24]);
    r05_push_stack(p[20]);
    r05_push_stack(p[22]);
    r05_push_stack(p[21]);
    r05_link_brackets(p[17], p[19]);
    r05_link_brackets(p[14], p[16]);
    r05_splice_tvar(p[15], p+5);
    r05_splice_tvar(p[18], p+3);
    r05_splice_evar(p[18], p+10);
    r05_splice_evar(p[23], p+12);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(DoScanm_Escape, "DoScan-Escape") {
  struct r05_node *p[28] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /* t.Pos: 3 */
    /* s.Char: 6 */
    /* t.NextPos: 7 */
    /* e.Line: 11 */
    /* e.Lines: 13 */
    /* t.Pos Ok s.Char t.NextPos (e.Line) e.Lines */
    if (! r05_tvar_left(p+3, p[1], p[2]))
      continue;
    if (! r05_function_left(p+5, p[4], p[2], &r05f_Ok))
      continue;
    if (! r05_svar_left(p+6, p[5], p[2]))
      continue;
    if (! r05_tvar_left(p+7, p[6], p[2]))
      continue;
    if (! r05_brackets_left(p+9, p[8], p[2]))
      continue;
    r05_close_evar(p+11, p[9], p[10]);
    r05_close_evar(p+13, p[10], p[2]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+15);
    r05_alloc_function(&r05f_TkChar);
    r05_alloc_insert_pos(p+16);
    r05_alloc_svar(p+6);
    r05_alloc_close_bracket(p+17);
    r05_alloc_open_call(p+18);
    r05_alloc_function(&r05f_DoScan);
    r05_alloc_insert_pos(p+19);
    r05_alloc_open_bracket(p+20);
    r05_alloc_insert_pos(p+21);
    r05_alloc_close_bracket(p+22);
    r05_alloc_insert_pos(p+23);
    r05_alloc_close_call(p+24);
    r05_push_stack(p[24]);
    r05_push_stack(p[18]);
    r05_link_brackets(p[20], p[22]);
    r05_link_brackets(p[15], p[17]);
    r05_splice_tvar(p[16], p+3);
    r05_splice_tvar(p[19], p+7);
    r05_splice_evar(p[21], p+11);
    r05_splice_evar(p[23], p+13);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  do {
    /* t.Pos: 3 */
    /* e.Message: 8 */
    /* t.NextPos: 10 */
    /* e.Line: 14 */
    /* e.Lines: 16 */
    /* t.Pos Error (e.Message) t.NextPos (e.Line) e.Lines */
    if (! r05_tvar_left(p+3, p[1], p[2]))
      continue;
    if (! r05_function_left(p+5, p[4], p[2], &r05f_Error))
      continue;
    if (! r05_brackets_left(p+6, p[5], p[2]))
      continue;
    r05_close_evar(p+8, p[6], p[7]);
    if (! r05_tvar_left(p+10, p[7], p[2]))
      continue;
    if (! r05_brackets_left(p+12, p[11], p[2]))
      continue;
    r05_close_evar(p+14, p[12], p[13]);
    r05_close_evar(p+16, p[13], p[2]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+18);
    r05_alloc_function(&r05f_TkError);
    r05_alloc_insert_pos(p+19);
    r05_alloc_close_bracket(p+20);
    r05_alloc_open_call(p+21);
    r05_alloc_function(&r05f_DoScan);
    r05_alloc_insert_pos(p+22);
    r05_alloc_open_bracket(p+23);
    r05_alloc_insert_pos(p+24);
    r05_alloc_close_bracket(p+25);
    r05_alloc_insert_pos(p+26);
    r05_alloc_close_call(p+27);
    r05_push_stack(p[27]);
    r05_push_stack(p[21]);
    r05_link_brackets(p[23], p[25]);
    r05_link_brackets(p[18], p[20]);
    r05_splice_tvar(p[19], p+3);
    r05_splice_evar(p[19], p+8);
    r05_splice_tvar(p[22], p+10);
    r05_splice_evar(p[24], p+14);
    r05_splice_evar(p[26], p+16);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  do {
    /* t.Pos: 3 */
    /* e.Lines: 6 */
    /* t.Pos Error-EOL e.Lines */
    if (! r05_tvar_left(p+3, p[1], p[2]))
      continue;
    if (! r05_function_left(p+5, p[4], p[2], &r05f_Errorm_EOL))
      continue;
    r05_close_evar(p+6, p[5], p[2]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+8);
    r05_alloc_function(&r05f_TkError);
    r05_alloc_insert_pos(p+9);
    r05_alloc_chars("Unexpected \\ at end of line", 27);
    r05_alloc_close_bracket(p+10);
    r05_alloc_open_call(p+11);
    r05_alloc_function(&r05f_DoScan);
    r05_alloc_open_call(p+12);
    r05_alloc_function(&r05f_IncLine);
    r05_alloc_tvar(p+3);
    r05_alloc_close_call(p+13);
    r05_alloc_insert_pos(p+14);
    r05_alloc_close_call(p+15);
    r05_push_stack(p[15]);
    r05_push_stack(p[11]);
    r05_push_stack(p[13]);
    r05_push_stack(p[12]);
    r05_link_brackets(p[8], p[10]);
    r05_splice_tvar(p[9], p+3);
    r05_splice_evar(p[14], p+6);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_ENTRY_FUNCTION(Parse, "Parse") {
  R05_DEFINE_COND_FUNCTION(Parse, "Parse$1", 1)
  struct r05_node *p[29] = { 0 };

  r05_this_is_generated_function();
  switch (arg_begin->next->info.function->resume_entry >> 1) {
  case 0:
    p[0] = arg_begin;
    p[1] = arg_begin->next;
    p[2] = arg_end;

    do {
      /* t.First: 3 */
      /* e.Tokens: 5 */
      /* t.First e.Tokens */
      if (! r05_tvar_left(p+3, p[1], p[2]))
        continue;
      r05_close_evar(p+5, p[4], p[2]);

      r05_reset_allocator();
      r05_alloc_open_call(p+7);
      r05_alloc_function(&c1);
      r05_alloc_tvar(p+3);
      r05_alloc_close_call(p+8);
      r05_push_stack(p[8]);
      r05_push_stack(p[7]);
      r05_push_context(p, 7);
      r05_splice_from_freelist(p[2]);
      return;

  case 1:
      r05_pop_context(p, 7);
      p[7] = arg_begin;
      p[8] = arg_begin->next;
      p[9] = arg_end;

      do {
        /* t.First: 3 */
        /* e.Tokens: 5 */
        /* s.Type: 12 */
        /* t.Pos: 13 */
        /* e.Value: 15 */
        /* (s.Type t.Pos e.Value) */
        if (! r05_brackets_left(p+10, p[8], p[9]))
          continue;
        if (! r05_empty_hole(p[11], p[9]))
          continue;
        if (! r05_svar_left(p+12, p[10], p[11]))
          continue;
        if (! r05_tvar_left(p+13, p[12], p[11]))
          continue;
        r05_close_evar(p+15, p[14], p[11]);

        r05_reset_allocator();
        r05_alloc_open_call(p+17);
        r05_alloc_function(&r05f_Parsem_Aux);
        r05_alloc_insert_pos(p+18);
        r05_alloc_open_call(p+19);
        r05_alloc_function(&r05f_Program);
        r05_alloc_open_bracket(p+20);
        r05_alloc_close_bracket(p+21);
        r05_alloc_open_call(p+22);
        r05_alloc_function(&r05f_SeparateLexerErrors);
        r05_alloc_insert_pos(p+23);
        r05_alloc_open_bracket(p+24);
        r05_alloc_close_bracket(p+25);
        r05_alloc_close_call(p+26);
        r05_alloc_close_call(p+27);
        r05_alloc_close_call(p+28);
        r05_push_stack(p[28]);
        r05_push_stack(p[17]);
        r05_push_stack(p[27]);
        r05_push_stack(p[19]);
        r05_push_stack(p[26]);
        r05_push_stack(p[22]);
        r05_link_brackets(p[24], p[25]);
        r05_link_brackets(p[20], p[21]);
        r05_splice_tvar(p[18], p+13);
        r05_splice_tvar(p[23], p+3);
        r05_splice_evar(p[23], p+5);
        r05_splice_from_freelist(p[0]);
        r05_splice_to_freelist(p[0], p[2]);
        return;
      } while (0);
      r05_splice_to_freelist(p[7], p[9]);
    } while (0);

    r05_recognition_impossible();
  }
}

R05_DEFINE_LOCAL_FUNCTION(Parsem_Aux, "Parse-Aux") {
  struct r05_node *p[25] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /* e.Units: 11 */
    /* e.Errors: 13 */
    /* t.FirstTokenPos: 15 */
    /* t.EOFPos: 17 */
    /* t.FirstTokenPos (Program e.Units) (TkEOF t.EOFPos) (e.Errors) */
    if (! r05_brackets_right(p+3, p[1], p[2]))
      continue;
    if (! r05_brackets_right(p+5, p[1], p[3]))
      continue;
    if (! r05_function_left(p+7, p[5], p[6], &r05f_TkEOF))
      continue;
    if (! r05_brackets_right(p+8, p[1], p[5]))
      continue;
    if (! r05_function_left(p+10, p[8], p[9], &r05f_Program))
      continue;
    r05_close_evar(p+11, p[10], p[9]);
    r05_close_evar(p+13, p[3], p[4]);
    if (! r05_tvar_left(p+15, p[1], p[8]))
      continue;
    if (! r05_empty_hole(p[16], p[8]))
      continue;
    if (! r05_tvar_left(p+17, p[7], p[6]))
      continue;
    if (! r05_empty_hole(p[18], p[6]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_call(p+19);
    r05_alloc_function(&r05f_SemanticCheck);
    r05_alloc_insert_pos(p+20);
    r05_alloc_open_bracket(p+21);
    r05_alloc_insert_pos(p+22);
    r05_alloc_close_bracket(p+23);
    r05_alloc_close_call(p+24);
    r05_push_stack(p[24]);
    r05_push_stack(p[19]);
    r05_link_brackets(p[21], p[23]);
    r05_splice_tvar(p[20], p+15);
    r05_splice_evar(p[20], p+11);
    r05_splice_evar(p[22], p+13);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(SeparateLexerErrors, "SeparateLexerErrors") {
  struct r05_node *p[25] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /* e.Tokens: 8 */
    /* e.Errors: 10 */
    /* t.Pos: 12 */
    /* e.Message: 14 */
    /* (TkError t.Pos e.Message) e.Tokens (e.Errors) */
    if (! r05_brackets_left(p+3, p[1], p[2]))
      continue;
    if (! r05_function_left(p+5, p[3], p[4], &r05f_TkError))
      continue;
    if (! r05_brackets_right(p+6, p[4], p[2]))
      continue;
    r05_close_evar(p+8, p[4], p[6]);
    r05_close_evar(p+10, p[6], p[7]);
    if (! r05_tvar_left(p+12, p[5], p[4]))
      continue;
    r05_close_evar(p+14, p[13], p[4]);

    r05_reset_allocator();
    r05_alloc_open_call(p+16);
    r05_alloc_function(&r05f_SeparateLexerErrors);
    r05_alloc_insert_pos(p+17);
    r05_alloc_open_bracket(p+18);
    r05_alloc_insert_pos(p+19);
    r05_alloc_open_bracket(p+20);
    r05_alloc_function(&r05f_Error);
    r05_alloc_insert_pos(p+21);
    r05_alloc_close_bracket(p+22);
    r05_alloc_close_bracket(p+23);
    r05_alloc_close_call(p+24);
    r05_push_stack(p[24]);
    r05_push_stack(p[16]);
    r05_link_brackets(p[18], p[23]);
    r05_link_brackets(p[20], p[22]);
    r05_splice_evar(p[17], p+8);
    r05_splice_evar(p[19], p+10);
    r05_splice_tvar(p[21], p+12);
    r05_splice_evar(p[21], p+14);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  do {
    /* e.Errors: 5 */
    /* t.ValidToken: 7 */
    /* e.Tokens: 9 */
    /* t.ValidToken e.Tokens (e.Errors) */
    if (! r05_brackets_right(p+3, p[1], p[2]))
      continue;
    r05_close_evar(p+5, p[3], p[4]);
    if (! r05_tvar_left(p+7, p[1], p[3]))
      continue;
    r05_close_evar(p+9, p[8], p[3]);

    r05_reset_allocator();
    r05_alloc_insert_pos(p+11);
    r05_alloc_open_call(p+12);
    r05_alloc_function(&r05f_SeparateLexerErrors);
    r05_alloc_insert_pos(p+13);
    r05_alloc_open_bracket(p+14);
    r05_alloc_insert_pos(p+15);
    r05_alloc_close_bracket(p+16);
    r05_alloc_close_call(p+17);
    r05_push_stack(p[17]);
    r05_push_stack(p[12]);
    r05_link_brackets(p[14], p[16]);
    r05_splice_tvar(p[11], p+7);
    r05_splice_evar(p[13], p+9);
    r05_splice_evar(p[15], p+5);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  do {
    /* e.Errors: 5 */
    /* (e.Errors) */
    if (! r05_brackets_left(p+3, p[1], p[2]))
      continue;
    if (! r05_empty_hole(p[4], p[2]))
      continue;
    r05_close_evar(p+5, p[3], p[4]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+7);
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

R05_DEFINE_LOCAL_FUNCTION(Program, "Program") {
  R05_DEFINE_COND_FUNCTION(Program, "Program$1", 1)
  R05_DEFINE_COND_FUNCTION(Program, "Program$2", 2)
  struct r05_node *p[43] = { 0 };

  r05_this_is_generated_function();
  switch (arg_begin->next->info.function->resume_entry >> 1) {
  case 0:
    p[0] = arg_begin;
    p[1] = arg_begin->next;
    p[2] = arg_end;

    do {
      /* e.Errors: 7 */
      /* t.First: 9 */
      /* e.Tokens: 11 */
      /* () t.First e.Tokens (e.Errors) */
      if (! r05_brackets_left(p+3, p[1], p[2]))
        continue;
      if (! r05_brackets_right(p+5, p[4], p[2]))
        continue;
      if (! r05_empty_hole(p[3], p[4]))
        continue;
      r05_close_evar(p+7, p[5], p[6]);
      if (! r05_tvar_left(p+9, p[4], p[5]))
        continue;
      r05_close_evar(p+11, p[10], p[5]);

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
        /* e.Errors: 7 */
        /* t.First: 9 */
        /* e.Tokens: 11 */
        /* s.Type: 18 */
        /* t.Pos: 19 */
        /* e.Value: 21 */
        /* (s.Type t.Pos e.Value) */
        if (! r05_brackets_left(p+16, p[14], p[15]))
          continue;
        if (! r05_empty_hole(p[17], p[15]))
          continue;
        if (! r05_svar_left(p+18, p[16], p[17]))
          continue;
        if (! r05_tvar_left(p+19, p[18], p[17]))
          continue;
        r05_close_evar(p+21, p[20], p[17]);

        r05_reset_allocator();
        r05_alloc_open_call(p+23);
        r05_alloc_function(&c2);
        r05_alloc_open_call(p+24);
        r05_alloc_function(&r05f_FIRSTu_Unit);
        r05_alloc_close_call(p+25);
        r05_alloc_close_call(p+26);
        r05_push_stack(p[26]);
        r05_push_stack(p[23]);
        r05_push_stack(p[25]);
        r05_push_stack(p[24]);
        r05_push_context(p, 23);
        r05_splice_from_freelist(p[2]);
        return;

  case 2:
        r05_pop_context(p, 23);
        p[23] = arg_begin;
        p[24] = arg_begin->next;
        p[25] = arg_end;

        do {
          /* e.Errors: 7 */
          /* t.First: 9 */
          /* e.Tokens: 11 */
          /* s.Type: 18, 28 */
          /* t.Pos: 19 */
          /* e.Value: 21 */
          /* e.1: 26 */
          /* e.2: 29 */
          /* e.1 s.Type e.2 */
          p[26] = NULL;
          p[27] = p[24];
          do {
            r05_start_e_loop();
            if (! r05_repeated_svar_left(p+28, p[27], p[25], p+18))
              continue;
            r05_close_evar(p+29, p[28], p[25]);

            r05_reset_allocator();
            r05_alloc_open_call(p+31);
            r05_alloc_function(&r05f_Program);
            r05_alloc_open_bracket(p+32);
            r05_alloc_close_bracket(p+33);
            r05_alloc_open_call(p+34);
            r05_alloc_function(&r05f_Unit);
            r05_alloc_open_bracket(p+35);
            r05_alloc_close_bracket(p+36);
            r05_alloc_insert_pos(p+37);
            r05_alloc_open_bracket(p+38);
            r05_alloc_insert_pos(p+39);
            r05_alloc_close_bracket(p+40);
            r05_alloc_close_call(p+41);
            r05_alloc_close_call(p+42);
            r05_push_stack(p[42]);
            r05_push_stack(p[31]);
            r05_push_stack(p[41]);
            r05_push_stack(p[34]);
            r05_link_brackets(p[38], p[40]);
            r05_link_brackets(p[35], p[36]);
            r05_link_brackets(p[32], p[33]);
            r05_splice_tvar(p[37], p+9);
            r05_splice_evar(p[37], p+11);
            r05_splice_evar(p[39], p+7);
            r05_splice_from_freelist(p[0]);
            r05_splice_to_freelist(p[0], p[2]);
            return;
          } while (r05_open_evar_advance(p+26, p[25]));
          r05_stop_e_loop();
        } while (0);
        r05_splice_to_freelist(p[23], p[25]);
      } while (0);
      r05_splice_to_freelist(p[13], p[15]);
    } while (0);

    do {
      /* e.Tokens: 10 */
      /* e.Errors: 12 */
      /* t.Unit: 14 */
      /* () (Unit t.Unit) e.Tokens (e.Errors) */
      if (! r05_brackets_left(p+3, p[1], p[2]))
        continue;
      if (! r05_brackets_left(p+5, p[4], p[2]))
        continue;
      if (! r05_function_left(p+7, p[5], p[6], &r05f_Unit))
        continue;
      if (! r05_brackets_right(p+8, p[6], p[2]))
        continue;
      if (! r05_empty_hole(p[3], p[4]))
        continue;
      r05_close_evar(p+10, p[6], p[8]);
      r05_close_evar(p+12, p[8], p[9]);
      if (! r05_tvar_left(p+14, p[7], p[6]))
        continue;
      if (! r05_empty_hole(p[15], p[6]))
        continue;

      r05_reset_allocator();
      r05_alloc_open_call(p+16);
      r05_alloc_function(&r05f_Program);
      r05_alloc_open_bracket(p+17);
      r05_alloc_open_bracket(p+18);
      r05_alloc_function(&r05f_Unit);
      r05_alloc_insert_pos(p+19);
      r05_alloc_close_bracket(p+20);
      r05_alloc_close_bracket(p+21);
      r05_alloc_open_call(p+22);
      r05_alloc_function(&r05f_Program);
      r05_alloc_open_bracket(p+23);
      r05_alloc_close_bracket(p+24);
      r05_alloc_insert_pos(p+25);
      r05_alloc_open_bracket(p+26);
      r05_alloc_insert_pos(p+27);
      r05_alloc_close_bracket(p+28);
      r05_alloc_close_call(p+29);
      r05_alloc_close_call(p+30);
      r05_push_stack(p[30]);
      r05_push_stack(p[16]);
      r05_push_stack(p[29]);
      r05_push_stack(p[22]);
      r05_link_brackets(p[26], p[28]);
      r05_link_brackets(p[23], p[24]);
      r05_link_brackets(p[17], p[21]);
      r05_link_brackets(p[18], p[20]);
      r05_splice_tvar(p[19], p+14);
      r05_splice_evar(p[25], p+10);
      r05_splice_evar(p[27], p+12);
      r05_splice_from_freelist(p[0]);
      r05_splice_to_freelist(p[0], p[2]);
      return;
    } while (0);

    do {
      /* e.Program: 13 */
      /* e.Tokens: 15 */
      /* e.Errors: 17 */
      /* t.Unit: 19 */
      /* ((Unit t.Unit)) (Program e.Program) e.Tokens (e.Errors) */
      if (! r05_brackets_left(p+3, p[1], p[2]))
        continue;
      if (! r05_brackets_left(p+5, p[3], p[4]))
        continue;
      if (! r05_function_left(p+7, p[5], p[6], &r05f_Unit))
        continue;
      if (! r05_brackets_left(p+8, p[4], p[2]))
        continue;
      if (! r05_function_left(p+10, p[8], p[9], &r05f_Program))
        continue;
      if (! r05_brackets_right(p+11, p[9], p[2]))
        continue;
      if (! r05_empty_hole(p[6], p[4]))
        continue;
      r05_close_evar(p+13, p[10], p[9]);
      r05_close_evar(p+15, p[9], p[11]);
      r05_close_evar(p+17, p[11], p[12]);
      if (! r05_tvar_left(p+19, p[7], p[6]))
        continue;
      if (! r05_empty_hole(p[20], p[6]))
        continue;

      r05_reset_allocator();
      r05_alloc_open_bracket(p+21);
      r05_alloc_function(&r05f_Program);
      r05_alloc_insert_pos(p+22);
      r05_alloc_close_bracket(p+23);
      r05_alloc_insert_pos(p+24);
      r05_alloc_open_bracket(p+25);
      r05_alloc_insert_pos(p+26);
      r05_alloc_close_bracket(p+27);
      r05_link_brackets(p[25], p[27]);
      r05_link_brackets(p[21], p[23]);
      r05_splice_tvar(p[22], p+19);
      r05_splice_evar(p[22], p+13);
      r05_splice_evar(p[24], p+15);
      r05_splice_evar(p[26], p+17);
      r05_splice_from_freelist(p[0]);
      r05_splice_to_freelist(p[0], p[2]);
      return;
    } while (0);

    do {
      /* e.Tokens: 10 */
      /* e.Errors: 12 */
      /* t.Pos: 14 */
      /* () (TkSemicolon t.Pos) e.Tokens (e.Errors) */
      if (! r05_brackets_left(p+3, p[1], p[2]))
        continue;
      if (! r05_brackets_left(p+5, p[4], p[2]))
        continue;
      if (! r05_function_left(p+7, p[5], p[6], &r05f_TkSemicolon))
        continue;
      if (! r05_brackets_right(p+8, p[6], p[2]))
        continue;
      if (! r05_empty_hole(p[3], p[4]))
        continue;
      r05_close_evar(p+10, p[6], p[8]);
      r05_close_evar(p+12, p[8], p[9]);
      if (! r05_tvar_left(p+14, p[7], p[6]))
        continue;
      if (! r05_empty_hole(p[15], p[6]))
        continue;

      r05_reset_allocator();
      r05_alloc_open_call(p+16);
      r05_alloc_function(&r05f_Program);
      r05_alloc_open_bracket(p+17);
      r05_alloc_close_bracket(p+18);
      r05_alloc_insert_pos(p+19);
      r05_alloc_open_bracket(p+20);
      r05_alloc_insert_pos(p+21);
      r05_alloc_close_bracket(p+22);
      r05_alloc_close_call(p+23);
      r05_push_stack(p[23]);
      r05_push_stack(p[16]);
      r05_link_brackets(p[20], p[22]);
      r05_link_brackets(p[17], p[18]);
      r05_splice_evar(p[19], p+10);
      r05_splice_evar(p[21], p+12);
      r05_splice_from_freelist(p[0]);
      r05_splice_to_freelist(p[0], p[2]);
      return;
    } while (0);

    do {
      /* e.Errors: 10 */
      /* t.Pos: 12 */
      /* () (TkEOF t.Pos) (e.Errors) */
      if (! r05_brackets_left(p+3, p[1], p[2]))
        continue;
      if (! r05_brackets_left(p+5, p[4], p[2]))
        continue;
      if (! r05_function_left(p+7, p[5], p[6], &r05f_TkEOF))
        continue;
      if (! r05_brackets_left(p+8, p[6], p[2]))
        continue;
      if (! r05_empty_hole(p[3], p[4]))
        continue;
      if (! r05_empty_hole(p[9], p[2]))
        continue;
      r05_close_evar(p+10, p[8], p[9]);
      if (! r05_tvar_left(p+12, p[7], p[6]))
        continue;
      if (! r05_empty_hole(p[13], p[6]))
        continue;

      r05_reset_allocator();
      r05_alloc_open_bracket(p+14);
      r05_alloc_function(&r05f_Program);
      r05_alloc_close_bracket(p+15);
      r05_alloc_open_bracket(p+16);
      r05_alloc_function(&r05f_TkEOF);
      r05_alloc_insert_pos(p+17);
      r05_alloc_close_bracket(p+18);
      r05_alloc_open_bracket(p+19);
      r05_alloc_insert_pos(p+20);
      r05_alloc_close_bracket(p+21);
      r05_link_brackets(p[19], p[21]);
      r05_link_brackets(p[16], p[18]);
      r05_link_brackets(p[14], p[15]);
      r05_splice_tvar(p[17], p+12);
      r05_splice_evar(p[20], p+10);
      r05_splice_from_freelist(p[0]);
      r05_splice_to_freelist(p[0], p[2]);
      return;
    } while (0);

    do {
      /* e.Errors: 7 */
      /* t.Unexpected: 9 */
      /* e.Tokens: 11 */
      /* () t.Unexpected e.Tokens (e.Errors) */
      if (! r05_brackets_left(p+3, p[1], p[2]))
        continue;
      if (! r05_brackets_right(p+5, p[4], p[2]))
        continue;
      if (! r05_empty_hole(p[3], p[4]))
        continue;
      r05_close_evar(p+7, p[5], p[6]);
      if (! r05_tvar_left(p+9, p[4], p[5]))
        continue;
      r05_close_evar(p+11, p[10], p[5]);

      r05_reset_allocator();
      r05_alloc_open_call(p+13);
      r05_alloc_function(&r05f_Program);
      r05_alloc_open_bracket(p+14);
      r05_alloc_close_bracket(p+15);
      r05_alloc_insert_pos(p+16);
      r05_alloc_open_bracket(p+17);
      r05_alloc_insert_pos(p+18);
      r05_alloc_open_call(p+19);
      r05_alloc_function(&r05f_UnexpectedToken);
      r05_alloc_insert_pos(p+20);
      r05_alloc_chars("$EXTERN, $ENTRY, function name or special comment", 49);
      r05_alloc_close_call(p+21);
      r05_alloc_close_bracket(p+22);
      r05_alloc_close_call(p+23);
      r05_push_stack(p[23]);
      r05_push_stack(p[13]);
      r05_link_brackets(p[17], p[22]);
      r05_push_stack(p[21]);
      r05_push_stack(p[19]);
      r05_link_brackets(p[14], p[15]);
      r05_splice_evar(p[16], p+11);
      r05_splice_evar(p[18], p+7);
      r05_splice_tvar(p[20], p+9);
      r05_splice_from_freelist(p[0]);
      r05_splice_to_freelist(p[0], p[2]);
      return;
    } while (0);

    r05_recognition_impossible();
  }
}

R05_DEFINE_LOCAL_FUNCTION(FIRSTu_Unit, "FIRST_Unit") {
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
    r05_alloc_function(&r05f_TkSpecComment);
    r05_alloc_function(&r05f_TkExtern);
    r05_alloc_function(&r05f_TkEntry);
    r05_alloc_function(&r05f_TkName);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(Unit, "Unit") {
  R05_DEFINE_COND_FUNCTION(Unit, "Unit$1", 1)
  R05_DEFINE_COND_FUNCTION(Unit, "Unit$2", 2)
  R05_DEFINE_COND_FUNCTION(Unit, "Unit$3", 3)
  struct r05_node *p[41] = { 0 };

  r05_this_is_generated_function();
  switch (arg_begin->next->info.function->resume_entry >> 1) {
  case 0:
    p[0] = arg_begin;
    p[1] = arg_begin->next;
    p[2] = arg_end;

    do {
      /* e.Tokens: 10 */
      /* e.Errors: 12 */
      /* t.Pos: 14 */
      /* e.Text: 16 */
      /* () (TkSpecComment t.Pos e.Text) e.Tokens (e.Errors) */
      if (! r05_brackets_left(p+3, p[1], p[2]))
        continue;
      if (! r05_brackets_left(p+5, p[4], p[2]))
        continue;
      if (! r05_function_left(p+7, p[5], p[6], &r05f_TkSpecComment))
        continue;
      if (! r05_brackets_right(p+8, p[6], p[2]))
        continue;
      if (! r05_empty_hole(p[3], p[4]))
        continue;
      r05_close_evar(p+10, p[6], p[8]);
      r05_close_evar(p+12, p[8], p[9]);
      if (! r05_tvar_left(p+14, p[7], p[6]))
        continue;
      r05_close_evar(p+16, p[15], p[6]);

      r05_reset_allocator();
      r05_alloc_open_bracket(p+18);
      r05_alloc_function(&r05f_Unit);
      r05_alloc_open_bracket(p+19);
      r05_alloc_function(&r05f_SpecialComment);
      r05_alloc_insert_pos(p+20);
      r05_alloc_close_bracket(p+21);
      r05_alloc_close_bracket(p+22);
      r05_alloc_insert_pos(p+23);
      r05_alloc_open_bracket(p+24);
      r05_alloc_insert_pos(p+25);
      r05_alloc_close_bracket(p+26);
      r05_link_brackets(p[24], p[26]);
      r05_link_brackets(p[18], p[22]);
      r05_link_brackets(p[19], p[21]);
      r05_splice_tvar(p[20], p+14);
      r05_splice_evar(p[20], p+16);
      r05_splice_evar(p[23], p+10);
      r05_splice_evar(p[25], p+12);
      r05_splice_from_freelist(p[0]);
      r05_splice_to_freelist(p[0], p[2]);
      return;
    } while (0);

    do {
      /* e.Scanned: 10 */
      /* e.Tokens: 12 */
      /* e.Errors: 14 */
      /* t.Pos: 16 */
      /* e.Text: 18 */
      /* (e.Scanned) (TkSpecComment t.Pos e.Text) e.Tokens (e.Errors) */
      if (! r05_brackets_left(p+3, p[1], p[2]))
        continue;
      if (! r05_brackets_left(p+5, p[4], p[2]))
        continue;
      if (! r05_function_left(p+7, p[5], p[6], &r05f_TkSpecComment))
        continue;
      if (! r05_brackets_right(p+8, p[6], p[2]))
        continue;
      r05_close_evar(p+10, p[3], p[4]);
      r05_close_evar(p+12, p[6], p[8]);
      r05_close_evar(p+14, p[8], p[9]);
      if (! r05_tvar_left(p+16, p[7], p[6]))
        continue;
      r05_close_evar(p+18, p[17], p[6]);

      r05_reset_allocator();
      r05_alloc_open_call(p+20);
      r05_alloc_function(&r05f_Unit);
      r05_alloc_open_bracket(p+21);
      r05_alloc_insert_pos(p+22);
      r05_alloc_close_bracket(p+23);
      r05_alloc_insert_pos(p+24);
      r05_alloc_open_bracket(p+25);
      r05_alloc_insert_pos(p+26);
      r05_alloc_close_bracket(p+27);
      r05_alloc_close_call(p+28);
      r05_push_stack(p[28]);
      r05_push_stack(p[20]);
      r05_link_brackets(p[25], p[27]);
      r05_link_brackets(p[21], p[23]);
      r05_splice_evar(p[22], p+10);
      r05_splice_evar(p[24], p+12);
      r05_splice_evar(p[26], p+14);
      r05_splice_from_freelist(p[0]);
      r05_splice_to_freelist(p[0], p[2]);
      return;
    } while (0);

    do {
      /* e.Tokens: 10 */
      /* e.Errors: 12 */
      /* t.Pos: 14 */
      /* () (TkExtern t.Pos) e.Tokens (e.Errors) */
      if (! r05_brackets_left(p+3, p[1], p[2]))
        continue;
      if (! r05_brackets_left(p+5, p[4], p[2]))
        continue;
      if (! r05_function_left(p+7, p[5], p[6], &r05f_TkExtern))
        continue;
      if (! r05_brackets_right(p+8, p[6], p[2]))
        continue;
      if (! r05_empty_hole(p[3], p[4]))
        continue;
      r05_close_evar(p+10, p[6], p[8]);
      r05_close_evar(p+12, p[8], p[9]);
      if (! r05_tvar_left(p+14, p[7], p[6]))
        continue;
      if (! r05_empty_hole(p[15], p[6]))
        continue;

      r05_reset_allocator();
      r05_alloc_open_call(p+16);
      r05_alloc_function(&r05f_Unit);
      r05_alloc_open_bracket(p+17);
      r05_alloc_function(&r05f_Extern);
      r05_alloc_close_bracket(p+18);
      r05_alloc_open_call(p+19);
      r05_alloc_function(&r05f_NameList);
      r05_alloc_open_bracket(p+20);
      r05_alloc_close_bracket(p+21);
      r05_alloc_insert_pos(p+22);
      r05_alloc_open_bracket(p+23);
      r05_alloc_insert_pos(p+24);
      r05_alloc_close_bracket(p+25);
      r05_alloc_close_call(p+26);
      r05_alloc_close_call(p+27);
      r05_push_stack(p[27]);
      r05_push_stack(p[16]);
      r05_push_stack(p[26]);
      r05_push_stack(p[19]);
      r05_link_brackets(p[23], p[25]);
      r05_link_brackets(p[20], p[21]);
      r05_link_brackets(p[17], p[18]);
      r05_splice_evar(p[22], p+10);
      r05_splice_evar(p[24], p+12);
      r05_splice_from_freelist(p[0]);
      r05_splice_to_freelist(p[0], p[2]);
      return;
    } while (0);

    do {
      /* e.Names: 11 */
      /* e.Tokens: 13 */
      /* e.Errors: 15 */
      /* (Extern) (NameList e.Names) e.Tokens (e.Errors) */
      if (! r05_brackets_left(p+3, p[1], p[2]))
        continue;
      if (! r05_function_left(p+5, p[3], p[4], &r05f_Extern))
        continue;
      if (! r05_brackets_left(p+6, p[4], p[2]))
        continue;
      if (! r05_function_left(p+8, p[6], p[7], &r05f_NameList))
        continue;
      if (! r05_brackets_right(p+9, p[7], p[2]))
        continue;
      if (! r05_empty_hole(p[5], p[4]))
        continue;
      r05_close_evar(p+11, p[8], p[7]);
      r05_close_evar(p+13, p[7], p[9]);
      r05_close_evar(p+15, p[9], p[10]);

      r05_reset_allocator();
      r05_alloc_open_call(p+17);
      r05_alloc_function(&r05f_Unit);
      r05_alloc_open_bracket(p+18);
      r05_alloc_function(&r05f_Extern);
      r05_alloc_open_bracket(p+19);
      r05_alloc_function(&r05f_NameList);
      r05_alloc_insert_pos(p+20);
      r05_alloc_close_bracket(p+21);
      r05_alloc_close_bracket(p+22);
      r05_alloc_insert_pos(p+23);
      r05_alloc_open_bracket(p+24);
      r05_alloc_insert_pos(p+25);
      r05_alloc_close_bracket(p+26);
      r05_alloc_close_call(p+27);
      r05_push_stack(p[27]);
      r05_push_stack(p[17]);
      r05_link_brackets(p[24], p[26]);
      r05_link_brackets(p[18], p[22]);
      r05_link_brackets(p[19], p[21]);
      r05_splice_evar(p[20], p+11);
      r05_splice_evar(p[23], p+13);
      r05_splice_evar(p[25], p+15);
      r05_splice_from_freelist(p[0]);
      r05_splice_to_freelist(p[0], p[2]);
      return;
    } while (0);

    do {
      /* e.Tokens: 11 */
      /* e.Errors: 13 */
      /* t.Pos: 15 */
      /* (Extern) (TkSemicolon t.Pos) e.Tokens (e.Errors) */
      if (! r05_brackets_left(p+3, p[1], p[2]))
        continue;
      if (! r05_function_left(p+5, p[3], p[4], &r05f_Extern))
        continue;
      if (! r05_brackets_left(p+6, p[4], p[2]))
        continue;
      if (! r05_function_left(p+8, p[6], p[7], &r05f_TkSemicolon))
        continue;
      if (! r05_brackets_right(p+9, p[7], p[2]))
        continue;
      if (! r05_empty_hole(p[5], p[4]))
        continue;
      r05_close_evar(p+11, p[7], p[9]);
      r05_close_evar(p+13, p[9], p[10]);
      if (! r05_tvar_left(p+15, p[8], p[7]))
        continue;
      if (! r05_empty_hole(p[16], p[7]))
        continue;

      r05_reset_allocator();
      r05_alloc_insert_pos(p+17);
      r05_alloc_open_bracket(p+18);
      r05_alloc_insert_pos(p+19);
      r05_alloc_open_bracket(p+20);
      r05_alloc_function(&r05f_Error);
      r05_alloc_insert_pos(p+21);
      r05_alloc_chars("No names after $EXTERN", 22);
      r05_alloc_close_bracket(p+22);
      r05_alloc_close_bracket(p+23);
      r05_link_brackets(p[18], p[23]);
      r05_link_brackets(p[20], p[22]);
      r05_splice_evar(p[17], p+11);
      r05_splice_evar(p[19], p+13);
      r05_splice_tvar(p[21], p+15);
      r05_splice_from_freelist(p[0]);
      r05_splice_to_freelist(p[0], p[2]);
      return;
    } while (0);

    do {
      /* e.Errors: 8 */
      /* t.Unexpected: 10 */
      /* e.Tokens: 12 */
      /* (Extern) t.Unexpected e.Tokens (e.Errors) */
      if (! r05_brackets_left(p+3, p[1], p[2]))
        continue;
      if (! r05_function_left(p+5, p[3], p[4], &r05f_Extern))
        continue;
      if (! r05_brackets_right(p+6, p[4], p[2]))
        continue;
      if (! r05_empty_hole(p[5], p[4]))
        continue;
      r05_close_evar(p+8, p[6], p[7]);
      if (! r05_tvar_left(p+10, p[4], p[6]))
        continue;
      r05_close_evar(p+12, p[11], p[6]);

      r05_reset_allocator();
      r05_alloc_open_call(p+14);
      r05_alloc_function(&c1);
      r05_alloc_tvar(p+10);
      r05_alloc_close_call(p+15);
      r05_push_stack(p[15]);
      r05_push_stack(p[14]);
      r05_push_context(p, 14);
      r05_splice_from_freelist(p[2]);
      return;

  case 1:
      r05_pop_context(p, 14);
      p[14] = arg_begin;
      p[15] = arg_begin->next;
      p[16] = arg_end;

      do {
        /* e.Errors: 8 */
        /* t.Unexpected: 10 */
        /* e.Tokens: 12 */
        /* s.1: 19 */
        /* t.Pos: 20 */
        /* e.2: 22 */
        /* (s.1 t.Pos e.2) */
        if (! r05_brackets_left(p+17, p[15], p[16]))
          continue;
        if (! r05_empty_hole(p[18], p[16]))
          continue;
        if (! r05_svar_left(p+19, p[17], p[18]))
          continue;
        if (! r05_tvar_left(p+20, p[19], p[18]))
          continue;
        r05_close_evar(p+22, p[21], p[18]);

        r05_reset_allocator();
        r05_alloc_insert_pos(p+24);
        r05_alloc_open_bracket(p+25);
        r05_alloc_insert_pos(p+26);
        r05_alloc_open_bracket(p+27);
        r05_alloc_function(&r05f_Error);
        r05_alloc_insert_pos(p+28);
        r05_alloc_chars("Can\'t parse names after $EXTERN", 31);
        r05_alloc_close_bracket(p+29);
        r05_alloc_close_bracket(p+30);
        r05_link_brackets(p[25], p[30]);
        r05_link_brackets(p[27], p[29]);
        r05_splice_tvar(p[24], p+10);
        r05_splice_evar(p[24], p+12);
        r05_splice_evar(p[26], p+8);
        r05_splice_tvar(p[28], p+20);
        r05_splice_from_freelist(p[0]);
        r05_splice_to_freelist(p[0], p[2]);
        return;
      } while (0);
      r05_splice_to_freelist(p[14], p[16]);
    } while (0);

    do {
      /* e.Names: 14 */
      /* e.Tokens: 16 */
      /* e.Errors: 18 */
      /* t.Pos: 20 */
      /* (Extern (NameList e.Names)) (TkSemicolon t.Pos) e.Tokens (e.Errors) */
      if (! r05_brackets_left(p+3, p[1], p[2]))
        continue;
      if (! r05_function_left(p+5, p[3], p[4], &r05f_Extern))
        continue;
      if (! r05_brackets_left(p+6, p[5], p[4]))
        continue;
      if (! r05_function_left(p+8, p[6], p[7], &r05f_NameList))
        continue;
      if (! r05_brackets_left(p+9, p[4], p[2]))
        continue;
      if (! r05_function_left(p+11, p[9], p[10], &r05f_TkSemicolon))
        continue;
      if (! r05_brackets_right(p+12, p[10], p[2]))
        continue;
      if (! r05_empty_hole(p[7], p[4]))
        continue;
      r05_close_evar(p+14, p[8], p[7]);
      r05_close_evar(p+16, p[10], p[12]);
      r05_close_evar(p+18, p[12], p[13]);
      if (! r05_tvar_left(p+20, p[11], p[10]))
        continue;
      if (! r05_empty_hole(p[21], p[10]))
        continue;

      r05_reset_allocator();
      r05_alloc_open_bracket(p+22);
      r05_alloc_function(&r05f_Unit);
      r05_alloc_open_bracket(p+23);
      r05_alloc_function(&r05f_Extern);
      r05_alloc_insert_pos(p+24);
      r05_alloc_close_bracket(p+25);
      r05_alloc_close_bracket(p+26);
      r05_alloc_insert_pos(p+27);
      r05_alloc_open_bracket(p+28);
      r05_alloc_insert_pos(p+29);
      r05_alloc_close_bracket(p+30);
      r05_link_brackets(p[28], p[30]);
      r05_link_brackets(p[22], p[26]);
      r05_link_brackets(p[23], p[25]);
      r05_splice_evar(p[24], p+14);
      r05_splice_evar(p[27], p+16);
      r05_splice_evar(p[29], p+18);
      r05_splice_from_freelist(p[0]);
      r05_splice_to_freelist(p[0], p[2]);
      return;
    } while (0);

    do {
      /* e.Names: 11 */
      /* e.Errors: 13 */
      /* t.NextToken: 15 */
      /* e.Tokens: 17 */
      /* (Extern (NameList e.Names)) t.NextToken e.Tokens (e.Errors) */
      if (! r05_brackets_left(p+3, p[1], p[2]))
        continue;
      if (! r05_function_left(p+5, p[3], p[4], &r05f_Extern))
        continue;
      if (! r05_brackets_left(p+6, p[5], p[4]))
        continue;
      if (! r05_function_left(p+8, p[6], p[7], &r05f_NameList))
        continue;
      if (! r05_brackets_right(p+9, p[4], p[2]))
        continue;
      if (! r05_empty_hole(p[7], p[4]))
        continue;
      r05_close_evar(p+11, p[8], p[7]);
      r05_close_evar(p+13, p[9], p[10]);
      if (! r05_tvar_left(p+15, p[4], p[9]))
        continue;
      r05_close_evar(p+17, p[16], p[9]);

      r05_reset_allocator();
      r05_alloc_open_call(p+19);
      r05_alloc_function(&c2);
      r05_alloc_tvar(p+15);
      r05_alloc_close_call(p+20);
      r05_push_stack(p[20]);
      r05_push_stack(p[19]);
      r05_push_context(p, 19);
      r05_splice_from_freelist(p[2]);
      return;

  case 2:
      r05_pop_context(p, 19);
      p[19] = arg_begin;
      p[20] = arg_begin->next;
      p[21] = arg_end;

      do {
        /* e.Names: 11 */
        /* e.Errors: 13 */
        /* t.NextToken: 15 */
        /* e.Tokens: 17 */
        /* s.1: 24 */
        /* t.Pos: 25 */
        /* e.2: 27 */
        /* (s.1 t.Pos e.2) */
        if (! r05_brackets_left(p+22, p[20], p[21]))
          continue;
        if (! r05_empty_hole(p[23], p[21]))
          continue;
        if (! r05_svar_left(p+24, p[22], p[23]))
          continue;
        if (! r05_tvar_left(p+25, p[24], p[23]))
          continue;
        r05_close_evar(p+27, p[26], p[23]);

        r05_reset_allocator();
        r05_alloc_open_bracket(p+29);
        r05_alloc_function(&r05f_Unit);
        r05_alloc_open_bracket(p+30);
        r05_alloc_function(&r05f_Extern);
        r05_alloc_insert_pos(p+31);
        r05_alloc_close_bracket(p+32);
        r05_alloc_close_bracket(p+33);
        r05_alloc_insert_pos(p+34);
        r05_alloc_open_bracket(p+35);
        r05_alloc_insert_pos(p+36);
        r05_alloc_open_bracket(p+37);
        r05_alloc_function(&r05f_Error);
        r05_alloc_insert_pos(p+38);
        r05_alloc_chars("missed semicolon", 16);
        r05_alloc_close_bracket(p+39);
        r05_alloc_close_bracket(p+40);
        r05_link_brackets(p[35], p[40]);
        r05_link_brackets(p[37], p[39]);
        r05_link_brackets(p[29], p[33]);
        r05_link_brackets(p[30], p[32]);
        r05_splice_evar(p[31], p+11);
        r05_splice_tvar(p[34], p+15);
        r05_splice_evar(p[34], p+17);
        r05_splice_evar(p[36], p+13);
        r05_splice_tvar(p[38], p+25);
        r05_splice_from_freelist(p[0]);
        r05_splice_to_freelist(p[0], p[2]);
        return;
      } while (0);
      r05_splice_to_freelist(p[19], p[21]);
    } while (0);

    do {
      /* e.Function: 10 */
      /* e.Tokens: 12 */
      /* e.Errors: 14 */
      /* () (Function e.Function) e.Tokens (e.Errors) */
      if (! r05_brackets_left(p+3, p[1], p[2]))
        continue;
      if (! r05_brackets_left(p+5, p[4], p[2]))
        continue;
      if (! r05_function_left(p+7, p[5], p[6], &r05f_Function))
        continue;
      if (! r05_brackets_right(p+8, p[6], p[2]))
        continue;
      if (! r05_empty_hole(p[3], p[4]))
        continue;
      r05_close_evar(p+10, p[7], p[6]);
      r05_close_evar(p+12, p[6], p[8]);
      r05_close_evar(p+14, p[8], p[9]);

      r05_reset_allocator();
      r05_alloc_open_bracket(p+16);
      r05_alloc_function(&r05f_Unit);
      r05_alloc_open_bracket(p+17);
      r05_alloc_function(&r05f_Function);
      r05_alloc_insert_pos(p+18);
      r05_alloc_close_bracket(p+19);
      r05_alloc_close_bracket(p+20);
      r05_alloc_insert_pos(p+21);
      r05_alloc_open_bracket(p+22);
      r05_alloc_insert_pos(p+23);
      r05_alloc_close_bracket(p+24);
      r05_link_brackets(p[22], p[24]);
      r05_link_brackets(p[16], p[20]);
      r05_link_brackets(p[17], p[19]);
      r05_splice_evar(p[18], p+10);
      r05_splice_evar(p[21], p+12);
      r05_splice_evar(p[23], p+14);
      r05_splice_from_freelist(p[0]);
      r05_splice_to_freelist(p[0], p[2]);
      return;
    } while (0);

    do {
      /* e.Tokens: 9 */
      /* e.Errors: 11 */
      /* s.Type: 13 */
      /* t.Pos: 14 */
      /* e.Value: 16 */
      /* () (s.Type t.Pos e.Value) e.Tokens (e.Errors) */
      if (! r05_brackets_left(p+3, p[1], p[2]))
        continue;
      if (! r05_brackets_left(p+5, p[4], p[2]))
        continue;
      if (! r05_brackets_right(p+7, p[6], p[2]))
        continue;
      if (! r05_empty_hole(p[3], p[4]))
        continue;
      r05_close_evar(p+9, p[6], p[7]);
      r05_close_evar(p+11, p[7], p[8]);
      if (! r05_svar_left(p+13, p[5], p[6]))
        continue;
      if (! r05_tvar_left(p+14, p[13], p[6]))
        continue;
      r05_close_evar(p+16, p[15], p[6]);

      r05_reset_allocator();
      r05_alloc_open_call(p+18);
      r05_alloc_function(&c3);
      r05_alloc_function(&r05f_TkName);
      r05_alloc_function(&r05f_TkEntry);
      r05_alloc_close_call(p+19);
      r05_push_stack(p[19]);
      r05_push_stack(p[18]);
      r05_push_context(p, 18);
      r05_splice_from_freelist(p[2]);
      return;

  case 3:
      r05_pop_context(p, 18);
      p[18] = arg_begin;
      p[19] = arg_begin->next;
      p[20] = arg_end;

      do {
        /* e.Tokens: 9 */
        /* e.Errors: 11 */
        /* s.Type: 13, 23 */
        /* t.Pos: 14 */
        /* e.Value: 16 */
        /* e.1: 21 */
        /* e.2: 24 */
        /* e.1 s.Type e.2 */
        p[21] = NULL;
        p[22] = p[19];
        do {
          r05_start_e_loop();
          if (! r05_repeated_svar_left(p+23, p[22], p[20], p+13))
            continue;
          r05_close_evar(p+24, p[23], p[20]);

          r05_reset_allocator();
          r05_alloc_open_call(p+26);
          r05_alloc_function(&r05f_Unit);
          r05_alloc_open_bracket(p+27);
          r05_alloc_close_bracket(p+28);
          r05_alloc_open_call(p+29);
          r05_alloc_function(&r05f_FunctionDef);
          r05_alloc_open_bracket(p+30);
          r05_alloc_close_bracket(p+31);
          r05_alloc_open_bracket(p+32);
          r05_alloc_svar(p+13);
          r05_alloc_insert_pos(p+33);
          r05_alloc_close_bracket(p+34);
          r05_alloc_insert_pos(p+35);
          r05_alloc_open_bracket(p+36);
          r05_alloc_insert_pos(p+37);
          r05_alloc_close_bracket(p+38);
          r05_alloc_close_call(p+39);
          r05_alloc_close_call(p+40);
          r05_push_stack(p[40]);
          r05_push_stack(p[26]);
          r05_push_stack(p[39]);
          r05_push_stack(p[29]);
          r05_link_brackets(p[36], p[38]);
          r05_link_brackets(p[32], p[34]);
          r05_link_brackets(p[30], p[31]);
          r05_link_brackets(p[27], p[28]);
          r05_splice_tvar(p[33], p+14);
          r05_splice_evar(p[33], p+16);
          r05_splice_evar(p[35], p+9);
          r05_splice_evar(p[37], p+11);
          r05_splice_from_freelist(p[0]);
          r05_splice_to_freelist(p[0], p[2]);
          return;
        } while (r05_open_evar_advance(p+21, p[20]));
        r05_stop_e_loop();
      } while (0);
      r05_splice_to_freelist(p[18], p[20]);
    } while (0);

    do {
      /* e.Tokens: 10 */
      /* e.Errors: 12 */
      /* t.Pos: 14 */
      /* () (TkSemicolon t.Pos) e.Tokens (e.Errors) */
      if (! r05_brackets_left(p+3, p[1], p[2]))
        continue;
      if (! r05_brackets_left(p+5, p[4], p[2]))
        continue;
      if (! r05_function_left(p+7, p[5], p[6], &r05f_TkSemicolon))
        continue;
      if (! r05_brackets_right(p+8, p[6], p[2]))
        continue;
      if (! r05_empty_hole(p[3], p[4]))
        continue;
      r05_close_evar(p+10, p[6], p[8]);
      r05_close_evar(p+12, p[8], p[9]);
      if (! r05_tvar_left(p+14, p[7], p[6]))
        continue;
      if (! r05_empty_hole(p[15], p[6]))
        continue;

      r05_reset_allocator();
      r05_alloc_insert_pos(p+16);
      r05_alloc_open_bracket(p+17);
      r05_alloc_insert_pos(p+18);
      r05_alloc_close_bracket(p+19);
      r05_link_brackets(p[17], p[19]);
      r05_splice_evar(p[16], p+10);
      r05_splice_evar(p[18], p+12);
      r05_splice_from_freelist(p[0]);
      r05_splice_to_freelist(p[0], p[2]);
      return;
    } while (0);

    do {
      /* e.Errors: 7 */
      /* t.Unexpected: 9 */
      /* e.Tokens: 11 */
      /* () t.Unexpected e.Tokens (e.Errors) */
      if (! r05_brackets_left(p+3, p[1], p[2]))
        continue;
      if (! r05_brackets_right(p+5, p[4], p[2]))
        continue;
      if (! r05_empty_hole(p[3], p[4]))
        continue;
      r05_close_evar(p+7, p[5], p[6]);
      if (! r05_tvar_left(p+9, p[4], p[5]))
        continue;
      r05_close_evar(p+11, p[10], p[5]);

      r05_reset_allocator();
      r05_alloc_insert_pos(p+13);
      r05_alloc_open_bracket(p+14);
      r05_alloc_insert_pos(p+15);
      r05_alloc_open_call(p+16);
      r05_alloc_function(&r05f_UnexpectedToken);
      r05_alloc_tvar(p+9);
      r05_alloc_chars("$EXTERN, $ENTRY, function name or special comment", 49);
      r05_alloc_close_call(p+17);
      r05_alloc_close_bracket(p+18);
      r05_link_brackets(p[14], p[18]);
      r05_push_stack(p[17]);
      r05_push_stack(p[16]);
      r05_splice_tvar(p[13], p+9);
      r05_splice_evar(p[13], p+11);
      r05_splice_evar(p[15], p+7);
      r05_splice_from_freelist(p[0]);
      r05_splice_to_freelist(p[0], p[2]);
      return;
    } while (0);

    r05_recognition_impossible();
  }
}

R05_DEFINE_LOCAL_FUNCTION(NameList, "NameList") {
  R05_DEFINE_COND_FUNCTION(NameList, "NameList$1", 1)
  struct r05_node *p[43] = { 0 };

  r05_this_is_generated_function();
  switch (arg_begin->next->info.function->resume_entry >> 1) {
  case 0:
    p[0] = arg_begin;
    p[1] = arg_begin->next;
    p[2] = arg_end;

    do {
      /* e.Scanned: 10 */
      /* e.Tokens: 12 */
      /* e.Errors: 14 */
      /* t.Pos: 16 */
      /* e.Text: 18 */
      /* (e.Scanned) (TkSpecComment t.Pos e.Text) e.Tokens (e.Errors) */
      if (! r05_brackets_left(p+3, p[1], p[2]))
        continue;
      if (! r05_brackets_left(p+5, p[4], p[2]))
        continue;
      if (! r05_function_left(p+7, p[5], p[6], &r05f_TkSpecComment))
        continue;
      if (! r05_brackets_right(p+8, p[6], p[2]))
        continue;
      r05_close_evar(p+10, p[3], p[4]);
      r05_close_evar(p+12, p[6], p[8]);
      r05_close_evar(p+14, p[8], p[9]);
      if (! r05_tvar_left(p+16, p[7], p[6]))
        continue;
      r05_close_evar(p+18, p[17], p[6]);

      r05_reset_allocator();
      r05_alloc_open_call(p+20);
      r05_alloc_function(&r05f_NameList);
      r05_alloc_open_bracket(p+21);
      r05_alloc_insert_pos(p+22);
      r05_alloc_close_bracket(p+23);
      r05_alloc_insert_pos(p+24);
      r05_alloc_open_bracket(p+25);
      r05_alloc_insert_pos(p+26);
      r05_alloc_close_bracket(p+27);
      r05_alloc_close_call(p+28);
      r05_push_stack(p[28]);
      r05_push_stack(p[20]);
      r05_link_brackets(p[25], p[27]);
      r05_link_brackets(p[21], p[23]);
      r05_splice_evar(p[22], p+10);
      r05_splice_evar(p[24], p+12);
      r05_splice_evar(p[26], p+14);
      r05_splice_from_freelist(p[0]);
      r05_splice_to_freelist(p[0], p[2]);
      return;
    } while (0);

    do {
      /* e.Tokens: 10 */
      /* e.Errors: 12 */
      /* t.Pos: 14 */
      /* e.Name: 16 */
      /* () (TkName t.Pos e.Name) e.Tokens (e.Errors) */
      if (! r05_brackets_left(p+3, p[1], p[2]))
        continue;
      if (! r05_brackets_left(p+5, p[4], p[2]))
        continue;
      if (! r05_function_left(p+7, p[5], p[6], &r05f_TkName))
        continue;
      if (! r05_brackets_right(p+8, p[6], p[2]))
        continue;
      if (! r05_empty_hole(p[3], p[4]))
        continue;
      r05_close_evar(p+10, p[6], p[8]);
      r05_close_evar(p+12, p[8], p[9]);
      if (! r05_tvar_left(p+14, p[7], p[6]))
        continue;
      r05_close_evar(p+16, p[15], p[6]);

      r05_reset_allocator();
      r05_alloc_open_call(p+18);
      r05_alloc_function(&r05f_NameList);
      r05_alloc_open_bracket(p+19);
      r05_alloc_open_bracket(p+20);
      r05_alloc_function(&r05f_NameList);
      r05_alloc_open_bracket(p+21);
      r05_alloc_insert_pos(p+22);
      r05_alloc_close_bracket(p+23);
      r05_alloc_close_bracket(p+24);
      r05_alloc_close_bracket(p+25);
      r05_alloc_insert_pos(p+26);
      r05_alloc_open_bracket(p+27);
      r05_alloc_insert_pos(p+28);
      r05_alloc_close_bracket(p+29);
      r05_alloc_close_call(p+30);
      r05_push_stack(p[30]);
      r05_push_stack(p[18]);
      r05_link_brackets(p[27], p[29]);
      r05_link_brackets(p[19], p[25]);
      r05_link_brackets(p[20], p[24]);
      r05_link_brackets(p[21], p[23]);
      r05_splice_tvar(p[22], p+14);
      r05_splice_evar(p[22], p+16);
      r05_splice_evar(p[26], p+10);
      r05_splice_evar(p[28], p+12);
      r05_splice_from_freelist(p[0]);
      r05_splice_to_freelist(p[0], p[2]);
      return;
    } while (0);

    do {
      /* e.Errors: 7 */
      /* t.Unexpected: 9 */
      /* e.Tokens: 11 */
      /* () t.Unexpected e.Tokens (e.Errors) */
      if (! r05_brackets_left(p+3, p[1], p[2]))
        continue;
      if (! r05_brackets_right(p+5, p[4], p[2]))
        continue;
      if (! r05_empty_hole(p[3], p[4]))
        continue;
      r05_close_evar(p+7, p[5], p[6]);
      if (! r05_tvar_left(p+9, p[4], p[5]))
        continue;
      r05_close_evar(p+11, p[10], p[5]);

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
        /* e.Errors: 7 */
        /* t.Unexpected: 9 */
        /* e.Tokens: 11 */
        /* s.1: 18 */
        /* t.Pos: 19 */
        /* e.2: 21 */
        /* (s.1 t.Pos e.2) */
        if (! r05_brackets_left(p+16, p[14], p[15]))
          continue;
        if (! r05_empty_hole(p[17], p[15]))
          continue;
        if (! r05_svar_left(p+18, p[16], p[17]))
          continue;
        if (! r05_tvar_left(p+19, p[18], p[17]))
          continue;
        r05_close_evar(p+21, p[20], p[17]);

        r05_reset_allocator();
        r05_alloc_insert_pos(p+23);
        r05_alloc_open_bracket(p+24);
        r05_alloc_insert_pos(p+25);
        r05_alloc_open_bracket(p+26);
        r05_alloc_function(&r05f_Error);
        r05_alloc_insert_pos(p+27);
        r05_alloc_chars("expected function name after $EXTERN keyword", 44);
        r05_alloc_close_bracket(p+28);
        r05_alloc_close_bracket(p+29);
        r05_link_brackets(p[24], p[29]);
        r05_link_brackets(p[26], p[28]);
        r05_splice_tvar(p[23], p+9);
        r05_splice_evar(p[23], p+11);
        r05_splice_evar(p[25], p+7);
        r05_splice_tvar(p[27], p+19);
        r05_splice_from_freelist(p[0]);
        r05_splice_to_freelist(p[0], p[2]);
        return;
      } while (0);
      r05_splice_to_freelist(p[13], p[15]);
    } while (0);

    do {
      /* e.Names: 13 */
      /* e.Tokens: 15 */
      /* e.Errors: 17 */
      /* t.Pos: 19 */
      /* ((NameList e.Names)) (TkComma t.Pos) e.Tokens (e.Errors) */
      if (! r05_brackets_left(p+3, p[1], p[2]))
        continue;
      if (! r05_brackets_left(p+5, p[3], p[4]))
        continue;
      if (! r05_function_left(p+7, p[5], p[6], &r05f_NameList))
        continue;
      if (! r05_brackets_left(p+8, p[4], p[2]))
        continue;
      if (! r05_function_left(p+10, p[8], p[9], &r05f_TkComma))
        continue;
      if (! r05_brackets_right(p+11, p[9], p[2]))
        continue;
      if (! r05_empty_hole(p[6], p[4]))
        continue;
      r05_close_evar(p+13, p[7], p[6]);
      r05_close_evar(p+15, p[9], p[11]);
      r05_close_evar(p+17, p[11], p[12]);
      if (! r05_tvar_left(p+19, p[10], p[9]))
        continue;
      if (! r05_empty_hole(p[20], p[9]))
        continue;

      r05_reset_allocator();
      r05_alloc_open_call(p+21);
      r05_alloc_function(&r05f_NameList);
      r05_alloc_open_bracket(p+22);
      r05_alloc_open_bracket(p+23);
      r05_alloc_function(&r05f_NameList);
      r05_alloc_insert_pos(p+24);
      r05_alloc_close_bracket(p+25);
      r05_alloc_char(',');
      r05_alloc_insert_pos(p+26);
      r05_alloc_close_bracket(p+27);
      r05_alloc_insert_pos(p+28);
      r05_alloc_open_bracket(p+29);
      r05_alloc_insert_pos(p+30);
      r05_alloc_close_bracket(p+31);
      r05_alloc_close_call(p+32);
      r05_push_stack(p[32]);
      r05_push_stack(p[21]);
      r05_link_brackets(p[29], p[31]);
      r05_link_brackets(p[22], p[27]);
      r05_link_brackets(p[23], p[25]);
      r05_splice_evar(p[24], p+13);
      r05_splice_tvar(p[26], p+19);
      r05_splice_evar(p[28], p+15);
      r05_splice_evar(p[30], p+17);
      r05_splice_from_freelist(p[0]);
      r05_splice_to_freelist(p[0], p[2]);
      return;
    } while (0);

    do {
      /* e.Names: 14 */
      /* e.Tokens: 16 */
      /* e.Errors: 18 */
      /* t.CommaPos: 20 */
      /* t.Pos: 22 */
      /* e.Name: 24 */
      /* ((NameList e.Names) ',' t.CommaPos) (TkName t.Pos e.Name) e.Tokens (e.Errors) */
      if (! r05_brackets_left(p+3, p[1], p[2]))
        continue;
      if (! r05_brackets_left(p+5, p[3], p[4]))
        continue;
      if (! r05_function_left(p+7, p[5], p[6], &r05f_NameList))
        continue;
      if (! r05_char_left(p+8, p[6], p[4], ','))
        continue;
      if (! r05_brackets_left(p+9, p[4], p[2]))
        continue;
      if (! r05_function_left(p+11, p[9], p[10], &r05f_TkName))
        continue;
      if (! r05_brackets_right(p+12, p[10], p[2]))
        continue;
      r05_close_evar(p+14, p[7], p[6]);
      r05_close_evar(p+16, p[10], p[12]);
      r05_close_evar(p+18, p[12], p[13]);
      if (! r05_tvar_left(p+20, p[8], p[4]))
        continue;
      if (! r05_empty_hole(p[21], p[4]))
        continue;
      if (! r05_tvar_left(p+22, p[11], p[10]))
        continue;
      r05_close_evar(p+24, p[23], p[10]);

      r05_reset_allocator();
      r05_alloc_open_call(p+26);
      r05_alloc_function(&r05f_NameList);
      r05_alloc_open_bracket(p+27);
      r05_alloc_open_bracket(p+28);
      r05_alloc_function(&r05f_NameList);
      r05_alloc_insert_pos(p+29);
      r05_alloc_open_bracket(p+30);
      r05_alloc_insert_pos(p+31);
      r05_alloc_close_bracket(p+32);
      r05_alloc_close_bracket(p+33);
      r05_alloc_close_bracket(p+34);
      r05_alloc_insert_pos(p+35);
      r05_alloc_open_bracket(p+36);
      r05_alloc_insert_pos(p+37);
      r05_alloc_close_bracket(p+38);
      r05_alloc_close_call(p+39);
      r05_push_stack(p[39]);
      r05_push_stack(p[26]);
      r05_link_brackets(p[36], p[38]);
      r05_link_brackets(p[27], p[34]);
      r05_link_brackets(p[28], p[33]);
      r05_link_brackets(p[30], p[32]);
      r05_splice_evar(p[29], p+14);
      r05_splice_tvar(p[31], p+22);
      r05_splice_evar(p[31], p+24);
      r05_splice_evar(p[35], p+16);
      r05_splice_evar(p[37], p+18);
      r05_splice_from_freelist(p[0]);
      r05_splice_to_freelist(p[0], p[2]);
      return;
    } while (0);

    do {
      /* e.Names: 11 */
      /* e.Tokens: 13 */
      /* e.Errors: 15 */
      /* t.Pos: 17 */
      /* ((NameList e.Names) ',' t.Pos) e.Tokens (e.Errors) */
      if (! r05_brackets_left(p+3, p[1], p[2]))
        continue;
      if (! r05_brackets_left(p+5, p[3], p[4]))
        continue;
      if (! r05_function_left(p+7, p[5], p[6], &r05f_NameList))
        continue;
      if (! r05_char_left(p+8, p[6], p[4], ','))
        continue;
      if (! r05_brackets_right(p+9, p[4], p[2]))
        continue;
      r05_close_evar(p+11, p[7], p[6]);
      r05_close_evar(p+13, p[4], p[9]);
      r05_close_evar(p+15, p[9], p[10]);
      if (! r05_tvar_left(p+17, p[8], p[4]))
        continue;
      if (! r05_empty_hole(p[18], p[4]))
        continue;

      r05_reset_allocator();
      r05_alloc_open_call(p+19);
      r05_alloc_function(&r05f_NameList);
      r05_alloc_open_bracket(p+20);
      r05_alloc_open_bracket(p+21);
      r05_alloc_function(&r05f_NameList);
      r05_alloc_insert_pos(p+22);
      r05_alloc_close_bracket(p+23);
      r05_alloc_close_bracket(p+24);
      r05_alloc_insert_pos(p+25);
      r05_alloc_open_bracket(p+26);
      r05_alloc_insert_pos(p+27);
      r05_alloc_open_bracket(p+28);
      r05_alloc_function(&r05f_Error);
      r05_alloc_insert_pos(p+29);
      r05_alloc_chars("expected name after comma", 25);
      r05_alloc_close_bracket(p+30);
      r05_alloc_close_bracket(p+31);
      r05_alloc_close_call(p+32);
      r05_push_stack(p[32]);
      r05_push_stack(p[19]);
      r05_link_brackets(p[26], p[31]);
      r05_link_brackets(p[28], p[30]);
      r05_link_brackets(p[20], p[24]);
      r05_link_brackets(p[21], p[23]);
      r05_splice_evar(p[22], p+11);
      r05_splice_evar(p[25], p+13);
      r05_splice_evar(p[27], p+15);
      r05_splice_tvar(p[29], p+17);
      r05_splice_from_freelist(p[0]);
      r05_splice_to_freelist(p[0], p[2]);
      return;
    } while (0);

    do {
      /* e.Names: 16 */
      /* e.Tokens: 18 */
      /* e.Errors: 20 */
      /* t.NamePos: 22 */
      /* e.Name: 24 */
      /* t.BracketPos: 26 */
      /* ((NameList e.Names)) (TkName t.NamePos e.Name) (TkOpenBlock t.BracketPos) e.Tokens (e.Errors) */
      if (! r05_brackets_left(p+3, p[1], p[2]))
        continue;
      if (! r05_brackets_left(p+5, p[3], p[4]))
        continue;
      if (! r05_function_left(p+7, p[5], p[6], &r05f_NameList))
        continue;
      if (! r05_brackets_left(p+8, p[4], p[2]))
        continue;
      if (! r05_function_left(p+10, p[8], p[9], &r05f_TkName))
        continue;
      if (! r05_brackets_left(p+11, p[9], p[2]))
        continue;
      if (! r05_function_left(p+13, p[11], p[12], &r05f_TkOpenBlock))
        continue;
      if (! r05_brackets_right(p+14, p[12], p[2]))
        continue;
      if (! r05_empty_hole(p[6], p[4]))
        continue;
      r05_close_evar(p+16, p[7], p[6]);
      r05_close_evar(p+18, p[12], p[14]);
      r05_close_evar(p+20, p[14], p[15]);
      if (! r05_tvar_left(p+22, p[10], p[9]))
        continue;
      r05_close_evar(p+24, p[23], p[9]);
      if (! r05_tvar_left(p+26, p[13], p[12]))
        continue;
      if (! r05_empty_hole(p[27], p[12]))
        continue;

      r05_reset_allocator();
      r05_alloc_open_bracket(p+28);
      r05_alloc_function(&r05f_NameList);
      r05_alloc_insert_pos(p+29);
      r05_alloc_close_bracket(p+30);
      r05_alloc_open_bracket(p+31);
      r05_alloc_function(&r05f_TkName);
      r05_alloc_insert_pos(p+32);
      r05_alloc_close_bracket(p+33);
      r05_alloc_open_bracket(p+34);
      r05_alloc_function(&r05f_TkOpenBlock);
      r05_alloc_insert_pos(p+35);
      r05_alloc_close_bracket(p+36);
      r05_alloc_insert_pos(p+37);
      r05_alloc_open_bracket(p+38);
      r05_alloc_insert_pos(p+39);
      r05_alloc_open_bracket(p+40);
      r05_alloc_function(&r05f_Error);
      r05_alloc_tvar(p+22);
      r05_alloc_chars("missed semicolon after previous $EXTERN declaration", 51);
      r05_alloc_close_bracket(p+41);
      r05_alloc_close_bracket(p+42);
      r05_link_brackets(p[38], p[42]);
      r05_link_brackets(p[40], p[41]);
      r05_link_brackets(p[34], p[36]);
      r05_link_brackets(p[31], p[33]);
      r05_link_brackets(p[28], p[30]);
      r05_splice_evar(p[29], p+16);
      r05_splice_tvar(p[32], p+22);
      r05_splice_evar(p[32], p+24);
      r05_splice_tvar(p[35], p+26);
      r05_splice_evar(p[37], p+18);
      r05_splice_evar(p[39], p+20);
      r05_splice_from_freelist(p[0]);
      r05_splice_to_freelist(p[0], p[2]);
      return;
    } while (0);

    do {
      /* e.Names: 13 */
      /* e.Tokens: 15 */
      /* e.Errors: 17 */
      /* t.Pos: 19 */
      /* e.Name: 21 */
      /* ((NameList e.Names)) (TkName t.Pos e.Name) e.Tokens (e.Errors) */
      if (! r05_brackets_left(p+3, p[1], p[2]))
        continue;
      if (! r05_brackets_left(p+5, p[3], p[4]))
        continue;
      if (! r05_function_left(p+7, p[5], p[6], &r05f_NameList))
        continue;
      if (! r05_brackets_left(p+8, p[4], p[2]))
        continue;
      if (! r05_function_left(p+10, p[8], p[9], &r05f_TkName))
        continue;
      if (! r05_brackets_right(p+11, p[9], p[2]))
        continue;
      if (! r05_empty_hole(p[6], p[4]))
        continue;
      r05_close_evar(p+13, p[7], p[6]);
      r05_close_evar(p+15, p[9], p[11]);
      r05_close_evar(p+17, p[11], p[12]);
      if (! r05_tvar_left(p+19, p[10], p[9]))
        continue;
      r05_close_evar(p+21, p[20], p[9]);

      r05_reset_allocator();
      r05_alloc_open_call(p+23);
      r05_alloc_function(&r05f_NameList);
      r05_alloc_open_bracket(p+24);
      r05_alloc_open_bracket(p+25);
      r05_alloc_function(&r05f_NameList);
      r05_alloc_insert_pos(p+26);
      r05_alloc_open_bracket(p+27);
      r05_alloc_insert_pos(p+28);
      r05_alloc_close_bracket(p+29);
      r05_alloc_close_bracket(p+30);
      r05_alloc_close_bracket(p+31);
      r05_alloc_insert_pos(p+32);
      r05_alloc_open_bracket(p+33);
      r05_alloc_insert_pos(p+34);
      r05_alloc_open_bracket(p+35);
      r05_alloc_function(&r05f_Error);
      r05_alloc_tvar(p+19);
      r05_alloc_chars("missed comma after external name", 32);
      r05_alloc_close_bracket(p+36);
      r05_alloc_close_bracket(p+37);
      r05_alloc_close_call(p+38);
      r05_push_stack(p[38]);
      r05_push_stack(p[23]);
      r05_link_brackets(p[33], p[37]);
      r05_link_brackets(p[35], p[36]);
      r05_link_brackets(p[24], p[31]);
      r05_link_brackets(p[25], p[30]);
      r05_link_brackets(p[27], p[29]);
      r05_splice_evar(p[26], p+13);
      r05_splice_tvar(p[28], p+19);
      r05_splice_evar(p[28], p+21);
      r05_splice_evar(p[32], p+15);
      r05_splice_evar(p[34], p+17);
      r05_splice_from_freelist(p[0]);
      r05_splice_to_freelist(p[0], p[2]);
      return;
    } while (0);

    do {
      /* e.Names: 10 */
      /* e.Tokens: 12 */
      /* e.Errors: 14 */
      /* ((NameList e.Names)) e.Tokens (e.Errors) */
      if (! r05_brackets_left(p+3, p[1], p[2]))
        continue;
      if (! r05_brackets_left(p+5, p[3], p[4]))
        continue;
      if (! r05_function_left(p+7, p[5], p[6], &r05f_NameList))
        continue;
      if (! r05_brackets_right(p+8, p[4], p[2]))
        continue;
      if (! r05_empty_hole(p[6], p[4]))
        continue;
      r05_close_evar(p+10, p[7], p[6]);
      r05_close_evar(p+12, p[4], p[8]);
      r05_close_evar(p+14, p[8], p[9]);

      r05_reset_allocator();
      r05_alloc_open_bracket(p+16);
      r05_alloc_function(&r05f_NameList);
      r05_alloc_insert_pos(p+17);
      r05_alloc_close_bracket(p+18);
      r05_alloc_insert_pos(p+19);
      r05_alloc_open_bracket(p+20);
      r05_alloc_insert_pos(p+21);
      r05_alloc_close_bracket(p+22);
      r05_link_brackets(p[20], p[22]);
      r05_link_brackets(p[16], p[18]);
      r05_splice_evar(p[17], p+10);
      r05_splice_evar(p[19], p+12);
      r05_splice_evar(p[21], p+14);
      r05_splice_from_freelist(p[0]);
      r05_splice_to_freelist(p[0], p[2]);
      return;
    } while (0);

    r05_recognition_impossible();
  }
}

R05_DEFINE_LOCAL_FUNCTION(FunctionDef, "FunctionDef") {
  struct r05_node *p[42] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /* e.Scanned: 10 */
    /* e.Tokens: 12 */
    /* e.Errors: 14 */
    /* t.Pos: 16 */
    /* e.Text: 18 */
    /* (e.Scanned) (TkSpecComment t.Pos e.Text) e.Tokens (e.Errors) */
    if (! r05_brackets_left(p+3, p[1], p[2]))
      continue;
    if (! r05_brackets_left(p+5, p[4], p[2]))
      continue;
    if (! r05_function_left(p+7, p[5], p[6], &r05f_TkSpecComment))
      continue;
    if (! r05_brackets_right(p+8, p[6], p[2]))
      continue;
    r05_close_evar(p+10, p[3], p[4]);
    r05_close_evar(p+12, p[6], p[8]);
    r05_close_evar(p+14, p[8], p[9]);
    if (! r05_tvar_left(p+16, p[7], p[6]))
      continue;
    r05_close_evar(p+18, p[17], p[6]);

    r05_reset_allocator();
    r05_alloc_open_call(p+20);
    r05_alloc_function(&r05f_FunctionDef);
    r05_alloc_open_bracket(p+21);
    r05_alloc_insert_pos(p+22);
    r05_alloc_close_bracket(p+23);
    r05_alloc_insert_pos(p+24);
    r05_alloc_open_bracket(p+25);
    r05_alloc_insert_pos(p+26);
    r05_alloc_close_bracket(p+27);
    r05_alloc_close_call(p+28);
    r05_push_stack(p[28]);
    r05_push_stack(p[20]);
    r05_link_brackets(p[25], p[27]);
    r05_link_brackets(p[21], p[23]);
    r05_splice_evar(p[22], p+10);
    r05_splice_evar(p[24], p+12);
    r05_splice_evar(p[26], p+14);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  do {
    /* e.Tokens: 10 */
    /* e.Errors: 12 */
    /* t.EntryPos: 14 */
    /* () (TkEntry t.EntryPos) e.Tokens (e.Errors) */
    if (! r05_brackets_left(p+3, p[1], p[2]))
      continue;
    if (! r05_brackets_left(p+5, p[4], p[2]))
      continue;
    if (! r05_function_left(p+7, p[5], p[6], &r05f_TkEntry))
      continue;
    if (! r05_brackets_right(p+8, p[6], p[2]))
      continue;
    if (! r05_empty_hole(p[3], p[4]))
      continue;
    r05_close_evar(p+10, p[6], p[8]);
    r05_close_evar(p+12, p[8], p[9]);
    if (! r05_tvar_left(p+14, p[7], p[6]))
      continue;
    if (! r05_empty_hole(p[15], p[6]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_call(p+16);
    r05_alloc_function(&r05f_FunctionDef);
    r05_alloc_open_bracket(p+17);
    r05_alloc_open_bracket(p+18);
    r05_alloc_function(&r05f_TkEntry);
    r05_alloc_insert_pos(p+19);
    r05_alloc_close_bracket(p+20);
    r05_alloc_close_bracket(p+21);
    r05_alloc_insert_pos(p+22);
    r05_alloc_open_bracket(p+23);
    r05_alloc_insert_pos(p+24);
    r05_alloc_close_bracket(p+25);
    r05_alloc_close_call(p+26);
    r05_push_stack(p[26]);
    r05_push_stack(p[16]);
    r05_link_brackets(p[23], p[25]);
    r05_link_brackets(p[17], p[21]);
    r05_link_brackets(p[18], p[20]);
    r05_splice_tvar(p[19], p+14);
    r05_splice_evar(p[22], p+10);
    r05_splice_evar(p[24], p+12);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  do {
    /* e.Tokens: 13 */
    /* e.Errors: 15 */
    /* t.EntryPos: 17 */
    /* t.NamePos: 19 */
    /* e.Name: 21 */
    /* ((TkEntry t.EntryPos)) (TkName t.NamePos e.Name) e.Tokens (e.Errors) */
    if (! r05_brackets_left(p+3, p[1], p[2]))
      continue;
    if (! r05_brackets_left(p+5, p[3], p[4]))
      continue;
    if (! r05_function_left(p+7, p[5], p[6], &r05f_TkEntry))
      continue;
    if (! r05_brackets_left(p+8, p[4], p[2]))
      continue;
    if (! r05_function_left(p+10, p[8], p[9], &r05f_TkName))
      continue;
    if (! r05_brackets_right(p+11, p[9], p[2]))
      continue;
    if (! r05_empty_hole(p[6], p[4]))
      continue;
    r05_close_evar(p+13, p[9], p[11]);
    r05_close_evar(p+15, p[11], p[12]);
    if (! r05_tvar_left(p+17, p[7], p[6]))
      continue;
    if (! r05_empty_hole(p[18], p[6]))
      continue;
    if (! r05_tvar_left(p+19, p[10], p[9]))
      continue;
    r05_close_evar(p+21, p[20], p[9]);

    r05_reset_allocator();
    r05_alloc_open_call(p+23);
    r05_alloc_function(&r05f_FunctionDef);
    r05_alloc_open_bracket(p+24);
    r05_alloc_insert_pos(p+25);
    r05_alloc_open_bracket(p+26);
    r05_alloc_insert_pos(p+27);
    r05_alloc_close_bracket(p+28);
    r05_alloc_function(&r05f_Entry);
    r05_alloc_close_bracket(p+29);
    r05_alloc_insert_pos(p+30);
    r05_alloc_open_bracket(p+31);
    r05_alloc_insert_pos(p+32);
    r05_alloc_close_bracket(p+33);
    r05_alloc_close_call(p+34);
    r05_push_stack(p[34]);
    r05_push_stack(p[23]);
    r05_link_brackets(p[31], p[33]);
    r05_link_brackets(p[24], p[29]);
    r05_link_brackets(p[26], p[28]);
    r05_splice_tvar(p[25], p+17);
    r05_splice_evar(p[27], p+21);
    r05_splice_evar(p[30], p+13);
    r05_splice_evar(p[32], p+15);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  do {
    /* e.Tokens: 10 */
    /* e.Errors: 12 */
    /* t.EntryPos: 14 */
    /* ((TkEntry t.EntryPos)) e.Tokens (e.Errors) */
    if (! r05_brackets_left(p+3, p[1], p[2]))
      continue;
    if (! r05_brackets_left(p+5, p[3], p[4]))
      continue;
    if (! r05_function_left(p+7, p[5], p[6], &r05f_TkEntry))
      continue;
    if (! r05_brackets_right(p+8, p[4], p[2]))
      continue;
    if (! r05_empty_hole(p[6], p[4]))
      continue;
    r05_close_evar(p+10, p[4], p[8]);
    r05_close_evar(p+12, p[8], p[9]);
    if (! r05_tvar_left(p+14, p[7], p[6]))
      continue;
    if (! r05_empty_hole(p[15], p[6]))
      continue;

    r05_reset_allocator();
    r05_alloc_insert_pos(p+16);
    r05_alloc_open_bracket(p+17);
    r05_alloc_insert_pos(p+18);
    r05_alloc_open_bracket(p+19);
    r05_alloc_function(&r05f_Error);
    r05_alloc_insert_pos(p+20);
    r05_alloc_chars("$ENTRY without function name, skipped", 37);
    r05_alloc_close_bracket(p+21);
    r05_alloc_close_bracket(p+22);
    r05_link_brackets(p[17], p[22]);
    r05_link_brackets(p[19], p[21]);
    r05_splice_evar(p[16], p+10);
    r05_splice_evar(p[18], p+12);
    r05_splice_tvar(p[20], p+14);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  do {
    /* e.Tokens: 10 */
    /* e.Errors: 12 */
    /* t.Pos: 14 */
    /* e.Name: 16 */
    /* () (TkName t.Pos e.Name) e.Tokens (e.Errors) */
    if (! r05_brackets_left(p+3, p[1], p[2]))
      continue;
    if (! r05_brackets_left(p+5, p[4], p[2]))
      continue;
    if (! r05_function_left(p+7, p[5], p[6], &r05f_TkName))
      continue;
    if (! r05_brackets_right(p+8, p[6], p[2]))
      continue;
    if (! r05_empty_hole(p[3], p[4]))
      continue;
    r05_close_evar(p+10, p[6], p[8]);
    r05_close_evar(p+12, p[8], p[9]);
    if (! r05_tvar_left(p+14, p[7], p[6]))
      continue;
    r05_close_evar(p+16, p[15], p[6]);

    r05_reset_allocator();
    r05_alloc_open_call(p+18);
    r05_alloc_function(&r05f_FunctionDef);
    r05_alloc_open_bracket(p+19);
    r05_alloc_insert_pos(p+20);
    r05_alloc_open_bracket(p+21);
    r05_alloc_insert_pos(p+22);
    r05_alloc_close_bracket(p+23);
    r05_alloc_function(&r05f_Local);
    r05_alloc_close_bracket(p+24);
    r05_alloc_insert_pos(p+25);
    r05_alloc_open_bracket(p+26);
    r05_alloc_insert_pos(p+27);
    r05_alloc_close_bracket(p+28);
    r05_alloc_close_call(p+29);
    r05_push_stack(p[29]);
    r05_push_stack(p[18]);
    r05_link_brackets(p[26], p[28]);
    r05_link_brackets(p[19], p[24]);
    r05_link_brackets(p[21], p[23]);
    r05_splice_tvar(p[20], p+14);
    r05_splice_evar(p[22], p+16);
    r05_splice_evar(p[25], p+10);
    r05_splice_evar(p[27], p+12);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  do {
    /* e.Sentences: 10 */
    /* e.Tokens: 12 */
    /* e.Errors: 14 */
    /* t.Pos: 16 */
    /* e.Name: 20 */
    /* s.Scope: 22 */
    /* (t.Pos (e.Name) s.Scope) (Block e.Sentences) e.Tokens (e.Errors) */
    if (! r05_brackets_left(p+3, p[1], p[2]))
      continue;
    if (! r05_brackets_left(p+5, p[4], p[2]))
      continue;
    if (! r05_function_left(p+7, p[5], p[6], &r05f_Block))
      continue;
    if (! r05_brackets_right(p+8, p[6], p[2]))
      continue;
    r05_close_evar(p+10, p[7], p[6]);
    r05_close_evar(p+12, p[6], p[8]);
    r05_close_evar(p+14, p[8], p[9]);
    if (! r05_tvar_left(p+16, p[3], p[4]))
      continue;
    if (! r05_brackets_left(p+18, p[17], p[4]))
      continue;
    r05_close_evar(p+20, p[18], p[19]);
    if (! r05_svar_left(p+22, p[19], p[4]))
      continue;
    if (! r05_empty_hole(p[22], p[4]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_bracket(p+23);
    r05_alloc_function(&r05f_Function);
    r05_alloc_insert_pos(p+24);
    r05_alloc_open_bracket(p+25);
    r05_alloc_insert_pos(p+26);
    r05_alloc_close_bracket(p+27);
    r05_alloc_svar(p+22);
    r05_alloc_insert_pos(p+28);
    r05_alloc_close_bracket(p+29);
    r05_alloc_insert_pos(p+30);
    r05_alloc_open_bracket(p+31);
    r05_alloc_insert_pos(p+32);
    r05_alloc_close_bracket(p+33);
    r05_link_brackets(p[31], p[33]);
    r05_link_brackets(p[23], p[29]);
    r05_link_brackets(p[25], p[27]);
    r05_splice_tvar(p[24], p+16);
    r05_splice_evar(p[26], p+20);
    r05_splice_evar(p[28], p+10);
    r05_splice_evar(p[30], p+12);
    r05_splice_evar(p[32], p+14);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  do {
    /* e.Tokens: 10 */
    /* e.Errors: 12 */
    /* t.Pos: 14 */
    /* e.Name: 18 */
    /* s.Scope: 20 */
    /* t.OpenPos: 21 */
    /* (t.Pos (e.Name) s.Scope) (TkOpenBlock t.OpenPos) e.Tokens (e.Errors) */
    if (! r05_brackets_left(p+3, p[1], p[2]))
      continue;
    if (! r05_brackets_left(p+5, p[4], p[2]))
      continue;
    if (! r05_function_left(p+7, p[5], p[6], &r05f_TkOpenBlock))
      continue;
    if (! r05_brackets_right(p+8, p[6], p[2]))
      continue;
    r05_close_evar(p+10, p[6], p[8]);
    r05_close_evar(p+12, p[8], p[9]);
    if (! r05_tvar_left(p+14, p[3], p[4]))
      continue;
    if (! r05_brackets_left(p+16, p[15], p[4]))
      continue;
    r05_close_evar(p+18, p[16], p[17]);
    if (! r05_svar_left(p+20, p[17], p[4]))
      continue;
    if (! r05_empty_hole(p[20], p[4]))
      continue;
    if (! r05_tvar_left(p+21, p[7], p[6]))
      continue;
    if (! r05_empty_hole(p[22], p[6]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_call(p+23);
    r05_alloc_function(&r05f_FunctionDef);
    r05_alloc_open_bracket(p+24);
    r05_alloc_insert_pos(p+25);
    r05_alloc_open_bracket(p+26);
    r05_alloc_insert_pos(p+27);
    r05_alloc_close_bracket(p+28);
    r05_alloc_svar(p+20);
    r05_alloc_close_bracket(p+29);
    r05_alloc_open_call(p+30);
    r05_alloc_function(&r05f_Block);
    r05_alloc_open_bracket(p+31);
    r05_alloc_close_bracket(p+32);
    r05_alloc_open_bracket(p+33);
    r05_alloc_function(&r05f_TkOpenBlock);
    r05_alloc_insert_pos(p+34);
    r05_alloc_close_bracket(p+35);
    r05_alloc_insert_pos(p+36);
    r05_alloc_open_bracket(p+37);
    r05_alloc_insert_pos(p+38);
    r05_alloc_close_bracket(p+39);
    r05_alloc_close_call(p+40);
    r05_alloc_close_call(p+41);
    r05_push_stack(p[41]);
    r05_push_stack(p[23]);
    r05_push_stack(p[40]);
    r05_push_stack(p[30]);
    r05_link_brackets(p[37], p[39]);
    r05_link_brackets(p[33], p[35]);
    r05_link_brackets(p[31], p[32]);
    r05_link_brackets(p[24], p[29]);
    r05_link_brackets(p[26], p[28]);
    r05_splice_tvar(p[25], p+14);
    r05_splice_evar(p[27], p+18);
    r05_splice_tvar(p[34], p+21);
    r05_splice_evar(p[36], p+10);
    r05_splice_evar(p[38], p+12);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  do {
    /* e.Errors: 7 */
    /* t.Pos: 9 */
    /* e.Name: 13 */
    /* s.Scope: 15 */
    /* t.Unexpected: 16 */
    /* e.Tokens: 18 */
    /* (t.Pos (e.Name) s.Scope) t.Unexpected e.Tokens (e.Errors) */
    if (! r05_brackets_left(p+3, p[1], p[2]))
      continue;
    if (! r05_brackets_right(p+5, p[4], p[2]))
      continue;
    r05_close_evar(p+7, p[5], p[6]);
    if (! r05_tvar_left(p+9, p[3], p[4]))
      continue;
    if (! r05_brackets_left(p+11, p[10], p[4]))
      continue;
    r05_close_evar(p+13, p[11], p[12]);
    if (! r05_svar_left(p+15, p[12], p[4]))
      continue;
    if (! r05_empty_hole(p[15], p[4]))
      continue;
    if (! r05_tvar_left(p+16, p[4], p[5]))
      continue;
    r05_close_evar(p+18, p[17], p[5]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+20);
    r05_alloc_function(&r05f_Function);
    r05_alloc_insert_pos(p+21);
    r05_alloc_open_bracket(p+22);
    r05_alloc_insert_pos(p+23);
    r05_alloc_close_bracket(p+24);
    r05_alloc_svar(p+15);
    r05_alloc_close_bracket(p+25);
    r05_alloc_insert_pos(p+26);
    r05_alloc_open_bracket(p+27);
    r05_alloc_insert_pos(p+28);
    r05_alloc_open_call(p+29);
    r05_alloc_function(&r05f_UnexpectedToken);
    r05_alloc_tvar(p+16);
    r05_alloc_chars("\'{\'", 3);
    r05_alloc_close_call(p+30);
    r05_alloc_close_bracket(p+31);
    r05_link_brackets(p[27], p[31]);
    r05_push_stack(p[30]);
    r05_push_stack(p[29]);
    r05_link_brackets(p[20], p[25]);
    r05_link_brackets(p[22], p[24]);
    r05_splice_tvar(p[21], p+9);
    r05_splice_evar(p[23], p+13);
    r05_splice_tvar(p[26], p+16);
    r05_splice_evar(p[26], p+18);
    r05_splice_evar(p[28], p+7);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(Block, "Block") {
  struct r05_node *p[33] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /* e.Scanned: 10 */
    /* e.Tokens: 12 */
    /* e.Errors: 14 */
    /* t.Pos: 16 */
    /* e.Text: 18 */
    /* (e.Scanned) (TkSpecComment t.Pos e.Text) e.Tokens (e.Errors) */
    if (! r05_brackets_left(p+3, p[1], p[2]))
      continue;
    if (! r05_brackets_left(p+5, p[4], p[2]))
      continue;
    if (! r05_function_left(p+7, p[5], p[6], &r05f_TkSpecComment))
      continue;
    if (! r05_brackets_right(p+8, p[6], p[2]))
      continue;
    r05_close_evar(p+10, p[3], p[4]);
    r05_close_evar(p+12, p[6], p[8]);
    r05_close_evar(p+14, p[8], p[9]);
    if (! r05_tvar_left(p+16, p[7], p[6]))
      continue;
    r05_close_evar(p+18, p[17], p[6]);

    r05_reset_allocator();
    r05_alloc_open_call(p+20);
    r05_alloc_function(&r05f_Block);
    r05_alloc_open_bracket(p+21);
    r05_alloc_insert_pos(p+22);
    r05_alloc_close_bracket(p+23);
    r05_alloc_insert_pos(p+24);
    r05_alloc_open_bracket(p+25);
    r05_alloc_insert_pos(p+26);
    r05_alloc_close_bracket(p+27);
    r05_alloc_close_call(p+28);
    r05_push_stack(p[28]);
    r05_push_stack(p[20]);
    r05_link_brackets(p[25], p[27]);
    r05_link_brackets(p[21], p[23]);
    r05_splice_evar(p[22], p+10);
    r05_splice_evar(p[24], p+12);
    r05_splice_evar(p[26], p+14);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  do {
    /* e.Tokens: 10 */
    /* e.Errors: 12 */
    /* t.OpenPos: 14 */
    /* () (TkOpenBlock t.OpenPos) e.Tokens (e.Errors) */
    if (! r05_brackets_left(p+3, p[1], p[2]))
      continue;
    if (! r05_brackets_left(p+5, p[4], p[2]))
      continue;
    if (! r05_function_left(p+7, p[5], p[6], &r05f_TkOpenBlock))
      continue;
    if (! r05_brackets_right(p+8, p[6], p[2]))
      continue;
    if (! r05_empty_hole(p[3], p[4]))
      continue;
    r05_close_evar(p+10, p[6], p[8]);
    r05_close_evar(p+12, p[8], p[9]);
    if (! r05_tvar_left(p+14, p[7], p[6]))
      continue;
    if (! r05_empty_hole(p[15], p[6]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_call(p+16);
    r05_alloc_function(&r05f_Block);
    r05_alloc_open_bracket(p+17);
    r05_alloc_char('{');
    r05_alloc_insert_pos(p+18);
    r05_alloc_close_bracket(p+19);
    r05_alloc_open_call(p+20);
    r05_alloc_function(&r05f_Sentences);
    r05_alloc_open_bracket(p+21);
    r05_alloc_close_bracket(p+22);
    r05_alloc_insert_pos(p+23);
    r05_alloc_open_bracket(p+24);
    r05_alloc_insert_pos(p+25);
    r05_alloc_close_bracket(p+26);
    r05_alloc_close_call(p+27);
    r05_alloc_close_call(p+28);
    r05_push_stack(p[28]);
    r05_push_stack(p[16]);
    r05_push_stack(p[27]);
    r05_push_stack(p[20]);
    r05_link_brackets(p[24], p[26]);
    r05_link_brackets(p[21], p[22]);
    r05_link_brackets(p[17], p[19]);
    r05_splice_tvar(p[18], p+14);
    r05_splice_evar(p[23], p+10);
    r05_splice_evar(p[25], p+12);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  do {
    /* e.Errors: 7 */
    /* t.Unexpected: 9 */
    /* e.Tokens: 11 */
    /* () t.Unexpected e.Tokens (e.Errors) */
    if (! r05_brackets_left(p+3, p[1], p[2]))
      continue;
    if (! r05_brackets_right(p+5, p[4], p[2]))
      continue;
    if (! r05_empty_hole(p[3], p[4]))
      continue;
    r05_close_evar(p+7, p[5], p[6]);
    if (! r05_tvar_left(p+9, p[4], p[5]))
      continue;
    r05_close_evar(p+11, p[10], p[5]);

    r05_reset_allocator();
    r05_alloc_insert_pos(p+13);
    r05_alloc_open_bracket(p+14);
    r05_alloc_insert_pos(p+15);
    r05_alloc_open_call(p+16);
    r05_alloc_function(&r05f_UnexpectedToken);
    r05_alloc_insert_pos(p+17);
    r05_alloc_chars("\'{\'", 3);
    r05_alloc_close_call(p+18);
    r05_alloc_close_bracket(p+19);
    r05_link_brackets(p[14], p[19]);
    r05_push_stack(p[18]);
    r05_push_stack(p[16]);
    r05_splice_evar(p[13], p+11);
    r05_splice_evar(p[15], p+7);
    r05_splice_tvar(p[17], p+9);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  do {
    /* e.Sentences: 11 */
    /* e.Tokens: 13 */
    /* e.Errors: 15 */
    /* t.OpenPos: 17 */
    /* ('{' t.OpenPos) (Sentences e.Sentences) e.Tokens (e.Errors) */
    if (! r05_brackets_left(p+3, p[1], p[2]))
      continue;
    if (! r05_char_left(p+5, p[3], p[4], '{'))
      continue;
    if (! r05_brackets_left(p+6, p[4], p[2]))
      continue;
    if (! r05_function_left(p+8, p[6], p[7], &r05f_Sentences))
      continue;
    if (! r05_brackets_right(p+9, p[7], p[2]))
      continue;
    r05_close_evar(p+11, p[8], p[7]);
    r05_close_evar(p+13, p[7], p[9]);
    r05_close_evar(p+15, p[9], p[10]);
    if (! r05_tvar_left(p+17, p[5], p[4]))
      continue;
    if (! r05_empty_hole(p[18], p[4]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_call(p+19);
    r05_alloc_function(&r05f_Block);
    r05_alloc_open_bracket(p+20);
    r05_alloc_char('{');
    r05_alloc_insert_pos(p+21);
    r05_alloc_open_bracket(p+22);
    r05_alloc_insert_pos(p+23);
    r05_alloc_close_bracket(p+24);
    r05_alloc_close_bracket(p+25);
    r05_alloc_insert_pos(p+26);
    r05_alloc_open_bracket(p+27);
    r05_alloc_insert_pos(p+28);
    r05_alloc_open_call(p+29);
    r05_alloc_function(&r05f_CheckEmptyBlock);
    r05_alloc_tvar(p+17);
    r05_alloc_evar(p+11);
    r05_alloc_close_call(p+30);
    r05_alloc_close_bracket(p+31);
    r05_alloc_close_call(p+32);
    r05_push_stack(p[32]);
    r05_push_stack(p[19]);
    r05_link_brackets(p[27], p[31]);
    r05_push_stack(p[30]);
    r05_push_stack(p[29]);
    r05_link_brackets(p[20], p[25]);
    r05_link_brackets(p[22], p[24]);
    r05_splice_tvar(p[21], p+17);
    r05_splice_evar(p[23], p+11);
    r05_splice_evar(p[26], p+13);
    r05_splice_evar(p[28], p+15);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  do {
    /* e.Sentences: 13 */
    /* e.Tokens: 15 */
    /* e.Errors: 17 */
    /* t.OpenPos: 19 */
    /* t.Pos: 21 */
    /* ('{' t.OpenPos (e.Sentences)) (TkCloseBlock t.Pos) e.Tokens (e.Errors) */
    if (! r05_brackets_left(p+3, p[1], p[2]))
      continue;
    if (! r05_char_left(p+5, p[3], p[4], '{'))
      continue;
    if (! r05_brackets_left(p+6, p[4], p[2]))
      continue;
    if (! r05_function_left(p+8, p[6], p[7], &r05f_TkCloseBlock))
      continue;
    if (! r05_brackets_right(p+9, p[5], p[4]))
      continue;
    if (! r05_brackets_right(p+11, p[7], p[2]))
      continue;
    r05_close_evar(p+13, p[9], p[10]);
    r05_close_evar(p+15, p[7], p[11]);
    r05_close_evar(p+17, p[11], p[12]);
    if (! r05_tvar_left(p+19, p[5], p[9]))
      continue;
    if (! r05_empty_hole(p[20], p[9]))
      continue;
    if (! r05_tvar_left(p+21, p[8], p[7]))
      continue;
    if (! r05_empty_hole(p[22], p[7]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_bracket(p+23);
    r05_alloc_function(&r05f_Block);
    r05_alloc_insert_pos(p+24);
    r05_alloc_close_bracket(p+25);
    r05_alloc_insert_pos(p+26);
    r05_alloc_open_bracket(p+27);
    r05_alloc_insert_pos(p+28);
    r05_alloc_close_bracket(p+29);
    r05_link_brackets(p[27], p[29]);
    r05_link_brackets(p[23], p[25]);
    r05_splice_evar(p[24], p+13);
    r05_splice_evar(p[26], p+15);
    r05_splice_evar(p[28], p+17);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  do {
    /* e.Sentences: 10 */
    /* e.Errors: 12 */
    /* t.OpenPos: 14 */
    /* t.Unexpected: 16 */
    /* e.Tokens: 18 */
    /* ('{' t.OpenPos (e.Sentences)) t.Unexpected e.Tokens (e.Errors) */
    if (! r05_brackets_left(p+3, p[1], p[2]))
      continue;
    if (! r05_char_left(p+5, p[3], p[4], '{'))
      continue;
    if (! r05_brackets_right(p+6, p[5], p[4]))
      continue;
    if (! r05_brackets_right(p+8, p[4], p[2]))
      continue;
    r05_close_evar(p+10, p[6], p[7]);
    r05_close_evar(p+12, p[8], p[9]);
    if (! r05_tvar_left(p+14, p[5], p[6]))
      continue;
    if (! r05_empty_hole(p[15], p[6]))
      continue;
    if (! r05_tvar_left(p+16, p[4], p[8]))
      continue;
    r05_close_evar(p+18, p[17], p[8]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+20);
    r05_alloc_function(&r05f_Block);
    r05_alloc_insert_pos(p+21);
    r05_alloc_close_bracket(p+22);
    r05_alloc_insert_pos(p+23);
    r05_alloc_open_bracket(p+24);
    r05_alloc_insert_pos(p+25);
    r05_alloc_open_call(p+26);
    r05_alloc_function(&r05f_UnexpectedToken);
    r05_alloc_tvar(p+16);
    r05_alloc_chars("\'}\'", 3);
    r05_alloc_close_call(p+27);
    r05_alloc_close_bracket(p+28);
    r05_link_brackets(p[24], p[28]);
    r05_push_stack(p[27]);
    r05_push_stack(p[26]);
    r05_link_brackets(p[20], p[22]);
    r05_splice_evar(p[21], p+10);
    r05_splice_tvar(p[23], p+16);
    r05_splice_evar(p[23], p+18);
    r05_splice_evar(p[25], p+12);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(CheckEmptyBlock, "CheckEmptyBlock") {
  struct r05_node *p[8] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /* t.Pos: 3 */
    /* t.Pos */
    if (! r05_tvar_left(p+3, p[1], p[2]))
      continue;
    if (! r05_empty_hole(p[4], p[2]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_bracket(p+5);
    r05_alloc_function(&r05f_Error);
    r05_alloc_insert_pos(p+6);
    r05_alloc_chars("Empty function block", 20);
    r05_alloc_close_bracket(p+7);
    r05_link_brackets(p[5], p[7]);
    r05_splice_tvar(p[6], p+3);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  do {
    /* t.Pos: 3 */
    /* e.Sentences: 5 */
    /* t.Pos e.Sentences */
    if (! r05_tvar_left(p+3, p[1], p[2]))
      continue;
    r05_close_evar(p+5, p[4], p[2]);

    r05_reset_allocator();
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(Sentences, "Sentences") {
  R05_DEFINE_COND_FUNCTION(Sentences, "Sentences$1", 1)
  R05_DEFINE_COND_FUNCTION(Sentences, "Sentences$2", 2)
  R05_DEFINE_COND_FUNCTION(Sentences, "Sentences$3", 3)
  R05_DEFINE_COND_FUNCTION(Sentences, "Sentences$4", 4)
  struct r05_node *p[51] = { 0 };

  r05_this_is_generated_function();
  switch (arg_begin->next->info.function->resume_entry >> 1) {
  case 0:
    p[0] = arg_begin;
    p[1] = arg_begin->next;
    p[2] = arg_end;

    do {
      /* e.Scanned: 10 */
      /* e.Tokens: 12 */
      /* e.Errors: 14 */
      /* t.Pos: 16 */
      /* e.Text: 18 */
      /* (e.Scanned) (TkSpecComment t.Pos e.Text) e.Tokens (e.Errors) */
      if (! r05_brackets_left(p+3, p[1], p[2]))
        continue;
      if (! r05_brackets_left(p+5, p[4], p[2]))
        continue;
      if (! r05_function_left(p+7, p[5], p[6], &r05f_TkSpecComment))
        continue;
      if (! r05_brackets_right(p+8, p[6], p[2]))
        continue;
      r05_close_evar(p+10, p[3], p[4]);
      r05_close_evar(p+12, p[6], p[8]);
      r05_close_evar(p+14, p[8], p[9]);
      if (! r05_tvar_left(p+16, p[7], p[6]))
        continue;
      r05_close_evar(p+18, p[17], p[6]);

      r05_reset_allocator();
      r05_alloc_open_call(p+20);
      r05_alloc_function(&r05f_Sentences);
      r05_alloc_open_bracket(p+21);
      r05_alloc_insert_pos(p+22);
      r05_alloc_close_bracket(p+23);
      r05_alloc_insert_pos(p+24);
      r05_alloc_open_bracket(p+25);
      r05_alloc_insert_pos(p+26);
      r05_alloc_close_bracket(p+27);
      r05_alloc_close_call(p+28);
      r05_push_stack(p[28]);
      r05_push_stack(p[20]);
      r05_link_brackets(p[25], p[27]);
      r05_link_brackets(p[21], p[23]);
      r05_splice_evar(p[22], p+10);
      r05_splice_evar(p[24], p+12);
      r05_splice_evar(p[26], p+14);
      r05_splice_from_freelist(p[0]);
      r05_splice_to_freelist(p[0], p[2]);
      return;
    } while (0);

    do {
      /* e.Errors: 7 */
      /* t.Start: 9 */
      /* e.Tokens: 11 */
      /* () t.Start e.Tokens (e.Errors) */
      if (! r05_brackets_left(p+3, p[1], p[2]))
        continue;
      if (! r05_brackets_right(p+5, p[4], p[2]))
        continue;
      if (! r05_empty_hole(p[3], p[4]))
        continue;
      r05_close_evar(p+7, p[5], p[6]);
      if (! r05_tvar_left(p+9, p[4], p[5]))
        continue;
      r05_close_evar(p+11, p[10], p[5]);

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
        /* e.Errors: 7 */
        /* t.Start: 9 */
        /* e.Tokens: 11 */
        /* s.Type: 18 */
        /* t.Pos: 19 */
        /* e.Value: 21 */
        /* (s.Type t.Pos e.Value) */
        if (! r05_brackets_left(p+16, p[14], p[15]))
          continue;
        if (! r05_empty_hole(p[17], p[15]))
          continue;
        if (! r05_svar_left(p+18, p[16], p[17]))
          continue;
        if (! r05_tvar_left(p+19, p[18], p[17]))
          continue;
        r05_close_evar(p+21, p[20], p[17]);

        r05_reset_allocator();
        r05_alloc_open_call(p+23);
        r05_alloc_function(&c2);
        r05_alloc_open_call(p+24);
        r05_alloc_function(&r05f_FIRSTu_Sentence);
        r05_alloc_close_call(p+25);
        r05_alloc_close_call(p+26);
        r05_push_stack(p[26]);
        r05_push_stack(p[23]);
        r05_push_stack(p[25]);
        r05_push_stack(p[24]);
        r05_push_context(p, 23);
        r05_splice_from_freelist(p[2]);
        return;

  case 2:
        r05_pop_context(p, 23);
        p[23] = arg_begin;
        p[24] = arg_begin->next;
        p[25] = arg_end;

        do {
          /* e.Errors: 7 */
          /* t.Start: 9 */
          /* e.Tokens: 11 */
          /* s.Type: 18, 28 */
          /* t.Pos: 19 */
          /* e.Value: 21 */
          /* e.1: 26 */
          /* e.2: 29 */
          /* e.1 s.Type e.2 */
          p[26] = NULL;
          p[27] = p[24];
          do {
            r05_start_e_loop();
            if (! r05_repeated_svar_left(p+28, p[27], p[25], p+18))
              continue;
            r05_close_evar(p+29, p[28], p[25]);

            r05_reset_allocator();
            r05_alloc_open_call(p+31);
            r05_alloc_function(&r05f_Sentences);
            r05_alloc_open_bracket(p+32);
            r05_alloc_close_bracket(p+33);
            r05_alloc_open_call(p+34);
            r05_alloc_function(&r05f_Sentence);
            r05_alloc_open_bracket(p+35);
            r05_alloc_close_bracket(p+36);
            r05_alloc_insert_pos(p+37);
            r05_alloc_open_bracket(p+38);
            r05_alloc_insert_pos(p+39);
            r05_alloc_close_bracket(p+40);
            r05_alloc_close_call(p+41);
            r05_alloc_close_call(p+42);
            r05_push_stack(p[42]);
            r05_push_stack(p[31]);
            r05_push_stack(p[41]);
            r05_push_stack(p[34]);
            r05_link_brackets(p[38], p[40]);
            r05_link_brackets(p[35], p[36]);
            r05_link_brackets(p[32], p[33]);
            r05_splice_tvar(p[37], p+9);
            r05_splice_evar(p[37], p+11);
            r05_splice_evar(p[39], p+7);
            r05_splice_from_freelist(p[0]);
            r05_splice_to_freelist(p[0], p[2]);
            return;
          } while (r05_open_evar_advance(p+26, p[25]));
          r05_stop_e_loop();
        } while (0);
        r05_splice_to_freelist(p[23], p[25]);
      } while (0);
      r05_splice_to_freelist(p[13], p[15]);
    } while (0);

    do {
      /* e.Tokens: 10 */
      /* e.Errors: 12 */
      /* t.Sentence: 14 */
      /* () (Sentence t.Sentence) e.Tokens (e.Errors) */
      if (! r05_brackets_left(p+3, p[1], p[2]))
        continue;
      if (! r05_brackets_left(p+5, p[4], p[2]))
        continue;
      if (! r05_function_left(p+7, p[5], p[6], &r05f_Sentence))
        continue;
      if (! r05_brackets_right(p+8, p[6], p[2]))
        continue;
      if (! r05_empty_hole(p[3], p[4]))
        continue;
      r05_close_evar(p+10, p[6], p[8]);
      r05_close_evar(p+12, p[8], p[9]);
      if (! r05_tvar_left(p+14, p[7], p[6]))
        continue;
      if (! r05_empty_hole(p[15], p[6]))
        continue;

      r05_reset_allocator();
      r05_alloc_open_call(p+16);
      r05_alloc_function(&r05f_Sentences);
      r05_alloc_open_bracket(p+17);
      r05_alloc_open_bracket(p+18);
      r05_alloc_insert_pos(p+19);
      r05_alloc_close_bracket(p+20);
      r05_alloc_close_bracket(p+21);
      r05_alloc_insert_pos(p+22);
      r05_alloc_open_bracket(p+23);
      r05_alloc_insert_pos(p+24);
      r05_alloc_close_bracket(p+25);
      r05_alloc_close_call(p+26);
      r05_push_stack(p[26]);
      r05_push_stack(p[16]);
      r05_link_brackets(p[23], p[25]);
      r05_link_brackets(p[17], p[21]);
      r05_link_brackets(p[18], p[20]);
      r05_splice_tvar(p[19], p+14);
      r05_splice_evar(p[22], p+10);
      r05_splice_evar(p[24], p+12);
      r05_splice_from_freelist(p[0]);
      r05_splice_to_freelist(p[0], p[2]);
      return;
    } while (0);

    do {
      /* e.Errors: 7 */
      /* t.Unexpected: 9 */
      /* e.Tokens: 11 */
      /* () t.Unexpected e.Tokens (e.Errors) */
      if (! r05_brackets_left(p+3, p[1], p[2]))
        continue;
      if (! r05_brackets_right(p+5, p[4], p[2]))
        continue;
      if (! r05_empty_hole(p[3], p[4]))
        continue;
      r05_close_evar(p+7, p[5], p[6]);
      if (! r05_tvar_left(p+9, p[4], p[5]))
        continue;
      r05_close_evar(p+11, p[10], p[5]);

      r05_reset_allocator();
      r05_alloc_open_bracket(p+13);
      r05_alloc_function(&r05f_Sentences);
      r05_alloc_close_bracket(p+14);
      r05_alloc_insert_pos(p+15);
      r05_alloc_open_bracket(p+16);
      r05_alloc_insert_pos(p+17);
      r05_alloc_open_call(p+18);
      r05_alloc_function(&r05f_UnexpectedToken);
      r05_alloc_tvar(p+9);
      r05_alloc_chars("start of sentence", 17);
      r05_alloc_close_call(p+19);
      r05_alloc_close_bracket(p+20);
      r05_link_brackets(p[16], p[20]);
      r05_push_stack(p[19]);
      r05_push_stack(p[18]);
      r05_link_brackets(p[13], p[14]);
      r05_splice_tvar(p[15], p+9);
      r05_splice_evar(p[15], p+11);
      r05_splice_evar(p[17], p+7);
      r05_splice_from_freelist(p[0]);
      r05_splice_to_freelist(p[0], p[2]);
      return;
    } while (0);

    do {
      /* e.Sentences: 12 */
      /* e.Tokens: 14 */
      /* e.Errors: 16 */
      /* t.Pos: 18 */
      /* ((e.Sentences)) (TkSemicolon t.Pos) e.Tokens (e.Errors) */
      if (! r05_brackets_left(p+3, p[1], p[2]))
        continue;
      if (! r05_brackets_left(p+5, p[3], p[4]))
        continue;
      if (! r05_brackets_left(p+7, p[4], p[2]))
        continue;
      if (! r05_function_left(p+9, p[7], p[8], &r05f_TkSemicolon))
        continue;
      if (! r05_brackets_right(p+10, p[8], p[2]))
        continue;
      if (! r05_empty_hole(p[6], p[4]))
        continue;
      r05_close_evar(p+12, p[5], p[6]);
      r05_close_evar(p+14, p[8], p[10]);
      r05_close_evar(p+16, p[10], p[11]);
      if (! r05_tvar_left(p+18, p[9], p[8]))
        continue;
      if (! r05_empty_hole(p[19], p[8]))
        continue;

      r05_reset_allocator();
      r05_alloc_open_call(p+20);
      r05_alloc_function(&r05f_Sentences);
      r05_alloc_open_bracket(p+21);
      r05_alloc_open_bracket(p+22);
      r05_alloc_insert_pos(p+23);
      r05_alloc_close_bracket(p+24);
      r05_alloc_char(';');
      r05_alloc_close_bracket(p+25);
      r05_alloc_insert_pos(p+26);
      r05_alloc_open_bracket(p+27);
      r05_alloc_insert_pos(p+28);
      r05_alloc_close_bracket(p+29);
      r05_alloc_close_call(p+30);
      r05_push_stack(p[30]);
      r05_push_stack(p[20]);
      r05_link_brackets(p[27], p[29]);
      r05_link_brackets(p[21], p[25]);
      r05_link_brackets(p[22], p[24]);
      r05_splice_evar(p[23], p+12);
      r05_splice_evar(p[26], p+14);
      r05_splice_evar(p[28], p+16);
      r05_splice_from_freelist(p[0]);
      r05_splice_to_freelist(p[0], p[2]);
      return;
    } while (0);

    do {
      /* e.Sentences: 9 */
      /* e.Tokens: 11 */
      /* e.Errors: 13 */
      /* ((e.Sentences)) e.Tokens (e.Errors) */
      if (! r05_brackets_left(p+3, p[1], p[2]))
        continue;
      if (! r05_brackets_left(p+5, p[3], p[4]))
        continue;
      if (! r05_brackets_right(p+7, p[4], p[2]))
        continue;
      if (! r05_empty_hole(p[6], p[4]))
        continue;
      r05_close_evar(p+9, p[5], p[6]);
      r05_close_evar(p+11, p[4], p[7]);
      r05_close_evar(p+13, p[7], p[8]);

      r05_reset_allocator();
      r05_alloc_open_bracket(p+15);
      r05_alloc_function(&r05f_Sentences);
      r05_alloc_insert_pos(p+16);
      r05_alloc_close_bracket(p+17);
      r05_alloc_insert_pos(p+18);
      r05_alloc_open_bracket(p+19);
      r05_alloc_insert_pos(p+20);
      r05_alloc_close_bracket(p+21);
      r05_link_brackets(p[19], p[21]);
      r05_link_brackets(p[15], p[17]);
      r05_splice_evar(p[16], p+9);
      r05_splice_evar(p[18], p+11);
      r05_splice_evar(p[20], p+13);
      r05_splice_from_freelist(p[0]);
      r05_splice_to_freelist(p[0], p[2]);
      return;
    } while (0);

    do {
      /* e.Sentences: 10 */
      /* e.Errors: 12 */
      /* t.Start: 14 */
      /* e.Tokens: 16 */
      /* ((e.Sentences) ';') t.Start e.Tokens (e.Errors) */
      if (! r05_brackets_left(p+3, p[1], p[2]))
        continue;
      if (! r05_char_right(p+5, p[3], p[4], ';'))
        continue;
      if (! r05_brackets_left(p+6, p[3], p[5]))
        continue;
      if (! r05_brackets_right(p+8, p[4], p[2]))
        continue;
      if (! r05_empty_hole(p[7], p[5]))
        continue;
      r05_close_evar(p+10, p[6], p[7]);
      r05_close_evar(p+12, p[8], p[9]);
      if (! r05_tvar_left(p+14, p[4], p[8]))
        continue;
      r05_close_evar(p+16, p[15], p[8]);

      r05_reset_allocator();
      r05_alloc_open_call(p+18);
      r05_alloc_function(&c3);
      r05_alloc_tvar(p+14);
      r05_alloc_close_call(p+19);
      r05_push_stack(p[19]);
      r05_push_stack(p[18]);
      r05_push_context(p, 18);
      r05_splice_from_freelist(p[2]);
      return;

  case 3:
      r05_pop_context(p, 18);
      p[18] = arg_begin;
      p[19] = arg_begin->next;
      p[20] = arg_end;

      do {
        /* e.Sentences: 10 */
        /* e.Errors: 12 */
        /* t.Start: 14 */
        /* e.Tokens: 16 */
        /* s.Type: 23 */
        /* t.Pos: 24 */
        /* e.Value: 26 */
        /* (s.Type t.Pos e.Value) */
        if (! r05_brackets_left(p+21, p[19], p[20]))
          continue;
        if (! r05_empty_hole(p[22], p[20]))
          continue;
        if (! r05_svar_left(p+23, p[21], p[22]))
          continue;
        if (! r05_tvar_left(p+24, p[23], p[22]))
          continue;
        r05_close_evar(p+26, p[25], p[22]);

        r05_reset_allocator();
        r05_alloc_open_call(p+28);
        r05_alloc_function(&c4);
        r05_alloc_open_call(p+29);
        r05_alloc_function(&r05f_FIRSTu_Sentence);
        r05_alloc_close_call(p+30);
        r05_alloc_close_call(p+31);
        r05_push_stack(p[31]);
        r05_push_stack(p[28]);
        r05_push_stack(p[30]);
        r05_push_stack(p[29]);
        r05_push_context(p, 28);
        r05_splice_from_freelist(p[2]);
        return;

  case 4:
        r05_pop_context(p, 28);
        p[28] = arg_begin;
        p[29] = arg_begin->next;
        p[30] = arg_end;

        do {
          /* e.Sentences: 10 */
          /* e.Errors: 12 */
          /* t.Start: 14 */
          /* e.Tokens: 16 */
          /* s.Type: 23, 33 */
          /* t.Pos: 24 */
          /* e.Value: 26 */
          /* e.1: 31 */
          /* e.2: 34 */
          /* e.1 s.Type e.2 */
          p[31] = NULL;
          p[32] = p[29];
          do {
            r05_start_e_loop();
            if (! r05_repeated_svar_left(p+33, p[32], p[30], p+23))
              continue;
            r05_close_evar(p+34, p[33], p[30]);

            r05_reset_allocator();
            r05_alloc_open_call(p+36);
            r05_alloc_function(&r05f_Sentences);
            r05_alloc_open_bracket(p+37);
            r05_alloc_open_bracket(p+38);
            r05_alloc_insert_pos(p+39);
            r05_alloc_close_bracket(p+40);
            r05_alloc_char(';');
            r05_alloc_close_bracket(p+41);
            r05_alloc_open_call(p+42);
            r05_alloc_function(&r05f_Sentence);
            r05_alloc_open_bracket(p+43);
            r05_alloc_close_bracket(p+44);
            r05_alloc_insert_pos(p+45);
            r05_alloc_open_bracket(p+46);
            r05_alloc_insert_pos(p+47);
            r05_alloc_close_bracket(p+48);
            r05_alloc_close_call(p+49);
            r05_alloc_close_call(p+50);
            r05_push_stack(p[50]);
            r05_push_stack(p[36]);
            r05_push_stack(p[49]);
            r05_push_stack(p[42]);
            r05_link_brackets(p[46], p[48]);
            r05_link_brackets(p[43], p[44]);
            r05_link_brackets(p[37], p[41]);
            r05_link_brackets(p[38], p[40]);
            r05_splice_evar(p[39], p+10);
            r05_splice_tvar(p[45], p+14);
            r05_splice_evar(p[45], p+16);
            r05_splice_evar(p[47], p+12);
            r05_splice_from_freelist(p[0]);
            r05_splice_to_freelist(p[0], p[2]);
            return;
          } while (r05_open_evar_advance(p+31, p[30]));
          r05_stop_e_loop();
        } while (0);
        r05_splice_to_freelist(p[28], p[30]);
      } while (0);
      r05_splice_to_freelist(p[18], p[20]);
    } while (0);

    do {
      /* e.Sentences: 13 */
      /* e.Tokens: 15 */
      /* e.Errors: 17 */
      /* t.Sentence: 19 */
      /* ((e.Sentences) ';') (Sentence t.Sentence) e.Tokens (e.Errors) */
      if (! r05_brackets_left(p+3, p[1], p[2]))
        continue;
      if (! r05_char_right(p+5, p[3], p[4], ';'))
        continue;
      if (! r05_brackets_left(p+6, p[3], p[5]))
        continue;
      if (! r05_brackets_left(p+8, p[4], p[2]))
        continue;
      if (! r05_function_left(p+10, p[8], p[9], &r05f_Sentence))
        continue;
      if (! r05_brackets_right(p+11, p[9], p[2]))
        continue;
      if (! r05_empty_hole(p[7], p[5]))
        continue;
      r05_close_evar(p+13, p[6], p[7]);
      r05_close_evar(p+15, p[9], p[11]);
      r05_close_evar(p+17, p[11], p[12]);
      if (! r05_tvar_left(p+19, p[10], p[9]))
        continue;
      if (! r05_empty_hole(p[20], p[9]))
        continue;

      r05_reset_allocator();
      r05_alloc_open_call(p+21);
      r05_alloc_function(&r05f_Sentences);
      r05_alloc_open_bracket(p+22);
      r05_alloc_open_bracket(p+23);
      r05_alloc_insert_pos(p+24);
      r05_alloc_close_bracket(p+25);
      r05_alloc_close_bracket(p+26);
      r05_alloc_insert_pos(p+27);
      r05_alloc_open_bracket(p+28);
      r05_alloc_insert_pos(p+29);
      r05_alloc_close_bracket(p+30);
      r05_alloc_close_call(p+31);
      r05_push_stack(p[31]);
      r05_push_stack(p[21]);
      r05_link_brackets(p[28], p[30]);
      r05_link_brackets(p[22], p[26]);
      r05_link_brackets(p[23], p[25]);
      r05_splice_evar(p[24], p+13);
      r05_splice_tvar(p[24], p+19);
      r05_splice_evar(p[27], p+15);
      r05_splice_evar(p[29], p+17);
      r05_splice_from_freelist(p[0]);
      r05_splice_to_freelist(p[0], p[2]);
      return;
    } while (0);

    do {
      /* e.Sentences: 10 */
      /* e.Tokens: 12 */
      /* e.Errors: 14 */
      /* ((e.Sentences) ';') e.Tokens (e.Errors) */
      if (! r05_brackets_left(p+3, p[1], p[2]))
        continue;
      if (! r05_char_right(p+5, p[3], p[4], ';'))
        continue;
      if (! r05_brackets_left(p+6, p[3], p[5]))
        continue;
      if (! r05_brackets_right(p+8, p[4], p[2]))
        continue;
      if (! r05_empty_hole(p[7], p[5]))
        continue;
      r05_close_evar(p+10, p[6], p[7]);
      r05_close_evar(p+12, p[4], p[8]);
      r05_close_evar(p+14, p[8], p[9]);

      r05_reset_allocator();
      r05_alloc_open_bracket(p+16);
      r05_alloc_function(&r05f_Sentences);
      r05_alloc_insert_pos(p+17);
      r05_alloc_close_bracket(p+18);
      r05_alloc_insert_pos(p+19);
      r05_alloc_open_bracket(p+20);
      r05_alloc_insert_pos(p+21);
      r05_alloc_close_bracket(p+22);
      r05_link_brackets(p[20], p[22]);
      r05_link_brackets(p[16], p[18]);
      r05_splice_evar(p[17], p+10);
      r05_splice_evar(p[19], p+12);
      r05_splice_evar(p[21], p+14);
      r05_splice_from_freelist(p[0]);
      r05_splice_to_freelist(p[0], p[2]);
      return;
    } while (0);

    r05_recognition_impossible();
  }
}

R05_DEFINE_LOCAL_FUNCTION(FIRSTu_Sentence, "FIRST_Sentence") {
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
    r05_alloc_function(&r05f_FIRSTu_Term);
    r05_alloc_close_call(p+4);
    r05_alloc_function(&r05f_TkAssign);
    r05_alloc_function(&r05f_TkComma);
    r05_push_stack(p[4]);
    r05_push_stack(p[3]);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(Sentence, "Sentence") {
  struct r05_node *p[29] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /* e.Scanned: 10 */
    /* e.Tokens: 12 */
    /* e.Errors: 14 */
    /* t.Pos: 16 */
    /* e.Text: 18 */
    /* (e.Scanned) (TkSpecComment t.Pos e.Text) e.Tokens (e.Errors) */
    if (! r05_brackets_left(p+3, p[1], p[2]))
      continue;
    if (! r05_brackets_left(p+5, p[4], p[2]))
      continue;
    if (! r05_function_left(p+7, p[5], p[6], &r05f_TkSpecComment))
      continue;
    if (! r05_brackets_right(p+8, p[6], p[2]))
      continue;
    r05_close_evar(p+10, p[3], p[4]);
    r05_close_evar(p+12, p[6], p[8]);
    r05_close_evar(p+14, p[8], p[9]);
    if (! r05_tvar_left(p+16, p[7], p[6]))
      continue;
    r05_close_evar(p+18, p[17], p[6]);

    r05_reset_allocator();
    r05_alloc_open_call(p+20);
    r05_alloc_function(&r05f_Sentence);
    r05_alloc_open_bracket(p+21);
    r05_alloc_insert_pos(p+22);
    r05_alloc_close_bracket(p+23);
    r05_alloc_insert_pos(p+24);
    r05_alloc_open_bracket(p+25);
    r05_alloc_insert_pos(p+26);
    r05_alloc_close_bracket(p+27);
    r05_alloc_close_call(p+28);
    r05_push_stack(p[28]);
    r05_push_stack(p[20]);
    r05_link_brackets(p[25], p[27]);
    r05_link_brackets(p[21], p[23]);
    r05_splice_evar(p[22], p+10);
    r05_splice_evar(p[24], p+12);
    r05_splice_evar(p[26], p+14);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  do {
    /* e.Tokens: 10 */
    /* e.Errors: 12 */
    /* t.Pattern: 14 */
    /* () (Pattern t.Pattern) e.Tokens (e.Errors) */
    if (! r05_brackets_left(p+3, p[1], p[2]))
      continue;
    if (! r05_brackets_left(p+5, p[4], p[2]))
      continue;
    if (! r05_function_left(p+7, p[5], p[6], &r05f_Pattern))
      continue;
    if (! r05_brackets_right(p+8, p[6], p[2]))
      continue;
    if (! r05_empty_hole(p[3], p[4]))
      continue;
    r05_close_evar(p+10, p[6], p[8]);
    r05_close_evar(p+12, p[8], p[9]);
    if (! r05_tvar_left(p+14, p[7], p[6]))
      continue;
    if (! r05_empty_hole(p[15], p[6]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_call(p+16);
    r05_alloc_function(&r05f_Sentence);
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
    r05_splice_tvar(p[18], p+14);
    r05_splice_evar(p[20], p+10);
    r05_splice_evar(p[22], p+12);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  do {
    /* e.Tokens: 7 */
    /* e.Errors: 9 */
    /* () e.Tokens (e.Errors) */
    if (! r05_brackets_left(p+3, p[1], p[2]))
      continue;
    if (! r05_brackets_right(p+5, p[4], p[2]))
      continue;
    if (! r05_empty_hole(p[3], p[4]))
      continue;
    r05_close_evar(p+7, p[4], p[5]);
    r05_close_evar(p+9, p[5], p[6]);

    r05_reset_allocator();
    r05_alloc_open_call(p+11);
    r05_alloc_function(&r05f_Sentence);
    r05_alloc_open_bracket(p+12);
    r05_alloc_close_bracket(p+13);
    r05_alloc_open_call(p+14);
    r05_alloc_function(&r05f_Pattern);
    r05_alloc_open_bracket(p+15);
    r05_alloc_close_bracket(p+16);
    r05_alloc_insert_pos(p+17);
    r05_alloc_open_bracket(p+18);
    r05_alloc_insert_pos(p+19);
    r05_alloc_close_bracket(p+20);
    r05_alloc_close_call(p+21);
    r05_alloc_close_call(p+22);
    r05_push_stack(p[22]);
    r05_push_stack(p[11]);
    r05_push_stack(p[21]);
    r05_push_stack(p[14]);
    r05_link_brackets(p[18], p[20]);
    r05_link_brackets(p[15], p[16]);
    r05_link_brackets(p[12], p[13]);
    r05_splice_evar(p[17], p+7);
    r05_splice_evar(p[19], p+9);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  do {
    /* e.SentenceTail: 10 */
    /* e.Tokens: 12 */
    /* e.Errors: 14 */
    /* t.Pattern: 16 */
    /* (t.Pattern) (SentenceTail e.SentenceTail) e.Tokens (e.Errors) */
    if (! r05_brackets_left(p+3, p[1], p[2]))
      continue;
    if (! r05_brackets_left(p+5, p[4], p[2]))
      continue;
    if (! r05_function_left(p+7, p[5], p[6], &r05f_SentenceTail))
      continue;
    if (! r05_brackets_right(p+8, p[6], p[2]))
      continue;
    r05_close_evar(p+10, p[7], p[6]);
    r05_close_evar(p+12, p[6], p[8]);
    r05_close_evar(p+14, p[8], p[9]);
    if (! r05_tvar_left(p+16, p[3], p[4]))
      continue;
    if (! r05_empty_hole(p[17], p[4]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_bracket(p+18);
    r05_alloc_function(&r05f_Sentence);
    r05_alloc_open_bracket(p+19);
    r05_alloc_insert_pos(p+20);
    r05_alloc_close_bracket(p+21);
    r05_alloc_close_bracket(p+22);
    r05_alloc_insert_pos(p+23);
    r05_alloc_open_bracket(p+24);
    r05_alloc_insert_pos(p+25);
    r05_alloc_close_bracket(p+26);
    r05_link_brackets(p[24], p[26]);
    r05_link_brackets(p[18], p[22]);
    r05_link_brackets(p[19], p[21]);
    r05_splice_tvar(p[20], p+16);
    r05_splice_evar(p[20], p+10);
    r05_splice_evar(p[23], p+12);
    r05_splice_evar(p[25], p+14);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  do {
    /* e.Tokens: 7 */
    /* e.Errors: 9 */
    /* t.Pattern: 11 */
    /* (t.Pattern) e.Tokens (e.Errors) */
    if (! r05_brackets_left(p+3, p[1], p[2]))
      continue;
    if (! r05_brackets_right(p+5, p[4], p[2]))
      continue;
    r05_close_evar(p+7, p[4], p[5]);
    r05_close_evar(p+9, p[5], p[6]);
    if (! r05_tvar_left(p+11, p[3], p[4]))
      continue;
    if (! r05_empty_hole(p[12], p[4]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_call(p+13);
    r05_alloc_function(&r05f_Sentence);
    r05_alloc_open_bracket(p+14);
    r05_alloc_insert_pos(p+15);
    r05_alloc_close_bracket(p+16);
    r05_alloc_open_call(p+17);
    r05_alloc_function(&r05f_SentenceTail);
    r05_alloc_open_bracket(p+18);
    r05_alloc_close_bracket(p+19);
    r05_alloc_insert_pos(p+20);
    r05_alloc_open_bracket(p+21);
    r05_alloc_insert_pos(p+22);
    r05_alloc_close_bracket(p+23);
    r05_alloc_close_call(p+24);
    r05_alloc_close_call(p+25);
    r05_push_stack(p[25]);
    r05_push_stack(p[13]);
    r05_push_stack(p[24]);
    r05_push_stack(p[17]);
    r05_link_brackets(p[21], p[23]);
    r05_link_brackets(p[18], p[19]);
    r05_link_brackets(p[14], p[16]);
    r05_splice_tvar(p[15], p+11);
    r05_splice_evar(p[20], p+7);
    r05_splice_evar(p[22], p+9);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(UnexpectedTokenInSentence, "UnexpectedTokenInSentence") {
  struct r05_node *p[8] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /* t.Unexpected: 3 */
    /* t.Unexpected */
    if (! r05_tvar_left(p+3, p[1], p[2]))
      continue;
    if (! r05_empty_hole(p[4], p[2]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_call(p+5);
    r05_alloc_function(&r05f_UnexpectedToken);
    r05_alloc_insert_pos(p+6);
    r05_alloc_chars("valid Refal expression, \'=\', \',\', \':\' or \';\'", 44);
    r05_alloc_close_call(p+7);
    r05_push_stack(p[7]);
    r05_push_stack(p[5]);
    r05_splice_tvar(p[6], p+3);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(SentenceTail, "SentenceTail") {
  R05_DEFINE_COND_FUNCTION(SentenceTail, "SentenceTail$1", 1)
  struct r05_node *p[45] = { 0 };

  r05_this_is_generated_function();
  switch (arg_begin->next->info.function->resume_entry >> 1) {
  case 0:
    p[0] = arg_begin;
    p[1] = arg_begin->next;
    p[2] = arg_end;

    do {
      /* e.Scanned: 10 */
      /* e.Tokens: 12 */
      /* e.Errors: 14 */
      /* t.Pos: 16 */
      /* e.Text: 18 */
      /* (e.Scanned) (TkSpecComment t.Pos e.Text) e.Tokens (e.Errors) */
      if (! r05_brackets_left(p+3, p[1], p[2]))
        continue;
      if (! r05_brackets_left(p+5, p[4], p[2]))
        continue;
      if (! r05_function_left(p+7, p[5], p[6], &r05f_TkSpecComment))
        continue;
      if (! r05_brackets_right(p+8, p[6], p[2]))
        continue;
      r05_close_evar(p+10, p[3], p[4]);
      r05_close_evar(p+12, p[6], p[8]);
      r05_close_evar(p+14, p[8], p[9]);
      if (! r05_tvar_left(p+16, p[7], p[6]))
        continue;
      r05_close_evar(p+18, p[17], p[6]);

      r05_reset_allocator();
      r05_alloc_open_call(p+20);
      r05_alloc_function(&r05f_SentenceTail);
      r05_alloc_open_bracket(p+21);
      r05_alloc_insert_pos(p+22);
      r05_alloc_close_bracket(p+23);
      r05_alloc_insert_pos(p+24);
      r05_alloc_open_bracket(p+25);
      r05_alloc_insert_pos(p+26);
      r05_alloc_close_bracket(p+27);
      r05_alloc_close_call(p+28);
      r05_push_stack(p[28]);
      r05_push_stack(p[20]);
      r05_link_brackets(p[25], p[27]);
      r05_link_brackets(p[21], p[23]);
      r05_splice_evar(p[22], p+10);
      r05_splice_evar(p[24], p+12);
      r05_splice_evar(p[26], p+14);
      r05_splice_from_freelist(p[0]);
      r05_splice_to_freelist(p[0], p[2]);
      return;
    } while (0);

    do {
      /* e.Tokens: 10 */
      /* e.Errors: 12 */
      /* t.Pos: 14 */
      /* () (TkAssign t.Pos) e.Tokens (e.Errors) */
      if (! r05_brackets_left(p+3, p[1], p[2]))
        continue;
      if (! r05_brackets_left(p+5, p[4], p[2]))
        continue;
      if (! r05_function_left(p+7, p[5], p[6], &r05f_TkAssign))
        continue;
      if (! r05_brackets_right(p+8, p[6], p[2]))
        continue;
      if (! r05_empty_hole(p[3], p[4]))
        continue;
      r05_close_evar(p+10, p[6], p[8]);
      r05_close_evar(p+12, p[8], p[9]);
      if (! r05_tvar_left(p+14, p[7], p[6]))
        continue;
      if (! r05_empty_hole(p[15], p[6]))
        continue;

      r05_reset_allocator();
      r05_alloc_open_call(p+16);
      r05_alloc_function(&r05f_SentenceTail);
      r05_alloc_open_bracket(p+17);
      r05_alloc_char('=');
      r05_alloc_close_bracket(p+18);
      r05_alloc_open_call(p+19);
      r05_alloc_function(&r05f_Result);
      r05_alloc_open_bracket(p+20);
      r05_alloc_close_bracket(p+21);
      r05_alloc_insert_pos(p+22);
      r05_alloc_open_bracket(p+23);
      r05_alloc_insert_pos(p+24);
      r05_alloc_close_bracket(p+25);
      r05_alloc_close_call(p+26);
      r05_alloc_close_call(p+27);
      r05_push_stack(p[27]);
      r05_push_stack(p[16]);
      r05_push_stack(p[26]);
      r05_push_stack(p[19]);
      r05_link_brackets(p[23], p[25]);
      r05_link_brackets(p[20], p[21]);
      r05_link_brackets(p[17], p[18]);
      r05_splice_evar(p[22], p+10);
      r05_splice_evar(p[24], p+12);
      r05_splice_from_freelist(p[0]);
      r05_splice_to_freelist(p[0], p[2]);
      return;
    } while (0);

    do {
      /* e.Tokens: 10 */
      /* e.Errors: 12 */
      /* t.Pos: 14 */
      /* () (TkComma t.Pos) e.Tokens (e.Errors) */
      if (! r05_brackets_left(p+3, p[1], p[2]))
        continue;
      if (! r05_brackets_left(p+5, p[4], p[2]))
        continue;
      if (! r05_function_left(p+7, p[5], p[6], &r05f_TkComma))
        continue;
      if (! r05_brackets_right(p+8, p[6], p[2]))
        continue;
      if (! r05_empty_hole(p[3], p[4]))
        continue;
      r05_close_evar(p+10, p[6], p[8]);
      r05_close_evar(p+12, p[8], p[9]);
      if (! r05_tvar_left(p+14, p[7], p[6]))
        continue;
      if (! r05_empty_hole(p[15], p[6]))
        continue;

      r05_reset_allocator();
      r05_alloc_open_call(p+16);
      r05_alloc_function(&r05f_SentenceTail);
      r05_alloc_open_bracket(p+17);
      r05_alloc_char(',');
      r05_alloc_close_bracket(p+18);
      r05_alloc_open_call(p+19);
      r05_alloc_function(&r05f_Result);
      r05_alloc_open_bracket(p+20);
      r05_alloc_close_bracket(p+21);
      r05_alloc_insert_pos(p+22);
      r05_alloc_open_bracket(p+23);
      r05_alloc_insert_pos(p+24);
      r05_alloc_close_bracket(p+25);
      r05_alloc_close_call(p+26);
      r05_alloc_close_call(p+27);
      r05_push_stack(p[27]);
      r05_push_stack(p[16]);
      r05_push_stack(p[26]);
      r05_push_stack(p[19]);
      r05_link_brackets(p[23], p[25]);
      r05_link_brackets(p[20], p[21]);
      r05_link_brackets(p[17], p[18]);
      r05_splice_evar(p[22], p+10);
      r05_splice_evar(p[24], p+12);
      r05_splice_from_freelist(p[0]);
      r05_splice_to_freelist(p[0], p[2]);
      return;
    } while (0);

    do {
      /* e.Tokens: 10 */
      /* e.Errors: 12 */
      /* t.Pos: 14 */
      /* () (TkSemicolon t.Pos) e.Tokens (e.Errors) */
      if (! r05_brackets_left(p+3, p[1], p[2]))
        continue;
      if (! r05_brackets_left(p+5, p[4], p[2]))
        continue;
      if (! r05_function_left(p+7, p[5], p[6], &r05f_TkSemicolon))
        continue;
      if (! r05_brackets_right(p+8, p[6], p[2]))
        continue;
      if (! r05_empty_hole(p[3], p[4]))
        continue;
      r05_close_evar(p+10, p[6], p[8]);
      r05_close_evar(p+12, p[8], p[9]);
      if (! r05_tvar_left(p+14, p[7], p[6]))
        continue;
      if (! r05_empty_hole(p[15], p[6]))
        continue;

      r05_reset_allocator();
      r05_alloc_open_call(p+16);
      r05_alloc_function(&r05f_SentenceTail);
      r05_alloc_open_bracket(p+17);
      r05_alloc_char('=');
      r05_alloc_close_bracket(p+18);
      r05_alloc_open_call(p+19);
      r05_alloc_function(&r05f_Result);
      r05_alloc_open_bracket(p+20);
      r05_alloc_close_bracket(p+21);
      r05_alloc_open_bracket(p+22);
      r05_alloc_function(&r05f_TkSemicolon);
      r05_alloc_insert_pos(p+23);
      r05_alloc_close_bracket(p+24);
      r05_alloc_insert_pos(p+25);
      r05_alloc_open_bracket(p+26);
      r05_alloc_insert_pos(p+27);
      r05_alloc_open_bracket(p+28);
      r05_alloc_function(&r05f_Error);
      r05_alloc_tvar(p+14);
      r05_alloc_chars("Missed \'=\'", 10);
      r05_alloc_close_bracket(p+29);
      r05_alloc_close_bracket(p+30);
      r05_alloc_close_call(p+31);
      r05_alloc_close_call(p+32);
      r05_push_stack(p[32]);
      r05_push_stack(p[16]);
      r05_push_stack(p[31]);
      r05_push_stack(p[19]);
      r05_link_brackets(p[26], p[30]);
      r05_link_brackets(p[28], p[29]);
      r05_link_brackets(p[22], p[24]);
      r05_link_brackets(p[20], p[21]);
      r05_link_brackets(p[17], p[18]);
      r05_splice_tvar(p[23], p+14);
      r05_splice_evar(p[25], p+10);
      r05_splice_evar(p[27], p+12);
      r05_splice_from_freelist(p[0]);
      r05_splice_to_freelist(p[0], p[2]);
      return;
    } while (0);

    do {
      /* e.Tokens: 10 */
      /* e.Errors: 12 */
      /* t.Pos: 14 */
      /* () (TkColon t.Pos) e.Tokens (e.Errors) */
      if (! r05_brackets_left(p+3, p[1], p[2]))
        continue;
      if (! r05_brackets_left(p+5, p[4], p[2]))
        continue;
      if (! r05_function_left(p+7, p[5], p[6], &r05f_TkColon))
        continue;
      if (! r05_brackets_right(p+8, p[6], p[2]))
        continue;
      if (! r05_empty_hole(p[3], p[4]))
        continue;
      r05_close_evar(p+10, p[6], p[8]);
      r05_close_evar(p+12, p[8], p[9]);
      if (! r05_tvar_left(p+14, p[7], p[6]))
        continue;
      if (! r05_empty_hole(p[15], p[6]))
        continue;

      r05_reset_allocator();
      r05_alloc_open_call(p+16);
      r05_alloc_function(&r05f_SentenceTail);
      r05_alloc_open_bracket(p+17);
      r05_alloc_char(',');
      r05_alloc_close_bracket(p+18);
      r05_alloc_open_bracket(p+19);
      r05_alloc_function(&r05f_TkColon);
      r05_alloc_insert_pos(p+20);
      r05_alloc_close_bracket(p+21);
      r05_alloc_insert_pos(p+22);
      r05_alloc_open_bracket(p+23);
      r05_alloc_insert_pos(p+24);
      r05_alloc_open_bracket(p+25);
      r05_alloc_function(&r05f_Error);
      r05_alloc_tvar(p+14);
      r05_alloc_chars("Missed \',\'", 10);
      r05_alloc_close_bracket(p+26);
      r05_alloc_close_bracket(p+27);
      r05_alloc_close_call(p+28);
      r05_push_stack(p[28]);
      r05_push_stack(p[16]);
      r05_link_brackets(p[23], p[27]);
      r05_link_brackets(p[25], p[26]);
      r05_link_brackets(p[19], p[21]);
      r05_link_brackets(p[17], p[18]);
      r05_splice_tvar(p[20], p+14);
      r05_splice_evar(p[22], p+10);
      r05_splice_evar(p[24], p+12);
      r05_splice_from_freelist(p[0]);
      r05_splice_to_freelist(p[0], p[2]);
      return;
    } while (0);

    do {
      /* e.Errors: 7 */
      /* t.Unexpected: 9 */
      /* e.Tokens: 11 */
      /* () t.Unexpected e.Tokens (e.Errors) */
      if (! r05_brackets_left(p+3, p[1], p[2]))
        continue;
      if (! r05_brackets_right(p+5, p[4], p[2]))
        continue;
      if (! r05_empty_hole(p[3], p[4]))
        continue;
      r05_close_evar(p+7, p[5], p[6]);
      if (! r05_tvar_left(p+9, p[4], p[5]))
        continue;
      r05_close_evar(p+11, p[10], p[5]);

      r05_reset_allocator();
      r05_alloc_open_bracket(p+13);
      r05_alloc_function(&r05f_SentenceTail);
      r05_alloc_function(&r05f_RETURN);
      r05_alloc_open_bracket(p+14);
      r05_alloc_close_bracket(p+15);
      r05_alloc_close_bracket(p+16);
      r05_alloc_insert_pos(p+17);
      r05_alloc_open_bracket(p+18);
      r05_alloc_insert_pos(p+19);
      r05_alloc_open_call(p+20);
      r05_alloc_function(&r05f_UnexpectedTokenInSentence);
      r05_alloc_tvar(p+9);
      r05_alloc_close_call(p+21);
      r05_alloc_close_bracket(p+22);
      r05_link_brackets(p[18], p[22]);
      r05_push_stack(p[21]);
      r05_push_stack(p[20]);
      r05_link_brackets(p[13], p[16]);
      r05_link_brackets(p[14], p[15]);
      r05_splice_tvar(p[17], p+9);
      r05_splice_evar(p[17], p+11);
      r05_splice_evar(p[19], p+7);
      r05_splice_from_freelist(p[0]);
      r05_splice_to_freelist(p[0], p[2]);
      return;
    } while (0);

    do {
      /* e.Tokens: 11 */
      /* e.Errors: 13 */
      /* t.Result: 15 */
      /* ('=') (Result t.Result) e.Tokens (e.Errors) */
      if (! r05_brackets_left(p+3, p[1], p[2]))
        continue;
      if (! r05_char_left(p+5, p[3], p[4], '='))
        continue;
      if (! r05_brackets_left(p+6, p[4], p[2]))
        continue;
      if (! r05_function_left(p+8, p[6], p[7], &r05f_Result))
        continue;
      if (! r05_brackets_right(p+9, p[7], p[2]))
        continue;
      if (! r05_empty_hole(p[5], p[4]))
        continue;
      r05_close_evar(p+11, p[7], p[9]);
      r05_close_evar(p+13, p[9], p[10]);
      if (! r05_tvar_left(p+15, p[8], p[7]))
        continue;
      if (! r05_empty_hole(p[16], p[7]))
        continue;

      r05_reset_allocator();
      r05_alloc_open_bracket(p+17);
      r05_alloc_function(&r05f_SentenceTail);
      r05_alloc_function(&r05f_RETURN);
      r05_alloc_insert_pos(p+18);
      r05_alloc_close_bracket(p+19);
      r05_alloc_insert_pos(p+20);
      r05_alloc_open_bracket(p+21);
      r05_alloc_insert_pos(p+22);
      r05_alloc_close_bracket(p+23);
      r05_link_brackets(p[21], p[23]);
      r05_link_brackets(p[17], p[19]);
      r05_splice_tvar(p[18], p+15);
      r05_splice_evar(p[20], p+11);
      r05_splice_evar(p[22], p+13);
      r05_splice_from_freelist(p[0]);
      r05_splice_to_freelist(p[0], p[2]);
      return;
    } while (0);

    do {
      /* e.Tokens: 11 */
      /* e.Errors: 13 */
      /* t.Result: 15 */
      /* (',') (Result t.Result) e.Tokens (e.Errors) */
      if (! r05_brackets_left(p+3, p[1], p[2]))
        continue;
      if (! r05_char_left(p+5, p[3], p[4], ','))
        continue;
      if (! r05_brackets_left(p+6, p[4], p[2]))
        continue;
      if (! r05_function_left(p+8, p[6], p[7], &r05f_Result))
        continue;
      if (! r05_brackets_right(p+9, p[7], p[2]))
        continue;
      if (! r05_empty_hole(p[5], p[4]))
        continue;
      r05_close_evar(p+11, p[7], p[9]);
      r05_close_evar(p+13, p[9], p[10]);
      if (! r05_tvar_left(p+15, p[8], p[7]))
        continue;
      if (! r05_empty_hole(p[16], p[7]))
        continue;

      r05_reset_allocator();
      r05_alloc_open_call(p+17);
      r05_alloc_function(&r05f_SentenceTail);
      r05_alloc_open_bracket(p+18);
      r05_alloc_char(',');
      r05_alloc_insert_pos(p+19);
      r05_alloc_close_bracket(p+20);
      r05_alloc_insert_pos(p+21);
      r05_alloc_open_bracket(p+22);
      r05_alloc_insert_pos(p+23);
      r05_alloc_close_bracket(p+24);
      r05_alloc_close_call(p+25);
      r05_push_stack(p[25]);
      r05_push_stack(p[17]);
      r05_link_brackets(p[22], p[24]);
      r05_link_brackets(p[18], p[20]);
      r05_splice_tvar(p[19], p+15);
      r05_splice_evar(p[21], p+11);
      r05_splice_evar(p[23], p+13);
      r05_splice_from_freelist(p[0]);
      r05_splice_to_freelist(p[0], p[2]);
      return;
    } while (0);

    do {
      /* e.Tokens: 8 */
      /* e.Errors: 10 */
      /* (',') e.Tokens (e.Errors) */
      if (! r05_brackets_left(p+3, p[1], p[2]))
        continue;
      if (! r05_char_left(p+5, p[3], p[4], ','))
        continue;
      if (! r05_brackets_right(p+6, p[4], p[2]))
        continue;
      if (! r05_empty_hole(p[5], p[4]))
        continue;
      r05_close_evar(p+8, p[4], p[6]);
      r05_close_evar(p+10, p[6], p[7]);

      r05_reset_allocator();
      r05_alloc_open_call(p+12);
      r05_alloc_function(&r05f_SentenceTail);
      r05_alloc_open_bracket(p+13);
      r05_alloc_char(',');
      r05_alloc_close_bracket(p+14);
      r05_alloc_open_call(p+15);
      r05_alloc_function(&r05f_Result);
      r05_alloc_open_bracket(p+16);
      r05_alloc_close_bracket(p+17);
      r05_alloc_insert_pos(p+18);
      r05_alloc_open_bracket(p+19);
      r05_alloc_insert_pos(p+20);
      r05_alloc_close_bracket(p+21);
      r05_alloc_close_call(p+22);
      r05_alloc_close_call(p+23);
      r05_push_stack(p[23]);
      r05_push_stack(p[12]);
      r05_push_stack(p[22]);
      r05_push_stack(p[15]);
      r05_link_brackets(p[19], p[21]);
      r05_link_brackets(p[16], p[17]);
      r05_link_brackets(p[13], p[14]);
      r05_splice_evar(p[18], p+8);
      r05_splice_evar(p[20], p+10);
      r05_splice_from_freelist(p[0]);
      r05_splice_to_freelist(p[0], p[2]);
      return;
    } while (0);

    do {
      /* e.Tokens: 11 */
      /* e.Errors: 13 */
      /* t.Result: 15 */
      /* t.ColonPos: 17 */
      /* (',' t.Result) (TkColon t.ColonPos) e.Tokens (e.Errors) */
      if (! r05_brackets_left(p+3, p[1], p[2]))
        continue;
      if (! r05_char_left(p+5, p[3], p[4], ','))
        continue;
      if (! r05_brackets_left(p+6, p[4], p[2]))
        continue;
      if (! r05_function_left(p+8, p[6], p[7], &r05f_TkColon))
        continue;
      if (! r05_brackets_right(p+9, p[7], p[2]))
        continue;
      r05_close_evar(p+11, p[7], p[9]);
      r05_close_evar(p+13, p[9], p[10]);
      if (! r05_tvar_left(p+15, p[5], p[4]))
        continue;
      if (! r05_empty_hole(p[16], p[4]))
        continue;
      if (! r05_tvar_left(p+17, p[8], p[7]))
        continue;
      if (! r05_empty_hole(p[18], p[7]))
        continue;

      r05_reset_allocator();
      r05_alloc_open_call(p+19);
      r05_alloc_function(&r05f_SentenceTail);
      r05_alloc_open_bracket(p+20);
      r05_alloc_char(',');
      r05_alloc_insert_pos(p+21);
      r05_alloc_char(':');
      r05_alloc_close_bracket(p+22);
      r05_alloc_insert_pos(p+23);
      r05_alloc_open_bracket(p+24);
      r05_alloc_insert_pos(p+25);
      r05_alloc_close_bracket(p+26);
      r05_alloc_close_call(p+27);
      r05_push_stack(p[27]);
      r05_push_stack(p[19]);
      r05_link_brackets(p[24], p[26]);
      r05_link_brackets(p[20], p[22]);
      r05_splice_tvar(p[21], p+15);
      r05_splice_evar(p[23], p+11);
      r05_splice_evar(p[25], p+13);
      r05_splice_from_freelist(p[0]);
      r05_splice_to_freelist(p[0], p[2]);
      return;
    } while (0);

    do {
      /* e.Tokens: 12 */
      /* e.Errors: 14 */
      /* t.Result: 16 */
      /* t.BlockPos: 18 */
      /* (',' t.Result ':') (TkOpenBlock t.BlockPos) e.Tokens (e.Errors) */
      if (! r05_brackets_left(p+3, p[1], p[2]))
        continue;
      if (! r05_char_left(p+5, p[3], p[4], ','))
        continue;
      if (! r05_char_right(p+6, p[5], p[4], ':'))
        continue;
      if (! r05_brackets_left(p+7, p[4], p[2]))
        continue;
      if (! r05_function_left(p+9, p[7], p[8], &r05f_TkOpenBlock))
        continue;
      if (! r05_brackets_right(p+10, p[8], p[2]))
        continue;
      r05_close_evar(p+12, p[8], p[10]);
      r05_close_evar(p+14, p[10], p[11]);
      if (! r05_tvar_left(p+16, p[5], p[6]))
        continue;
      if (! r05_empty_hole(p[17], p[6]))
        continue;
      if (! r05_tvar_left(p+18, p[9], p[8]))
        continue;
      if (! r05_empty_hole(p[19], p[8]))
        continue;

      r05_reset_allocator();
      r05_alloc_open_call(p+20);
      r05_alloc_function(&r05f_SentenceTail);
      r05_alloc_open_bracket(p+21);
      r05_alloc_function(&r05f_CALLm_BLOCK);
      r05_alloc_insert_pos(p+22);
      r05_alloc_chars(":{", 2);
      r05_alloc_close_bracket(p+23);
      r05_alloc_open_call(p+24);
      r05_alloc_function(&r05f_Block);
      r05_alloc_open_bracket(p+25);
      r05_alloc_close_bracket(p+26);
      r05_alloc_open_bracket(p+27);
      r05_alloc_function(&r05f_TkOpenBlock);
      r05_alloc_insert_pos(p+28);
      r05_alloc_close_bracket(p+29);
      r05_alloc_insert_pos(p+30);
      r05_alloc_open_bracket(p+31);
      r05_alloc_insert_pos(p+32);
      r05_alloc_close_bracket(p+33);
      r05_alloc_close_call(p+34);
      r05_alloc_close_call(p+35);
      r05_push_stack(p[35]);
      r05_push_stack(p[20]);
      r05_push_stack(p[34]);
      r05_push_stack(p[24]);
      r05_link_brackets(p[31], p[33]);
      r05_link_brackets(p[27], p[29]);
      r05_link_brackets(p[25], p[26]);
      r05_link_brackets(p[21], p[23]);
      r05_splice_tvar(p[22], p+16);
      r05_splice_tvar(p[28], p+18);
      r05_splice_evar(p[30], p+12);
      r05_splice_evar(p[32], p+14);
      r05_splice_from_freelist(p[0]);
      r05_splice_to_freelist(p[0], p[2]);
      return;
    } while (0);

    do {
      /* e.Tokens: 11 */
      /* e.Errors: 13 */
      /* t.Result: 15 */
      /* t.Pos: 17 */
      /* (',' t.Result) (TkOpenBlock t.Pos) e.Tokens (e.Errors) */
      if (! r05_brackets_left(p+3, p[1], p[2]))
        continue;
      if (! r05_char_left(p+5, p[3], p[4], ','))
        continue;
      if (! r05_brackets_left(p+6, p[4], p[2]))
        continue;
      if (! r05_function_left(p+8, p[6], p[7], &r05f_TkOpenBlock))
        continue;
      if (! r05_brackets_right(p+9, p[7], p[2]))
        continue;
      r05_close_evar(p+11, p[7], p[9]);
      r05_close_evar(p+13, p[9], p[10]);
      if (! r05_tvar_left(p+15, p[5], p[4]))
        continue;
      if (! r05_empty_hole(p[16], p[4]))
        continue;
      if (! r05_tvar_left(p+17, p[8], p[7]))
        continue;
      if (! r05_empty_hole(p[18], p[7]))
        continue;

      r05_reset_allocator();
      r05_alloc_open_call(p+19);
      r05_alloc_function(&r05f_SentenceTail);
      r05_alloc_open_bracket(p+20);
      r05_alloc_function(&r05f_CALLm_BLOCK);
      r05_alloc_insert_pos(p+21);
      r05_alloc_chars(":{", 2);
      r05_alloc_close_bracket(p+22);
      r05_alloc_open_call(p+23);
      r05_alloc_function(&r05f_Block);
      r05_alloc_open_bracket(p+24);
      r05_alloc_close_bracket(p+25);
      r05_alloc_open_bracket(p+26);
      r05_alloc_function(&r05f_TkOpenBlock);
      r05_alloc_insert_pos(p+27);
      r05_alloc_close_bracket(p+28);
      r05_alloc_insert_pos(p+29);
      r05_alloc_open_bracket(p+30);
      r05_alloc_insert_pos(p+31);
      r05_alloc_open_bracket(p+32);
      r05_alloc_function(&r05f_Error);
      r05_alloc_tvar(p+17);
      r05_alloc_chars("Missed \':\' before block", 23);
      r05_alloc_close_bracket(p+33);
      r05_alloc_close_bracket(p+34);
      r05_alloc_close_call(p+35);
      r05_alloc_close_call(p+36);
      r05_push_stack(p[36]);
      r05_push_stack(p[19]);
      r05_push_stack(p[35]);
      r05_push_stack(p[23]);
      r05_link_brackets(p[30], p[34]);
      r05_link_brackets(p[32], p[33]);
      r05_link_brackets(p[26], p[28]);
      r05_link_brackets(p[24], p[25]);
      r05_link_brackets(p[20], p[22]);
      r05_splice_tvar(p[21], p+15);
      r05_splice_tvar(p[27], p+17);
      r05_splice_evar(p[29], p+11);
      r05_splice_evar(p[31], p+13);
      r05_splice_from_freelist(p[0]);
      r05_splice_to_freelist(p[0], p[2]);
      return;
    } while (0);

    do {
      /* e.Tokens: 11 */
      /* e.Errors: 13 */
      /* t.Result: 15 */
      /* t.Pos: 17 */
      /* (',' t.Result) (TkSemicolon t.Pos) e.Tokens (e.Errors) */
      if (! r05_brackets_left(p+3, p[1], p[2]))
        continue;
      if (! r05_char_left(p+5, p[3], p[4], ','))
        continue;
      if (! r05_brackets_left(p+6, p[4], p[2]))
        continue;
      if (! r05_function_left(p+8, p[6], p[7], &r05f_TkSemicolon))
        continue;
      if (! r05_brackets_right(p+9, p[7], p[2]))
        continue;
      r05_close_evar(p+11, p[7], p[9]);
      r05_close_evar(p+13, p[9], p[10]);
      if (! r05_tvar_left(p+15, p[5], p[4]))
        continue;
      if (! r05_empty_hole(p[16], p[4]))
        continue;
      if (! r05_tvar_left(p+17, p[8], p[7]))
        continue;
      if (! r05_empty_hole(p[18], p[7]))
        continue;

      r05_reset_allocator();
      r05_alloc_open_bracket(p+19);
      r05_alloc_function(&r05f_SentenceTail);
      r05_alloc_function(&r05f_RETURN);
      r05_alloc_insert_pos(p+20);
      r05_alloc_close_bracket(p+21);
      r05_alloc_open_bracket(p+22);
      r05_alloc_function(&r05f_TkSemicolon);
      r05_alloc_insert_pos(p+23);
      r05_alloc_close_bracket(p+24);
      r05_alloc_insert_pos(p+25);
      r05_alloc_open_bracket(p+26);
      r05_alloc_insert_pos(p+27);
      r05_alloc_open_bracket(p+28);
      r05_alloc_function(&r05f_Error);
      r05_alloc_tvar(p+17);
      r05_alloc_chars("Mistaken \',\' for \'=\'", 20);
      r05_alloc_close_bracket(p+29);
      r05_alloc_close_bracket(p+30);
      r05_link_brackets(p[26], p[30]);
      r05_link_brackets(p[28], p[29]);
      r05_link_brackets(p[22], p[24]);
      r05_link_brackets(p[19], p[21]);
      r05_splice_tvar(p[20], p+15);
      r05_splice_tvar(p[23], p+17);
      r05_splice_evar(p[25], p+11);
      r05_splice_evar(p[27], p+13);
      r05_splice_from_freelist(p[0]);
      r05_splice_to_freelist(p[0], p[2]);
      return;
    } while (0);

    do {
      /* e.Tokens: 10 */
      /* e.Errors: 12 */
      /* s.Type: 14 */
      /* t.Result: 15 */
      /* t.Pos: 17 */
      /* (',' t.Result) (s.Type t.Pos) e.Tokens (e.Errors) */
      if (! r05_brackets_left(p+3, p[1], p[2]))
        continue;
      if (! r05_char_left(p+5, p[3], p[4], ','))
        continue;
      if (! r05_brackets_left(p+6, p[4], p[2]))
        continue;
      if (! r05_brackets_right(p+8, p[7], p[2]))
        continue;
      r05_close_evar(p+10, p[7], p[8]);
      r05_close_evar(p+12, p[8], p[9]);
      if (! r05_svar_left(p+14, p[6], p[7]))
        continue;
      if (! r05_tvar_left(p+15, p[5], p[4]))
        continue;
      if (! r05_empty_hole(p[16], p[4]))
        continue;
      if (! r05_tvar_left(p+17, p[14], p[7]))
        continue;
      if (! r05_empty_hole(p[18], p[7]))
        continue;

      r05_reset_allocator();
      r05_alloc_open_call(p+19);
      r05_alloc_function(&c1);
      r05_alloc_function(&r05f_TkComma);
      r05_alloc_function(&r05f_TkAssign);
      r05_alloc_close_call(p+20);
      r05_push_stack(p[20]);
      r05_push_stack(p[19]);
      r05_push_context(p, 19);
      r05_splice_from_freelist(p[2]);
      return;

  case 1:
      r05_pop_context(p, 19);
      p[19] = arg_begin;
      p[20] = arg_begin->next;
      p[21] = arg_end;

      do {
        /* e.Tokens: 10 */
        /* e.Errors: 12 */
        /* s.Type: 14, 24 */
        /* t.Result: 15 */
        /* t.Pos: 17 */
        /* e.1: 22 */
        /* e.2: 25 */
        /* e.1 s.Type e.2 */
        p[22] = NULL;
        p[23] = p[20];
        do {
          r05_start_e_loop();
          if (! r05_repeated_svar_left(p+24, p[23], p[21], p+14))
            continue;
          r05_close_evar(p+25, p[24], p[21]);

          r05_reset_allocator();
          r05_alloc_open_call(p+27);
          r05_alloc_function(&r05f_SentenceTail);
          r05_alloc_open_bracket(p+28);
          r05_alloc_char(',');
          r05_alloc_insert_pos(p+29);
          r05_alloc_char(':');
          r05_alloc_close_bracket(p+30);
          r05_alloc_open_call(p+31);
          r05_alloc_function(&r05f_Pattern);
          r05_alloc_open_bracket(p+32);
          r05_alloc_close_bracket(p+33);
          r05_alloc_open_bracket(p+34);
          r05_alloc_svar(p+14);
          r05_alloc_insert_pos(p+35);
          r05_alloc_close_bracket(p+36);
          r05_alloc_insert_pos(p+37);
          r05_alloc_open_bracket(p+38);
          r05_alloc_insert_pos(p+39);
          r05_alloc_open_bracket(p+40);
          r05_alloc_function(&r05f_Error);
          r05_alloc_tvar(p+17);
          r05_alloc_chars("Missed \':\'", 10);
          r05_alloc_close_bracket(p+41);
          r05_alloc_close_bracket(p+42);
          r05_alloc_close_call(p+43);
          r05_alloc_close_call(p+44);
          r05_push_stack(p[44]);
          r05_push_stack(p[27]);
          r05_push_stack(p[43]);
          r05_push_stack(p[31]);
          r05_link_brackets(p[38], p[42]);
          r05_link_brackets(p[40], p[41]);
          r05_link_brackets(p[34], p[36]);
          r05_link_brackets(p[32], p[33]);
          r05_link_brackets(p[28], p[30]);
          r05_splice_tvar(p[29], p+15);
          r05_splice_tvar(p[35], p+17);
          r05_splice_evar(p[37], p+10);
          r05_splice_evar(p[39], p+12);
          r05_splice_from_freelist(p[0]);
          r05_splice_to_freelist(p[0], p[2]);
          return;
        } while (r05_open_evar_advance(p+22, p[21]));
        r05_stop_e_loop();
      } while (0);
      r05_splice_to_freelist(p[19], p[21]);
    } while (0);

    do {
      /* e.Errors: 8 */
      /* t.Result: 10 */
      /* t.Unexpected: 12 */
      /* e.Tokens: 14 */
      /* (',' t.Result) t.Unexpected e.Tokens (e.Errors) */
      if (! r05_brackets_left(p+3, p[1], p[2]))
        continue;
      if (! r05_char_left(p+5, p[3], p[4], ','))
        continue;
      if (! r05_brackets_right(p+6, p[4], p[2]))
        continue;
      r05_close_evar(p+8, p[6], p[7]);
      if (! r05_tvar_left(p+10, p[5], p[4]))
        continue;
      if (! r05_empty_hole(p[11], p[4]))
        continue;
      if (! r05_tvar_left(p+12, p[4], p[6]))
        continue;
      r05_close_evar(p+14, p[13], p[6]);

      r05_reset_allocator();
      r05_alloc_open_bracket(p+16);
      r05_alloc_function(&r05f_SentenceTail);
      r05_alloc_function(&r05f_RETURN);
      r05_alloc_insert_pos(p+17);
      r05_alloc_close_bracket(p+18);
      r05_alloc_insert_pos(p+19);
      r05_alloc_open_bracket(p+20);
      r05_alloc_insert_pos(p+21);
      r05_alloc_open_call(p+22);
      r05_alloc_function(&r05f_UnexpectedTokenInSentence);
      r05_alloc_tvar(p+12);
      r05_alloc_close_call(p+23);
      r05_alloc_close_bracket(p+24);
      r05_link_brackets(p[20], p[24]);
      r05_push_stack(p[23]);
      r05_push_stack(p[22]);
      r05_link_brackets(p[16], p[18]);
      r05_splice_tvar(p[17], p+10);
      r05_splice_tvar(p[19], p+12);
      r05_splice_evar(p[19], p+14);
      r05_splice_evar(p[21], p+8);
      r05_splice_from_freelist(p[0]);
      r05_splice_to_freelist(p[0], p[2]);
      return;
    } while (0);

    do {
      /* e.Sentences: 13 */
      /* e.Tokens: 15 */
      /* e.Errors: 17 */
      /* t.Result: 19 */
      /* (CALL-BLOCK t.Result ':{') (Block e.Sentences) e.Tokens (e.Errors) */
      if (! r05_brackets_left(p+3, p[1], p[2]))
        continue;
      if (! r05_function_left(p+5, p[3], p[4], &r05f_CALLm_BLOCK))
        continue;
      if (! r05_char_right(p+6, p[5], p[4], '{'))
        continue;
      if (! r05_char_right(p+7, p[5], p[6], ':'))
        continue;
      if (! r05_brackets_left(p+8, p[4], p[2]))
        continue;
      if (! r05_function_left(p+10, p[8], p[9], &r05f_Block))
        continue;
      if (! r05_brackets_right(p+11, p[9], p[2]))
        continue;
      r05_close_evar(p+13, p[10], p[9]);
      r05_close_evar(p+15, p[9], p[11]);
      r05_close_evar(p+17, p[11], p[12]);
      if (! r05_tvar_left(p+19, p[5], p[7]))
        continue;
      if (! r05_empty_hole(p[20], p[7]))
        continue;

      r05_reset_allocator();
      r05_alloc_open_bracket(p+21);
      r05_alloc_function(&r05f_SentenceTail);
      r05_alloc_function(&r05f_CALLm_BLOCK);
      r05_alloc_insert_pos(p+22);
      r05_alloc_close_bracket(p+23);
      r05_alloc_insert_pos(p+24);
      r05_alloc_open_bracket(p+25);
      r05_alloc_insert_pos(p+26);
      r05_alloc_close_bracket(p+27);
      r05_link_brackets(p[25], p[27]);
      r05_link_brackets(p[21], p[23]);
      r05_splice_tvar(p[22], p+19);
      r05_splice_evar(p[22], p+13);
      r05_splice_evar(p[24], p+15);
      r05_splice_evar(p[26], p+17);
      r05_splice_from_freelist(p[0]);
      r05_splice_to_freelist(p[0], p[2]);
      return;
    } while (0);

    do {
      /* e.Tokens: 12 */
      /* e.Errors: 14 */
      /* t.Result: 16 */
      /* t.Pattern: 18 */
      /* (',' t.Result ':') (Pattern t.Pattern) e.Tokens (e.Errors) */
      if (! r05_brackets_left(p+3, p[1], p[2]))
        continue;
      if (! r05_char_left(p+5, p[3], p[4], ','))
        continue;
      if (! r05_char_right(p+6, p[5], p[4], ':'))
        continue;
      if (! r05_brackets_left(p+7, p[4], p[2]))
        continue;
      if (! r05_function_left(p+9, p[7], p[8], &r05f_Pattern))
        continue;
      if (! r05_brackets_right(p+10, p[8], p[2]))
        continue;
      r05_close_evar(p+12, p[8], p[10]);
      r05_close_evar(p+14, p[10], p[11]);
      if (! r05_tvar_left(p+16, p[5], p[6]))
        continue;
      if (! r05_empty_hole(p[17], p[6]))
        continue;
      if (! r05_tvar_left(p+18, p[9], p[8]))
        continue;
      if (! r05_empty_hole(p[19], p[8]))
        continue;

      r05_reset_allocator();
      r05_alloc_open_call(p+20);
      r05_alloc_function(&r05f_SentenceTail);
      r05_alloc_open_bracket(p+21);
      r05_alloc_char(',');
      r05_alloc_insert_pos(p+22);
      r05_alloc_char(':');
      r05_alloc_insert_pos(p+23);
      r05_alloc_close_bracket(p+24);
      r05_alloc_open_call(p+25);
      r05_alloc_function(&r05f_SentenceTail);
      r05_alloc_open_bracket(p+26);
      r05_alloc_close_bracket(p+27);
      r05_alloc_insert_pos(p+28);
      r05_alloc_open_bracket(p+29);
      r05_alloc_insert_pos(p+30);
      r05_alloc_close_bracket(p+31);
      r05_alloc_close_call(p+32);
      r05_alloc_close_call(p+33);
      r05_push_stack(p[33]);
      r05_push_stack(p[20]);
      r05_push_stack(p[32]);
      r05_push_stack(p[25]);
      r05_link_brackets(p[29], p[31]);
      r05_link_brackets(p[26], p[27]);
      r05_link_brackets(p[21], p[24]);
      r05_splice_tvar(p[22], p+16);
      r05_splice_tvar(p[23], p+18);
      r05_splice_evar(p[28], p+12);
      r05_splice_evar(p[30], p+14);
      r05_splice_from_freelist(p[0]);
      r05_splice_to_freelist(p[0], p[2]);
      return;
    } while (0);

    do {
      /* e.Tokens: 9 */
      /* e.Errors: 11 */
      /* t.Result: 13 */
      /* (',' t.Result ':') e.Tokens (e.Errors) */
      if (! r05_brackets_left(p+3, p[1], p[2]))
        continue;
      if (! r05_char_left(p+5, p[3], p[4], ','))
        continue;
      if (! r05_char_right(p+6, p[5], p[4], ':'))
        continue;
      if (! r05_brackets_right(p+7, p[4], p[2]))
        continue;
      r05_close_evar(p+9, p[4], p[7]);
      r05_close_evar(p+11, p[7], p[8]);
      if (! r05_tvar_left(p+13, p[5], p[6]))
        continue;
      if (! r05_empty_hole(p[14], p[6]))
        continue;

      r05_reset_allocator();
      r05_alloc_open_call(p+15);
      r05_alloc_function(&r05f_SentenceTail);
      r05_alloc_open_bracket(p+16);
      r05_alloc_char(',');
      r05_alloc_insert_pos(p+17);
      r05_alloc_char(':');
      r05_alloc_close_bracket(p+18);
      r05_alloc_open_call(p+19);
      r05_alloc_function(&r05f_Pattern);
      r05_alloc_open_bracket(p+20);
      r05_alloc_close_bracket(p+21);
      r05_alloc_insert_pos(p+22);
      r05_alloc_open_bracket(p+23);
      r05_alloc_insert_pos(p+24);
      r05_alloc_close_bracket(p+25);
      r05_alloc_close_call(p+26);
      r05_alloc_close_call(p+27);
      r05_push_stack(p[27]);
      r05_push_stack(p[15]);
      r05_push_stack(p[26]);
      r05_push_stack(p[19]);
      r05_link_brackets(p[23], p[25]);
      r05_link_brackets(p[20], p[21]);
      r05_link_brackets(p[16], p[18]);
      r05_splice_tvar(p[17], p+13);
      r05_splice_evar(p[22], p+9);
      r05_splice_evar(p[24], p+11);
      r05_splice_from_freelist(p[0]);
      r05_splice_to_freelist(p[0], p[2]);
      return;
    } while (0);

    do {
      /* e.SentenceTail: 11 */
      /* e.Tokens: 13 */
      /* e.Errors: 15 */
      /* t.Result: 17 */
      /* t.Pattern: 20 */
      /* (',' t.Result ':' t.Pattern) (SentenceTail e.SentenceTail) e.Tokens (e.Errors) */
      if (! r05_brackets_left(p+3, p[1], p[2]))
        continue;
      if (! r05_char_left(p+5, p[3], p[4], ','))
        continue;
      if (! r05_brackets_left(p+6, p[4], p[2]))
        continue;
      if (! r05_function_left(p+8, p[6], p[7], &r05f_SentenceTail))
        continue;
      if (! r05_brackets_right(p+9, p[7], p[2]))
        continue;
      r05_close_evar(p+11, p[8], p[7]);
      r05_close_evar(p+13, p[7], p[9]);
      r05_close_evar(p+15, p[9], p[10]);
      if (! r05_tvar_left(p+17, p[5], p[4]))
        continue;
      if (! r05_char_left(p+19, p[18], p[4], ':'))
        continue;
      if (! r05_tvar_left(p+20, p[19], p[4]))
        continue;
      if (! r05_empty_hole(p[21], p[4]))
        continue;

      r05_reset_allocator();
      r05_alloc_open_bracket(p+22);
      r05_alloc_function(&r05f_SentenceTail);
      r05_alloc_open_bracket(p+23);
      r05_alloc_function(&r05f_Condition);
      r05_alloc_insert_pos(p+24);
      r05_alloc_close_bracket(p+25);
      r05_alloc_insert_pos(p+26);
      r05_alloc_close_bracket(p+27);
      r05_alloc_insert_pos(p+28);
      r05_alloc_open_bracket(p+29);
      r05_alloc_insert_pos(p+30);
      r05_alloc_close_bracket(p+31);
      r05_link_brackets(p[29], p[31]);
      r05_link_brackets(p[22], p[27]);
      r05_link_brackets(p[23], p[25]);
      r05_splice_tvar(p[24], p+17);
      r05_splice_tvar(p[24], p+20);
      r05_splice_evar(p[26], p+11);
      r05_splice_evar(p[28], p+13);
      r05_splice_evar(p[30], p+15);
      r05_splice_from_freelist(p[0]);
      r05_splice_to_freelist(p[0], p[2]);
      return;
    } while (0);

    r05_recognition_impossible();
  }
}

R05_DEFINE_LOCAL_FUNCTION(Pattern, "Pattern") {
  struct r05_node *p[19] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /* e.Tokens: 7 */
    /* e.Errors: 9 */
    /* () e.Tokens (e.Errors) */
    if (! r05_brackets_left(p+3, p[1], p[2]))
      continue;
    if (! r05_brackets_right(p+5, p[4], p[2]))
      continue;
    if (! r05_empty_hole(p[3], p[4]))
      continue;
    r05_close_evar(p+7, p[4], p[5]);
    r05_close_evar(p+9, p[5], p[6]);

    r05_reset_allocator();
    r05_alloc_open_call(p+11);
    r05_alloc_function(&r05f_DirtyExpression);
    r05_alloc_open_bracket(p+12);
    r05_alloc_close_bracket(p+13);
    r05_alloc_insert_pos(p+14);
    r05_alloc_function(&r05f_Pattern);
    r05_alloc_open_bracket(p+15);
    r05_alloc_insert_pos(p+16);
    r05_alloc_close_bracket(p+17);
    r05_alloc_close_call(p+18);
    r05_push_stack(p[18]);
    r05_push_stack(p[11]);
    r05_link_brackets(p[15], p[17]);
    r05_link_brackets(p[12], p[13]);
    r05_splice_evar(p[14], p+7);
    r05_splice_evar(p[16], p+9);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(Result, "Result") {
  struct r05_node *p[19] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /* e.Tokens: 7 */
    /* e.Errors: 9 */
    /* () e.Tokens (e.Errors) */
    if (! r05_brackets_left(p+3, p[1], p[2]))
      continue;
    if (! r05_brackets_right(p+5, p[4], p[2]))
      continue;
    if (! r05_empty_hole(p[3], p[4]))
      continue;
    r05_close_evar(p+7, p[4], p[5]);
    r05_close_evar(p+9, p[5], p[6]);

    r05_reset_allocator();
    r05_alloc_open_call(p+11);
    r05_alloc_function(&r05f_DirtyExpression);
    r05_alloc_open_bracket(p+12);
    r05_alloc_close_bracket(p+13);
    r05_alloc_insert_pos(p+14);
    r05_alloc_function(&r05f_Result);
    r05_alloc_open_bracket(p+15);
    r05_alloc_insert_pos(p+16);
    r05_alloc_close_bracket(p+17);
    r05_alloc_close_call(p+18);
    r05_push_stack(p[18]);
    r05_push_stack(p[11]);
    r05_link_brackets(p[15], p[17]);
    r05_link_brackets(p[12], p[13]);
    r05_splice_evar(p[14], p+7);
    r05_splice_evar(p[16], p+9);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(DirtyExpression, "DirtyExpression") {
  struct r05_node *p[32] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /* e.Scanned: 10 */
    /* e.Errors: 12 */
    /* t.Pos: 14 */
    /* e.Text: 16 */
    /* s.Kind: 18 */
    /* e.Tokens: 19 */
    /* (e.Scanned) (TkSpecComment t.Pos e.Text) e.Tokens s.Kind (e.Errors) */
    if (! r05_brackets_left(p+3, p[1], p[2]))
      continue;
    if (! r05_brackets_left(p+5, p[4], p[2]))
      continue;
    if (! r05_function_left(p+7, p[5], p[6], &r05f_TkSpecComment))
      continue;
    if (! r05_brackets_right(p+8, p[6], p[2]))
      continue;
    r05_close_evar(p+10, p[3], p[4]);
    r05_close_evar(p+12, p[8], p[9]);
    if (! r05_tvar_left(p+14, p[7], p[6]))
      continue;
    r05_close_evar(p+16, p[15], p[6]);
    if (! r05_svar_right(p+18, p[6], p[8]))
      continue;
    r05_close_evar(p+19, p[6], p[18]);

    r05_reset_allocator();
    r05_alloc_open_call(p+21);
    r05_alloc_function(&r05f_DirtyExpression);
    r05_alloc_open_bracket(p+22);
    r05_alloc_insert_pos(p+23);
    r05_alloc_close_bracket(p+24);
    r05_alloc_insert_pos(p+25);
    r05_alloc_svar(p+18);
    r05_alloc_open_bracket(p+26);
    r05_alloc_insert_pos(p+27);
    r05_alloc_close_bracket(p+28);
    r05_alloc_close_call(p+29);
    r05_push_stack(p[29]);
    r05_push_stack(p[21]);
    r05_link_brackets(p[26], p[28]);
    r05_link_brackets(p[22], p[24]);
    r05_splice_evar(p[23], p+10);
    r05_splice_evar(p[25], p+19);
    r05_splice_evar(p[27], p+12);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  do {
    /* e.Expression: 10 */
    /* e.Errors: 12 */
    /* s.Kind: 14 */
    /* e.Tokens: 15 */
    /* () (Expression e.Expression) e.Tokens s.Kind (e.Errors) */
    if (! r05_brackets_left(p+3, p[1], p[2]))
      continue;
    if (! r05_brackets_left(p+5, p[4], p[2]))
      continue;
    if (! r05_function_left(p+7, p[5], p[6], &r05f_Expression))
      continue;
    if (! r05_brackets_right(p+8, p[6], p[2]))
      continue;
    if (! r05_empty_hole(p[3], p[4]))
      continue;
    r05_close_evar(p+10, p[7], p[6]);
    r05_close_evar(p+12, p[8], p[9]);
    if (! r05_svar_right(p+14, p[6], p[8]))
      continue;
    r05_close_evar(p+15, p[6], p[14]);

    r05_reset_allocator();
    r05_alloc_open_call(p+17);
    r05_alloc_function(&r05f_DirtyExpression);
    r05_alloc_open_bracket(p+18);
    r05_alloc_open_bracket(p+19);
    r05_alloc_insert_pos(p+20);
    r05_alloc_close_bracket(p+21);
    r05_alloc_close_bracket(p+22);
    r05_alloc_open_call(p+23);
    r05_alloc_function(&r05f_Unbalanced);
    r05_alloc_open_bracket(p+24);
    r05_alloc_close_bracket(p+25);
    r05_alloc_insert_pos(p+26);
    r05_alloc_svar(p+14);
    r05_alloc_open_bracket(p+27);
    r05_alloc_insert_pos(p+28);
    r05_alloc_close_bracket(p+29);
    r05_alloc_close_call(p+30);
    r05_alloc_close_call(p+31);
    r05_push_stack(p[31]);
    r05_push_stack(p[17]);
    r05_push_stack(p[30]);
    r05_push_stack(p[23]);
    r05_link_brackets(p[27], p[29]);
    r05_link_brackets(p[24], p[25]);
    r05_link_brackets(p[18], p[22]);
    r05_link_brackets(p[19], p[21]);
    r05_splice_evar(p[20], p+10);
    r05_splice_evar(p[26], p+15);
    r05_splice_evar(p[28], p+12);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  do {
    /* e.Errors: 7 */
    /* s.Kind: 9 */
    /* e.Tokens: 10 */
    /* () e.Tokens s.Kind (e.Errors) */
    if (! r05_brackets_left(p+3, p[1], p[2]))
      continue;
    if (! r05_brackets_right(p+5, p[4], p[2]))
      continue;
    if (! r05_empty_hole(p[3], p[4]))
      continue;
    r05_close_evar(p+7, p[5], p[6]);
    if (! r05_svar_right(p+9, p[4], p[5]))
      continue;
    r05_close_evar(p+10, p[4], p[9]);

    r05_reset_allocator();
    r05_alloc_open_call(p+12);
    r05_alloc_function(&r05f_DirtyExpression);
    r05_alloc_open_bracket(p+13);
    r05_alloc_close_bracket(p+14);
    r05_alloc_open_call(p+15);
    r05_alloc_function(&r05f_Expression);
    r05_alloc_open_bracket(p+16);
    r05_alloc_close_bracket(p+17);
    r05_alloc_insert_pos(p+18);
    r05_alloc_svar(p+9);
    r05_alloc_open_bracket(p+19);
    r05_alloc_insert_pos(p+20);
    r05_alloc_close_bracket(p+21);
    r05_alloc_close_call(p+22);
    r05_alloc_close_call(p+23);
    r05_push_stack(p[23]);
    r05_push_stack(p[12]);
    r05_push_stack(p[22]);
    r05_push_stack(p[15]);
    r05_link_brackets(p[19], p[21]);
    r05_link_brackets(p[16], p[17]);
    r05_link_brackets(p[13], p[14]);
    r05_splice_evar(p[18], p+10);
    r05_splice_evar(p[20], p+7);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  do {
    /* e.Expression: 12 */
    /* e.Unbalanced: 14 */
    /* e.Errors: 16 */
    /* s.Kind: 18 */
    /* e.Tokens: 19 */
    /* ((e.Expression)) (Unbalanced e.Unbalanced) e.Tokens s.Kind (e.Errors) */
    if (! r05_brackets_left(p+3, p[1], p[2]))
      continue;
    if (! r05_brackets_left(p+5, p[3], p[4]))
      continue;
    if (! r05_brackets_left(p+7, p[4], p[2]))
      continue;
    if (! r05_function_left(p+9, p[7], p[8], &r05f_Unbalanced))
      continue;
    if (! r05_brackets_right(p+10, p[8], p[2]))
      continue;
    if (! r05_empty_hole(p[6], p[4]))
      continue;
    r05_close_evar(p+12, p[5], p[6]);
    r05_close_evar(p+14, p[9], p[8]);
    r05_close_evar(p+16, p[10], p[11]);
    if (! r05_svar_right(p+18, p[8], p[10]))
      continue;
    r05_close_evar(p+19, p[8], p[18]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+21);
    r05_alloc_svar(p+18);
    r05_alloc_open_bracket(p+22);
    r05_alloc_insert_pos(p+23);
    r05_alloc_close_bracket(p+24);
    r05_alloc_close_bracket(p+25);
    r05_alloc_insert_pos(p+26);
    r05_alloc_open_bracket(p+27);
    r05_alloc_insert_pos(p+28);
    r05_alloc_close_bracket(p+29);
    r05_link_brackets(p[27], p[29]);
    r05_link_brackets(p[21], p[25]);
    r05_link_brackets(p[22], p[24]);
    r05_splice_evar(p[23], p+12);
    r05_splice_evar(p[23], p+14);
    r05_splice_evar(p[26], p+19);
    r05_splice_evar(p[28], p+16);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(Expression, "Expression") {
  R05_DEFINE_COND_FUNCTION(Expression, "Expression$1", 1)
  R05_DEFINE_COND_FUNCTION(Expression, "Expression$2", 2)
  struct r05_node *p[47] = { 0 };

  r05_this_is_generated_function();
  switch (arg_begin->next->info.function->resume_entry >> 1) {
  case 0:
    p[0] = arg_begin;
    p[1] = arg_begin->next;
    p[2] = arg_end;

    do {
      /* e.Scanned: 10 */
      /* e.Errors: 12 */
      /* t.Pos: 14 */
      /* e.Text: 16 */
      /* s.Kind: 18 */
      /* e.Tokens: 19 */
      /* (e.Scanned) (TkSpecComment t.Pos e.Text) e.Tokens s.Kind (e.Errors) */
      if (! r05_brackets_left(p+3, p[1], p[2]))
        continue;
      if (! r05_brackets_left(p+5, p[4], p[2]))
        continue;
      if (! r05_function_left(p+7, p[5], p[6], &r05f_TkSpecComment))
        continue;
      if (! r05_brackets_right(p+8, p[6], p[2]))
        continue;
      r05_close_evar(p+10, p[3], p[4]);
      r05_close_evar(p+12, p[8], p[9]);
      if (! r05_tvar_left(p+14, p[7], p[6]))
        continue;
      r05_close_evar(p+16, p[15], p[6]);
      if (! r05_svar_right(p+18, p[6], p[8]))
        continue;
      r05_close_evar(p+19, p[6], p[18]);

      r05_reset_allocator();
      r05_alloc_open_call(p+21);
      r05_alloc_function(&r05f_Expression);
      r05_alloc_open_bracket(p+22);
      r05_alloc_insert_pos(p+23);
      r05_alloc_close_bracket(p+24);
      r05_alloc_insert_pos(p+25);
      r05_alloc_svar(p+18);
      r05_alloc_open_bracket(p+26);
      r05_alloc_insert_pos(p+27);
      r05_alloc_close_bracket(p+28);
      r05_alloc_close_call(p+29);
      r05_push_stack(p[29]);
      r05_push_stack(p[21]);
      r05_link_brackets(p[26], p[28]);
      r05_link_brackets(p[22], p[24]);
      r05_splice_evar(p[23], p+10);
      r05_splice_evar(p[25], p+19);
      r05_splice_evar(p[27], p+12);
      r05_splice_from_freelist(p[0]);
      r05_splice_to_freelist(p[0], p[2]);
      return;
    } while (0);

    do {
      /* e.Scanned: 7 */
      /* e.Errors: 9 */
      /* t.TermStart: 11 */
      /* s.Kind: 13 */
      /* e.Tokens: 14 */
      /* (e.Scanned) t.TermStart e.Tokens s.Kind (e.Errors) */
      if (! r05_brackets_left(p+3, p[1], p[2]))
        continue;
      if (! r05_brackets_right(p+5, p[4], p[2]))
        continue;
      r05_close_evar(p+7, p[3], p[4]);
      r05_close_evar(p+9, p[5], p[6]);
      if (! r05_tvar_left(p+11, p[4], p[5]))
        continue;
      if (! r05_svar_right(p+13, p[12], p[5]))
        continue;
      r05_close_evar(p+14, p[12], p[13]);

      r05_reset_allocator();
      r05_alloc_open_call(p+16);
      r05_alloc_function(&c1);
      r05_alloc_tvar(p+11);
      r05_alloc_close_call(p+17);
      r05_push_stack(p[17]);
      r05_push_stack(p[16]);
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
        /* e.Errors: 9 */
        /* t.TermStart: 11 */
        /* s.Kind: 13 */
        /* e.Tokens: 14 */
        /* s.Type: 21 */
        /* t.Pos: 22 */
        /* e.Value: 24 */
        /* (s.Type t.Pos e.Value) */
        if (! r05_brackets_left(p+19, p[17], p[18]))
          continue;
        if (! r05_empty_hole(p[20], p[18]))
          continue;
        if (! r05_svar_left(p+21, p[19], p[20]))
          continue;
        if (! r05_tvar_left(p+22, p[21], p[20]))
          continue;
        r05_close_evar(p+24, p[23], p[20]);

        r05_reset_allocator();
        r05_alloc_open_call(p+26);
        r05_alloc_function(&c2);
        r05_alloc_open_call(p+27);
        r05_alloc_function(&r05f_FIRSTu_Term);
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
          /* e.Scanned: 7 */
          /* e.Errors: 9 */
          /* t.TermStart: 11 */
          /* s.Kind: 13 */
          /* e.Tokens: 14 */
          /* s.Type: 21, 31 */
          /* t.Pos: 22 */
          /* e.Value: 24 */
          /* e.1: 29 */
          /* e.2: 32 */
          /* e.1 s.Type e.2 */
          p[29] = NULL;
          p[30] = p[27];
          do {
            r05_start_e_loop();
            if (! r05_repeated_svar_left(p+31, p[30], p[28], p+21))
              continue;
            r05_close_evar(p+32, p[31], p[28]);

            r05_reset_allocator();
            r05_alloc_open_call(p+34);
            r05_alloc_function(&r05f_Expression);
            r05_alloc_open_bracket(p+35);
            r05_alloc_insert_pos(p+36);
            r05_alloc_close_bracket(p+37);
            r05_alloc_open_call(p+38);
            r05_alloc_function(&r05f_Term);
            r05_alloc_open_bracket(p+39);
            r05_alloc_close_bracket(p+40);
            r05_alloc_insert_pos(p+41);
            r05_alloc_svar(p+13);
            r05_alloc_open_bracket(p+42);
            r05_alloc_insert_pos(p+43);
            r05_alloc_close_bracket(p+44);
            r05_alloc_close_call(p+45);
            r05_alloc_close_call(p+46);
            r05_push_stack(p[46]);
            r05_push_stack(p[34]);
            r05_push_stack(p[45]);
            r05_push_stack(p[38]);
            r05_link_brackets(p[42], p[44]);
            r05_link_brackets(p[39], p[40]);
            r05_link_brackets(p[35], p[37]);
            r05_splice_evar(p[36], p+7);
            r05_splice_tvar(p[41], p+11);
            r05_splice_evar(p[41], p+14);
            r05_splice_evar(p[43], p+9);
            r05_splice_from_freelist(p[0]);
            r05_splice_to_freelist(p[0], p[2]);
            return;
          } while (r05_open_evar_advance(p+29, p[28]));
          r05_stop_e_loop();
        } while (0);
        r05_splice_to_freelist(p[26], p[28]);
      } while (0);
      r05_splice_to_freelist(p[16], p[18]);
    } while (0);

    do {
      /* e.Scanned: 10 */
      /* e.Errors: 12 */
      /* t.Term: 14 */
      /* s.Kind: 16 */
      /* e.Tokens: 17 */
      /* (e.Scanned) (Term t.Term) e.Tokens s.Kind (e.Errors) */
      if (! r05_brackets_left(p+3, p[1], p[2]))
        continue;
      if (! r05_brackets_left(p+5, p[4], p[2]))
        continue;
      if (! r05_function_left(p+7, p[5], p[6], &r05f_Term))
        continue;
      if (! r05_brackets_right(p+8, p[6], p[2]))
        continue;
      r05_close_evar(p+10, p[3], p[4]);
      r05_close_evar(p+12, p[8], p[9]);
      if (! r05_tvar_left(p+14, p[7], p[6]))
        continue;
      if (! r05_empty_hole(p[15], p[6]))
        continue;
      if (! r05_svar_right(p+16, p[6], p[8]))
        continue;
      r05_close_evar(p+17, p[6], p[16]);

      r05_reset_allocator();
      r05_alloc_open_call(p+19);
      r05_alloc_function(&r05f_Expression);
      r05_alloc_open_bracket(p+20);
      r05_alloc_insert_pos(p+21);
      r05_alloc_close_bracket(p+22);
      r05_alloc_insert_pos(p+23);
      r05_alloc_svar(p+16);
      r05_alloc_open_bracket(p+24);
      r05_alloc_insert_pos(p+25);
      r05_alloc_close_bracket(p+26);
      r05_alloc_close_call(p+27);
      r05_push_stack(p[27]);
      r05_push_stack(p[19]);
      r05_link_brackets(p[24], p[26]);
      r05_link_brackets(p[20], p[22]);
      r05_splice_evar(p[21], p+10);
      r05_splice_tvar(p[21], p+14);
      r05_splice_evar(p[23], p+17);
      r05_splice_evar(p[25], p+12);
      r05_splice_from_freelist(p[0]);
      r05_splice_to_freelist(p[0], p[2]);
      return;
    } while (0);

    do {
      /* e.Scanned: 7 */
      /* e.Errors: 9 */
      /* s.Kind: 11 */
      /* e.Tokens: 12 */
      /* (e.Scanned) e.Tokens s.Kind (e.Errors) */
      if (! r05_brackets_left(p+3, p[1], p[2]))
        continue;
      if (! r05_brackets_right(p+5, p[4], p[2]))
        continue;
      r05_close_evar(p+7, p[3], p[4]);
      r05_close_evar(p+9, p[5], p[6]);
      if (! r05_svar_right(p+11, p[4], p[5]))
        continue;
      r05_close_evar(p+12, p[4], p[11]);

      r05_reset_allocator();
      r05_alloc_open_bracket(p+14);
      r05_alloc_function(&r05f_Expression);
      r05_alloc_insert_pos(p+15);
      r05_alloc_close_bracket(p+16);
      r05_alloc_insert_pos(p+17);
      r05_alloc_svar(p+11);
      r05_alloc_open_bracket(p+18);
      r05_alloc_insert_pos(p+19);
      r05_alloc_close_bracket(p+20);
      r05_link_brackets(p[18], p[20]);
      r05_link_brackets(p[14], p[16]);
      r05_splice_evar(p[15], p+7);
      r05_splice_evar(p[17], p+12);
      r05_splice_evar(p[19], p+9);
      r05_splice_from_freelist(p[0]);
      r05_splice_to_freelist(p[0], p[2]);
      return;
    } while (0);

    r05_recognition_impossible();
  }
}

R05_DEFINE_LOCAL_FUNCTION(FIRSTu_Term, "FIRST_Term") {
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
    r05_alloc_function(&r05f_TkName);
    r05_alloc_function(&r05f_TkCompound);
    r05_alloc_function(&r05f_TkMacroDigit);
    r05_alloc_function(&r05f_TkChar);
    r05_alloc_function(&r05f_TkVariable);
    r05_alloc_function(&r05f_TkOpenBracket);
    r05_alloc_function(&r05f_TkOpenCall);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(Term, "Term") {
  R05_DEFINE_COND_FUNCTION(Term, "Term$1", 1)
  struct r05_node *p[49] = { 0 };

  r05_this_is_generated_function();
  switch (arg_begin->next->info.function->resume_entry >> 1) {
  case 0:
    p[0] = arg_begin;
    p[1] = arg_begin->next;
    p[2] = arg_end;

    do {
      /* e.Scanned: 10 */
      /* e.Errors: 12 */
      /* t.Pos: 14 */
      /* e.Text: 16 */
      /* s.Kind: 18 */
      /* e.Tokens: 19 */
      /* (e.Scanned) (TkSpecComment t.Pos e.Text) e.Tokens s.Kind (e.Errors) */
      if (! r05_brackets_left(p+3, p[1], p[2]))
        continue;
      if (! r05_brackets_left(p+5, p[4], p[2]))
        continue;
      if (! r05_function_left(p+7, p[5], p[6], &r05f_TkSpecComment))
        continue;
      if (! r05_brackets_right(p+8, p[6], p[2]))
        continue;
      r05_close_evar(p+10, p[3], p[4]);
      r05_close_evar(p+12, p[8], p[9]);
      if (! r05_tvar_left(p+14, p[7], p[6]))
        continue;
      r05_close_evar(p+16, p[15], p[6]);
      if (! r05_svar_right(p+18, p[6], p[8]))
        continue;
      r05_close_evar(p+19, p[6], p[18]);

      r05_reset_allocator();
      r05_alloc_open_call(p+21);
      r05_alloc_function(&r05f_Term);
      r05_alloc_open_bracket(p+22);
      r05_alloc_insert_pos(p+23);
      r05_alloc_close_bracket(p+24);
      r05_alloc_insert_pos(p+25);
      r05_alloc_svar(p+18);
      r05_alloc_open_bracket(p+26);
      r05_alloc_insert_pos(p+27);
      r05_alloc_close_bracket(p+28);
      r05_alloc_close_call(p+29);
      r05_push_stack(p[29]);
      r05_push_stack(p[21]);
      r05_link_brackets(p[26], p[28]);
      r05_link_brackets(p[22], p[24]);
      r05_splice_evar(p[23], p+10);
      r05_splice_evar(p[25], p+19);
      r05_splice_evar(p[27], p+12);
      r05_splice_from_freelist(p[0]);
      r05_splice_to_freelist(p[0], p[2]);
      return;
    } while (0);

    do {
      /* e.Errors: 9 */
      /* s.Literal: 11 */
      /* t.Pos: 12 */
      /* e.Value: 14 */
      /* s.Kind: 16 */
      /* e.Tokens: 17 */
      /* () (s.Literal t.Pos e.Value) e.Tokens s.Kind (e.Errors) */
      if (! r05_brackets_left(p+3, p[1], p[2]))
        continue;
      if (! r05_brackets_left(p+5, p[4], p[2]))
        continue;
      if (! r05_brackets_right(p+7, p[6], p[2]))
        continue;
      if (! r05_empty_hole(p[3], p[4]))
        continue;
      r05_close_evar(p+9, p[7], p[8]);
      if (! r05_svar_left(p+11, p[5], p[6]))
        continue;
      if (! r05_tvar_left(p+12, p[11], p[6]))
        continue;
      r05_close_evar(p+14, p[13], p[6]);
      if (! r05_svar_right(p+16, p[6], p[7]))
        continue;
      r05_close_evar(p+17, p[6], p[16]);

      r05_reset_allocator();
      r05_alloc_open_call(p+19);
      r05_alloc_function(&c1);
      r05_alloc_open_bracket(p+20);
      r05_alloc_function(&r05f_TkName);
      r05_alloc_function(&r05f_Word);
      r05_alloc_close_bracket(p+21);
      r05_alloc_open_bracket(p+22);
      r05_alloc_function(&r05f_TkCompound);
      r05_alloc_function(&r05f_Word);
      r05_alloc_close_bracket(p+23);
      r05_alloc_open_bracket(p+24);
      r05_alloc_function(&r05f_TkMacroDigit);
      r05_alloc_function(&r05f_Number);
      r05_alloc_close_bracket(p+25);
      r05_alloc_open_bracket(p+26);
      r05_alloc_function(&r05f_TkChar);
      r05_alloc_function(&r05f_Char);
      r05_alloc_close_bracket(p+27);
      r05_alloc_close_call(p+28);
      r05_push_stack(p[28]);
      r05_push_stack(p[19]);
      r05_link_brackets(p[26], p[27]);
      r05_link_brackets(p[24], p[25]);
      r05_link_brackets(p[22], p[23]);
      r05_link_brackets(p[20], p[21]);
      r05_push_context(p, 19);
      r05_splice_from_freelist(p[2]);
      return;

  case 1:
      r05_pop_context(p, 19);
      p[19] = arg_begin;
      p[20] = arg_begin->next;
      p[21] = arg_end;

      do {
        /* e.Errors: 9 */
        /* s.Literal: 11, 26 */
        /* t.Pos: 12 */
        /* e.Value: 14 */
        /* s.Kind: 16 */
        /* e.Tokens: 17 */
        /* e.1: 22 */
        /* e.2: 27 */
        /* s.SymbolType: 29 */
        /* e.1 (s.Literal s.SymbolType) e.2 */
        p[22] = NULL;
        p[23] = p[20];
        do {
          r05_start_e_loop();
          if (! r05_brackets_left(p+24, p[23], p[21]))
            continue;
          if (! r05_repeated_svar_left(p+26, p[24], p[25], p+11))
            continue;
          r05_close_evar(p+27, p[25], p[21]);
          if (! r05_svar_left(p+29, p[26], p[25]))
            continue;
          if (! r05_empty_hole(p[29], p[25]))
            continue;

          r05_reset_allocator();
          r05_alloc_open_bracket(p+30);
          r05_alloc_function(&r05f_Term);
          r05_alloc_open_bracket(p+31);
          r05_alloc_function(&r05f_Symbol);
          r05_alloc_svar(p+29);
          r05_alloc_insert_pos(p+32);
          r05_alloc_close_bracket(p+33);
          r05_alloc_close_bracket(p+34);
          r05_alloc_insert_pos(p+35);
          r05_alloc_svar(p+16);
          r05_alloc_open_bracket(p+36);
          r05_alloc_insert_pos(p+37);
          r05_alloc_close_bracket(p+38);
          r05_link_brackets(p[36], p[38]);
          r05_link_brackets(p[30], p[34]);
          r05_link_brackets(p[31], p[33]);
          r05_splice_evar(p[32], p+14);
          r05_splice_evar(p[35], p+17);
          r05_splice_evar(p[37], p+9);
          r05_splice_from_freelist(p[0]);
          r05_splice_to_freelist(p[0], p[2]);
          return;
        } while (r05_open_evar_advance(p+22, p[21]));
        r05_stop_e_loop();
      } while (0);
      r05_splice_to_freelist(p[19], p[21]);
    } while (0);

    do {
      /* e.Errors: 10 */
      /* t.Pos: 12 */
      /* s.VarType: 14 */
      /* e.Index: 15 */
      /* s.Kind: 17 */
      /* e.Tokens: 18 */
      /* () (TkVariable t.Pos s.VarType e.Index) e.Tokens s.Kind (e.Errors) */
      if (! r05_brackets_left(p+3, p[1], p[2]))
        continue;
      if (! r05_brackets_left(p+5, p[4], p[2]))
        continue;
      if (! r05_function_left(p+7, p[5], p[6], &r05f_TkVariable))
        continue;
      if (! r05_brackets_right(p+8, p[6], p[2]))
        continue;
      if (! r05_empty_hole(p[3], p[4]))
        continue;
      r05_close_evar(p+10, p[8], p[9]);
      if (! r05_tvar_left(p+12, p[7], p[6]))
        continue;
      if (! r05_svar_left(p+14, p[13], p[6]))
        continue;
      r05_close_evar(p+15, p[14], p[6]);
      if (! r05_svar_right(p+17, p[6], p[8]))
        continue;
      r05_close_evar(p+18, p[6], p[17]);

      r05_reset_allocator();
      r05_alloc_open_bracket(p+20);
      r05_alloc_function(&r05f_Term);
      r05_alloc_open_bracket(p+21);
      r05_alloc_function(&r05f_Variable);
      r05_alloc_insert_pos(p+22);
      r05_alloc_svar(p+14);
      r05_alloc_insert_pos(p+23);
      r05_alloc_close_bracket(p+24);
      r05_alloc_close_bracket(p+25);
      r05_alloc_insert_pos(p+26);
      r05_alloc_svar(p+17);
      r05_alloc_open_bracket(p+27);
      r05_alloc_insert_pos(p+28);
      r05_alloc_close_bracket(p+29);
      r05_link_brackets(p[27], p[29]);
      r05_link_brackets(p[20], p[25]);
      r05_link_brackets(p[21], p[24]);
      r05_splice_tvar(p[22], p+12);
      r05_splice_evar(p[23], p+15);
      r05_splice_evar(p[26], p+18);
      r05_splice_evar(p[28], p+10);
      r05_splice_from_freelist(p[0]);
      r05_splice_to_freelist(p[0], p[2]);
      return;
    } while (0);

    do {
      /* e.Errors: 10 */
      /* t.Pos: 12 */
      /* s.Kind: 14 */
      /* e.Tokens: 15 */
      /* () (TkOpenBracket t.Pos) e.Tokens s.Kind (e.Errors) */
      if (! r05_brackets_left(p+3, p[1], p[2]))
        continue;
      if (! r05_brackets_left(p+5, p[4], p[2]))
        continue;
      if (! r05_function_left(p+7, p[5], p[6], &r05f_TkOpenBracket))
        continue;
      if (! r05_brackets_right(p+8, p[6], p[2]))
        continue;
      if (! r05_empty_hole(p[3], p[4]))
        continue;
      r05_close_evar(p+10, p[8], p[9]);
      if (! r05_tvar_left(p+12, p[7], p[6]))
        continue;
      if (! r05_empty_hole(p[13], p[6]))
        continue;
      if (! r05_svar_right(p+14, p[6], p[8]))
        continue;
      r05_close_evar(p+15, p[6], p[14]);

      r05_reset_allocator();
      r05_alloc_open_call(p+17);
      r05_alloc_function(&r05f_Term);
      r05_alloc_open_bracket(p+18);
      r05_alloc_char('(');
      r05_alloc_insert_pos(p+19);
      r05_alloc_close_bracket(p+20);
      r05_alloc_open_call(p+21);
      r05_alloc_function(&r05f_Expression);
      r05_alloc_open_bracket(p+22);
      r05_alloc_close_bracket(p+23);
      r05_alloc_insert_pos(p+24);
      r05_alloc_svar(p+14);
      r05_alloc_open_bracket(p+25);
      r05_alloc_insert_pos(p+26);
      r05_alloc_close_bracket(p+27);
      r05_alloc_close_call(p+28);
      r05_alloc_close_call(p+29);
      r05_push_stack(p[29]);
      r05_push_stack(p[17]);
      r05_push_stack(p[28]);
      r05_push_stack(p[21]);
      r05_link_brackets(p[25], p[27]);
      r05_link_brackets(p[22], p[23]);
      r05_link_brackets(p[18], p[20]);
      r05_splice_tvar(p[19], p+12);
      r05_splice_evar(p[24], p+15);
      r05_splice_evar(p[26], p+10);
      r05_splice_from_freelist(p[0]);
      r05_splice_to_freelist(p[0], p[2]);
      return;
    } while (0);

    do {
      /* e.Nested: 11 */
      /* e.Errors: 13 */
      /* t.OpenPos: 15 */
      /* s.Kind: 17 */
      /* e.Tokens: 18 */
      /* ('(' t.OpenPos) (Expression e.Nested) e.Tokens s.Kind (e.Errors) */
      if (! r05_brackets_left(p+3, p[1], p[2]))
        continue;
      if (! r05_char_left(p+5, p[3], p[4], '('))
        continue;
      if (! r05_brackets_left(p+6, p[4], p[2]))
        continue;
      if (! r05_function_left(p+8, p[6], p[7], &r05f_Expression))
        continue;
      if (! r05_brackets_right(p+9, p[7], p[2]))
        continue;
      r05_close_evar(p+11, p[8], p[7]);
      r05_close_evar(p+13, p[9], p[10]);
      if (! r05_tvar_left(p+15, p[5], p[4]))
        continue;
      if (! r05_empty_hole(p[16], p[4]))
        continue;
      if (! r05_svar_right(p+17, p[7], p[9]))
        continue;
      r05_close_evar(p+18, p[7], p[17]);

      r05_reset_allocator();
      r05_alloc_open_call(p+20);
      r05_alloc_function(&r05f_Term);
      r05_alloc_open_bracket(p+21);
      r05_alloc_char('(');
      r05_alloc_insert_pos(p+22);
      r05_alloc_open_bracket(p+23);
      r05_alloc_insert_pos(p+24);
      r05_alloc_close_bracket(p+25);
      r05_alloc_close_bracket(p+26);
      r05_alloc_insert_pos(p+27);
      r05_alloc_svar(p+17);
      r05_alloc_open_bracket(p+28);
      r05_alloc_insert_pos(p+29);
      r05_alloc_close_bracket(p+30);
      r05_alloc_close_call(p+31);
      r05_push_stack(p[31]);
      r05_push_stack(p[20]);
      r05_link_brackets(p[28], p[30]);
      r05_link_brackets(p[21], p[26]);
      r05_link_brackets(p[23], p[25]);
      r05_splice_tvar(p[22], p+15);
      r05_splice_evar(p[24], p+11);
      r05_splice_evar(p[27], p+18);
      r05_splice_evar(p[29], p+13);
      r05_splice_from_freelist(p[0]);
      r05_splice_to_freelist(p[0], p[2]);
      return;
    } while (0);

    do {
      /* e.Nested: 13 */
      /* e.Errors: 15 */
      /* t.OpenPos: 17 */
      /* t.ClosePos: 19 */
      /* s.Kind: 21 */
      /* e.Tokens: 22 */
      /* ('(' t.OpenPos (e.Nested)) (TkCloseBracket t.ClosePos) e.Tokens s.Kind (e.Errors) */
      if (! r05_brackets_left(p+3, p[1], p[2]))
        continue;
      if (! r05_char_left(p+5, p[3], p[4], '('))
        continue;
      if (! r05_brackets_left(p+6, p[4], p[2]))
        continue;
      if (! r05_function_left(p+8, p[6], p[7], &r05f_TkCloseBracket))
        continue;
      if (! r05_brackets_right(p+9, p[5], p[4]))
        continue;
      if (! r05_brackets_right(p+11, p[7], p[2]))
        continue;
      r05_close_evar(p+13, p[9], p[10]);
      r05_close_evar(p+15, p[11], p[12]);
      if (! r05_tvar_left(p+17, p[5], p[9]))
        continue;
      if (! r05_empty_hole(p[18], p[9]))
        continue;
      if (! r05_tvar_left(p+19, p[8], p[7]))
        continue;
      if (! r05_empty_hole(p[20], p[7]))
        continue;
      if (! r05_svar_right(p+21, p[7], p[11]))
        continue;
      r05_close_evar(p+22, p[7], p[21]);

      r05_reset_allocator();
      r05_alloc_open_bracket(p+24);
      r05_alloc_function(&r05f_Term);
      r05_alloc_open_bracket(p+25);
      r05_alloc_function(&r05f_Brackets);
      r05_alloc_insert_pos(p+26);
      r05_alloc_close_bracket(p+27);
      r05_alloc_close_bracket(p+28);
      r05_alloc_insert_pos(p+29);
      r05_alloc_svar(p+21);
      r05_alloc_open_bracket(p+30);
      r05_alloc_insert_pos(p+31);
      r05_alloc_close_bracket(p+32);
      r05_link_brackets(p[30], p[32]);
      r05_link_brackets(p[24], p[28]);
      r05_link_brackets(p[25], p[27]);
      r05_splice_evar(p[26], p+13);
      r05_splice_evar(p[29], p+22);
      r05_splice_evar(p[31], p+15);
      r05_splice_from_freelist(p[0]);
      r05_splice_to_freelist(p[0], p[2]);
      return;
    } while (0);

    do {
      /* e.Nested: 12 */
      /* e.Errors: 14 */
      /* s.Type: 16 */
      /* t.OpenPos: 17 */
      /* t.Pos: 19 */
      /* e.Value: 21 */
      /* s.Kind: 23 */
      /* e.Tokens: 24 */
      /* ('(' t.OpenPos (e.Nested)) (s.Type t.Pos e.Value) e.Tokens s.Kind (e.Errors) */
      if (! r05_brackets_left(p+3, p[1], p[2]))
        continue;
      if (! r05_char_left(p+5, p[3], p[4], '('))
        continue;
      if (! r05_brackets_left(p+6, p[4], p[2]))
        continue;
      if (! r05_brackets_right(p+8, p[5], p[4]))
        continue;
      if (! r05_brackets_right(p+10, p[7], p[2]))
        continue;
      r05_close_evar(p+12, p[8], p[9]);
      r05_close_evar(p+14, p[10], p[11]);
      if (! r05_svar_left(p+16, p[6], p[7]))
        continue;
      if (! r05_tvar_left(p+17, p[5], p[8]))
        continue;
      if (! r05_empty_hole(p[18], p[8]))
        continue;
      if (! r05_tvar_left(p+19, p[16], p[7]))
        continue;
      r05_close_evar(p+21, p[20], p[7]);
      if (! r05_svar_right(p+23, p[7], p[10]))
        continue;
      r05_close_evar(p+24, p[7], p[23]);

      r05_reset_allocator();
      r05_alloc_open_bracket(p+26);
      r05_alloc_function(&r05f_Term);
      r05_alloc_open_bracket(p+27);
      r05_alloc_function(&r05f_Brackets);
      r05_alloc_insert_pos(p+28);
      r05_alloc_close_bracket(p+29);
      r05_alloc_close_bracket(p+30);
      r05_alloc_open_bracket(p+31);
      r05_alloc_svar(p+16);
      r05_alloc_insert_pos(p+32);
      r05_alloc_close_bracket(p+33);
      r05_alloc_insert_pos(p+34);
      r05_alloc_svar(p+23);
      r05_alloc_open_bracket(p+35);
      r05_alloc_insert_pos(p+36);
      r05_alloc_open_bracket(p+37);
      r05_alloc_function(&r05f_Error);
      r05_alloc_insert_pos(p+38);
      r05_alloc_chars("unbalanced \'(\'", 14);
      r05_alloc_close_bracket(p+39);
      r05_alloc_open_bracket(p+40);
      r05_alloc_function(&r05f_Error);
      r05_alloc_tvar(p+19);
      r05_alloc_chars("Missed \')\'", 10);
      r05_alloc_close_bracket(p+41);
      r05_alloc_close_bracket(p+42);
      r05_link_brackets(p[35], p[42]);
      r05_link_brackets(p[40], p[41]);
      r05_link_brackets(p[37], p[39]);
      r05_link_brackets(p[31], p[33]);
      r05_link_brackets(p[26], p[30]);
      r05_link_brackets(p[27], p[29]);
      r05_splice_evar(p[28], p+12);
      r05_splice_tvar(p[32], p+19);
      r05_splice_evar(p[32], p+21);
      r05_splice_evar(p[34], p+24);
      r05_splice_evar(p[36], p+14);
      r05_splice_tvar(p[38], p+17);
      r05_splice_from_freelist(p[0]);
      r05_splice_to_freelist(p[0], p[2]);
      return;
    } while (0);

    do {
      /* e.Errors: 10 */
      /* t.Pos: 12 */
      /* e.FuncName: 14 */
      /* s.Kind: 16 */
      /* e.Tokens: 17 */
      /* () (TkOpenCall t.Pos e.FuncName) e.Tokens s.Kind (e.Errors) */
      if (! r05_brackets_left(p+3, p[1], p[2]))
        continue;
      if (! r05_brackets_left(p+5, p[4], p[2]))
        continue;
      if (! r05_function_left(p+7, p[5], p[6], &r05f_TkOpenCall))
        continue;
      if (! r05_brackets_right(p+8, p[6], p[2]))
        continue;
      if (! r05_empty_hole(p[3], p[4]))
        continue;
      r05_close_evar(p+10, p[8], p[9]);
      if (! r05_tvar_left(p+12, p[7], p[6]))
        continue;
      r05_close_evar(p+14, p[13], p[6]);
      if (! r05_svar_right(p+16, p[6], p[8]))
        continue;
      r05_close_evar(p+17, p[6], p[16]);

      r05_reset_allocator();
      r05_alloc_open_call(p+19);
      r05_alloc_function(&r05f_Term);
      r05_alloc_open_bracket(p+20);
      r05_alloc_char('<');
      r05_alloc_insert_pos(p+21);
      r05_alloc_open_bracket(p+22);
      r05_alloc_insert_pos(p+23);
      r05_alloc_close_bracket(p+24);
      r05_alloc_close_bracket(p+25);
      r05_alloc_open_call(p+26);
      r05_alloc_function(&r05f_Expression);
      r05_alloc_open_bracket(p+27);
      r05_alloc_close_bracket(p+28);
      r05_alloc_insert_pos(p+29);
      r05_alloc_svar(p+16);
      r05_alloc_open_bracket(p+30);
      r05_alloc_insert_pos(p+31);
      r05_alloc_close_bracket(p+32);
      r05_alloc_close_call(p+33);
      r05_alloc_close_call(p+34);
      r05_push_stack(p[34]);
      r05_push_stack(p[19]);
      r05_push_stack(p[33]);
      r05_push_stack(p[26]);
      r05_link_brackets(p[30], p[32]);
      r05_link_brackets(p[27], p[28]);
      r05_link_brackets(p[20], p[25]);
      r05_link_brackets(p[22], p[24]);
      r05_splice_tvar(p[21], p+12);
      r05_splice_evar(p[23], p+14);
      r05_splice_evar(p[29], p+17);
      r05_splice_evar(p[31], p+10);
      r05_splice_from_freelist(p[0]);
      r05_splice_to_freelist(p[0], p[2]);
      return;
    } while (0);

    do {
      /* e.FuncName: 13 */
      /* e.Nested: 15 */
      /* e.Errors: 17 */
      /* t.OpenPos: 19 */
      /* s.Kind: 21 */
      /* e.Tokens: 22 */
      /* ('<' t.OpenPos (e.FuncName)) (Expression e.Nested) e.Tokens s.Kind (e.Errors) */
      if (! r05_brackets_left(p+3, p[1], p[2]))
        continue;
      if (! r05_char_left(p+5, p[3], p[4], '<'))
        continue;
      if (! r05_brackets_left(p+6, p[4], p[2]))
        continue;
      if (! r05_function_left(p+8, p[6], p[7], &r05f_Expression))
        continue;
      if (! r05_brackets_right(p+9, p[5], p[4]))
        continue;
      if (! r05_brackets_right(p+11, p[7], p[2]))
        continue;
      r05_close_evar(p+13, p[9], p[10]);
      r05_close_evar(p+15, p[8], p[7]);
      r05_close_evar(p+17, p[11], p[12]);
      if (! r05_tvar_left(p+19, p[5], p[9]))
        continue;
      if (! r05_empty_hole(p[20], p[9]))
        continue;
      if (! r05_svar_right(p+21, p[7], p[11]))
        continue;
      r05_close_evar(p+22, p[7], p[21]);

      r05_reset_allocator();
      r05_alloc_open_call(p+24);
      r05_alloc_function(&r05f_Term);
      r05_alloc_open_bracket(p+25);
      r05_alloc_char('<');
      r05_alloc_insert_pos(p+26);
      r05_alloc_open_bracket(p+27);
      r05_alloc_insert_pos(p+28);
      r05_alloc_close_bracket(p+29);
      r05_alloc_open_bracket(p+30);
      r05_alloc_insert_pos(p+31);
      r05_alloc_close_bracket(p+32);
      r05_alloc_close_bracket(p+33);
      r05_alloc_insert_pos(p+34);
      r05_alloc_svar(p+21);
      r05_alloc_open_bracket(p+35);
      r05_alloc_insert_pos(p+36);
      r05_alloc_close_bracket(p+37);
      r05_alloc_close_call(p+38);
      r05_push_stack(p[38]);
      r05_push_stack(p[24]);
      r05_link_brackets(p[35], p[37]);
      r05_link_brackets(p[25], p[33]);
      r05_link_brackets(p[30], p[32]);
      r05_link_brackets(p[27], p[29]);
      r05_splice_tvar(p[26], p+19);
      r05_splice_evar(p[28], p+13);
      r05_splice_evar(p[31], p+15);
      r05_splice_evar(p[34], p+22);
      r05_splice_evar(p[36], p+17);
      r05_splice_from_freelist(p[0]);
      r05_splice_to_freelist(p[0], p[2]);
      return;
    } while (0);

    do {
      /* e.FuncName: 15 */
      /* e.Nested: 17 */
      /* e.Errors: 19 */
      /* t.OpenPos: 21 */
      /* t.ClosePos: 23 */
      /* s.Kind: 25 */
      /* e.Tokens: 26 */
      /* ('<' t.OpenPos (e.FuncName) (e.Nested)) (TkCloseCall t.ClosePos) e.Tokens s.Kind (e.Errors) */
      if (! r05_brackets_left(p+3, p[1], p[2]))
        continue;
      if (! r05_char_left(p+5, p[3], p[4], '<'))
        continue;
      if (! r05_brackets_left(p+6, p[4], p[2]))
        continue;
      if (! r05_function_left(p+8, p[6], p[7], &r05f_TkCloseCall))
        continue;
      if (! r05_brackets_right(p+9, p[5], p[4]))
        continue;
      if (! r05_brackets_right(p+11, p[5], p[9]))
        continue;
      if (! r05_brackets_right(p+13, p[7], p[2]))
        continue;
      r05_close_evar(p+15, p[11], p[12]);
      r05_close_evar(p+17, p[9], p[10]);
      r05_close_evar(p+19, p[13], p[14]);
      if (! r05_tvar_left(p+21, p[5], p[11]))
        continue;
      if (! r05_empty_hole(p[22], p[11]))
        continue;
      if (! r05_tvar_left(p+23, p[8], p[7]))
        continue;
      if (! r05_empty_hole(p[24], p[7]))
        continue;
      if (! r05_svar_right(p+25, p[7], p[13]))
        continue;
      r05_close_evar(p+26, p[7], p[25]);

      r05_reset_allocator();
      r05_alloc_open_bracket(p+28);
      r05_alloc_function(&r05f_Term);
      r05_alloc_open_bracket(p+29);
      r05_alloc_function(&r05f_Call);
      r05_alloc_insert_pos(p+30);
      r05_alloc_open_bracket(p+31);
      r05_alloc_insert_pos(p+32);
      r05_alloc_close_bracket(p+33);
      r05_alloc_insert_pos(p+34);
      r05_alloc_close_bracket(p+35);
      r05_alloc_close_bracket(p+36);
      r05_alloc_insert_pos(p+37);
      r05_alloc_svar(p+25);
      r05_alloc_open_bracket(p+38);
      r05_alloc_insert_pos(p+39);
      r05_alloc_open_call(p+40);
      r05_alloc_function(&r05f_CallBracketInPattern);
      r05_alloc_tvar(p+21);
      r05_alloc_svar(p+25);
      r05_alloc_char('<');
      r05_alloc_close_call(p+41);
      r05_alloc_close_bracket(p+42);
      r05_link_brackets(p[38], p[42]);
      r05_push_stack(p[41]);
      r05_push_stack(p[40]);
      r05_link_brackets(p[28], p[36]);
      r05_link_brackets(p[29], p[35]);
      r05_link_brackets(p[31], p[33]);
      r05_splice_tvar(p[30], p+21);
      r05_splice_evar(p[32], p+15);
      r05_splice_evar(p[34], p+17);
      r05_splice_evar(p[37], p+26);
      r05_splice_evar(p[39], p+19);
      r05_splice_from_freelist(p[0]);
      r05_splice_to_freelist(p[0], p[2]);
      return;
    } while (0);

    do {
      /* e.FuncName: 14 */
      /* e.Nested: 16 */
      /* e.Errors: 18 */
      /* s.Type: 20 */
      /* t.OpenPos: 21 */
      /* t.Pos: 23 */
      /* e.Value: 25 */
      /* s.Kind: 27 */
      /* e.Tokens: 28 */
      /* ('<' t.OpenPos (e.FuncName) (e.Nested)) (s.Type t.Pos e.Value) e.Tokens s.Kind (e.Errors) */
      if (! r05_brackets_left(p+3, p[1], p[2]))
        continue;
      if (! r05_char_left(p+5, p[3], p[4], '<'))
        continue;
      if (! r05_brackets_left(p+6, p[4], p[2]))
        continue;
      if (! r05_brackets_right(p+8, p[5], p[4]))
        continue;
      if (! r05_brackets_right(p+10, p[5], p[8]))
        continue;
      if (! r05_brackets_right(p+12, p[7], p[2]))
        continue;
      r05_close_evar(p+14, p[10], p[11]);
      r05_close_evar(p+16, p[8], p[9]);
      r05_close_evar(p+18, p[12], p[13]);
      if (! r05_svar_left(p+20, p[6], p[7]))
        continue;
      if (! r05_tvar_left(p+21, p[5], p[10]))
        continue;
      if (! r05_empty_hole(p[22], p[10]))
        continue;
      if (! r05_tvar_left(p+23, p[20], p[7]))
        continue;
      r05_close_evar(p+25, p[24], p[7]);
      if (! r05_svar_right(p+27, p[7], p[12]))
        continue;
      r05_close_evar(p+28, p[7], p[27]);

      r05_reset_allocator();
      r05_alloc_open_bracket(p+30);
      r05_alloc_function(&r05f_Term);
      r05_alloc_open_bracket(p+31);
      r05_alloc_function(&r05f_Call);
      r05_alloc_insert_pos(p+32);
      r05_alloc_open_bracket(p+33);
      r05_alloc_insert_pos(p+34);
      r05_alloc_close_bracket(p+35);
      r05_alloc_insert_pos(p+36);
      r05_alloc_close_bracket(p+37);
      r05_alloc_close_bracket(p+38);
      r05_alloc_insert_pos(p+39);
      r05_alloc_svar(p+27);
      r05_alloc_open_bracket(p+40);
      r05_alloc_open_bracket(p+41);
      r05_alloc_function(&r05f_Error);
      r05_alloc_tvar(p+21);
      r05_alloc_chars("unbalanced \'<\'", 14);
      r05_alloc_close_bracket(p+42);
      r05_alloc_open_bracket(p+43);
      r05_alloc_function(&r05f_Error);
      r05_alloc_insert_pos(p+44);
      r05_alloc_chars("Missed \'>\'", 10);
      r05_alloc_close_bracket(p+45);
      r05_alloc_open_call(p+46);
      r05_alloc_function(&r05f_CallBracketInPattern);
      r05_alloc_tvar(p+21);
      r05_alloc_svar(p+27);
      r05_alloc_char('>');
      r05_alloc_close_call(p+47);
      r05_alloc_close_bracket(p+48);
      r05_link_brackets(p[40], p[48]);
      r05_push_stack(p[47]);
      r05_push_stack(p[46]);
      r05_link_brackets(p[43], p[45]);
      r05_link_brackets(p[41], p[42]);
      r05_link_brackets(p[30], p[38]);
      r05_link_brackets(p[31], p[37]);
      r05_link_brackets(p[33], p[35]);
      r05_splice_tvar(p[32], p+21);
      r05_splice_evar(p[34], p+14);
      r05_splice_evar(p[36], p+16);
      r05_splice_evar(p[39], p+28);
      r05_splice_tvar(p[44], p+23);
      r05_splice_from_freelist(p[0]);
      r05_splice_to_freelist(p[0], p[2]);
      return;
    } while (0);

    r05_recognition_impossible();
  }
}

R05_DEFINE_LOCAL_FUNCTION(CallBracketInPattern, "CallBracketInPattern") {
  struct r05_node *p[10] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /* t.CallPos: 3 */
    /* s.Bracket: 6 */
    /* t.CallPos Result s.Bracket */
    if (! r05_tvar_left(p+3, p[1], p[2]))
      continue;
    if (! r05_function_left(p+5, p[4], p[2], &r05f_Result))
      continue;
    if (! r05_svar_left(p+6, p[5], p[2]))
      continue;
    if (! r05_empty_hole(p[6], p[2]))
      continue;

    r05_reset_allocator();
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  do {
    /* t.CallPos: 3 */
    /* s.Bracket: 6 */
    /* t.CallPos Pattern s.Bracket */
    if (! r05_tvar_left(p+3, p[1], p[2]))
      continue;
    if (! r05_function_left(p+5, p[4], p[2], &r05f_Pattern))
      continue;
    if (! r05_svar_left(p+6, p[5], p[2]))
      continue;
    if (! r05_empty_hole(p[6], p[2]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_bracket(p+7);
    r05_alloc_function(&r05f_Error);
    r05_alloc_insert_pos(p+8);
    r05_alloc_chars("unexpected \'", 12);
    r05_alloc_svar(p+6);
    r05_alloc_chars("\' in pattern expression, maybe missed \'=\'", 41);
    r05_alloc_close_bracket(p+9);
    r05_link_brackets(p[7], p[9]);
    r05_splice_tvar(p[8], p+3);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(Unbalanced, "Unbalanced") {
  R05_DEFINE_COND_FUNCTION(Unbalanced, "Unbalanced$1", 1)
  struct r05_node *p[42] = { 0 };

  r05_this_is_generated_function();
  switch (arg_begin->next->info.function->resume_entry >> 1) {
  case 0:
    p[0] = arg_begin;
    p[1] = arg_begin->next;
    p[2] = arg_end;

    do {
      /* e.Scanned: 10 */
      /* e.Errors: 12 */
      /* t.Pos: 14 */
      /* e.Text: 16 */
      /* s.Kind: 18 */
      /* e.Tokens: 19 */
      /* (e.Scanned) (TkSpecComment t.Pos e.Text) e.Tokens s.Kind (e.Errors) */
      if (! r05_brackets_left(p+3, p[1], p[2]))
        continue;
      if (! r05_brackets_left(p+5, p[4], p[2]))
        continue;
      if (! r05_function_left(p+7, p[5], p[6], &r05f_TkSpecComment))
        continue;
      if (! r05_brackets_right(p+8, p[6], p[2]))
        continue;
      r05_close_evar(p+10, p[3], p[4]);
      r05_close_evar(p+12, p[8], p[9]);
      if (! r05_tvar_left(p+14, p[7], p[6]))
        continue;
      r05_close_evar(p+16, p[15], p[6]);
      if (! r05_svar_right(p+18, p[6], p[8]))
        continue;
      r05_close_evar(p+19, p[6], p[18]);

      r05_reset_allocator();
      r05_alloc_open_call(p+21);
      r05_alloc_function(&r05f_Unbalanced);
      r05_alloc_open_bracket(p+22);
      r05_alloc_insert_pos(p+23);
      r05_alloc_close_bracket(p+24);
      r05_alloc_insert_pos(p+25);
      r05_alloc_svar(p+18);
      r05_alloc_open_bracket(p+26);
      r05_alloc_insert_pos(p+27);
      r05_alloc_close_bracket(p+28);
      r05_alloc_close_call(p+29);
      r05_push_stack(p[29]);
      r05_push_stack(p[21]);
      r05_link_brackets(p[26], p[28]);
      r05_link_brackets(p[22], p[24]);
      r05_splice_evar(p[23], p+10);
      r05_splice_evar(p[25], p+19);
      r05_splice_evar(p[27], p+12);
      r05_splice_from_freelist(p[0]);
      r05_splice_to_freelist(p[0], p[2]);
      return;
    } while (0);

    do {
      /* e.Errors: 9 */
      /* s.Type: 11 */
      /* t.Pos: 12 */
      /* s.Kind: 14 */
      /* e.Tokens: 15 */
      /* () (s.Type t.Pos) e.Tokens s.Kind (e.Errors) */
      if (! r05_brackets_left(p+3, p[1], p[2]))
        continue;
      if (! r05_brackets_left(p+5, p[4], p[2]))
        continue;
      if (! r05_brackets_right(p+7, p[6], p[2]))
        continue;
      if (! r05_empty_hole(p[3], p[4]))
        continue;
      r05_close_evar(p+9, p[7], p[8]);
      if (! r05_svar_left(p+11, p[5], p[6]))
        continue;
      if (! r05_tvar_left(p+12, p[11], p[6]))
        continue;
      if (! r05_empty_hole(p[13], p[6]))
        continue;
      if (! r05_svar_right(p+14, p[6], p[7]))
        continue;
      r05_close_evar(p+15, p[6], p[14]);

      r05_reset_allocator();
      r05_alloc_open_call(p+17);
      r05_alloc_function(&c1);
      r05_alloc_function(&r05f_TkCloseBracket);
      r05_alloc_function(&r05f_TkCloseCall);
      r05_alloc_close_call(p+18);
      r05_push_stack(p[18]);
      r05_push_stack(p[17]);
      r05_push_context(p, 17);
      r05_splice_from_freelist(p[2]);
      return;

  case 1:
      r05_pop_context(p, 17);
      p[17] = arg_begin;
      p[18] = arg_begin->next;
      p[19] = arg_end;

      do {
        /* e.Errors: 9 */
        /* s.Type: 11, 22 */
        /* t.Pos: 12 */
        /* s.Kind: 14 */
        /* e.Tokens: 15 */
        /* e.1: 20 */
        /* e.2: 23 */
        /* e.1 s.Type e.2 */
        p[20] = NULL;
        p[21] = p[18];
        do {
          r05_start_e_loop();
          if (! r05_repeated_svar_left(p+22, p[21], p[19], p+11))
            continue;
          r05_close_evar(p+23, p[22], p[19]);

          r05_reset_allocator();
          r05_alloc_open_call(p+25);
          r05_alloc_function(&r05f_Unbalanced);
          r05_alloc_open_bracket(p+26);
          r05_alloc_function(&r05f_TkCloseBracket);
          r05_alloc_close_bracket(p+27);
          r05_alloc_open_call(p+28);
          r05_alloc_function(&r05f_Expression);
          r05_alloc_open_bracket(p+29);
          r05_alloc_close_bracket(p+30);
          r05_alloc_insert_pos(p+31);
          r05_alloc_svar(p+14);
          r05_alloc_open_bracket(p+32);
          r05_alloc_insert_pos(p+33);
          r05_alloc_open_bracket(p+34);
          r05_alloc_function(&r05f_Error);
          r05_alloc_insert_pos(p+35);
          r05_alloc_chars("unbalanced ", 11);
          r05_alloc_open_call(p+36);
          r05_alloc_function(&r05f_TokName);
          r05_alloc_svar(p+11);
          r05_alloc_close_call(p+37);
          r05_alloc_close_bracket(p+38);
          r05_alloc_close_bracket(p+39);
          r05_alloc_close_call(p+40);
          r05_alloc_close_call(p+41);
          r05_push_stack(p[41]);
          r05_push_stack(p[25]);
          r05_push_stack(p[40]);
          r05_push_stack(p[28]);
          r05_link_brackets(p[32], p[39]);
          r05_link_brackets(p[34], p[38]);
          r05_push_stack(p[37]);
          r05_push_stack(p[36]);
          r05_link_brackets(p[29], p[30]);
          r05_link_brackets(p[26], p[27]);
          r05_splice_evar(p[31], p+15);
          r05_splice_evar(p[33], p+9);
          r05_splice_tvar(p[35], p+12);
          r05_splice_from_freelist(p[0]);
          r05_splice_to_freelist(p[0], p[2]);
          return;
        } while (r05_open_evar_advance(p+20, p[19]));
        r05_stop_e_loop();
      } while (0);
      r05_splice_to_freelist(p[17], p[19]);
    } while (0);

    do {
      /* e.Errors: 7 */
      /* s.Kind: 9 */
      /* e.Tokens: 10 */
      /* () e.Tokens s.Kind (e.Errors) */
      if (! r05_brackets_left(p+3, p[1], p[2]))
        continue;
      if (! r05_brackets_right(p+5, p[4], p[2]))
        continue;
      if (! r05_empty_hole(p[3], p[4]))
        continue;
      r05_close_evar(p+7, p[5], p[6]);
      if (! r05_svar_right(p+9, p[4], p[5]))
        continue;
      r05_close_evar(p+10, p[4], p[9]);

      r05_reset_allocator();
      r05_alloc_open_bracket(p+12);
      r05_alloc_function(&r05f_Unbalanced);
      r05_alloc_close_bracket(p+13);
      r05_alloc_insert_pos(p+14);
      r05_alloc_svar(p+9);
      r05_alloc_open_bracket(p+15);
      r05_alloc_insert_pos(p+16);
      r05_alloc_close_bracket(p+17);
      r05_link_brackets(p[15], p[17]);
      r05_link_brackets(p[12], p[13]);
      r05_splice_evar(p[14], p+10);
      r05_splice_evar(p[16], p+7);
      r05_splice_from_freelist(p[0]);
      r05_splice_to_freelist(p[0], p[2]);
      return;
    } while (0);

    do {
      /* e.Expression: 10 */
      /* e.Errors: 12 */
      /* s.Type: 14 */
      /* s.Kind: 15 */
      /* e.Tokens: 16 */
      /* (s.Type) (Expression e.Expression) e.Tokens s.Kind (e.Errors) */
      if (! r05_brackets_left(p+3, p[1], p[2]))
        continue;
      if (! r05_brackets_left(p+5, p[4], p[2]))
        continue;
      if (! r05_function_left(p+7, p[5], p[6], &r05f_Expression))
        continue;
      if (! r05_brackets_right(p+8, p[6], p[2]))
        continue;
      r05_close_evar(p+10, p[7], p[6]);
      r05_close_evar(p+12, p[8], p[9]);
      if (! r05_svar_left(p+14, p[3], p[4]))
        continue;
      if (! r05_empty_hole(p[14], p[4]))
        continue;
      if (! r05_svar_right(p+15, p[6], p[8]))
        continue;
      r05_close_evar(p+16, p[6], p[15]);

      r05_reset_allocator();
      r05_alloc_open_call(p+18);
      r05_alloc_function(&r05f_Unbalanced);
      r05_alloc_open_bracket(p+19);
      r05_alloc_svar(p+14);
      r05_alloc_open_bracket(p+20);
      r05_alloc_insert_pos(p+21);
      r05_alloc_close_bracket(p+22);
      r05_alloc_close_bracket(p+23);
      r05_alloc_open_call(p+24);
      r05_alloc_function(&r05f_Unbalanced);
      r05_alloc_open_bracket(p+25);
      r05_alloc_close_bracket(p+26);
      r05_alloc_insert_pos(p+27);
      r05_alloc_svar(p+15);
      r05_alloc_open_bracket(p+28);
      r05_alloc_insert_pos(p+29);
      r05_alloc_close_bracket(p+30);
      r05_alloc_close_call(p+31);
      r05_alloc_close_call(p+32);
      r05_push_stack(p[32]);
      r05_push_stack(p[18]);
      r05_push_stack(p[31]);
      r05_push_stack(p[24]);
      r05_link_brackets(p[28], p[30]);
      r05_link_brackets(p[25], p[26]);
      r05_link_brackets(p[19], p[23]);
      r05_link_brackets(p[20], p[22]);
      r05_splice_evar(p[21], p+10);
      r05_splice_evar(p[27], p+16);
      r05_splice_evar(p[29], p+12);
      r05_splice_from_freelist(p[0]);
      r05_splice_to_freelist(p[0], p[2]);
      return;
    } while (0);

    do {
      /* e.Expression: 12 */
      /* e.Unbalanced: 14 */
      /* e.Errors: 16 */
      /* s.Type: 18 */
      /* s.Kind: 19 */
      /* e.Tokens: 20 */
      /* (s.Type (e.Expression)) (Unbalanced e.Unbalanced) e.Tokens s.Kind (e.Errors) */
      if (! r05_brackets_left(p+3, p[1], p[2]))
        continue;
      if (! r05_brackets_left(p+5, p[4], p[2]))
        continue;
      if (! r05_function_left(p+7, p[5], p[6], &r05f_Unbalanced))
        continue;
      if (! r05_brackets_right(p+8, p[3], p[4]))
        continue;
      if (! r05_brackets_right(p+10, p[6], p[2]))
        continue;
      r05_close_evar(p+12, p[8], p[9]);
      r05_close_evar(p+14, p[7], p[6]);
      r05_close_evar(p+16, p[10], p[11]);
      if (! r05_svar_left(p+18, p[3], p[8]))
        continue;
      if (! r05_empty_hole(p[18], p[8]))
        continue;
      if (! r05_svar_right(p+19, p[6], p[10]))
        continue;
      r05_close_evar(p+20, p[6], p[19]);

      r05_reset_allocator();
      r05_alloc_open_bracket(p+22);
      r05_alloc_function(&r05f_Unbalanced);
      r05_alloc_insert_pos(p+23);
      r05_alloc_close_bracket(p+24);
      r05_alloc_insert_pos(p+25);
      r05_alloc_svar(p+19);
      r05_alloc_open_bracket(p+26);
      r05_alloc_insert_pos(p+27);
      r05_alloc_close_bracket(p+28);
      r05_link_brackets(p[26], p[28]);
      r05_link_brackets(p[22], p[24]);
      r05_splice_evar(p[23], p+12);
      r05_splice_evar(p[23], p+14);
      r05_splice_evar(p[25], p+20);
      r05_splice_evar(p[27], p+16);
      r05_splice_from_freelist(p[0]);
      r05_splice_to_freelist(p[0], p[2]);
      return;
    } while (0);

    r05_recognition_impossible();
  }
}

R05_DEFINE_LOCAL_FUNCTION(UnexpectedToken, "UnexpectedToken") {
  struct r05_node *p[18] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /* e.Expected: 5 */
    /* s.Type: 7 */
    /* t.Pos: 8 */
    /* e.Value: 10 */
    /* (s.Type t.Pos e.Value) e.Expected */
    if (! r05_brackets_left(p+3, p[1], p[2]))
      continue;
    r05_close_evar(p+5, p[4], p[2]);
    if (! r05_svar_left(p+7, p[3], p[4]))
      continue;
    if (! r05_tvar_left(p+8, p[7], p[4]))
      continue;
    r05_close_evar(p+10, p[9], p[4]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+12);
    r05_alloc_function(&r05f_Error);
    r05_alloc_insert_pos(p+13);
    r05_alloc_chars("unexpected ", 11);
    r05_alloc_open_call(p+14);
    r05_alloc_function(&r05f_TokName);
    r05_alloc_svar(p+7);
    r05_alloc_close_call(p+15);
    r05_alloc_chars(", expected ", 11);
    r05_alloc_insert_pos(p+16);
    r05_alloc_close_bracket(p+17);
    r05_link_brackets(p[12], p[17]);
    r05_push_stack(p[15]);
    r05_push_stack(p[14]);
    r05_splice_tvar(p[13], p+8);
    r05_splice_evar(p[16], p+5);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(SemanticCheck, "SemanticCheck") {
  R05_DEFINE_COND_FUNCTION(SemanticCheck, "SemanticCheck$1", 1)
  R05_DEFINE_COND_FUNCTION(SemanticCheck, "SemanticCheck$2", 2)
  struct r05_node *p[29] = { 0 };

  r05_this_is_generated_function();
  switch (arg_begin->next->info.function->resume_entry >> 1) {
  case 0:
    p[0] = arg_begin;
    p[1] = arg_begin->next;
    p[2] = arg_end;

    do {
      /* e.ParseErrors: 5 */
      /* t.FirstTokenPos: 7 */
      /* e.Program: 9 */
      /* t.FirstTokenPos e.Program (e.ParseErrors) */
      if (! r05_brackets_right(p+3, p[1], p[2]))
        continue;
      r05_close_evar(p+5, p[3], p[4]);
      if (! r05_tvar_left(p+7, p[1], p[3]))
        continue;
      r05_close_evar(p+9, p[8], p[3]);

      r05_reset_allocator();
      r05_alloc_open_call(p+11);
      r05_alloc_function(&c1);
      r05_alloc_open_call(p+12);
      r05_alloc_function(&r05f_GetFuncNames);
      r05_alloc_evar(p+9);
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
        /* e.ParseErrors: 5 */
        /* t.FirstTokenPos: 7 */
        /* e.Program: 9 */
        /* s.HasEntry: 14 */
        /* e.Functions: 15 */
        /* s.HasEntry e.Functions */
        if (! r05_svar_left(p+14, p[12], p[13]))
          continue;
        r05_close_evar(p+15, p[14], p[13]);

        r05_reset_allocator();
        r05_alloc_open_call(p+17);
        r05_alloc_function(&c2);
        r05_alloc_open_call(p+18);
        r05_alloc_function(&r05f_Map);
        r05_alloc_function(&r05f_r5fwm_parseru_FormatError);
        r05_alloc_evar(p+5);
        r05_alloc_close_call(p+19);
        r05_alloc_open_call(p+20);
        r05_alloc_function(&r05f_FindSemanticsErrors);
        r05_alloc_open_bracket(p+21);
        r05_alloc_evar(p+15);
        r05_alloc_open_call(p+22);
        r05_alloc_function(&r05f_Builtins);
        r05_alloc_close_call(p+23);
        r05_alloc_close_bracket(p+24);
        r05_alloc_evar(p+9);
        r05_alloc_close_call(p+25);
        r05_alloc_open_call(p+26);
        r05_alloc_function(&r05f_NoEntryError);
        r05_alloc_tvar(p+7);
        r05_alloc_svar(p+14);
        r05_alloc_close_call(p+27);
        r05_alloc_close_call(p+28);
        r05_push_stack(p[28]);
        r05_push_stack(p[17]);
        r05_push_stack(p[27]);
        r05_push_stack(p[26]);
        r05_push_stack(p[25]);
        r05_push_stack(p[20]);
        r05_link_brackets(p[21], p[24]);
        r05_push_stack(p[23]);
        r05_push_stack(p[22]);
        r05_push_stack(p[19]);
        r05_push_stack(p[18]);
        r05_push_context(p, 17);
        r05_splice_from_freelist(p[2]);
        return;

  case 2:
        r05_pop_context(p, 17);
        p[17] = arg_begin;
        p[18] = arg_begin->next;
        p[19] = arg_end;

        do {
          /* e.ParseErrors: 5 */
          /* t.FirstTokenPos: 7 */
          /* e.Program: 9 */
          /* s.HasEntry: 14 */
          /* e.Functions: 15 */
          /*  */
          if (! r05_empty_hole(p[18], p[19]))
            continue;

          r05_reset_allocator();
          r05_alloc_function(&r05f_Success);
          r05_alloc_insert_pos(p+20);
          r05_splice_evar(p[20], p+9);
          r05_splice_from_freelist(p[0]);
          r05_splice_to_freelist(p[0], p[2]);
          return;
        } while (0);

        do {
          /* e.ParseErrors: 5 */
          /* t.FirstTokenPos: 7 */
          /* e.Program: 9 */
          /* s.HasEntry: 14 */
          /* e.Functions: 15 */
          /* e.Errors: 20 */
          /* e.Errors */
          r05_close_evar(p+20, p[18], p[19]);

          r05_reset_allocator();
          r05_alloc_function(&r05f_Fails);
          r05_alloc_insert_pos(p+22);
          r05_splice_evar(p[22], p+20);
          r05_splice_from_freelist(p[0]);
          r05_splice_to_freelist(p[0], p[2]);
          return;
        } while (0);
      } while (0);
      r05_splice_to_freelist(p[11], p[13]);
    } while (0);

    r05_recognition_impossible();
  }
}

R05_DEFINE_ENTRY_FUNCTION(r5fwm_parseru_FormatError, "r5fw-parser_FormatError") {
  struct r05_node *p[13] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /* t.Pos: 6 */
    /* e.Message: 8 */
    /* (Error t.Pos e.Message) */
    if (! r05_brackets_left(p+3, p[1], p[2]))
      continue;
    if (! r05_function_left(p+5, p[3], p[4], &r05f_Error))
      continue;
    if (! r05_empty_hole(p[4], p[2]))
      continue;
    if (! r05_tvar_left(p+6, p[5], p[4]))
      continue;
    r05_close_evar(p+8, p[7], p[4]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+10);
    r05_alloc_insert_pos(p+11);
    r05_alloc_close_bracket(p+12);
    r05_link_brackets(p[10], p[12]);
    r05_splice_tvar(p[11], p+6);
    r05_splice_evar(p[11], p+8);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(NoEntryError, "NoEntryError") {
  struct r05_node *p[9] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /* t.Pos: 4 */
    /* t.Pos NoEntry */
    if (! r05_function_right(p+3, p[1], p[2], &r05f_NoEntry))
      continue;
    if (! r05_tvar_left(p+4, p[1], p[3]))
      continue;
    if (! r05_empty_hole(p[5], p[3]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_bracket(p+6);
    r05_alloc_insert_pos(p+7);
    r05_alloc_chars("No $ENTRY functions in a file", 29);
    r05_alloc_close_bracket(p+8);
    r05_link_brackets(p[6], p[8]);
    r05_splice_tvar(p[7], p+4);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  do {
    /* t.Pos: 4 */
    /* t.Pos HasEntry */
    if (! r05_function_right(p+3, p[1], p[2], &r05f_HasEntry))
      continue;
    if (! r05_tvar_left(p+4, p[1], p[3]))
      continue;
    if (! r05_empty_hole(p[5], p[3]))
      continue;

    r05_reset_allocator();
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(GetFuncNames, "GetFuncNames") {
  struct r05_node *p[8] = { 0 };

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
    r05_alloc_function(&r05f_MapAccum);
    r05_alloc_function(&r05f_r5fwm_parseru_GetNames);
    r05_alloc_function(&r05f_NoEntry);
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

R05_DEFINE_ENTRY_FUNCTION(r5fwm_parseru_GetNames, "r5fw-parser_GetNames") {
  struct r05_node *p[21] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /* s.HasEntry: 6 */
    /* t.Pos: 7 */
    /* e.Text: 9 */
    /* s.HasEntry (SpecialComment t.Pos e.Text) */
    if (! r05_brackets_right(p+3, p[1], p[2]))
      continue;
    if (! r05_function_left(p+5, p[3], p[4], &r05f_SpecialComment))
      continue;
    if (! r05_svar_left(p+6, p[1], p[3]))
      continue;
    if (! r05_empty_hole(p[6], p[3]))
      continue;
    if (! r05_tvar_left(p+7, p[5], p[4]))
      continue;
    r05_close_evar(p+9, p[8], p[4]);

    r05_reset_allocator();
    r05_alloc_svar(p+6);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  do {
    /* s.HasEntry: 6 */
    /* t.Pos: 7 */
    /* e.Name: 11 */
    /* s.Scope: 13 */
    /* e.Sentences: 14 */
    /* s.HasEntry (Function t.Pos (e.Name) s.Scope e.Sentences) */
    if (! r05_brackets_right(p+3, p[1], p[2]))
      continue;
    if (! r05_function_left(p+5, p[3], p[4], &r05f_Function))
      continue;
    if (! r05_svar_left(p+6, p[1], p[3]))
      continue;
    if (! r05_empty_hole(p[6], p[3]))
      continue;
    if (! r05_tvar_left(p+7, p[5], p[4]))
      continue;
    if (! r05_brackets_left(p+9, p[8], p[4]))
      continue;
    r05_close_evar(p+11, p[9], p[10]);
    if (! r05_svar_left(p+13, p[10], p[4]))
      continue;
    r05_close_evar(p+14, p[13], p[4]);

    r05_reset_allocator();
    r05_alloc_open_call(p+16);
    r05_alloc_function(&r05f_UpdateHasEntry);
    r05_alloc_svar(p+6);
    r05_alloc_svar(p+13);
    r05_alloc_close_call(p+17);
    r05_alloc_open_bracket(p+18);
    r05_alloc_insert_pos(p+19);
    r05_alloc_close_bracket(p+20);
    r05_link_brackets(p[18], p[20]);
    r05_push_stack(p[17]);
    r05_push_stack(p[16]);
    r05_splice_evar(p[19], p+11);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  do {
    /* e.ExternalNames: 6 */
    /* s.HasEntry: 8 */
    /* s.HasEntry (Extern e.ExternalNames) */
    if (! r05_brackets_right(p+3, p[1], p[2]))
      continue;
    if (! r05_function_left(p+5, p[3], p[4], &r05f_Extern))
      continue;
    r05_close_evar(p+6, p[5], p[4]);
    if (! r05_svar_left(p+8, p[1], p[3]))
      continue;
    if (! r05_empty_hole(p[8], p[3]))
      continue;

    r05_reset_allocator();
    r05_alloc_svar(p+8);
    r05_alloc_open_call(p+9);
    r05_alloc_function(&r05f_Map);
    r05_alloc_function(&r05f_r5fwm_parseru_RemovePos);
    r05_alloc_insert_pos(p+10);
    r05_alloc_close_call(p+11);
    r05_push_stack(p[11]);
    r05_push_stack(p[9]);
    r05_splice_evar(p[10], p+6);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(UpdateHasEntry, "UpdateHasEntry") {
  struct r05_node *p[5] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /* s.Scope: 4 */
    /* HasEntry s.Scope */
    if (! r05_function_left(p+3, p[1], p[2], &r05f_HasEntry))
      continue;
    if (! r05_svar_left(p+4, p[3], p[2]))
      continue;
    if (! r05_empty_hole(p[4], p[2]))
      continue;

    r05_reset_allocator();
    r05_alloc_function(&r05f_HasEntry);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  do {
    /* s.HasEntry: 4 */
    /* s.HasEntry Entry */
    if (! r05_function_right(p+3, p[1], p[2], &r05f_Entry))
      continue;
    if (! r05_svar_left(p+4, p[1], p[3]))
      continue;
    if (! r05_empty_hole(p[4], p[3]))
      continue;

    r05_reset_allocator();
    r05_alloc_function(&r05f_HasEntry);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  do {
    /* s.HasEntry: 4 */
    /* s.HasEntry Local */
    if (! r05_function_right(p+3, p[1], p[2], &r05f_Local))
      continue;
    if (! r05_svar_left(p+4, p[1], p[3]))
      continue;
    if (! r05_empty_hole(p[4], p[3]))
      continue;

    r05_reset_allocator();
    r05_alloc_svar(p+4);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_ENTRY_FUNCTION(r5fwm_parseru_RemovePos, "r5fw-parser_RemovePos") {
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

R05_DEFINE_LOCAL_FUNCTION(FindSemanticsErrors, "FindSemanticsErrors") {
  struct r05_node *p[17] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /* e.FuncNames: 5 */
    /* e.Units: 7 */
    /* (e.FuncNames) e.Units */
    if (! r05_brackets_left(p+3, p[1], p[2]))
      continue;
    r05_close_evar(p+5, p[3], p[4]);
    r05_close_evar(p+7, p[4], p[2]);

    r05_reset_allocator();
    r05_alloc_open_call(p+9);
    r05_alloc_function(&r05f_Map);
    r05_alloc_open_bracket(p+10);
    r05_alloc_function(&r05f_r5fwm_parseru_FindSemanticsErrors);
    r05_alloc_insert_pos(p+11);
    r05_alloc_close_bracket(p+12);
    r05_alloc_insert_pos(p+13);
    r05_alloc_close_call(p+14);
    r05_alloc_open_call(p+15);
    r05_alloc_function(&r05f_FindRedefinitions);
    r05_alloc_evar(p+7);
    r05_alloc_close_call(p+16);
    r05_push_stack(p[16]);
    r05_push_stack(p[15]);
    r05_push_stack(p[14]);
    r05_push_stack(p[9]);
    r05_link_brackets(p[10], p[12]);
    r05_splice_evar(p[11], p+5);
    r05_splice_evar(p[13], p+7);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(FindRedefinitions, "FindRedefinitions") {
  struct r05_node *p[14] = { 0 };

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
    r05_alloc_function(&r05f_DoFindRedefinitions);
    r05_alloc_open_call(p+6);
    r05_alloc_function(&r05f_Map);
    r05_alloc_function(&r05f_r5fwm_parseru_BuiltinDefinition);
    r05_alloc_open_call(p+7);
    r05_alloc_function(&r05f_Builtins);
    r05_alloc_close_call(p+8);
    r05_alloc_close_call(p+9);
    r05_alloc_open_call(p+10);
    r05_alloc_function(&r05f_Map);
    r05_alloc_function(&r05f_r5fwm_parseru_ExtractDefinition);
    r05_alloc_insert_pos(p+11);
    r05_alloc_close_call(p+12);
    r05_alloc_close_call(p+13);
    r05_push_stack(p[13]);
    r05_push_stack(p[5]);
    r05_push_stack(p[12]);
    r05_push_stack(p[10]);
    r05_push_stack(p[9]);
    r05_push_stack(p[6]);
    r05_push_stack(p[8]);
    r05_push_stack(p[7]);
    r05_splice_evar(p[11], p+3);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);
}

R05_DEFINE_ENTRY_FUNCTION(r5fwm_parseru_BuiltinDefinition, "r5fw-parser_BuiltinDefinition") {
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
    r05_alloc_function(&r05f_Builtin);
    r05_alloc_function(&r05f_NOm_POS);
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

R05_DEFINE_ENTRY_FUNCTION(r5fwm_parseru_ExtractDefinition, "r5fw-parser_ExtractDefinition") {
  struct r05_node *p[18] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /* e.Name: 7 */
    /* (Builtin NO-POS e.Name) */
    if (! r05_brackets_left(p+3, p[1], p[2]))
      continue;
    if (! r05_function_left(p+5, p[3], p[4], &r05f_Builtin))
      continue;
    if (! r05_function_left(p+6, p[5], p[4], &r05f_NOm_POS))
      continue;
    if (! r05_empty_hole(p[4], p[2]))
      continue;
    r05_close_evar(p+7, p[6], p[4]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+9);
    r05_alloc_function(&r05f_Builtin);
    r05_alloc_function(&r05f_NOm_POS);
    r05_alloc_insert_pos(p+10);
    r05_alloc_close_bracket(p+11);
    r05_link_brackets(p[9], p[11]);
    r05_splice_evar(p[10], p+7);
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

  do {
    /* t.Pos: 6 */
    /* e.Name: 10 */
    /* s.Scope: 12 */
    /* e.Sentences: 13 */
    /* (Function t.Pos (e.Name) s.Scope e.Sentences) */
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
    r05_alloc_function(&r05f_Define);
    r05_alloc_insert_pos(p+16);
    r05_alloc_close_bracket(p+17);
    r05_link_brackets(p[15], p[17]);
    r05_splice_tvar(p[16], p+6);
    r05_splice_evar(p[16], p+10);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  do {
    /* e.ExternalNames: 6 */
    /* (Extern e.ExternalNames) */
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
    r05_alloc_function(&r05f_r5fwm_parseru_MarkExternalName);
    r05_alloc_insert_pos(p+9);
    r05_alloc_close_call(p+10);
    r05_push_stack(p[10]);
    r05_push_stack(p[8]);
    r05_splice_evar(p[9], p+6);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_ENTRY_FUNCTION(r5fwm_parseru_MarkExternalName, "r5fw-parser_MarkExternalName") {
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
    r05_alloc_function(&r05f_External);
    r05_alloc_insert_pos(p+10);
    r05_alloc_close_bracket(p+11);
    r05_link_brackets(p[9], p[11]);
    r05_splice_tvar(p[10], p+5);
    r05_splice_evar(p[10], p+7);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(DoFindRedefinitions, "DoFindRedefinitions") {
  struct r05_node *p[31] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /* s.Type2: 5 */
    /* t.Pos2: 6 */
    /* e.Name: 8, 14 */
    /* e.Defs-B: 10 */
    /* e.Defs-E: 16 */
    /* s.Type1: 18 */
    /* t.Pos1: 19 */
    /* e.Defs-B (s.Type1 t.Pos1 e.Name) e.Defs-E (s.Type2 t.Pos2 e.Name) */
    if (! r05_brackets_right(p+3, p[1], p[2]))
      continue;
    if (! r05_svar_left(p+5, p[3], p[4]))
      continue;
    if (! r05_tvar_left(p+6, p[5], p[4]))
      continue;
    r05_close_evar(p+8, p[7], p[4]);
    p[10] = NULL;
    p[11] = p[1];
    do {
      r05_start_e_loop();
      if (! r05_brackets_left(p+12, p[11], p[3]))
        continue;
      if (! r05_repeated_evar_right(p+14, p[12], p[13], p+8))
        continue;
      r05_close_evar(p+16, p[13], p[3]);
      if (! r05_svar_left(p+18, p[12], r05_evar_true_begin(p+14)))
        continue;
      if (! r05_tvar_left(p+19, p[18], r05_evar_true_begin(p+14)))
        continue;
      if (! r05_empty_hole(p[20], r05_evar_true_begin(p+14)))
        continue;

      r05_reset_allocator();
      r05_alloc_open_call(p+21);
      r05_alloc_function(&r05f_DoFindRedefinitions);
      r05_alloc_insert_pos(p+22);
      r05_alloc_open_bracket(p+23);
      r05_alloc_svar(p+18);
      r05_alloc_insert_pos(p+24);
      r05_alloc_close_bracket(p+25);
      r05_alloc_insert_pos(p+26);
      r05_alloc_close_call(p+27);
      r05_alloc_open_call(p+28);
      r05_alloc_function(&r05f_MakeRedefinitionError);
      r05_alloc_svar(p+18);
      r05_alloc_tvar(p+19);
      r05_alloc_svar(p+5);
      r05_alloc_insert_pos(p+29);
      r05_alloc_close_call(p+30);
      r05_push_stack(p[30]);
      r05_push_stack(p[28]);
      r05_push_stack(p[27]);
      r05_push_stack(p[21]);
      r05_link_brackets(p[23], p[25]);
      r05_splice_evar(p[22], p+10);
      r05_splice_tvar(p[24], p+19);
      r05_splice_evar(p[24], p+8);
      r05_splice_evar(p[26], p+16);
      r05_splice_tvar(p[29], p+6);
      r05_splice_evar(p[29], p+14);
      r05_splice_from_freelist(p[0]);
      r05_splice_to_freelist(p[0], p[2]);
      return;
    } while (r05_open_evar_advance(p+10, p[3]));
    r05_stop_e_loop();
  } while (0);

  do {
    /* t.Other: 3 */
    /* e.Defs: 5 */
    /* e.Defs t.Other */
    if (! r05_tvar_right(p+3, p[1], p[2]))
      continue;
    r05_close_evar(p+5, p[1], p[3]);

    r05_reset_allocator();
    r05_alloc_open_call(p+7);
    r05_alloc_function(&r05f_DoFindRedefinitions);
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

R05_DEFINE_LOCAL_FUNCTION(MakeRedefinitionError, "MakeRedefinitionError") {
  struct r05_node *p[19] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /* s.Type: 5 */
    /* t.Pos: 6 */
    /* e.Name: 8 */
    /* Builtin NO-POS s.Type t.Pos e.Name */
    if (! r05_function_left(p+3, p[1], p[2], &r05f_Builtin))
      continue;
    if (! r05_function_left(p+4, p[3], p[2], &r05f_NOm_POS))
      continue;
    if (! r05_svar_left(p+5, p[4], p[2]))
      continue;
    if (! r05_tvar_left(p+6, p[5], p[2]))
      continue;
    r05_close_evar(p+8, p[7], p[2]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+10);
    r05_alloc_insert_pos(p+11);
    r05_alloc_chars("Re", 2);
    r05_alloc_open_call(p+12);
    r05_alloc_function(&r05f_DeclType);
    r05_alloc_svar(p+5);
    r05_alloc_close_call(p+13);
    r05_alloc_chars("ion of builtin function ", 24);
    r05_alloc_insert_pos(p+14);
    r05_alloc_close_bracket(p+15);
    r05_link_brackets(p[10], p[15]);
    r05_push_stack(p[13]);
    r05_push_stack(p[12]);
    r05_splice_tvar(p[11], p+6);
    r05_splice_evar(p[14], p+8);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  do {
    /* s.Type1: 3 */
    /* t.Pos1: 4 */
    /* s.Type2: 6 */
    /* t.Pos2: 7 */
    /* e.Name: 9 */
    /* s.Type1 t.Pos1 s.Type2 t.Pos2 e.Name */
    if (! r05_svar_left(p+3, p[1], p[2]))
      continue;
    if (! r05_tvar_left(p+4, p[3], p[2]))
      continue;
    if (! r05_svar_left(p+6, p[5], p[2]))
      continue;
    if (! r05_tvar_left(p+7, p[6], p[2]))
      continue;
    r05_close_evar(p+9, p[8], p[2]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+11);
    r05_alloc_insert_pos(p+12);
    r05_alloc_chars("Re", 2);
    r05_alloc_open_call(p+13);
    r05_alloc_function(&r05f_DeclType);
    r05_alloc_svar(p+6);
    r05_alloc_close_call(p+14);
    r05_alloc_chars("ion of function ", 16);
    r05_alloc_insert_pos(p+15);
    r05_alloc_chars(" (function is already ", 22);
    r05_alloc_open_call(p+16);
    r05_alloc_function(&r05f_DeclType);
    r05_alloc_svar(p+3);
    r05_alloc_close_call(p+17);
    r05_alloc_chars("ed)", 3);
    r05_alloc_close_bracket(p+18);
    r05_link_brackets(p[11], p[18]);
    r05_push_stack(p[17]);
    r05_push_stack(p[16]);
    r05_push_stack(p[14]);
    r05_push_stack(p[13]);
    r05_splice_tvar(p[12], p+7);
    r05_splice_evar(p[15], p+9);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(DeclType, "DeclType") {
  struct r05_node *p[4] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /* Define */
    if (! r05_function_left(p+3, p[1], p[2], &r05f_Define))
      continue;
    if (! r05_empty_hole(p[3], p[2]))
      continue;

    r05_reset_allocator();
    r05_alloc_chars("defin", 5);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  do {
    /* External */
    if (! r05_function_left(p+3, p[1], p[2], &r05f_External))
      continue;
    if (! r05_empty_hole(p[3], p[2]))
      continue;

    r05_reset_allocator();
    r05_alloc_chars("declar", 6);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_ENTRY_FUNCTION(r5fwm_parseru_FindSemanticsErrors, "r5fw-parser_FindSemanticsErrors") {
  struct r05_node *p[27] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /* e.FuncNames: 6 */
    /* t.Pos: 8 */
    /* e.Text: 10 */
    /* e.FuncNames (SpecialComment t.Pos e.Text) */
    if (! r05_brackets_right(p+3, p[1], p[2]))
      continue;
    if (! r05_function_left(p+5, p[3], p[4], &r05f_SpecialComment))
      continue;
    r05_close_evar(p+6, p[1], p[3]);
    if (! r05_tvar_left(p+8, p[5], p[4]))
      continue;
    r05_close_evar(p+10, p[9], p[4]);

    r05_reset_allocator();
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  do {
    /* e.FuncNames: 6 */
    /* t.Pos: 8 */
    /* e.Name: 12 */
    /* s.Scope: 14 */
    /* e.Sentences: 15 */
    /* e.FuncNames (Function t.Pos (e.Name) s.Scope e.Sentences) */
    if (! r05_brackets_right(p+3, p[1], p[2]))
      continue;
    if (! r05_function_left(p+5, p[3], p[4], &r05f_Function))
      continue;
    r05_close_evar(p+6, p[1], p[3]);
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
    r05_alloc_function(&r05f_CheckSentences);
    r05_alloc_open_bracket(p+18);
    r05_alloc_insert_pos(p+19);
    r05_alloc_close_bracket(p+20);
    r05_alloc_open_bracket(p+21);
    r05_alloc_close_bracket(p+22);
    r05_alloc_open_call(p+23);
    r05_alloc_function(&r05f_ExtractCheckablem_Sentences);
    r05_alloc_insert_pos(p+24);
    r05_alloc_close_call(p+25);
    r05_alloc_close_call(p+26);
    r05_push_stack(p[26]);
    r05_push_stack(p[17]);
    r05_push_stack(p[25]);
    r05_push_stack(p[23]);
    r05_link_brackets(p[21], p[22]);
    r05_link_brackets(p[18], p[20]);
    r05_splice_evar(p[19], p+6);
    r05_splice_evar(p[24], p+15);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  do {
    /* e.FuncNames: 6 */
    /* e.Names: 8 */
    /* e.FuncNames (Extern e.Names) */
    if (! r05_brackets_right(p+3, p[1], p[2]))
      continue;
    if (! r05_function_left(p+5, p[3], p[4], &r05f_Extern))
      continue;
    r05_close_evar(p+6, p[1], p[3]);
    r05_close_evar(p+8, p[5], p[4]);

    r05_reset_allocator();
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(CheckSentences, "CheckSentences") {
  struct r05_node *p[24] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /* e.FuncNames: 7 */
    /* e.Variables: 9 */
    /* e.Sentences: 11 */
    /* (e.FuncNames) (e.Variables) e.Sentences */
    if (! r05_brackets_left(p+3, p[1], p[2]))
      continue;
    if (! r05_brackets_left(p+5, p[4], p[2]))
      continue;
    r05_close_evar(p+7, p[3], p[4]);
    r05_close_evar(p+9, p[5], p[6]);
    r05_close_evar(p+11, p[6], p[2]);

    r05_reset_allocator();
    r05_alloc_open_call(p+13);
    r05_alloc_function(&r05f_Map);
    r05_alloc_open_bracket(p+14);
    r05_alloc_function(&r05f_r5fwm_parseru_CheckSentence);
    r05_alloc_open_bracket(p+15);
    r05_alloc_insert_pos(p+16);
    r05_alloc_close_bracket(p+17);
    r05_alloc_open_bracket(p+18);
    r05_alloc_insert_pos(p+19);
    r05_alloc_close_bracket(p+20);
    r05_alloc_close_bracket(p+21);
    r05_alloc_insert_pos(p+22);
    r05_alloc_close_call(p+23);
    r05_push_stack(p[23]);
    r05_push_stack(p[13]);
    r05_link_brackets(p[14], p[21]);
    r05_link_brackets(p[18], p[20]);
    r05_link_brackets(p[15], p[17]);
    r05_splice_evar(p[16], p+7);
    r05_splice_evar(p[19], p+9);
    r05_splice_evar(p[22], p+11);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(ExtractCheckable, "ExtractCheckable") {
  struct r05_node *p[17] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /* e.Pattern: 5 */
    /* e.Conditions-And-SentenceTail: 7 */
    /* (e.Pattern) e.Conditions-And-SentenceTail */
    if (! r05_brackets_left(p+3, p[1], p[2]))
      continue;
    r05_close_evar(p+5, p[3], p[4]);
    r05_close_evar(p+7, p[4], p[2]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+9);
    r05_alloc_open_call(p+10);
    r05_alloc_function(&r05f_ExtractCheckablem_Expr);
    r05_alloc_insert_pos(p+11);
    r05_alloc_close_call(p+12);
    r05_alloc_close_bracket(p+13);
    r05_alloc_open_call(p+14);
    r05_alloc_function(&r05f_ExtractCheckablem_Tail);
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

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(ExtractCheckablem_Tail, "ExtractCheckable-Tail") {
  struct r05_node *p[31] = { 0 };

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
    r05_alloc_open_bracket(p+16);
    r05_alloc_function(&r05f_Condition);
    r05_alloc_open_bracket(p+17);
    r05_alloc_open_call(p+18);
    r05_alloc_function(&r05f_ExtractCheckablem_Expr);
    r05_alloc_insert_pos(p+19);
    r05_alloc_close_call(p+20);
    r05_alloc_close_bracket(p+21);
    r05_alloc_open_bracket(p+22);
    r05_alloc_open_call(p+23);
    r05_alloc_function(&r05f_ExtractCheckablem_Expr);
    r05_alloc_insert_pos(p+24);
    r05_alloc_close_call(p+25);
    r05_alloc_close_bracket(p+26);
    r05_alloc_close_bracket(p+27);
    r05_alloc_open_call(p+28);
    r05_alloc_function(&r05f_ExtractCheckablem_Tail);
    r05_alloc_insert_pos(p+29);
    r05_alloc_close_call(p+30);
    r05_push_stack(p[30]);
    r05_push_stack(p[28]);
    r05_link_brackets(p[16], p[27]);
    r05_link_brackets(p[22], p[26]);
    r05_push_stack(p[25]);
    r05_push_stack(p[23]);
    r05_link_brackets(p[17], p[21]);
    r05_push_stack(p[20]);
    r05_push_stack(p[18]);
    r05_splice_evar(p[19], p+10);
    r05_splice_evar(p[24], p+12);
    r05_splice_evar(p[29], p+14);
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
    r05_alloc_function(&r05f_RETURN);
    r05_alloc_open_bracket(p+8);
    r05_alloc_open_call(p+9);
    r05_alloc_function(&r05f_ExtractCheckablem_Expr);
    r05_alloc_insert_pos(p+10);
    r05_alloc_close_call(p+11);
    r05_alloc_close_bracket(p+12);
    r05_link_brackets(p[8], p[12]);
    r05_push_stack(p[11]);
    r05_push_stack(p[9]);
    r05_splice_evar(p[10], p+6);
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
    r05_alloc_function(&r05f_CALLm_BLOCK);
    r05_alloc_open_bracket(p+10);
    r05_alloc_open_call(p+11);
    r05_alloc_function(&r05f_ExtractCheckablem_Expr);
    r05_alloc_insert_pos(p+12);
    r05_alloc_close_call(p+13);
    r05_alloc_close_bracket(p+14);
    r05_alloc_open_call(p+15);
    r05_alloc_function(&r05f_ExtractCheckablem_Sentences);
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

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(ExtractCheckablem_Sentences, "ExtractCheckable-Sentences") {
  struct r05_node *p[17] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /* e.Sentence: 5 */
    /* e.Sentences: 7 */
    /* (e.Sentence) e.Sentences */
    if (! r05_brackets_left(p+3, p[1], p[2]))
      continue;
    r05_close_evar(p+5, p[3], p[4]);
    r05_close_evar(p+7, p[4], p[2]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+9);
    r05_alloc_open_call(p+10);
    r05_alloc_function(&r05f_ExtractCheckable);
    r05_alloc_insert_pos(p+11);
    r05_alloc_close_call(p+12);
    r05_alloc_close_bracket(p+13);
    r05_alloc_open_call(p+14);
    r05_alloc_function(&r05f_ExtractCheckablem_Sentences);
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

R05_DEFINE_LOCAL_FUNCTION(ExtractCheckablem_Expr, "ExtractCheckable-Expr") {
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
    r05_alloc_function(&r05f_r5fwm_parseru_ExtractCheckablem_Term);
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

R05_DEFINE_ENTRY_FUNCTION(r5fwm_parseru_ExtractCheckablem_Term, "r5fw-parser_ExtractCheckable-Term") {
  struct r05_node *p[20] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /* t.SrcPos: 6 */
    /* s.VarType: 8 */
    /* e.Index: 9 */
    /* (Variable t.SrcPos s.VarType e.Index) */
    if (! r05_brackets_left(p+3, p[1], p[2]))
      continue;
    if (! r05_function_left(p+5, p[3], p[4], &r05f_Variable))
      continue;
    if (! r05_empty_hole(p[4], p[2]))
      continue;
    if (! r05_tvar_left(p+6, p[5], p[4]))
      continue;
    if (! r05_svar_left(p+8, p[7], p[4]))
      continue;
    r05_close_evar(p+9, p[8], p[4]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+11);
    r05_alloc_function(&r05f_Variable);
    r05_alloc_insert_pos(p+12);
    r05_alloc_svar(p+8);
    r05_alloc_insert_pos(p+13);
    r05_alloc_close_bracket(p+14);
    r05_link_brackets(p[11], p[14]);
    r05_splice_tvar(p[12], p+6);
    r05_splice_evar(p[13], p+9);
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
    r05_alloc_function(&r05f_ExtractCheckablem_Expr);
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
    /* e.Expr: 12 */
    /* (Call t.Pos (e.Name) e.Expr) */
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
    r05_alloc_function(&r05f_ExtractCheckablem_Expr);
    r05_alloc_insert_pos(p+18);
    r05_alloc_close_call(p+19);
    r05_push_stack(p[19]);
    r05_push_stack(p[17]);
    r05_link_brackets(p[14], p[16]);
    r05_splice_tvar(p[15], p+6);
    r05_splice_evar(p[15], p+10);
    r05_splice_evar(p[18], p+12);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  do {
    /* t.OtherTerm: 3 */
    /* t.OtherTerm */
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

R05_DEFINE_ENTRY_FUNCTION(r5fwm_parseru_CheckSentence, "r5fw-parser_CheckSentence") {
  struct r05_node *p[28] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /* e.FuncNames: 11 */
    /* e.Variables: 13 */
    /* e.PatternItems: 15 */
    /* e.Tail: 17 */
    /* (e.FuncNames) (e.Variables) ((e.PatternItems) e.Tail) */
    if (! r05_brackets_left(p+3, p[1], p[2]))
      continue;
    if (! r05_brackets_left(p+5, p[4], p[2]))
      continue;
    if (! r05_brackets_left(p+7, p[6], p[2]))
      continue;
    if (! r05_brackets_left(p+9, p[7], p[8]))
      continue;
    if (! r05_empty_hole(p[8], p[2]))
      continue;
    r05_close_evar(p+11, p[3], p[4]);
    r05_close_evar(p+13, p[5], p[6]);
    r05_close_evar(p+15, p[9], p[10]);
    r05_close_evar(p+17, p[10], p[8]);

    r05_reset_allocator();
    r05_alloc_open_call(p+19);
    r05_alloc_function(&r05f_CheckSentencem_Tail);
    r05_alloc_open_bracket(p+20);
    r05_alloc_insert_pos(p+21);
    r05_alloc_close_bracket(p+22);
    r05_alloc_open_bracket(p+23);
    r05_alloc_insert_pos(p+24);
    r05_alloc_close_bracket(p+25);
    r05_alloc_insert_pos(p+26);
    r05_alloc_close_call(p+27);
    r05_push_stack(p[27]);
    r05_push_stack(p[19]);
    r05_link_brackets(p[23], p[25]);
    r05_link_brackets(p[20], p[22]);
    r05_splice_evar(p[21], p+11);
    r05_splice_evar(p[24], p+13);
    r05_splice_evar(p[24], p+15);
    r05_splice_evar(p[26], p+17);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(CheckSentencem_Tail, "CheckSentence-Tail") {
  struct r05_node *p[41] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /* e.FuncNames: 14 */
    /* e.Variables: 16 */
    /* e.ResultItems: 18 */
    /* e.PatternItems: 20 */
    /* e.Tail: 22 */
    /* (e.FuncNames) (e.Variables) (Condition (e.ResultItems) (e.PatternItems)) e.Tail */
    if (! r05_brackets_left(p+3, p[1], p[2]))
      continue;
    if (! r05_brackets_left(p+5, p[4], p[2]))
      continue;
    if (! r05_brackets_left(p+7, p[6], p[2]))
      continue;
    if (! r05_function_left(p+9, p[7], p[8], &r05f_Condition))
      continue;
    if (! r05_brackets_left(p+10, p[9], p[8]))
      continue;
    if (! r05_brackets_left(p+12, p[11], p[8]))
      continue;
    if (! r05_empty_hole(p[13], p[8]))
      continue;
    r05_close_evar(p+14, p[3], p[4]);
    r05_close_evar(p+16, p[5], p[6]);
    r05_close_evar(p+18, p[10], p[11]);
    r05_close_evar(p+20, p[12], p[13]);
    r05_close_evar(p+22, p[8], p[2]);

    r05_reset_allocator();
    r05_alloc_open_call(p+24);
    r05_alloc_function(&r05f_CheckResult);
    r05_alloc_open_bracket(p+25);
    r05_alloc_insert_pos(p+26);
    r05_alloc_close_bracket(p+27);
    r05_alloc_open_bracket(p+28);
    r05_alloc_insert_pos(p+29);
    r05_alloc_close_bracket(p+30);
    r05_alloc_insert_pos(p+31);
    r05_alloc_close_call(p+32);
    r05_alloc_open_call(p+33);
    r05_alloc_function(&r05f_CheckSentencem_Tail);
    r05_alloc_open_bracket(p+34);
    r05_alloc_evar(p+14);
    r05_alloc_close_bracket(p+35);
    r05_alloc_open_bracket(p+36);
    r05_alloc_evar(p+16);
    r05_alloc_insert_pos(p+37);
    r05_alloc_close_bracket(p+38);
    r05_alloc_insert_pos(p+39);
    r05_alloc_close_call(p+40);
    r05_push_stack(p[40]);
    r05_push_stack(p[33]);
    r05_link_brackets(p[36], p[38]);
    r05_link_brackets(p[34], p[35]);
    r05_push_stack(p[32]);
    r05_push_stack(p[24]);
    r05_link_brackets(p[28], p[30]);
    r05_link_brackets(p[25], p[27]);
    r05_splice_evar(p[26], p+14);
    r05_splice_evar(p[29], p+16);
    r05_splice_evar(p[31], p+18);
    r05_splice_evar(p[37], p+20);
    r05_splice_evar(p[39], p+22);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  do {
    /* e.FuncNames: 10 */
    /* e.Variables: 12 */
    /* e.ResultItems: 14 */
    /* (e.FuncNames) (e.Variables) RETURN (e.ResultItems) */
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
    r05_alloc_function(&r05f_CheckResult);
    r05_alloc_open_bracket(p+17);
    r05_alloc_insert_pos(p+18);
    r05_alloc_close_bracket(p+19);
    r05_alloc_open_bracket(p+20);
    r05_alloc_insert_pos(p+21);
    r05_alloc_close_bracket(p+22);
    r05_alloc_insert_pos(p+23);
    r05_alloc_close_call(p+24);
    r05_push_stack(p[24]);
    r05_push_stack(p[16]);
    r05_link_brackets(p[20], p[22]);
    r05_link_brackets(p[17], p[19]);
    r05_splice_evar(p[18], p+10);
    r05_splice_evar(p[21], p+12);
    r05_splice_evar(p[23], p+14);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  do {
    /* e.FuncNames: 10 */
    /* e.Variables: 12 */
    /* e.ResultItems: 14 */
    /* e.Sentences: 16 */
    /* (e.FuncNames) (e.Variables) CALL-BLOCK (e.ResultItems) e.Sentences */
    if (! r05_brackets_left(p+3, p[1], p[2]))
      continue;
    if (! r05_brackets_left(p+5, p[4], p[2]))
      continue;
    if (! r05_function_left(p+7, p[6], p[2], &r05f_CALLm_BLOCK))
      continue;
    if (! r05_brackets_left(p+8, p[7], p[2]))
      continue;
    r05_close_evar(p+10, p[3], p[4]);
    r05_close_evar(p+12, p[5], p[6]);
    r05_close_evar(p+14, p[8], p[9]);
    r05_close_evar(p+16, p[9], p[2]);

    r05_reset_allocator();
    r05_alloc_open_call(p+18);
    r05_alloc_function(&r05f_CheckResult);
    r05_alloc_open_bracket(p+19);
    r05_alloc_insert_pos(p+20);
    r05_alloc_close_bracket(p+21);
    r05_alloc_open_bracket(p+22);
    r05_alloc_insert_pos(p+23);
    r05_alloc_close_bracket(p+24);
    r05_alloc_insert_pos(p+25);
    r05_alloc_close_call(p+26);
    r05_alloc_open_call(p+27);
    r05_alloc_function(&r05f_CheckSentences);
    r05_alloc_open_bracket(p+28);
    r05_alloc_evar(p+10);
    r05_alloc_close_bracket(p+29);
    r05_alloc_open_bracket(p+30);
    r05_alloc_evar(p+12);
    r05_alloc_close_bracket(p+31);
    r05_alloc_insert_pos(p+32);
    r05_alloc_close_call(p+33);
    r05_push_stack(p[33]);
    r05_push_stack(p[27]);
    r05_link_brackets(p[30], p[31]);
    r05_link_brackets(p[28], p[29]);
    r05_push_stack(p[26]);
    r05_push_stack(p[18]);
    r05_link_brackets(p[22], p[24]);
    r05_link_brackets(p[19], p[21]);
    r05_splice_evar(p[20], p+10);
    r05_splice_evar(p[23], p+12);
    r05_splice_evar(p[25], p+14);
    r05_splice_evar(p[32], p+16);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(CheckResult, "CheckResult") {
  R05_DEFINE_COND_FUNCTION(CheckResult, "CheckResult$1", 1)
  struct r05_node *p[45] = { 0 };

  r05_this_is_generated_function();
  switch (arg_begin->next->info.function->resume_entry >> 1) {
  case 0:
    p[0] = arg_begin;
    p[1] = arg_begin->next;
    p[2] = arg_end;

    do {
      /* e.Variables: 10 */
      /* e.Items: 12 */
      /* t.Pos: 14 */
      /* e.Name: 16, 22 */
      /* e.FuncNames-B: 18 */
      /* e.FuncNames-E: 24 */
      /* (e.FuncNames-B (e.Name) e.FuncNames-E) (e.Variables) (Call t.Pos e.Name) e.Items */
      if (! r05_brackets_left(p+3, p[1], p[2]))
        continue;
      if (! r05_brackets_left(p+5, p[4], p[2]))
        continue;
      if (! r05_brackets_left(p+7, p[6], p[2]))
        continue;
      if (! r05_function_left(p+9, p[7], p[8], &r05f_Call))
        continue;
      r05_close_evar(p+10, p[5], p[6]);
      r05_close_evar(p+12, p[8], p[2]);
      if (! r05_tvar_left(p+14, p[9], p[8]))
        continue;
      r05_close_evar(p+16, p[15], p[8]);
      p[18] = NULL;
      p[19] = p[3];
      do {
        r05_start_e_loop();
        if (! r05_brackets_left(p+20, p[19], p[4]))
          continue;
        if (! r05_repeated_evar_left(p+22, p[20], p[21], p+16))
          continue;
        if (! r05_empty_hole(p[23], p[21]))
          continue;
        r05_close_evar(p+24, p[21], p[4]);

        r05_reset_allocator();
        r05_alloc_open_call(p+26);
        r05_alloc_function(&r05f_CheckResult);
        r05_alloc_open_bracket(p+27);
        r05_alloc_insert_pos(p+28);
        r05_alloc_open_bracket(p+29);
        r05_alloc_insert_pos(p+30);
        r05_alloc_close_bracket(p+31);
        r05_alloc_insert_pos(p+32);
        r05_alloc_close_bracket(p+33);
        r05_alloc_open_bracket(p+34);
        r05_alloc_insert_pos(p+35);
        r05_alloc_close_bracket(p+36);
        r05_alloc_insert_pos(p+37);
        r05_alloc_close_call(p+38);
        r05_push_stack(p[38]);
        r05_push_stack(p[26]);
        r05_link_brackets(p[34], p[36]);
        r05_link_brackets(p[27], p[33]);
        r05_link_brackets(p[29], p[31]);
        r05_splice_evar(p[28], p+18);
        r05_splice_evar(p[30], p+16);
        r05_splice_evar(p[32], p+24);
        r05_splice_evar(p[35], p+10);
        r05_splice_evar(p[37], p+12);
        r05_splice_from_freelist(p[0]);
        r05_splice_to_freelist(p[0], p[2]);
        return;
      } while (r05_open_evar_advance(p+18, p[4]));
      r05_stop_e_loop();
    } while (0);

    do {
      /* e.FuncNames: 10 */
      /* e.Variables: 12 */
      /* e.Items: 14 */
      /* t.Pos: 16 */
      /* e.Name: 18 */
      /* (e.FuncNames) (e.Variables) (Call t.Pos e.Name) e.Items */
      if (! r05_brackets_left(p+3, p[1], p[2]))
        continue;
      if (! r05_brackets_left(p+5, p[4], p[2]))
        continue;
      if (! r05_brackets_left(p+7, p[6], p[2]))
        continue;
      if (! r05_function_left(p+9, p[7], p[8], &r05f_Call))
        continue;
      r05_close_evar(p+10, p[3], p[4]);
      r05_close_evar(p+12, p[5], p[6]);
      r05_close_evar(p+14, p[8], p[2]);
      if (! r05_tvar_left(p+16, p[9], p[8]))
        continue;
      r05_close_evar(p+18, p[17], p[8]);

      r05_reset_allocator();
      r05_alloc_open_bracket(p+20);
      r05_alloc_insert_pos(p+21);
      r05_alloc_chars("function ", 9);
      r05_alloc_insert_pos(p+22);
      r05_alloc_chars(" is not declared", 16);
      r05_alloc_close_bracket(p+23);
      r05_alloc_open_call(p+24);
      r05_alloc_function(&r05f_CheckResult);
      r05_alloc_open_bracket(p+25);
      r05_alloc_insert_pos(p+26);
      r05_alloc_close_bracket(p+27);
      r05_alloc_open_bracket(p+28);
      r05_alloc_insert_pos(p+29);
      r05_alloc_close_bracket(p+30);
      r05_alloc_insert_pos(p+31);
      r05_alloc_close_call(p+32);
      r05_push_stack(p[32]);
      r05_push_stack(p[24]);
      r05_link_brackets(p[28], p[30]);
      r05_link_brackets(p[25], p[27]);
      r05_link_brackets(p[20], p[23]);
      r05_splice_tvar(p[21], p+16);
      r05_splice_evar(p[22], p+18);
      r05_splice_evar(p[26], p+10);
      r05_splice_evar(p[29], p+12);
      r05_splice_evar(p[31], p+14);
      r05_splice_from_freelist(p[0]);
      r05_splice_to_freelist(p[0], p[2]);
      return;
    } while (0);

    do {
      /* e.FuncNames: 10 */
      /* e.Variables: 12 */
      /* e.Items: 14 */
      /* t.Pos: 16 */
      /* s.Type: 18 */
      /* e.Index: 19 */
      /* (e.FuncNames) (e.Variables) (Variable t.Pos s.Type e.Index) e.Items */
      if (! r05_brackets_left(p+3, p[1], p[2]))
        continue;
      if (! r05_brackets_left(p+5, p[4], p[2]))
        continue;
      if (! r05_brackets_left(p+7, p[6], p[2]))
        continue;
      if (! r05_function_left(p+9, p[7], p[8], &r05f_Variable))
        continue;
      r05_close_evar(p+10, p[3], p[4]);
      r05_close_evar(p+12, p[5], p[6]);
      r05_close_evar(p+14, p[8], p[2]);
      if (! r05_tvar_left(p+16, p[9], p[8]))
        continue;
      if (! r05_svar_left(p+18, p[17], p[8]))
        continue;
      r05_close_evar(p+19, p[18], p[8]);

      r05_reset_allocator();
      r05_alloc_open_call(p+21);
      r05_alloc_function(&c1);
      r05_alloc_evar(p+12);
      r05_alloc_close_call(p+22);
      r05_push_stack(p[22]);
      r05_push_stack(p[21]);
      r05_push_context(p, 21);
      r05_splice_from_freelist(p[2]);
      return;

  case 1:
      r05_pop_context(p, 21);
      p[21] = arg_begin;
      p[22] = arg_begin->next;
      p[23] = arg_end;

      do {
        /* e.FuncNames: 10 */
        /* e.Variables: 12 */
        /* e.Items: 14 */
        /* t.Pos: 16 */
        /* s.Type: 18, 31 */
        /* e.Index: 19, 29 */
        /* e.Vars-B: 24 */
        /* e.Vars-E: 32 */
        /* t.DeclPos: 34 */
        /* e.Vars-B (Variable t.DeclPos s.Type e.Index) e.Vars-E */
        p[24] = NULL;
        p[25] = p[22];
        do {
          r05_start_e_loop();
          if (! r05_brackets_left(p+26, p[25], p[23]))
            continue;
          if (! r05_function_left(p+28, p[26], p[27], &r05f_Variable))
            continue;
          if (! r05_repeated_evar_right(p+29, p[28], p[27], p+19))
            continue;
          if (! r05_repeated_svar_right(p+31, p[28], r05_evar_true_begin(p+29), p+18))
            continue;
          r05_close_evar(p+32, p[27], p[23]);
          if (! r05_tvar_left(p+34, p[28], p[31]))
            continue;
          if (! r05_empty_hole(p[35], p[31]))
            continue;

          r05_reset_allocator();
          r05_alloc_open_call(p+36);
          r05_alloc_function(&r05f_CheckResult);
          r05_alloc_open_bracket(p+37);
          r05_alloc_insert_pos(p+38);
          r05_alloc_close_bracket(p+39);
          r05_alloc_open_bracket(p+40);
          r05_alloc_insert_pos(p+41);
          r05_alloc_close_bracket(p+42);
          r05_alloc_insert_pos(p+43);
          r05_alloc_close_call(p+44);
          r05_push_stack(p[44]);
          r05_push_stack(p[36]);
          r05_link_brackets(p[40], p[42]);
          r05_link_brackets(p[37], p[39]);
          r05_splice_evar(p[38], p+10);
          r05_splice_evar(p[41], p+12);
          r05_splice_evar(p[43], p+14);
          r05_splice_from_freelist(p[0]);
          r05_splice_to_freelist(p[0], p[2]);
          return;
        } while (r05_open_evar_advance(p+24, p[23]));
        r05_stop_e_loop();
      } while (0);

      do {
        /* e.FuncNames: 10 */
        /* e.Variables: 12 */
        /* e.Items: 14 */
        /* t.Pos: 16 */
        /* s.Type: 18 */
        /* e.Index: 19 */
        /* e.Vars: 24 */
        /* e.Vars */
        r05_close_evar(p+24, p[22], p[23]);

        r05_reset_allocator();
        r05_alloc_open_bracket(p+26);
        r05_alloc_insert_pos(p+27);
        r05_alloc_chars("variable ", 9);
        r05_alloc_svar(p+18);
        r05_alloc_char('.');
        r05_alloc_insert_pos(p+28);
        r05_alloc_chars(" is not declared", 16);
        r05_alloc_close_bracket(p+29);
        r05_alloc_open_call(p+30);
        r05_alloc_function(&r05f_CheckResult);
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
        r05_link_brackets(p[26], p[29]);
        r05_splice_tvar(p[27], p+16);
        r05_splice_evar(p[28], p+19);
        r05_splice_evar(p[32], p+10);
        r05_splice_evar(p[35], p+12);
        r05_splice_evar(p[37], p+14);
        r05_splice_from_freelist(p[0]);
        r05_splice_to_freelist(p[0], p[2]);
        return;
      } while (0);
    } while (0);

    do {
      /* e.FuncNames: 7 */
      /* e.Variables: 9 */
      /* (e.FuncNames) (e.Variables) */
      if (! r05_brackets_left(p+3, p[1], p[2]))
        continue;
      if (! r05_brackets_left(p+5, p[4], p[2]))
        continue;
      if (! r05_empty_hole(p[6], p[2]))
        continue;
      r05_close_evar(p+7, p[3], p[4]);
      r05_close_evar(p+9, p[5], p[6]);

      r05_reset_allocator();
      r05_splice_from_freelist(p[0]);
      r05_splice_to_freelist(p[0], p[2]);
      return;
    } while (0);

    r05_recognition_impossible();
  }
}


/* End of file */
