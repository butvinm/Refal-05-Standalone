/* Automatically generated file. Don't edit! */
#include "refal05rts.h"


R05_DECLARE_ENTRY_FUNCTION(ArgList)
R05_DECLARE_ENTRY_FUNCTION(LoadFile)
R05_DECLARE_ENTRY_FUNCTION(Map)
R05_DECLARE_ENTRY_FUNCTION(Trim)
R05_DECLARE_ENTRY_FUNCTION(Parsem_File)
R05_DECLARE_ENTRY_FUNCTION(Generatem_ToFile)
R05_DECLARE_ENTRY_FUNCTION(PathSeparator)
R05_DECLARE_ENTRY_FUNCTION(IsDirectorySeparator)
R05_DECLARE_ENTRY_FUNCTION(DirectorySeparator)
R05_DECLARE_ENTRY_FUNCTION(GO)
R05_DECLARE_LOCAL_FUNCTION(Main)
R05_DECLARE_LOCAL_FUNCTION(Main0)
R05_DECLARE_LOCAL_FUNCTION(Main1)
R05_DECLARE_LOCAL_FUNCTION(Main2)
R05_DECLARE_ENTRY_FUNCTION(mainu_PrintNotFound)
R05_DECLARE_ENTRY_FUNCTION(mainu_ProcessEachSource)
R05_DECLARE_LOCAL_FUNCTION(mainu_ProcessEachSource0)
R05_DECLARE_ENTRY_FUNCTION(mainu_WriteError)
R05_DECLARE_LOCAL_FUNCTION(StrFromSrcPos)
R05_DECLARE_LOCAL_FUNCTION(LoadPath)
R05_DECLARE_LOCAL_FUNCTION(ParsePath)
R05_DECLARE_LOCAL_FUNCTION(ParsePathu_check)
R05_DECLARE_LOCAL_FUNCTION(ParsePathu_forward)
R05_DECLARE_LOCAL_FUNCTION(ParsePathu_next)
R05_DECLARE_LOCAL_FUNCTION(ParsePathu_cont)
R05_DECLARE_LOCAL_FUNCTION(ParseFolder)
R05_DECLARE_LOCAL_FUNCTION(ParseFolder0)
R05_DECLARE_LOCAL_FUNCTION(FindFiles)
R05_DECLARE_ENTRY_FUNCTION(mainu_AnalyzeFilem_ByFolders)
R05_DECLARE_LOCAL_FUNCTION(mainu_AnalyzeFilem_ByFolders0)
R05_DECLARE_ENTRY_FUNCTION(mainu_AnalyzeInFolder)
R05_DECLARE_LOCAL_FUNCTION(AnalyzeFile)
R05_DECLARE_LOCAL_FUNCTION(AnalyzeFileu_check)
R05_DECLARE_LOCAL_FUNCTION(AnalyzeFileu_cont)
R05_DECLARE_LOCAL_FUNCTION(AnalyzeFileu_check0)
R05_DECLARE_LOCAL_FUNCTION(AnalyzeFileu_cont0)
R05_DECLARE_LOCAL_FUNCTION(AnalyzeFileu_check1)
R05_DECLARE_LOCAL_FUNCTION(AnalyzeFileu_cont1)
R05_DECLARE_LOCAL_FUNCTION(AnalyzeFileu_check2)
R05_DECLARE_LOCAL_FUNCTION(AnalyzeFileu_cont2)
R05_DECLARE_LOCAL_FUNCTION(AnalyzeFileu_check3)
R05_DECLARE_LOCAL_FUNCTION(AnalyzeFileu_cont3)
R05_DECLARE_LOCAL_FUNCTION(AnalyzeFileu_check4)
R05_DECLARE_LOCAL_FUNCTION(AnalyzeFileu_cont4)
R05_DECLARE_LOCAL_FUNCTION(AnalyzeFileu_check5)
R05_DECLARE_LOCAL_FUNCTION(AnalyzeFileu_cont5)
R05_DECLARE_LOCAL_FUNCTION(AnalyzeFileu_check6)
R05_DECLARE_LOCAL_FUNCTION(AnalyzeFileu_cont6)
R05_DECLARE_LOCAL_FUNCTION(CutFolder)
R05_DECLARE_LOCAL_FUNCTION(CutFolderu_check)
R05_DECLARE_LOCAL_FUNCTION(CutFolderu_forward)
R05_DECLARE_LOCAL_FUNCTION(CutFolderu_next)
R05_DECLARE_LOCAL_FUNCTION(CutFolderu_cont)
R05_DECLARE_LOCAL_FUNCTION(CCompile)
R05_DECLARE_LOCAL_FUNCTION(CCompile0)
R05_DECLARE_ENTRY_FUNCTION(mainu_IncludeFlag)
R05_DECLARE_ENTRY_FUNCTION(mainu_QuoteFile)
R05_DECLARE_ENTRY_FUNCTION(Prout)
R05_DECLARE_ENTRY_FUNCTION(Symb)
R05_DECLARE_ENTRY_FUNCTION(Exit)
R05_DECLARE_ENTRY_FUNCTION(ExistFile)
R05_DECLARE_ENTRY_FUNCTION(System)
R05_DECLARE_ENTRY_FUNCTION(GetEnv)
R05_DEFINE_LOCAL_ENUM(NotFound, "NotFound")
R05_DEFINE_LOCAL_ENUM(Output, "Output")
R05_DEFINE_LOCAL_ENUM(Source, "Source")
R05_DEFINE_LOCAL_ENUM(Success, "Success")
R05_DEFINE_LOCAL_ENUM(Fails, "Fails")
R05_DEFINE_LOCAL_ENUM(Current, "Current")
R05_DEFINE_LOCAL_ENUM(True, "True")

/*
*$FROM LibraryEx
*/
/*
*$FROM parser
*/
/*
*$FROM generator
*/
/*
*$FROM Platform
*/
R05_DEFINE_ENTRY_FUNCTION(GO, "GO") {
  r05_this_is_generated_function();

  do {
    struct r05_node *p[6] = { 0 };
    /*  */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_empty_hole(p[0], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_call(p+2);
    r05_alloc_function(&r05f_Main);
    r05_alloc_open_call(p+3);
    r05_alloc_function(&r05f_ArgList);
    r05_alloc_close_call(p+4);
    r05_alloc_close_call(p+5);
    r05_push_stack(p[5]);
    r05_push_stack(p[2]);
    r05_push_stack(p[4]);
    r05_push_stack(p[3]);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(Main, "Main") {
  r05_this_is_generated_function();

  do {
    /* e.ProgName: 7 */
    /* e.Config: 9 */
    struct r05_node *p[19] = { 0 };
    /* (e.ProgName) ('@' e.Config) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    if (! r05_char_left(p+6, p[4], p[5], '@'))
      continue;
    if (! r05_empty_hole(p[5], p[1]))
      continue;
    r05_close_evar(p+7, p[2], p[3]);
    r05_close_evar(p+9, p[6], p[5]);

    r05_reset_allocator();
    r05_alloc_open_call(p+11);
    r05_alloc_function(&r05f_Main);
    r05_alloc_open_bracket(p+12);
    r05_alloc_insert_pos(p+13);
    r05_alloc_close_bracket(p+14);
    r05_alloc_open_call(p+15);
    r05_alloc_function(&r05f_LoadFile);
    r05_alloc_insert_pos(p+16);
    r05_alloc_close_call(p+17);
    r05_alloc_close_call(p+18);
    r05_push_stack(p[18]);
    r05_push_stack(p[11]);
    r05_push_stack(p[17]);
    r05_push_stack(p[15]);
    r05_correct_evar(p+9);
    r05_link_brackets(p[12], p[14]);
    r05_correct_evar(p+7);
    r05_splice_evar(p[13], p+7);
    r05_splice_evar(p[16], p+9);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.ProgName: 4 */
    /* e.Files: 6 */
    struct r05_node *p[18] = { 0 };
    /* (e.ProgName) e.Files */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    r05_close_evar(p+4, p[2], p[3]);
    r05_close_evar(p+6, p[3], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+8);
    r05_alloc_function(&r05f_Main0);
    r05_alloc_open_bracket(p+9);
    r05_alloc_insert_pos(p+10);
    r05_alloc_close_bracket(p+11);
    r05_alloc_open_bracket(p+12);
    r05_alloc_insert_pos(p+13);
    r05_alloc_close_bracket(p+14);
    r05_alloc_open_call(p+15);
    r05_alloc_function(&r05f_FindFiles);
    r05_alloc_evar(p+6);
    r05_alloc_close_call(p+16);
    r05_alloc_close_call(p+17);
    r05_push_stack(p[17]);
    r05_push_stack(p[8]);
    r05_push_stack(p[16]);
    r05_push_stack(p[15]);
    r05_link_brackets(p[12], p[14]);
    r05_correct_evar(p+6);
    r05_link_brackets(p[9], p[11]);
    r05_correct_evar(p+4);
    r05_splice_evar(p[10], p+4);
    r05_splice_evar(p[13], p+6);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(Main0, "Main0") {
  r05_this_is_generated_function();

  do {
    /* e.ProgName: 6 */
    /* e.Files: 8 */
    /* e.Files-B: 10 */
    /* e.FileName: 15 */
    /* e.Files-E: 17 */
    struct r05_node *p[25] = { 0 };
    /* (e.ProgName) (e.Files) e.Files-B (NotFound e.FileName) e.Files-E */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    r05_close_evar(p+6, p[2], p[3]);
    r05_close_evar(p+8, p[4], p[5]);
    p[10] = p[5]->next;
    p[11] = p[5];
    r05_start_e_loop();
    do {
      if (! r05_brackets_left(p+12, p[11], p[1]))
        continue;
      if (! r05_function_left(p+14, p[12], p[13], &r05f_NotFound))
        continue;
      r05_close_evar(p+15, p[14], p[13]);
      r05_close_evar(p+17, p[13], p[1]);

      r05_reset_allocator();
      r05_alloc_open_call(p+19);
      r05_alloc_function(&r05f_Map);
      r05_alloc_function(&r05f_mainu_PrintNotFound);
      r05_alloc_open_bracket(p+20);
      r05_alloc_function(&r05f_NotFound);
      r05_alloc_insert_pos(p+21);
      r05_alloc_close_bracket(p+22);
      r05_alloc_insert_pos(p+23);
      r05_alloc_close_call(p+24);
      r05_push_stack(p[24]);
      r05_push_stack(p[19]);
      r05_correct_evar(p+17);
      r05_link_brackets(p[20], p[22]);
      r05_correct_evar(p+15);
      r05_splice_evar(p[21], p+15);
      r05_splice_evar(p[23], p+17);
      r05_splice_from_freelist(arg_begin);
      r05_splice_to_freelist(arg_begin, arg_end);
      return;
    } while (r05_open_evar_advance(p+10, p[1]));
    r05_stop_e_loop();
  } while (0);

  do {
    /* e.ProgName: 6 */
    /* e.Files: 8 */
    /* e.FoundFiles: 10 */
    struct r05_node *p[25] = { 0 };
    /* (e.ProgName) (e.Files) e.FoundFiles */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    r05_close_evar(p+6, p[2], p[3]);
    r05_close_evar(p+8, p[4], p[5]);
    r05_close_evar(p+10, p[5], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+12);
    r05_alloc_function(&r05f_Main1);
    r05_alloc_open_bracket(p+13);
    r05_alloc_insert_pos(p+14);
    r05_alloc_close_bracket(p+15);
    r05_alloc_open_bracket(p+16);
    r05_alloc_insert_pos(p+17);
    r05_alloc_close_bracket(p+18);
    r05_alloc_open_bracket(p+19);
    r05_alloc_insert_pos(p+20);
    r05_alloc_close_bracket(p+21);
    r05_alloc_open_call(p+22);
    r05_alloc_function(&r05f_Map);
    r05_alloc_function(&r05f_mainu_ProcessEachSource);
    r05_alloc_evar(p+10);
    r05_alloc_close_call(p+23);
    r05_alloc_close_call(p+24);
    r05_push_stack(p[24]);
    r05_push_stack(p[12]);
    r05_push_stack(p[23]);
    r05_push_stack(p[22]);
    r05_link_brackets(p[19], p[21]);
    r05_correct_evar(p+10);
    r05_link_brackets(p[16], p[18]);
    r05_correct_evar(p+8);
    r05_link_brackets(p[13], p[15]);
    r05_correct_evar(p+6);
    r05_splice_evar(p[14], p+6);
    r05_splice_evar(p[17], p+8);
    r05_splice_evar(p[20], p+10);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(Main1, "Main1") {
  r05_this_is_generated_function();

  do {
    /* e.ProgName: 8 */
    /* e.Files: 10 */
    /* e.FoundFiles: 12 */
    /* e.Outputs-B: 14 */
    /* e.Outputs-E: 17 */
    struct r05_node *p[23] = { 0 };
    /* (e.ProgName) (e.Files) (e.FoundFiles) e.Outputs-B Fails e.Outputs-E */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    if (! r05_brackets_left(p+6, p[5], p[1]))
      continue;
    r05_close_evar(p+8, p[2], p[3]);
    r05_close_evar(p+10, p[4], p[5]);
    r05_close_evar(p+12, p[6], p[7]);
    p[14] = p[7]->next;
    p[15] = p[7];
    r05_start_e_loop();
    do {
      if (! r05_function_left(p+16, p[15], p[1], &r05f_Fails))
        continue;
      r05_close_evar(p+17, p[16], p[1]);

      r05_reset_allocator();
      r05_alloc_open_call(p+19);
      r05_alloc_function(&r05f_Prout);
      r05_alloc_chars("*** COMPILATION FAILED ***", 26);
      r05_alloc_close_call(p+20);
      r05_alloc_open_call(p+21);
      r05_alloc_function(&r05f_Exit);
      r05_alloc_number(1UL);
      r05_alloc_close_call(p+22);
      r05_push_stack(p[22]);
      r05_push_stack(p[21]);
      r05_push_stack(p[20]);
      r05_push_stack(p[19]);
      r05_splice_from_freelist(arg_begin);
      r05_splice_to_freelist(arg_begin, arg_end);
      return;
    } while (r05_open_evar_advance(p+14, p[1]));
    r05_stop_e_loop();
  } while (0);

  do {
    /* e.ProgName: 8 */
    /* e.Files: 10 */
    /* e.FoundFiles: 12 */
    /* e.Outputs: 14 */
    struct r05_node *p[32] = { 0 };
    /* (e.ProgName) (e.Files) (e.FoundFiles) e.Outputs */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    if (! r05_brackets_left(p+6, p[5], p[1]))
      continue;
    r05_close_evar(p+8, p[2], p[3]);
    r05_close_evar(p+10, p[4], p[5]);
    r05_close_evar(p+12, p[6], p[7]);
    r05_close_evar(p+14, p[7], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+16);
    r05_alloc_function(&r05f_Main2);
    r05_alloc_open_bracket(p+17);
    r05_alloc_insert_pos(p+18);
    r05_alloc_close_bracket(p+19);
    r05_alloc_open_bracket(p+20);
    r05_alloc_insert_pos(p+21);
    r05_alloc_close_bracket(p+22);
    r05_alloc_open_bracket(p+23);
    r05_alloc_insert_pos(p+24);
    r05_alloc_close_bracket(p+25);
    r05_alloc_open_bracket(p+26);
    r05_alloc_insert_pos(p+27);
    r05_alloc_close_bracket(p+28);
    r05_alloc_open_call(p+29);
    r05_alloc_function(&r05f_CCompile);
    r05_alloc_evar(p+14);
    r05_alloc_close_call(p+30);
    r05_alloc_close_call(p+31);
    r05_push_stack(p[31]);
    r05_push_stack(p[16]);
    r05_push_stack(p[30]);
    r05_push_stack(p[29]);
    r05_link_brackets(p[26], p[28]);
    r05_correct_evar(p+14);
    r05_link_brackets(p[23], p[25]);
    r05_correct_evar(p+12);
    r05_link_brackets(p[20], p[22]);
    r05_correct_evar(p+10);
    r05_link_brackets(p[17], p[19]);
    r05_correct_evar(p+8);
    r05_splice_evar(p[18], p+8);
    r05_splice_evar(p[21], p+10);
    r05_splice_evar(p[24], p+12);
    r05_splice_evar(p[27], p+14);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(Main2, "Main2") {
  r05_this_is_generated_function();

  do {
    /* e.ProgName: 11 */
    /* e.Files: 13 */
    /* e.FoundFiles: 15 */
    /* e.Outputs: 17 */
    struct r05_node *p[21] = { 0 };
    /* (e.ProgName) (e.Files) (e.FoundFiles) (e.Outputs) 0 */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_number_right(p+2, p[0], p[1], 0UL))
      continue;
    if (! r05_brackets_left(p+3, p[0], p[2]))
      continue;
    if (! r05_brackets_left(p+5, p[4], p[2]))
      continue;
    if (! r05_brackets_left(p+7, p[6], p[2]))
      continue;
    if (! r05_brackets_left(p+9, p[8], p[2]))
      continue;
    if (! r05_empty_hole(p[10], p[2]))
      continue;
    r05_close_evar(p+11, p[3], p[4]);
    r05_close_evar(p+13, p[5], p[6]);
    r05_close_evar(p+15, p[7], p[8]);
    r05_close_evar(p+17, p[9], p[10]);

    r05_reset_allocator();
    r05_alloc_open_call(p+19);
    r05_alloc_function(&r05f_Prout);
    r05_alloc_chars("*** Compilation successed ***", 29);
    r05_alloc_close_call(p+20);
    r05_push_stack(p[20]);
    r05_push_stack(p[19]);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.ProgName: 10 */
    /* e.Files: 12 */
    /* e.FoundFiles: 14 */
    /* e.Outputs: 16 */
    /* e.RetCode: 18 */
    struct r05_node *p[27] = { 0 };
    /* (e.ProgName) (e.Files) (e.FoundFiles) (e.Outputs) e.RetCode */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    if (! r05_brackets_left(p+6, p[5], p[1]))
      continue;
    if (! r05_brackets_left(p+8, p[7], p[1]))
      continue;
    r05_close_evar(p+10, p[2], p[3]);
    r05_close_evar(p+12, p[4], p[5]);
    r05_close_evar(p+14, p[6], p[7]);
    r05_close_evar(p+16, p[8], p[9]);
    r05_close_evar(p+18, p[9], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+20);
    r05_alloc_function(&r05f_Prout);
    r05_alloc_chars("*** COMPILATION FAILED (C COMPILER FAILED, RETCODE: ", 52);
    r05_alloc_open_call(p+21);
    r05_alloc_function(&r05f_Symb);
    r05_alloc_insert_pos(p+22);
    r05_alloc_close_call(p+23);
    r05_alloc_chars(")***", 4);
    r05_alloc_close_call(p+24);
    r05_alloc_open_call(p+25);
    r05_alloc_function(&r05f_Exit);
    r05_alloc_evar(p+18);
    r05_alloc_close_call(p+26);
    r05_push_stack(p[26]);
    r05_push_stack(p[25]);
    r05_push_stack(p[24]);
    r05_push_stack(p[20]);
    r05_push_stack(p[23]);
    r05_push_stack(p[21]);
    r05_correct_evar(p+18);
    r05_splice_evar(p[22], p+18);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_ENTRY_FUNCTION(mainu_PrintNotFound, "main_PrintNotFound") {
  r05_this_is_generated_function();

  do {
    /* e.FileName: 5 */
    struct r05_node *p[10] = { 0 };
    /* (NotFound e.FileName) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_function_left(p+4, p[2], p[3], &r05f_NotFound))
      continue;
    if (! r05_empty_hole(p[3], p[1]))
      continue;
    r05_close_evar(p+5, p[4], p[3]);

    r05_reset_allocator();
    r05_alloc_open_call(p+7);
    r05_alloc_function(&r05f_Prout);
    r05_alloc_chars("COMMAND LINE ERROR: file ", 25);
    r05_alloc_insert_pos(p+8);
    r05_alloc_chars(" not found", 10);
    r05_alloc_close_call(p+9);
    r05_push_stack(p[9]);
    r05_push_stack(p[7]);
    r05_correct_evar(p+5);
    r05_splice_evar(p[8], p+5);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.FileName: 5 */
    struct r05_node *p[7] = { 0 };
    /* (Output e.FileName) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_function_left(p+4, p[2], p[3], &r05f_Output))
      continue;
    if (! r05_empty_hole(p[3], p[1]))
      continue;
    r05_close_evar(p+5, p[4], p[3]);

    r05_reset_allocator();
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Source: 7 */
    /* e.Output: 9 */
    struct r05_node *p[11] = { 0 };
    /* (Source (e.Source) e.Output) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_function_left(p+4, p[2], p[3], &r05f_Source))
      continue;
    if (! r05_brackets_left(p+5, p[4], p[3]))
      continue;
    if (! r05_empty_hole(p[3], p[1]))
      continue;
    r05_close_evar(p+7, p[5], p[6]);
    r05_close_evar(p+9, p[6], p[3]);

    r05_reset_allocator();
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_ENTRY_FUNCTION(mainu_ProcessEachSource, "main_ProcessEachSource") {
  r05_this_is_generated_function();

  do {
    /* e.OutputName: 5 */
    struct r05_node *p[12] = { 0 };
    /* (Output e.OutputName) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_function_left(p+4, p[2], p[3], &r05f_Output))
      continue;
    if (! r05_empty_hole(p[3], p[1]))
      continue;
    r05_close_evar(p+5, p[4], p[3]);

    r05_reset_allocator();
    r05_alloc_open_call(p+7);
    r05_alloc_function(&r05f_Prout);
    r05_alloc_chars("+Linking ", 9);
    r05_alloc_insert_pos(p+8);
    r05_alloc_close_call(p+9);
    r05_alloc_open_bracket(p+10);
    r05_alloc_evar(p+5);
    r05_alloc_close_bracket(p+11);
    r05_link_brackets(p[10], p[11]);
    r05_push_stack(p[9]);
    r05_push_stack(p[7]);
    r05_correct_evar(p+5);
    r05_splice_evar(p[8], p+5);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Source: 7 */
    /* e.OutputName: 9 */
    struct r05_node *p[23] = { 0 };
    /* (Source (e.Source) e.OutputName) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_function_left(p+4, p[2], p[3], &r05f_Source))
      continue;
    if (! r05_brackets_left(p+5, p[4], p[3]))
      continue;
    if (! r05_empty_hole(p[3], p[1]))
      continue;
    r05_close_evar(p+7, p[5], p[6]);
    r05_close_evar(p+9, p[6], p[3]);

    r05_reset_allocator();
    r05_alloc_open_call(p+11);
    r05_alloc_function(&r05f_mainu_ProcessEachSource0);
    r05_alloc_open_bracket(p+12);
    r05_alloc_insert_pos(p+13);
    r05_alloc_close_bracket(p+14);
    r05_alloc_open_bracket(p+15);
    r05_alloc_insert_pos(p+16);
    r05_alloc_close_bracket(p+17);
    r05_alloc_open_call(p+18);
    r05_alloc_function(&r05f_Prout);
    r05_alloc_chars("*Compiling ", 11);
    r05_alloc_evar(p+7);
    r05_alloc_char(':');
    r05_alloc_close_call(p+19);
    r05_alloc_open_call(p+20);
    r05_alloc_function(&r05f_Parsem_File);
    r05_alloc_evar(p+7);
    r05_alloc_close_call(p+21);
    r05_alloc_close_call(p+22);
    r05_push_stack(p[22]);
    r05_push_stack(p[11]);
    r05_push_stack(p[21]);
    r05_push_stack(p[20]);
    r05_push_stack(p[19]);
    r05_push_stack(p[18]);
    r05_link_brackets(p[15], p[17]);
    r05_correct_evar(p+9);
    r05_link_brackets(p[12], p[14]);
    r05_correct_evar(p+7);
    r05_splice_evar(p[13], p+7);
    r05_splice_evar(p[16], p+9);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(mainu_ProcessEachSource0, "main_ProcessEachSource0") {
  r05_this_is_generated_function();

  do {
    /* e.Source: 7 */
    /* e.OutputName: 9 */
    /* e.Tree: 11 */
    struct r05_node *p[21] = { 0 };
    /* (e.Source) (e.OutputName) Success e.Tree */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    if (! r05_function_left(p+6, p[5], p[1], &r05f_Success))
      continue;
    r05_close_evar(p+7, p[2], p[3]);
    r05_close_evar(p+9, p[4], p[5]);
    r05_close_evar(p+11, p[6], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+13);
    r05_alloc_function(&r05f_Generatem_ToFile);
    r05_alloc_open_bracket(p+14);
    r05_alloc_insert_pos(p+15);
    r05_alloc_close_bracket(p+16);
    r05_alloc_insert_pos(p+17);
    r05_alloc_close_call(p+18);
    r05_alloc_open_bracket(p+19);
    r05_alloc_evar(p+9);
    r05_alloc_close_bracket(p+20);
    r05_link_brackets(p[19], p[20]);
    r05_push_stack(p[18]);
    r05_push_stack(p[13]);
    r05_correct_evar(p+11);
    r05_link_brackets(p[14], p[16]);
    r05_correct_evar(p+9);
    r05_splice_evar(p[15], p+9);
    r05_splice_evar(p[17], p+11);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Source: 7 */
    /* e.OutputName: 9 */
    /* e.Errors: 11 */
    struct r05_node *p[19] = { 0 };
    /* (e.Source) (e.OutputName) Fails e.Errors */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    if (! r05_function_left(p+6, p[5], p[1], &r05f_Fails))
      continue;
    r05_close_evar(p+7, p[2], p[3]);
    r05_close_evar(p+9, p[4], p[5]);
    r05_close_evar(p+11, p[6], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+13);
    r05_alloc_function(&r05f_Map);
    r05_alloc_open_bracket(p+14);
    r05_alloc_function(&r05f_mainu_WriteError);
    r05_alloc_insert_pos(p+15);
    r05_alloc_close_bracket(p+16);
    r05_alloc_insert_pos(p+17);
    r05_alloc_close_call(p+18);
    r05_alloc_function(&r05f_Fails);
    r05_push_stack(p[18]);
    r05_push_stack(p[13]);
    r05_correct_evar(p+11);
    r05_link_brackets(p[14], p[16]);
    r05_correct_evar(p+7);
    r05_splice_evar(p[15], p+7);
    r05_splice_evar(p[17], p+11);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_ENTRY_FUNCTION(mainu_WriteError, "main_WriteError") {
  r05_this_is_generated_function();

  do {
    /* e.FileName: 4 */
    /* t.SrcPos: 6 */
    /* e.Message: 8 */
    struct r05_node *p[17] = { 0 };
    /* e.FileName (t.SrcPos e.Message) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_right(p+2, p[0], p[1]))
      continue;
    r05_close_evar(p+4, p[0], p[2]);
    if (! r05_tvar_left(p+6, p[2], p[3]))
      continue;
    r05_close_evar(p+8, p[7], p[3]);

    r05_reset_allocator();
    r05_alloc_open_call(p+10);
    r05_alloc_function(&r05f_Prout);
    r05_alloc_insert_pos(p+11);
    r05_alloc_char(':');
    r05_alloc_open_call(p+12);
    r05_alloc_function(&r05f_StrFromSrcPos);
    r05_alloc_insert_pos(p+13);
    r05_alloc_close_call(p+14);
    r05_alloc_chars(":ERROR: ", 8);
    r05_alloc_insert_pos(p+15);
    r05_alloc_close_call(p+16);
    r05_push_stack(p[16]);
    r05_push_stack(p[10]);
    r05_correct_evar(p+8);
    r05_push_stack(p[14]);
    r05_push_stack(p[12]);
    r05_correct_evar(p+4);
    r05_splice_evar(p[11], p+4);
    r05_splice_tvar(p[13], p+6);
    r05_splice_evar(p[15], p+8);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(StrFromSrcPos, "StrFromSrcPos") {
  r05_this_is_generated_function();

  do {
    /* s.Line: 4 */
    /* s.Col: 5 */
    /* e.FileName: 6 */
    struct r05_node *p[12] = { 0 };
    /* (s.Line s.Col e.FileName) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_empty_hole(p[3], p[1]))
      continue;
    if (! r05_svar_left(p+4, p[2], p[3]))
      continue;
    if (! r05_svar_left(p+5, p[4], p[3]))
      continue;
    r05_close_evar(p+6, p[5], p[3]);

    r05_reset_allocator();
    r05_alloc_open_call(p+8);
    r05_alloc_function(&r05f_Symb);
    r05_alloc_svar(p+4);
    r05_alloc_close_call(p+9);
    r05_alloc_char(':');
    r05_alloc_open_call(p+10);
    r05_alloc_function(&r05f_Symb);
    r05_alloc_svar(p+5);
    r05_alloc_close_call(p+11);
    r05_push_stack(p[11]);
    r05_push_stack(p[10]);
    r05_push_stack(p[9]);
    r05_push_stack(p[8]);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(LoadPath, "LoadPath") {
  r05_this_is_generated_function();

  do {
    struct r05_node *p[10] = { 0 };
    /*  */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_empty_hole(p[0], p[1]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_call(p+2);
    r05_alloc_function(&r05f_ParsePath);
    r05_alloc_open_call(p+3);
    r05_alloc_function(&r05f_GetEnv);
    r05_alloc_chars("R05PATH", 7);
    r05_alloc_close_call(p+4);
    r05_alloc_close_call(p+5);
    r05_alloc_open_call(p+6);
    r05_alloc_function(&r05f_ParsePath);
    r05_alloc_open_call(p+7);
    r05_alloc_function(&r05f_GetEnv);
    r05_alloc_chars("REF5RSL", 7);
    r05_alloc_close_call(p+8);
    r05_alloc_close_call(p+9);
    r05_push_stack(p[9]);
    r05_push_stack(p[6]);
    r05_push_stack(p[8]);
    r05_push_stack(p[7]);
    r05_push_stack(p[5]);
    r05_push_stack(p[2]);
    r05_push_stack(p[4]);
    r05_push_stack(p[3]);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(ParsePath, "ParsePath") {
  r05_this_is_generated_function();

  do {
    /* e.Folder: 2 */
    /* s.Sep: 4 */
    /* e.Path: 5 */
    struct r05_node *p[17] = { 0 };
    /* e.Folder s.Sep e.Path */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    p[2] = p[0]->next;
    p[3] = p[0];
    r05_start_e_loop();
    do {
      if (! r05_svar_left(p+4, p[3], p[1]))
        continue;
      r05_close_evar(p+5, p[4], p[1]);

      r05_reset_allocator();
      r05_alloc_open_call(p+7);
      r05_alloc_function(&r05f_ParsePathu_check);
      r05_alloc_open_bracket(p+8);
      r05_alloc_insert_pos(p+9);
      r05_alloc_close_bracket(p+10);
      r05_alloc_svar(p+4);
      r05_alloc_open_bracket(p+11);
      r05_alloc_insert_pos(p+12);
      r05_alloc_close_bracket(p+13);
      r05_alloc_open_call(p+14);
      r05_alloc_function(&r05f_PathSeparator);
      r05_alloc_close_call(p+15);
      r05_alloc_close_call(p+16);
      r05_push_stack(p[16]);
      r05_push_stack(p[7]);
      r05_push_stack(p[15]);
      r05_push_stack(p[14]);
      r05_link_brackets(p[11], p[13]);
      r05_correct_evar(p+5);
      r05_link_brackets(p[8], p[10]);
      r05_correct_evar(p+2);
      r05_splice_evar(p[9], p+2);
      r05_splice_evar(p[12], p+5);
      r05_splice_from_freelist(arg_begin);
      r05_splice_to_freelist(arg_begin, arg_end);
      return;
    } while (r05_open_evar_advance(p+2, p[1]));
    r05_stop_e_loop();
  } while (0);

  do {
    /* e.Other: 2 */
    struct r05_node *p[7] = { 0 };
    /* e.Other */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    r05_close_evar(p+2, p[0], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+4);
    r05_alloc_function(&r05f_ParsePathu_cont);
    r05_alloc_insert_pos(p+5);
    r05_alloc_close_call(p+6);
    r05_push_stack(p[6]);
    r05_push_stack(p[4]);
    r05_correct_evar(p+2);
    r05_splice_evar(p[5], p+2);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);
}

R05_DEFINE_LOCAL_FUNCTION(ParsePathu_check, "ParsePath_check") {
  r05_this_is_generated_function();

  do {
    /* e.Folder: 4 */
    /* s.Sep: 6, 9 */
    /* e.Path: 10 */
    struct r05_node *p[18] = { 0 };
    /* (e.Folder) s.Sep (e.Path) s.Sep */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    r05_close_evar(p+4, p[2], p[3]);
    if (! r05_svar_left(p+6, p[3], p[1]))
      continue;
    if (! r05_brackets_left(p+7, p[6], p[1]))
      continue;
    if (! r05_repeated_svar_left(p+9, p[8], p[1], p+6))
      continue;
    if (! r05_empty_hole(p[9], p[1]))
      continue;
    r05_close_evar(p+10, p[7], p[8]);

    r05_reset_allocator();
    r05_alloc_open_call(p+12);
    r05_alloc_function(&r05f_ParseFolder);
    r05_alloc_insert_pos(p+13);
    r05_alloc_close_call(p+14);
    r05_alloc_open_call(p+15);
    r05_alloc_function(&r05f_ParsePath);
    r05_alloc_insert_pos(p+16);
    r05_alloc_close_call(p+17);
    r05_push_stack(p[17]);
    r05_push_stack(p[15]);
    r05_correct_evar(p+10);
    r05_push_stack(p[14]);
    r05_push_stack(p[12]);
    r05_correct_evar(p+4);
    r05_splice_evar(p[13], p+4);
    r05_splice_evar(p[16], p+10);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Folder: 4 */
    /* s.Sep: 6 */
    /* e.Path: 9 */
    /* e.Other: 11 */
    struct r05_node *p[19] = { 0 };
    /* (e.Folder) s.Sep (e.Path) e.Other */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    r05_close_evar(p+4, p[2], p[3]);
    if (! r05_svar_left(p+6, p[3], p[1]))
      continue;
    if (! r05_brackets_left(p+7, p[6], p[1]))
      continue;
    r05_close_evar(p+9, p[7], p[8]);
    r05_close_evar(p+11, p[8], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+13);
    r05_alloc_function(&r05f_ParsePathu_forward);
    r05_alloc_open_bracket(p+14);
    r05_alloc_insert_pos(p+15);
    r05_alloc_close_bracket(p+16);
    r05_alloc_svar(p+6);
    r05_alloc_insert_pos(p+17);
    r05_alloc_close_call(p+18);
    r05_push_stack(p[18]);
    r05_push_stack(p[13]);
    r05_correct_evar(p+9);
    r05_link_brackets(p[14], p[16]);
    r05_correct_evar(p+4);
    r05_splice_evar(p[15], p+4);
    r05_splice_evar(p[17], p+9);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(ParsePathu_forward, "ParsePath_forward") {
  r05_this_is_generated_function();

  do {
    /* e.Folder_fix: 4 */
    /* t.Folder_next: 6 */
    /* e.Folder_rest: 8 */
    struct r05_node *p[16] = { 0 };
    /* (e.Folder_fix) t.Folder_next e.Folder_rest */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    r05_close_evar(p+4, p[2], p[3]);
    if (! r05_tvar_left(p+6, p[3], p[1]))
      continue;
    r05_close_evar(p+8, p[7], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+10);
    r05_alloc_function(&r05f_ParsePathu_next);
    r05_alloc_open_bracket(p+11);
    r05_alloc_insert_pos(p+12);
    r05_alloc_close_bracket(p+13);
    r05_alloc_insert_pos(p+14);
    r05_alloc_close_call(p+15);
    r05_push_stack(p[15]);
    r05_push_stack(p[10]);
    r05_correct_evar(p+8);
    r05_link_brackets(p[11], p[13]);
    r05_correct_evar(p+4);
    r05_splice_evar(p[12], p+4);
    r05_splice_tvar(p[12], p+6);
    r05_splice_evar(p[14], p+8);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Folder_fix: 4 */
    struct r05_node *p[9] = { 0 };
    /* (e.Folder_fix) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_empty_hole(p[3], p[1]))
      continue;
    r05_close_evar(p+4, p[2], p[3]);

    r05_reset_allocator();
    r05_alloc_open_call(p+6);
    r05_alloc_function(&r05f_ParsePathu_cont);
    r05_alloc_insert_pos(p+7);
    r05_alloc_close_call(p+8);
    r05_push_stack(p[8]);
    r05_push_stack(p[6]);
    r05_correct_evar(p+4);
    r05_splice_evar(p[7], p+4);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(ParsePathu_next, "ParsePath_next") {
  r05_this_is_generated_function();

  do {
    /* e.Folder_fix: 4 */
    /* e.Folder_var: 6 */
    /* s.Sep: 8 */
    /* e.Path: 9 */
    struct r05_node *p[21] = { 0 };
    /* (e.Folder_fix) e.Folder_var s.Sep e.Path */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    r05_close_evar(p+4, p[2], p[3]);
    p[6] = p[3]->next;
    p[7] = p[3];
    r05_start_e_loop();
    do {
      if (! r05_svar_left(p+8, p[7], p[1]))
        continue;
      r05_close_evar(p+9, p[8], p[1]);

      r05_reset_allocator();
      r05_alloc_open_call(p+11);
      r05_alloc_function(&r05f_ParsePathu_check);
      r05_alloc_open_bracket(p+12);
      r05_alloc_insert_pos(p+13);
      r05_alloc_close_bracket(p+14);
      r05_alloc_svar(p+8);
      r05_alloc_open_bracket(p+15);
      r05_alloc_insert_pos(p+16);
      r05_alloc_close_bracket(p+17);
      r05_alloc_open_call(p+18);
      r05_alloc_function(&r05f_PathSeparator);
      r05_alloc_close_call(p+19);
      r05_alloc_close_call(p+20);
      r05_push_stack(p[20]);
      r05_push_stack(p[11]);
      r05_push_stack(p[19]);
      r05_push_stack(p[18]);
      r05_link_brackets(p[15], p[17]);
      r05_correct_evar(p+9);
      r05_link_brackets(p[12], p[14]);
      r05_correct_evar(p+6);
      r05_correct_evar(p+4);
      r05_splice_evar(p[13], p+4);
      r05_splice_evar(p[13], p+6);
      r05_splice_evar(p[16], p+9);
      r05_splice_from_freelist(arg_begin);
      r05_splice_to_freelist(arg_begin, arg_end);
      return;
    } while (r05_open_evar_advance(p+6, p[1]));
    r05_stop_e_loop();
  } while (0);

  do {
    /* e.Folder_fix: 4 */
    /* e.Folder_rest: 6 */
    struct r05_node *p[11] = { 0 };
    /* (e.Folder_fix) e.Folder_rest */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    r05_close_evar(p+4, p[2], p[3]);
    r05_close_evar(p+6, p[3], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+8);
    r05_alloc_function(&r05f_ParsePathu_cont);
    r05_alloc_insert_pos(p+9);
    r05_alloc_close_call(p+10);
    r05_push_stack(p[10]);
    r05_push_stack(p[8]);
    r05_correct_evar(p+6);
    r05_correct_evar(p+4);
    r05_splice_evar(p[9], p+4);
    r05_splice_evar(p[9], p+6);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(ParsePathu_cont, "ParsePath_cont") {
  r05_this_is_generated_function();

  do {
    /* e.Folder: 2 */
    struct r05_node *p[7] = { 0 };
    /* e.Folder */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    r05_close_evar(p+2, p[0], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+4);
    r05_alloc_function(&r05f_ParseFolder);
    r05_alloc_insert_pos(p+5);
    r05_alloc_close_call(p+6);
    r05_push_stack(p[6]);
    r05_push_stack(p[4]);
    r05_correct_evar(p+2);
    r05_splice_evar(p[5], p+2);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);
}

R05_DEFINE_LOCAL_FUNCTION(ParseFolder, "ParseFolder") {
  r05_this_is_generated_function();

  do {
    /* e.Folder: 2 */
    struct r05_node *p[11] = { 0 };
    /* e.Folder */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    r05_close_evar(p+2, p[0], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+4);
    r05_alloc_function(&r05f_ParseFolder0);
    r05_alloc_open_bracket(p+5);
    r05_alloc_insert_pos(p+6);
    r05_alloc_close_bracket(p+7);
    r05_alloc_open_call(p+8);
    r05_alloc_function(&r05f_Trim);
    r05_alloc_evar(p+2);
    r05_alloc_close_call(p+9);
    r05_alloc_close_call(p+10);
    r05_push_stack(p[10]);
    r05_push_stack(p[4]);
    r05_push_stack(p[9]);
    r05_push_stack(p[8]);
    r05_link_brackets(p[5], p[7]);
    r05_correct_evar(p+2);
    r05_splice_evar(p[6], p+2);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);
}

R05_DEFINE_LOCAL_FUNCTION(ParseFolder0, "ParseFolder0") {
  r05_this_is_generated_function();

  do {
    /* e.Folder: 4 */
    struct r05_node *p[6] = { 0 };
    /* (e.Folder) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_empty_hole(p[3], p[1]))
      continue;
    r05_close_evar(p+4, p[2], p[3]);

    r05_reset_allocator();
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Folder: 4 */
    /* e.TrimmedFolder: 6 */
    struct r05_node *p[11] = { 0 };
    /* (e.Folder) e.TrimmedFolder */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    r05_close_evar(p+4, p[2], p[3]);
    r05_close_evar(p+6, p[3], p[1]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+8);
    r05_alloc_insert_pos(p+9);
    r05_alloc_close_bracket(p+10);
    r05_link_brackets(p[8], p[10]);
    r05_correct_evar(p+6);
    r05_splice_evar(p[9], p+6);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(FindFiles, "FindFiles") {
  r05_this_is_generated_function();

  do {
    /* e.Files: 2 */
    struct r05_node *p[11] = { 0 };
    /* e.Files */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    r05_close_evar(p+2, p[0], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+4);
    r05_alloc_function(&r05f_Map);
    r05_alloc_open_bracket(p+5);
    r05_alloc_function(&r05f_mainu_AnalyzeFilem_ByFolders);
    r05_alloc_function(&r05f_Current);
    r05_alloc_open_call(p+6);
    r05_alloc_function(&r05f_LoadPath);
    r05_alloc_close_call(p+7);
    r05_alloc_close_bracket(p+8);
    r05_alloc_insert_pos(p+9);
    r05_alloc_close_call(p+10);
    r05_push_stack(p[10]);
    r05_push_stack(p[4]);
    r05_correct_evar(p+2);
    r05_link_brackets(p[5], p[8]);
    r05_push_stack(p[7]);
    r05_push_stack(p[6]);
    r05_splice_evar(p[9], p+2);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);
}

R05_DEFINE_ENTRY_FUNCTION(mainu_AnalyzeFilem_ByFolders, "main_AnalyzeFile-ByFolders") {
  r05_this_is_generated_function();

  do {
    /* e.Folders: 4 */
    /* e.FileName: 6 */
    struct r05_node *p[20] = { 0 };
    /* e.Folders (e.FileName) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_right(p+2, p[0], p[1]))
      continue;
    r05_close_evar(p+4, p[0], p[2]);
    r05_close_evar(p+6, p[2], p[3]);

    r05_reset_allocator();
    r05_alloc_open_call(p+8);
    r05_alloc_function(&r05f_mainu_AnalyzeFilem_ByFolders0);
    r05_alloc_open_bracket(p+9);
    r05_alloc_insert_pos(p+10);
    r05_alloc_close_bracket(p+11);
    r05_alloc_open_bracket(p+12);
    r05_alloc_insert_pos(p+13);
    r05_alloc_close_bracket(p+14);
    r05_alloc_open_call(p+15);
    r05_alloc_function(&r05f_Map);
    r05_alloc_open_bracket(p+16);
    r05_alloc_function(&r05f_mainu_AnalyzeInFolder);
    r05_alloc_evar(p+6);
    r05_alloc_close_bracket(p+17);
    r05_alloc_evar(p+4);
    r05_alloc_close_call(p+18);
    r05_alloc_close_call(p+19);
    r05_push_stack(p[19]);
    r05_push_stack(p[8]);
    r05_push_stack(p[18]);
    r05_push_stack(p[15]);
    r05_link_brackets(p[16], p[17]);
    r05_link_brackets(p[12], p[14]);
    r05_correct_evar(p+6);
    r05_link_brackets(p[9], p[11]);
    r05_correct_evar(p+4);
    r05_splice_evar(p[10], p+4);
    r05_splice_evar(p[13], p+6);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(mainu_AnalyzeFilem_ByFolders0, "main_AnalyzeFile-ByFolders0") {
  r05_this_is_generated_function();

  do {
    /* e.Folders: 11 */
    /* e.FileName: 13 */
    /* e.Source: 15 */
    /* e.Output: 17 */
    /* e.Variants: 19 */
    struct r05_node *p[29] = { 0 };
    /* (e.Folders) (e.FileName) (Source (e.Source) e.Output) e.Variants */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    if (! r05_brackets_left(p+6, p[5], p[1]))
      continue;
    if (! r05_function_left(p+8, p[6], p[7], &r05f_Source))
      continue;
    if (! r05_brackets_left(p+9, p[8], p[7]))
      continue;
    r05_close_evar(p+11, p[2], p[3]);
    r05_close_evar(p+13, p[4], p[5]);
    r05_close_evar(p+15, p[9], p[10]);
    r05_close_evar(p+17, p[10], p[7]);
    r05_close_evar(p+19, p[7], p[1]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+21);
    r05_alloc_function(&r05f_Source);
    r05_alloc_open_bracket(p+22);
    r05_alloc_insert_pos(p+23);
    r05_alloc_close_bracket(p+24);
    r05_alloc_open_call(p+25);
    r05_alloc_function(&r05f_CutFolder);
    r05_alloc_insert_pos(p+26);
    r05_alloc_close_call(p+27);
    r05_alloc_close_bracket(p+28);
    r05_link_brackets(p[21], p[28]);
    r05_push_stack(p[27]);
    r05_push_stack(p[25]);
    r05_correct_evar(p+17);
    r05_link_brackets(p[22], p[24]);
    r05_correct_evar(p+15);
    r05_splice_evar(p[23], p+15);
    r05_splice_evar(p[26], p+17);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Folders: 9 */
    /* e.FileName: 11 */
    /* e.Output: 13 */
    /* e.Variants: 15 */
    struct r05_node *p[20] = { 0 };
    /* (e.Folders) (e.FileName) (Output e.Output) e.Variants */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    if (! r05_brackets_left(p+6, p[5], p[1]))
      continue;
    if (! r05_function_left(p+8, p[6], p[7], &r05f_Output))
      continue;
    r05_close_evar(p+9, p[2], p[3]);
    r05_close_evar(p+11, p[4], p[5]);
    r05_close_evar(p+13, p[8], p[7]);
    r05_close_evar(p+15, p[7], p[1]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+17);
    r05_alloc_function(&r05f_Output);
    r05_alloc_insert_pos(p+18);
    r05_alloc_close_bracket(p+19);
    r05_link_brackets(p[17], p[19]);
    r05_correct_evar(p+13);
    r05_splice_evar(p[18], p+13);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Folders: 6 */
    /* e.FileName: 8 */
    struct r05_node *p[13] = { 0 };
    /* (e.Folders) (e.FileName) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    if (! r05_empty_hole(p[5], p[1]))
      continue;
    r05_close_evar(p+6, p[2], p[3]);
    r05_close_evar(p+8, p[4], p[5]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+10);
    r05_alloc_function(&r05f_NotFound);
    r05_alloc_insert_pos(p+11);
    r05_alloc_close_bracket(p+12);
    r05_link_brackets(p[10], p[12]);
    r05_correct_evar(p+8);
    r05_splice_evar(p[11], p+8);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_ENTRY_FUNCTION(mainu_AnalyzeInFolder, "main_AnalyzeInFolder") {
  r05_this_is_generated_function();

  do {
    /* e.FileName: 3 */
    struct r05_node *p[8] = { 0 };
    /* e.FileName Current */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_function_right(p+2, p[0], p[1], &r05f_Current))
      continue;
    r05_close_evar(p+3, p[0], p[2]);

    r05_reset_allocator();
    r05_alloc_open_call(p+5);
    r05_alloc_function(&r05f_AnalyzeFile);
    r05_alloc_insert_pos(p+6);
    r05_alloc_close_call(p+7);
    r05_push_stack(p[7]);
    r05_push_stack(p[5]);
    r05_correct_evar(p+3);
    r05_splice_evar(p[6], p+3);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.FileName: 4 */
    /* e.Folder: 6 */
    struct r05_node *p[14] = { 0 };
    /* e.FileName (e.Folder) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_right(p+2, p[0], p[1]))
      continue;
    r05_close_evar(p+4, p[0], p[2]);
    r05_close_evar(p+6, p[2], p[3]);

    r05_reset_allocator();
    r05_alloc_open_call(p+8);
    r05_alloc_function(&r05f_AnalyzeFile);
    r05_alloc_insert_pos(p+9);
    r05_alloc_open_call(p+10);
    r05_alloc_function(&r05f_DirectorySeparator);
    r05_alloc_close_call(p+11);
    r05_alloc_insert_pos(p+12);
    r05_alloc_close_call(p+13);
    r05_push_stack(p[13]);
    r05_push_stack(p[8]);
    r05_correct_evar(p+4);
    r05_push_stack(p[11]);
    r05_push_stack(p[10]);
    r05_correct_evar(p+6);
    r05_splice_evar(p[9], p+6);
    r05_splice_evar(p[12], p+4);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(AnalyzeFile, "AnalyzeFile") {
  r05_this_is_generated_function();

  do {
    /* e.SourceName: 2 */
    struct r05_node *p[9] = { 0 };
    /* e.SourceName */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    r05_close_evar(p+2, p[0], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+4);
    r05_alloc_function(&r05f_AnalyzeFileu_check);
    r05_alloc_open_bracket(p+5);
    r05_alloc_insert_pos(p+6);
    r05_alloc_close_bracket(p+7);
    r05_alloc_evar(p+2);
    r05_alloc_close_call(p+8);
    r05_push_stack(p[8]);
    r05_push_stack(p[4]);
    r05_link_brackets(p[5], p[7]);
    r05_correct_evar(p+2);
    r05_splice_evar(p[6], p+2);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Other: 2 */
    struct r05_node *p[7] = { 0 };
    /* e.Other */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    r05_close_evar(p+2, p[0], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+4);
    r05_alloc_function(&r05f_AnalyzeFileu_cont);
    r05_alloc_insert_pos(p+5);
    r05_alloc_close_call(p+6);
    r05_push_stack(p[6]);
    r05_push_stack(p[4]);
    r05_correct_evar(p+2);
    r05_splice_evar(p[5], p+2);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);
}

R05_DEFINE_LOCAL_FUNCTION(AnalyzeFileu_check, "AnalyzeFile_check") {
  r05_this_is_generated_function();

  do {
    /* e.SourceName: 8 */
    /* e.BaseName: 10 */
    struct r05_node *p[22] = { 0 };
    /* (e.SourceName) e.BaseName '.ref' */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_char_right(p+2, p[0], p[1], 'f'))
      continue;
    if (! r05_char_right(p+3, p[0], p[2], 'e'))
      continue;
    if (! r05_char_right(p+4, p[0], p[3], 'r'))
      continue;
    if (! r05_char_right(p+5, p[0], p[4], '.'))
      continue;
    if (! r05_brackets_left(p+6, p[0], p[5]))
      continue;
    r05_close_evar(p+8, p[6], p[7]);
    r05_close_evar(p+10, p[7], p[5]);

    r05_reset_allocator();
    r05_alloc_open_call(p+12);
    r05_alloc_function(&r05f_AnalyzeFileu_check0);
    r05_alloc_open_bracket(p+13);
    r05_alloc_insert_pos(p+14);
    r05_alloc_close_bracket(p+15);
    r05_alloc_open_bracket(p+16);
    r05_alloc_insert_pos(p+17);
    r05_alloc_close_bracket(p+18);
    r05_alloc_open_call(p+19);
    r05_alloc_function(&r05f_ExistFile);
    r05_alloc_evar(p+8);
    r05_alloc_close_call(p+20);
    r05_alloc_close_call(p+21);
    r05_push_stack(p[21]);
    r05_push_stack(p[12]);
    r05_push_stack(p[20]);
    r05_push_stack(p[19]);
    r05_link_brackets(p[16], p[18]);
    r05_correct_evar(p+10);
    r05_link_brackets(p[13], p[15]);
    r05_correct_evar(p+8);
    r05_splice_evar(p[14], p+8);
    r05_splice_evar(p[17], p+10);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Other: 2 */
    struct r05_node *p[7] = { 0 };
    /* e.Other */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    r05_close_evar(p+2, p[0], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+4);
    r05_alloc_function(&r05f_AnalyzeFileu_cont0);
    r05_alloc_insert_pos(p+5);
    r05_alloc_close_call(p+6);
    r05_push_stack(p[6]);
    r05_push_stack(p[4]);
    r05_correct_evar(p+2);
    r05_splice_evar(p[5], p+2);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);
}

R05_DEFINE_LOCAL_FUNCTION(AnalyzeFileu_cont, "AnalyzeFile_cont") {
  r05_this_is_generated_function();

  do {
    /* e.OutName: 2 */
    struct r05_node *p[9] = { 0 };
    /* e.OutName */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    r05_close_evar(p+2, p[0], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+4);
    r05_alloc_function(&r05f_AnalyzeFileu_check1);
    r05_alloc_open_bracket(p+5);
    r05_alloc_insert_pos(p+6);
    r05_alloc_close_bracket(p+7);
    r05_alloc_evar(p+2);
    r05_alloc_close_call(p+8);
    r05_push_stack(p[8]);
    r05_push_stack(p[4]);
    r05_link_brackets(p[5], p[7]);
    r05_correct_evar(p+2);
    r05_splice_evar(p[6], p+2);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Other: 2 */
    struct r05_node *p[7] = { 0 };
    /* e.Other */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    r05_close_evar(p+2, p[0], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+4);
    r05_alloc_function(&r05f_AnalyzeFileu_cont1);
    r05_alloc_insert_pos(p+5);
    r05_alloc_close_call(p+6);
    r05_push_stack(p[6]);
    r05_push_stack(p[4]);
    r05_correct_evar(p+2);
    r05_splice_evar(p[5], p+2);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);
}

R05_DEFINE_LOCAL_FUNCTION(AnalyzeFileu_check0, "AnalyzeFile_check0") {
  r05_this_is_generated_function();

  do {
    /* e.SourceName: 7 */
    /* e.BaseName: 9 */
    struct r05_node *p[17] = { 0 };
    /* (e.SourceName) (e.BaseName) True */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_function_right(p+2, p[0], p[1], &r05f_True))
      continue;
    if (! r05_brackets_left(p+3, p[0], p[2]))
      continue;
    if (! r05_brackets_left(p+5, p[4], p[2]))
      continue;
    if (! r05_empty_hole(p[6], p[2]))
      continue;
    r05_close_evar(p+7, p[3], p[4]);
    r05_close_evar(p+9, p[5], p[6]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+11);
    r05_alloc_function(&r05f_Source);
    r05_alloc_open_bracket(p+12);
    r05_alloc_insert_pos(p+13);
    r05_alloc_close_bracket(p+14);
    r05_alloc_insert_pos(p+15);
    r05_alloc_chars(".c", 2);
    r05_alloc_close_bracket(p+16);
    r05_link_brackets(p[11], p[16]);
    r05_correct_evar(p+9);
    r05_link_brackets(p[12], p[14]);
    r05_correct_evar(p+7);
    r05_splice_evar(p[13], p+7);
    r05_splice_evar(p[15], p+9);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.SourceName: 6 */
    /* e.BaseName: 8 */
    /* e.Other: 10 */
    struct r05_node *p[18] = { 0 };
    /* (e.SourceName) (e.BaseName) e.Other */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    r05_close_evar(p+6, p[2], p[3]);
    r05_close_evar(p+8, p[4], p[5]);
    r05_close_evar(p+10, p[5], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+12);
    r05_alloc_function(&r05f_AnalyzeFileu_cont0);
    r05_alloc_open_bracket(p+13);
    r05_alloc_insert_pos(p+14);
    r05_alloc_close_bracket(p+15);
    r05_alloc_insert_pos(p+16);
    r05_alloc_chars(".ref", 4);
    r05_alloc_close_call(p+17);
    r05_push_stack(p[17]);
    r05_push_stack(p[12]);
    r05_correct_evar(p+8);
    r05_link_brackets(p[13], p[15]);
    r05_correct_evar(p+6);
    r05_splice_evar(p[14], p+6);
    r05_splice_evar(p[16], p+8);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(AnalyzeFileu_cont0, "AnalyzeFile_cont0") {
  r05_this_is_generated_function();

  do {
    /* e.SourceName: 4 */
    /* e.Other: 6 */
    struct r05_node *p[11] = { 0 };
    /* (e.SourceName) e.Other */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    r05_close_evar(p+4, p[2], p[3]);
    r05_close_evar(p+6, p[3], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+8);
    r05_alloc_function(&r05f_AnalyzeFileu_cont);
    r05_alloc_insert_pos(p+9);
    r05_alloc_close_call(p+10);
    r05_push_stack(p[10]);
    r05_push_stack(p[8]);
    r05_correct_evar(p+4);
    r05_splice_evar(p[9], p+4);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(AnalyzeFileu_check1, "AnalyzeFile_check1") {
  r05_this_is_generated_function();

  do {
    /* e.OutName: 6 */
    /* e.BaseName: 8 */
    struct r05_node *p[20] = { 0 };
    /* (e.OutName) e.BaseName '.c' */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_char_right(p+2, p[0], p[1], 'c'))
      continue;
    if (! r05_char_right(p+3, p[0], p[2], '.'))
      continue;
    if (! r05_brackets_left(p+4, p[0], p[3]))
      continue;
    r05_close_evar(p+6, p[4], p[5]);
    r05_close_evar(p+8, p[5], p[3]);

    r05_reset_allocator();
    r05_alloc_open_call(p+10);
    r05_alloc_function(&r05f_AnalyzeFileu_check2);
    r05_alloc_open_bracket(p+11);
    r05_alloc_insert_pos(p+12);
    r05_alloc_close_bracket(p+13);
    r05_alloc_open_bracket(p+14);
    r05_alloc_insert_pos(p+15);
    r05_alloc_close_bracket(p+16);
    r05_alloc_open_call(p+17);
    r05_alloc_function(&r05f_ExistFile);
    r05_alloc_evar(p+6);
    r05_alloc_close_call(p+18);
    r05_alloc_close_call(p+19);
    r05_push_stack(p[19]);
    r05_push_stack(p[10]);
    r05_push_stack(p[18]);
    r05_push_stack(p[17]);
    r05_link_brackets(p[14], p[16]);
    r05_correct_evar(p+8);
    r05_link_brackets(p[11], p[13]);
    r05_correct_evar(p+6);
    r05_splice_evar(p[12], p+6);
    r05_splice_evar(p[15], p+8);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Other: 2 */
    struct r05_node *p[7] = { 0 };
    /* e.Other */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    r05_close_evar(p+2, p[0], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+4);
    r05_alloc_function(&r05f_AnalyzeFileu_cont2);
    r05_alloc_insert_pos(p+5);
    r05_alloc_close_call(p+6);
    r05_push_stack(p[6]);
    r05_push_stack(p[4]);
    r05_correct_evar(p+2);
    r05_splice_evar(p[5], p+2);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);
}

R05_DEFINE_LOCAL_FUNCTION(AnalyzeFileu_cont1, "AnalyzeFile_cont1") {
  r05_this_is_generated_function();

  do {
    /* e.BaseName: 2 */
    struct r05_node *p[9] = { 0 };
    /* e.BaseName */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    r05_close_evar(p+2, p[0], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+4);
    r05_alloc_function(&r05f_AnalyzeFileu_check3);
    r05_alloc_open_bracket(p+5);
    r05_alloc_insert_pos(p+6);
    r05_alloc_close_bracket(p+7);
    r05_alloc_evar(p+2);
    r05_alloc_chars(".ref", 4);
    r05_alloc_close_call(p+8);
    r05_push_stack(p[8]);
    r05_push_stack(p[4]);
    r05_link_brackets(p[5], p[7]);
    r05_correct_evar(p+2);
    r05_splice_evar(p[6], p+2);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Other: 2 */
    struct r05_node *p[7] = { 0 };
    /* e.Other */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    r05_close_evar(p+2, p[0], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+4);
    r05_alloc_function(&r05f_AnalyzeFileu_cont3);
    r05_alloc_insert_pos(p+5);
    r05_alloc_close_call(p+6);
    r05_push_stack(p[6]);
    r05_push_stack(p[4]);
    r05_correct_evar(p+2);
    r05_splice_evar(p[5], p+2);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);
}

R05_DEFINE_LOCAL_FUNCTION(AnalyzeFileu_check2, "AnalyzeFile_check2") {
  r05_this_is_generated_function();

  do {
    /* e.OutName: 7 */
    /* e.BaseName: 9 */
    struct r05_node *p[14] = { 0 };
    /* (e.OutName) (e.BaseName) True */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_function_right(p+2, p[0], p[1], &r05f_True))
      continue;
    if (! r05_brackets_left(p+3, p[0], p[2]))
      continue;
    if (! r05_brackets_left(p+5, p[4], p[2]))
      continue;
    if (! r05_empty_hole(p[6], p[2]))
      continue;
    r05_close_evar(p+7, p[3], p[4]);
    r05_close_evar(p+9, p[5], p[6]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+11);
    r05_alloc_function(&r05f_Output);
    r05_alloc_insert_pos(p+12);
    r05_alloc_close_bracket(p+13);
    r05_link_brackets(p[11], p[13]);
    r05_correct_evar(p+7);
    r05_splice_evar(p[12], p+7);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.OutName: 6 */
    /* e.BaseName: 8 */
    /* e.Other: 10 */
    struct r05_node *p[18] = { 0 };
    /* (e.OutName) (e.BaseName) e.Other */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    r05_close_evar(p+6, p[2], p[3]);
    r05_close_evar(p+8, p[4], p[5]);
    r05_close_evar(p+10, p[5], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+12);
    r05_alloc_function(&r05f_AnalyzeFileu_cont2);
    r05_alloc_open_bracket(p+13);
    r05_alloc_insert_pos(p+14);
    r05_alloc_close_bracket(p+15);
    r05_alloc_insert_pos(p+16);
    r05_alloc_chars(".c", 2);
    r05_alloc_close_call(p+17);
    r05_push_stack(p[17]);
    r05_push_stack(p[12]);
    r05_correct_evar(p+8);
    r05_link_brackets(p[13], p[15]);
    r05_correct_evar(p+6);
    r05_splice_evar(p[14], p+6);
    r05_splice_evar(p[16], p+8);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(AnalyzeFileu_cont2, "AnalyzeFile_cont2") {
  r05_this_is_generated_function();

  do {
    /* e.OutName: 4 */
    /* e.Other: 6 */
    struct r05_node *p[11] = { 0 };
    /* (e.OutName) e.Other */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    r05_close_evar(p+4, p[2], p[3]);
    r05_close_evar(p+6, p[3], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+8);
    r05_alloc_function(&r05f_AnalyzeFileu_cont1);
    r05_alloc_insert_pos(p+9);
    r05_alloc_close_call(p+10);
    r05_push_stack(p[10]);
    r05_push_stack(p[8]);
    r05_correct_evar(p+4);
    r05_splice_evar(p[9], p+4);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(AnalyzeFileu_check3, "AnalyzeFile_check3") {
  r05_this_is_generated_function();

  do {
    /* e.BaseName: 4 */
    /* e.SourceName: 6 */
    struct r05_node *p[18] = { 0 };
    /* (e.BaseName) e.SourceName */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    r05_close_evar(p+4, p[2], p[3]);
    r05_close_evar(p+6, p[3], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+8);
    r05_alloc_function(&r05f_AnalyzeFileu_check4);
    r05_alloc_open_bracket(p+9);
    r05_alloc_insert_pos(p+10);
    r05_alloc_close_bracket(p+11);
    r05_alloc_open_bracket(p+12);
    r05_alloc_insert_pos(p+13);
    r05_alloc_close_bracket(p+14);
    r05_alloc_open_call(p+15);
    r05_alloc_function(&r05f_ExistFile);
    r05_alloc_evar(p+6);
    r05_alloc_close_call(p+16);
    r05_alloc_close_call(p+17);
    r05_push_stack(p[17]);
    r05_push_stack(p[8]);
    r05_push_stack(p[16]);
    r05_push_stack(p[15]);
    r05_link_brackets(p[12], p[14]);
    r05_correct_evar(p+6);
    r05_link_brackets(p[9], p[11]);
    r05_correct_evar(p+4);
    r05_splice_evar(p[10], p+4);
    r05_splice_evar(p[13], p+6);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Other: 2 */
    struct r05_node *p[7] = { 0 };
    /* e.Other */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    r05_close_evar(p+2, p[0], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+4);
    r05_alloc_function(&r05f_AnalyzeFileu_cont4);
    r05_alloc_insert_pos(p+5);
    r05_alloc_close_call(p+6);
    r05_push_stack(p[6]);
    r05_push_stack(p[4]);
    r05_correct_evar(p+2);
    r05_splice_evar(p[5], p+2);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);
}

R05_DEFINE_LOCAL_FUNCTION(AnalyzeFileu_cont3, "AnalyzeFile_cont3") {
  r05_this_is_generated_function();

  do {
    /* e.BaseName: 2 */
    struct r05_node *p[9] = { 0 };
    /* e.BaseName */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    r05_close_evar(p+2, p[0], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+4);
    r05_alloc_function(&r05f_AnalyzeFileu_check5);
    r05_alloc_open_bracket(p+5);
    r05_alloc_insert_pos(p+6);
    r05_alloc_close_bracket(p+7);
    r05_alloc_evar(p+2);
    r05_alloc_chars(".c", 2);
    r05_alloc_close_call(p+8);
    r05_push_stack(p[8]);
    r05_push_stack(p[4]);
    r05_link_brackets(p[5], p[7]);
    r05_correct_evar(p+2);
    r05_splice_evar(p[6], p+2);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Other: 2 */
    struct r05_node *p[7] = { 0 };
    /* e.Other */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    r05_close_evar(p+2, p[0], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+4);
    r05_alloc_function(&r05f_AnalyzeFileu_cont5);
    r05_alloc_insert_pos(p+5);
    r05_alloc_close_call(p+6);
    r05_push_stack(p[6]);
    r05_push_stack(p[4]);
    r05_correct_evar(p+2);
    r05_splice_evar(p[5], p+2);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);
}

R05_DEFINE_LOCAL_FUNCTION(AnalyzeFileu_check4, "AnalyzeFile_check4") {
  r05_this_is_generated_function();

  do {
    /* e.BaseName: 7 */
    /* e.SourceName: 9 */
    struct r05_node *p[17] = { 0 };
    /* (e.BaseName) (e.SourceName) True */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_function_right(p+2, p[0], p[1], &r05f_True))
      continue;
    if (! r05_brackets_left(p+3, p[0], p[2]))
      continue;
    if (! r05_brackets_left(p+5, p[4], p[2]))
      continue;
    if (! r05_empty_hole(p[6], p[2]))
      continue;
    r05_close_evar(p+7, p[3], p[4]);
    r05_close_evar(p+9, p[5], p[6]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+11);
    r05_alloc_function(&r05f_Source);
    r05_alloc_open_bracket(p+12);
    r05_alloc_insert_pos(p+13);
    r05_alloc_close_bracket(p+14);
    r05_alloc_insert_pos(p+15);
    r05_alloc_chars(".c", 2);
    r05_alloc_close_bracket(p+16);
    r05_link_brackets(p[11], p[16]);
    r05_correct_evar(p+7);
    r05_link_brackets(p[12], p[14]);
    r05_correct_evar(p+9);
    r05_splice_evar(p[13], p+9);
    r05_splice_evar(p[15], p+7);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.BaseName: 6 */
    /* e.SourceName: 8 */
    /* e.Other: 10 */
    struct r05_node *p[18] = { 0 };
    /* (e.BaseName) (e.SourceName) e.Other */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    r05_close_evar(p+6, p[2], p[3]);
    r05_close_evar(p+8, p[4], p[5]);
    r05_close_evar(p+10, p[5], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+12);
    r05_alloc_function(&r05f_AnalyzeFileu_cont4);
    r05_alloc_open_bracket(p+13);
    r05_alloc_insert_pos(p+14);
    r05_alloc_close_bracket(p+15);
    r05_alloc_insert_pos(p+16);
    r05_alloc_close_call(p+17);
    r05_push_stack(p[17]);
    r05_push_stack(p[12]);
    r05_correct_evar(p+8);
    r05_link_brackets(p[13], p[15]);
    r05_correct_evar(p+6);
    r05_splice_evar(p[14], p+6);
    r05_splice_evar(p[16], p+8);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(AnalyzeFileu_cont4, "AnalyzeFile_cont4") {
  r05_this_is_generated_function();

  do {
    /* e.BaseName: 4 */
    /* e.Other: 6 */
    struct r05_node *p[11] = { 0 };
    /* (e.BaseName) e.Other */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    r05_close_evar(p+4, p[2], p[3]);
    r05_close_evar(p+6, p[3], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+8);
    r05_alloc_function(&r05f_AnalyzeFileu_cont3);
    r05_alloc_insert_pos(p+9);
    r05_alloc_close_call(p+10);
    r05_push_stack(p[10]);
    r05_push_stack(p[8]);
    r05_correct_evar(p+4);
    r05_splice_evar(p[9], p+4);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(AnalyzeFileu_check5, "AnalyzeFile_check5") {
  r05_this_is_generated_function();

  do {
    /* e.BaseName: 4 */
    /* e.OutName: 6 */
    struct r05_node *p[18] = { 0 };
    /* (e.BaseName) e.OutName */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    r05_close_evar(p+4, p[2], p[3]);
    r05_close_evar(p+6, p[3], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+8);
    r05_alloc_function(&r05f_AnalyzeFileu_check6);
    r05_alloc_open_bracket(p+9);
    r05_alloc_insert_pos(p+10);
    r05_alloc_close_bracket(p+11);
    r05_alloc_open_bracket(p+12);
    r05_alloc_insert_pos(p+13);
    r05_alloc_close_bracket(p+14);
    r05_alloc_open_call(p+15);
    r05_alloc_function(&r05f_ExistFile);
    r05_alloc_evar(p+6);
    r05_alloc_close_call(p+16);
    r05_alloc_close_call(p+17);
    r05_push_stack(p[17]);
    r05_push_stack(p[8]);
    r05_push_stack(p[16]);
    r05_push_stack(p[15]);
    r05_link_brackets(p[12], p[14]);
    r05_correct_evar(p+6);
    r05_link_brackets(p[9], p[11]);
    r05_correct_evar(p+4);
    r05_splice_evar(p[10], p+4);
    r05_splice_evar(p[13], p+6);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Other: 2 */
    struct r05_node *p[7] = { 0 };
    /* e.Other */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    r05_close_evar(p+2, p[0], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+4);
    r05_alloc_function(&r05f_AnalyzeFileu_cont6);
    r05_alloc_insert_pos(p+5);
    r05_alloc_close_call(p+6);
    r05_push_stack(p[6]);
    r05_push_stack(p[4]);
    r05_correct_evar(p+2);
    r05_splice_evar(p[5], p+2);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);
}

R05_DEFINE_LOCAL_FUNCTION(AnalyzeFileu_cont5, "AnalyzeFile_cont5") {
  r05_this_is_generated_function();

  do {
    /* e.FileName: 2 */
    struct r05_node *p[4] = { 0 };
    /* e.FileName */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    r05_close_evar(p+2, p[0], p[1]);

    r05_reset_allocator();
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);
}

R05_DEFINE_LOCAL_FUNCTION(AnalyzeFileu_check6, "AnalyzeFile_check6") {
  r05_this_is_generated_function();

  do {
    /* e.BaseName: 7 */
    /* e.OutName: 9 */
    struct r05_node *p[14] = { 0 };
    /* (e.BaseName) (e.OutName) True */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_function_right(p+2, p[0], p[1], &r05f_True))
      continue;
    if (! r05_brackets_left(p+3, p[0], p[2]))
      continue;
    if (! r05_brackets_left(p+5, p[4], p[2]))
      continue;
    if (! r05_empty_hole(p[6], p[2]))
      continue;
    r05_close_evar(p+7, p[3], p[4]);
    r05_close_evar(p+9, p[5], p[6]);

    r05_reset_allocator();
    r05_alloc_open_bracket(p+11);
    r05_alloc_function(&r05f_Output);
    r05_alloc_insert_pos(p+12);
    r05_alloc_close_bracket(p+13);
    r05_link_brackets(p[11], p[13]);
    r05_correct_evar(p+9);
    r05_splice_evar(p[12], p+9);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.BaseName: 6 */
    /* e.OutName: 8 */
    /* e.Other: 10 */
    struct r05_node *p[18] = { 0 };
    /* (e.BaseName) (e.OutName) e.Other */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_brackets_left(p+4, p[3], p[1]))
      continue;
    r05_close_evar(p+6, p[2], p[3]);
    r05_close_evar(p+8, p[4], p[5]);
    r05_close_evar(p+10, p[5], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+12);
    r05_alloc_function(&r05f_AnalyzeFileu_cont6);
    r05_alloc_open_bracket(p+13);
    r05_alloc_insert_pos(p+14);
    r05_alloc_close_bracket(p+15);
    r05_alloc_insert_pos(p+16);
    r05_alloc_close_call(p+17);
    r05_push_stack(p[17]);
    r05_push_stack(p[12]);
    r05_correct_evar(p+8);
    r05_link_brackets(p[13], p[15]);
    r05_correct_evar(p+6);
    r05_splice_evar(p[14], p+6);
    r05_splice_evar(p[16], p+8);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(AnalyzeFileu_cont6, "AnalyzeFile_cont6") {
  r05_this_is_generated_function();

  do {
    /* e.BaseName: 4 */
    /* e.Other: 6 */
    struct r05_node *p[11] = { 0 };
    /* (e.BaseName) e.Other */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    r05_close_evar(p+4, p[2], p[3]);
    r05_close_evar(p+6, p[3], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+8);
    r05_alloc_function(&r05f_AnalyzeFileu_cont5);
    r05_alloc_insert_pos(p+9);
    r05_alloc_close_call(p+10);
    r05_push_stack(p[10]);
    r05_push_stack(p[8]);
    r05_correct_evar(p+4);
    r05_splice_evar(p[9], p+4);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(CutFolder, "CutFolder") {
  r05_this_is_generated_function();

  do {
    /* e.Folder: 2 */
    /* s.Sep: 4 */
    /* e.FileName: 5 */
    struct r05_node *p[17] = { 0 };
    /* e.Folder s.Sep e.FileName */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    p[2] = p[0]->next;
    p[3] = p[0];
    r05_start_e_loop();
    do {
      if (! r05_svar_left(p+4, p[3], p[1]))
        continue;
      r05_close_evar(p+5, p[4], p[1]);

      r05_reset_allocator();
      r05_alloc_open_call(p+7);
      r05_alloc_function(&r05f_CutFolderu_check);
      r05_alloc_open_bracket(p+8);
      r05_alloc_insert_pos(p+9);
      r05_alloc_close_bracket(p+10);
      r05_alloc_svar(p+4);
      r05_alloc_open_bracket(p+11);
      r05_alloc_insert_pos(p+12);
      r05_alloc_close_bracket(p+13);
      r05_alloc_open_call(p+14);
      r05_alloc_function(&r05f_IsDirectorySeparator);
      r05_alloc_svar(p+4);
      r05_alloc_close_call(p+15);
      r05_alloc_close_call(p+16);
      r05_push_stack(p[16]);
      r05_push_stack(p[7]);
      r05_push_stack(p[15]);
      r05_push_stack(p[14]);
      r05_link_brackets(p[11], p[13]);
      r05_correct_evar(p+5);
      r05_link_brackets(p[8], p[10]);
      r05_correct_evar(p+2);
      r05_splice_evar(p[9], p+2);
      r05_splice_evar(p[12], p+5);
      r05_splice_from_freelist(arg_begin);
      r05_splice_to_freelist(arg_begin, arg_end);
      return;
    } while (r05_open_evar_advance(p+2, p[1]));
    r05_stop_e_loop();
  } while (0);

  do {
    /* e.Other: 2 */
    struct r05_node *p[7] = { 0 };
    /* e.Other */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    r05_close_evar(p+2, p[0], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+4);
    r05_alloc_function(&r05f_CutFolderu_cont);
    r05_alloc_insert_pos(p+5);
    r05_alloc_close_call(p+6);
    r05_push_stack(p[6]);
    r05_push_stack(p[4]);
    r05_correct_evar(p+2);
    r05_splice_evar(p[5], p+2);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);
}

R05_DEFINE_LOCAL_FUNCTION(CutFolderu_check, "CutFolder_check") {
  r05_this_is_generated_function();

  do {
    /* e.Folder: 7 */
    /* e.FileName: 9 */
    /* s.Sep: 11 */
    struct r05_node *p[15] = { 0 };
    /* (e.Folder) s.Sep (e.FileName) True */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_function_right(p+2, p[0], p[1], &r05f_True))
      continue;
    if (! r05_brackets_left(p+3, p[0], p[2]))
      continue;
    if (! r05_brackets_right(p+5, p[4], p[2]))
      continue;
    r05_close_evar(p+7, p[3], p[4]);
    r05_close_evar(p+9, p[5], p[6]);
    if (! r05_svar_left(p+11, p[4], p[5]))
      continue;
    if (! r05_empty_hole(p[11], p[5]))
      continue;

    r05_reset_allocator();
    r05_alloc_open_call(p+12);
    r05_alloc_function(&r05f_CutFolder);
    r05_alloc_insert_pos(p+13);
    r05_alloc_close_call(p+14);
    r05_push_stack(p[14]);
    r05_push_stack(p[12]);
    r05_correct_evar(p+9);
    r05_splice_evar(p[13], p+9);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Folder: 4 */
    /* s.Sep: 6 */
    /* e.FileName: 9 */
    /* e.Other: 11 */
    struct r05_node *p[19] = { 0 };
    /* (e.Folder) s.Sep (e.FileName) e.Other */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    r05_close_evar(p+4, p[2], p[3]);
    if (! r05_svar_left(p+6, p[3], p[1]))
      continue;
    if (! r05_brackets_left(p+7, p[6], p[1]))
      continue;
    r05_close_evar(p+9, p[7], p[8]);
    r05_close_evar(p+11, p[8], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+13);
    r05_alloc_function(&r05f_CutFolderu_forward);
    r05_alloc_open_bracket(p+14);
    r05_alloc_insert_pos(p+15);
    r05_alloc_close_bracket(p+16);
    r05_alloc_svar(p+6);
    r05_alloc_insert_pos(p+17);
    r05_alloc_close_call(p+18);
    r05_push_stack(p[18]);
    r05_push_stack(p[13]);
    r05_correct_evar(p+9);
    r05_link_brackets(p[14], p[16]);
    r05_correct_evar(p+4);
    r05_splice_evar(p[15], p+4);
    r05_splice_evar(p[17], p+9);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(CutFolderu_forward, "CutFolder_forward") {
  r05_this_is_generated_function();

  do {
    /* e.Folder_fix: 4 */
    /* t.Folder_next: 6 */
    /* e.Folder_rest: 8 */
    struct r05_node *p[16] = { 0 };
    /* (e.Folder_fix) t.Folder_next e.Folder_rest */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    r05_close_evar(p+4, p[2], p[3]);
    if (! r05_tvar_left(p+6, p[3], p[1]))
      continue;
    r05_close_evar(p+8, p[7], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+10);
    r05_alloc_function(&r05f_CutFolderu_next);
    r05_alloc_open_bracket(p+11);
    r05_alloc_insert_pos(p+12);
    r05_alloc_close_bracket(p+13);
    r05_alloc_insert_pos(p+14);
    r05_alloc_close_call(p+15);
    r05_push_stack(p[15]);
    r05_push_stack(p[10]);
    r05_correct_evar(p+8);
    r05_link_brackets(p[11], p[13]);
    r05_correct_evar(p+4);
    r05_splice_evar(p[12], p+4);
    r05_splice_tvar(p[12], p+6);
    r05_splice_evar(p[14], p+8);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.Folder_fix: 4 */
    struct r05_node *p[9] = { 0 };
    /* (e.Folder_fix) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_empty_hole(p[3], p[1]))
      continue;
    r05_close_evar(p+4, p[2], p[3]);

    r05_reset_allocator();
    r05_alloc_open_call(p+6);
    r05_alloc_function(&r05f_CutFolderu_cont);
    r05_alloc_insert_pos(p+7);
    r05_alloc_close_call(p+8);
    r05_push_stack(p[8]);
    r05_push_stack(p[6]);
    r05_correct_evar(p+4);
    r05_splice_evar(p[7], p+4);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(CutFolderu_next, "CutFolder_next") {
  r05_this_is_generated_function();

  do {
    /* e.Folder_fix: 4 */
    /* e.Folder_var: 6 */
    /* s.Sep: 8 */
    /* e.FileName: 9 */
    struct r05_node *p[21] = { 0 };
    /* (e.Folder_fix) e.Folder_var s.Sep e.FileName */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    r05_close_evar(p+4, p[2], p[3]);
    p[6] = p[3]->next;
    p[7] = p[3];
    r05_start_e_loop();
    do {
      if (! r05_svar_left(p+8, p[7], p[1]))
        continue;
      r05_close_evar(p+9, p[8], p[1]);

      r05_reset_allocator();
      r05_alloc_open_call(p+11);
      r05_alloc_function(&r05f_CutFolderu_check);
      r05_alloc_open_bracket(p+12);
      r05_alloc_insert_pos(p+13);
      r05_alloc_close_bracket(p+14);
      r05_alloc_svar(p+8);
      r05_alloc_open_bracket(p+15);
      r05_alloc_insert_pos(p+16);
      r05_alloc_close_bracket(p+17);
      r05_alloc_open_call(p+18);
      r05_alloc_function(&r05f_IsDirectorySeparator);
      r05_alloc_svar(p+8);
      r05_alloc_close_call(p+19);
      r05_alloc_close_call(p+20);
      r05_push_stack(p[20]);
      r05_push_stack(p[11]);
      r05_push_stack(p[19]);
      r05_push_stack(p[18]);
      r05_link_brackets(p[15], p[17]);
      r05_correct_evar(p+9);
      r05_link_brackets(p[12], p[14]);
      r05_correct_evar(p+6);
      r05_correct_evar(p+4);
      r05_splice_evar(p[13], p+4);
      r05_splice_evar(p[13], p+6);
      r05_splice_evar(p[16], p+9);
      r05_splice_from_freelist(arg_begin);
      r05_splice_to_freelist(arg_begin, arg_end);
      return;
    } while (r05_open_evar_advance(p+6, p[1]));
    r05_stop_e_loop();
  } while (0);

  do {
    /* e.Folder_fix: 4 */
    /* e.Folder_rest: 6 */
    struct r05_node *p[11] = { 0 };
    /* (e.Folder_fix) e.Folder_rest */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    r05_close_evar(p+4, p[2], p[3]);
    r05_close_evar(p+6, p[3], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+8);
    r05_alloc_function(&r05f_CutFolderu_cont);
    r05_alloc_insert_pos(p+9);
    r05_alloc_close_call(p+10);
    r05_push_stack(p[10]);
    r05_push_stack(p[8]);
    r05_correct_evar(p+6);
    r05_correct_evar(p+4);
    r05_splice_evar(p[9], p+4);
    r05_splice_evar(p[9], p+6);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(CutFolderu_cont, "CutFolder_cont") {
  r05_this_is_generated_function();

  do {
    /* e.FileName: 2 */
    struct r05_node *p[5] = { 0 };
    /* e.FileName */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    r05_close_evar(p+2, p[0], p[1]);

    r05_reset_allocator();
    r05_alloc_insert_pos(p+4);
    r05_correct_evar(p+2);
    r05_splice_evar(p[4], p+2);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);
}

R05_DEFINE_LOCAL_FUNCTION(CCompile, "CCompile") {
  r05_this_is_generated_function();

  do {
    /* e.CSources: 2 */
    struct r05_node *p[11] = { 0 };
    /* e.CSources */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    r05_close_evar(p+2, p[0], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+4);
    r05_alloc_function(&r05f_CCompile0);
    r05_alloc_open_bracket(p+5);
    r05_alloc_insert_pos(p+6);
    r05_alloc_close_bracket(p+7);
    r05_alloc_open_call(p+8);
    r05_alloc_function(&r05f_GetEnv);
    r05_alloc_chars("R05CCOMP", 8);
    r05_alloc_close_call(p+9);
    r05_alloc_close_call(p+10);
    r05_push_stack(p[10]);
    r05_push_stack(p[4]);
    r05_push_stack(p[9]);
    r05_push_stack(p[8]);
    r05_link_brackets(p[5], p[7]);
    r05_correct_evar(p+2);
    r05_splice_evar(p[6], p+2);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);
}

R05_DEFINE_LOCAL_FUNCTION(CCompile0, "CCompile0") {
  r05_this_is_generated_function();

  do {
    /* e.CSources: 4 */
    struct r05_node *p[6] = { 0 };
    /* (e.CSources) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_empty_hole(p[3], p[1]))
      continue;
    r05_close_evar(p+4, p[2], p[3]);

    r05_reset_allocator();
    r05_alloc_number(0UL);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  do {
    /* e.CSources: 4 */
    /* e.CommandLine: 6 */
    struct r05_node *p[20] = { 0 };
    /* (e.CSources) e.CommandLine */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    r05_close_evar(p+4, p[2], p[3]);
    r05_close_evar(p+6, p[3], p[1]);

    r05_reset_allocator();
    r05_alloc_open_call(p+8);
    r05_alloc_function(&r05f_System);
    r05_alloc_insert_pos(p+9);
    r05_alloc_char(' ');
    r05_alloc_open_call(p+10);
    r05_alloc_function(&r05f_GetEnv);
    r05_alloc_chars("R05CFLAGS", 9);
    r05_alloc_close_call(p+11);
    r05_alloc_open_call(p+12);
    r05_alloc_function(&r05f_Map);
    r05_alloc_function(&r05f_mainu_IncludeFlag);
    r05_alloc_open_call(p+13);
    r05_alloc_function(&r05f_LoadPath);
    r05_alloc_close_call(p+14);
    r05_alloc_close_call(p+15);
    r05_alloc_open_call(p+16);
    r05_alloc_function(&r05f_Map);
    r05_alloc_function(&r05f_mainu_QuoteFile);
    r05_alloc_insert_pos(p+17);
    r05_alloc_close_call(p+18);
    r05_alloc_close_call(p+19);
    r05_push_stack(p[19]);
    r05_push_stack(p[8]);
    r05_push_stack(p[18]);
    r05_push_stack(p[16]);
    r05_correct_evar(p+4);
    r05_push_stack(p[15]);
    r05_push_stack(p[12]);
    r05_push_stack(p[14]);
    r05_push_stack(p[13]);
    r05_push_stack(p[11]);
    r05_push_stack(p[10]);
    r05_correct_evar(p+6);
    r05_splice_evar(p[9], p+6);
    r05_splice_evar(p[17], p+4);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_ENTRY_FUNCTION(mainu_IncludeFlag, "main_IncludeFlag") {
  r05_this_is_generated_function();

  do {
    /* e.PathEntry: 4 */
    struct r05_node *p[7] = { 0 };
    /* (e.PathEntry) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_empty_hole(p[3], p[1]))
      continue;
    r05_close_evar(p+4, p[2], p[3]);

    r05_reset_allocator();
    r05_alloc_chars(" -I\"", 4);
    r05_alloc_insert_pos(p+6);
    r05_alloc_char('\"');
    r05_correct_evar(p+4);
    r05_splice_evar(p[6], p+4);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_ENTRY_FUNCTION(mainu_QuoteFile, "main_QuoteFile") {
  r05_this_is_generated_function();

  do {
    /* e.FileName: 4 */
    struct r05_node *p[7] = { 0 };
    /* (e.FileName) */
    p[0] = arg_begin->next;
    p[1] = arg_end;
    if (! r05_brackets_left(p+2, p[0], p[1]))
      continue;
    if (! r05_empty_hole(p[3], p[1]))
      continue;
    r05_close_evar(p+4, p[2], p[3]);

    r05_reset_allocator();
    r05_alloc_chars(" \"", 2);
    r05_alloc_insert_pos(p+6);
    r05_alloc_char('\"');
    r05_correct_evar(p+4);
    r05_splice_evar(p[6], p+4);
    r05_splice_from_freelist(arg_begin);
    r05_splice_to_freelist(arg_begin, arg_end);
    return;
  } while (0);

  r05_recognition_impossible();
}


/* End of file */
