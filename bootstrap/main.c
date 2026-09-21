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
R05_DECLARE_ENTRY_FUNCTION(mainu_PrintNotFound)
R05_DECLARE_ENTRY_FUNCTION(mainu_ProcessEachSource)
R05_DECLARE_ENTRY_FUNCTION(mainu_WriteError)
R05_DECLARE_LOCAL_FUNCTION(StrFromSrcPos)
R05_DECLARE_LOCAL_FUNCTION(LoadPath)
R05_DECLARE_LOCAL_FUNCTION(ParsePath)
R05_DECLARE_LOCAL_FUNCTION(ParseFolder)
R05_DECLARE_LOCAL_FUNCTION(FindFiles)
R05_DECLARE_ENTRY_FUNCTION(mainu_AnalyzeFilem_ByFolders)
R05_DECLARE_ENTRY_FUNCTION(mainu_AnalyzeInFolder)
R05_DECLARE_LOCAL_FUNCTION(AnalyzeFile)
R05_DECLARE_LOCAL_FUNCTION(CutFolder)
R05_DECLARE_LOCAL_FUNCTION(CCompile)
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

R05_DEFINE_ENTRY_FUNCTION(GO, "GO") {
  struct r05_node *p[7] = { 0 };

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
    r05_alloc_function(&r05f_Main);
    r05_alloc_open_call(p+4);
    r05_alloc_function(&r05f_ArgList);
    r05_alloc_close_call(p+5);
    r05_alloc_close_call(p+6);
    r05_push_stack(p[6]);
    r05_push_stack(p[3]);
    r05_push_stack(p[5]);
    r05_push_stack(p[4]);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(Main, "Main") {
  R05_DEFINE_COND_FUNCTION(Main, "Main$1", 1)
  R05_DEFINE_COND_FUNCTION(Main, "Main$2", 2)
  R05_DEFINE_COND_FUNCTION(Main, "Main$3", 3)
  struct r05_node *p[31] = { 0 };

  r05_this_is_generated_function();
  switch (arg_begin->next->info.function->resume_entry >> 1) {
  case 0:
    p[0] = arg_begin;
    p[1] = arg_begin->next;
    p[2] = arg_end;

    do {
      /* e.ProgName: 8 */
      /* e.Config: 10 */
      /* (e.ProgName) ('@' e.Config) */
      if (! r05_brackets_left(p+3, p[1], p[2]))
        continue;
      if (! r05_brackets_left(p+5, p[4], p[2]))
        continue;
      if (! r05_char_left(p+7, p[5], p[6], '@'))
        continue;
      if (! r05_empty_hole(p[6], p[2]))
        continue;
      r05_close_evar(p+8, p[3], p[4]);
      r05_close_evar(p+10, p[7], p[6]);

      r05_reset_allocator();
      r05_alloc_open_call(p+12);
      r05_alloc_function(&r05f_Main);
      r05_alloc_open_bracket(p+13);
      r05_alloc_insert_pos(p+14);
      r05_alloc_close_bracket(p+15);
      r05_alloc_open_call(p+16);
      r05_alloc_function(&r05f_LoadFile);
      r05_alloc_insert_pos(p+17);
      r05_alloc_close_call(p+18);
      r05_alloc_close_call(p+19);
      r05_push_stack(p[19]);
      r05_push_stack(p[12]);
      r05_push_stack(p[18]);
      r05_push_stack(p[16]);
      r05_link_brackets(p[13], p[15]);
      r05_splice_evar(p[14], p+8);
      r05_splice_evar(p[17], p+10);
      r05_splice_from_freelist(p[0]);
      r05_splice_to_freelist(p[0], p[2]);
      return;
    } while (0);

    do {
      /* e.ProgName: 5 */
      /* e.Files: 7 */
      /* (e.ProgName) e.Files */
      if (! r05_brackets_left(p+3, p[1], p[2]))
        continue;
      r05_close_evar(p+5, p[3], p[4]);
      r05_close_evar(p+7, p[4], p[2]);

      r05_reset_allocator();
      r05_alloc_open_call(p+9);
      r05_alloc_function(&c1);
      r05_alloc_open_call(p+10);
      r05_alloc_function(&r05f_FindFiles);
      r05_alloc_evar(p+7);
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
        /* e.ProgName: 5 */
        /* e.Files: 7 */
        /* e.Files-B: 12 */
        /* e.FileName: 17 */
        /* e.Files-E: 19 */
        /* e.Files-B (NotFound e.FileName) e.Files-E */
        p[12] = NULL;
        p[13] = p[10];
        do {
          r05_start_e_loop();
          if (! r05_brackets_left(p+14, p[13], p[11]))
            continue;
          if (! r05_function_left(p+16, p[14], p[15], &r05f_NotFound))
            continue;
          r05_close_evar(p+17, p[16], p[15]);
          r05_close_evar(p+19, p[15], p[11]);

          r05_reset_allocator();
          r05_alloc_open_call(p+21);
          r05_alloc_function(&r05f_Map);
          r05_alloc_function(&r05f_mainu_PrintNotFound);
          r05_alloc_open_bracket(p+22);
          r05_alloc_function(&r05f_NotFound);
          r05_alloc_insert_pos(p+23);
          r05_alloc_close_bracket(p+24);
          r05_alloc_insert_pos(p+25);
          r05_alloc_close_call(p+26);
          r05_push_stack(p[26]);
          r05_push_stack(p[21]);
          r05_link_brackets(p[22], p[24]);
          r05_splice_evar(p[23], p+17);
          r05_splice_evar(p[25], p+19);
          r05_splice_from_freelist(p[0]);
          r05_splice_to_freelist(p[0], p[2]);
          return;
        } while (r05_open_evar_advance(p+12, p[11]));
        r05_stop_e_loop();
      } while (0);

      do {
        /* e.ProgName: 5 */
        /* e.Files: 7 */
        /* e.FoundFiles: 12 */
        /* e.FoundFiles */
        r05_close_evar(p+12, p[10], p[11]);

        r05_reset_allocator();
        r05_alloc_open_call(p+14);
        r05_alloc_function(&c2);
        r05_alloc_open_call(p+15);
        r05_alloc_function(&r05f_Map);
        r05_alloc_function(&r05f_mainu_ProcessEachSource);
        r05_alloc_evar(p+12);
        r05_alloc_close_call(p+16);
        r05_alloc_close_call(p+17);
        r05_push_stack(p[17]);
        r05_push_stack(p[14]);
        r05_push_stack(p[16]);
        r05_push_stack(p[15]);
        r05_push_context(p, 14);
        r05_splice_from_freelist(p[2]);
        return;

  case 2:
        r05_pop_context(p, 14);
        p[14] = arg_begin;
        p[15] = arg_begin->next;
        p[16] = arg_end;

        do {
          /* e.ProgName: 5 */
          /* e.Files: 7 */
          /* e.FoundFiles: 12 */
          /* e.Outputs-B: 17 */
          /* e.Outputs-E: 20 */
          /* e.Outputs-B Fails e.Outputs-E */
          p[17] = NULL;
          p[18] = p[15];
          do {
            r05_start_e_loop();
            if (! r05_function_left(p+19, p[18], p[16], &r05f_Fails))
              continue;
            r05_close_evar(p+20, p[19], p[16]);

            r05_reset_allocator();
            r05_alloc_open_call(p+22);
            r05_alloc_function(&r05f_Prout);
            r05_alloc_chars("*** COMPILATION FAILED ***", 26);
            r05_alloc_close_call(p+23);
            r05_alloc_open_call(p+24);
            r05_alloc_function(&r05f_Exit);
            r05_alloc_number(1UL);
            r05_alloc_close_call(p+25);
            r05_push_stack(p[25]);
            r05_push_stack(p[24]);
            r05_push_stack(p[23]);
            r05_push_stack(p[22]);
            r05_splice_from_freelist(p[0]);
            r05_splice_to_freelist(p[0], p[2]);
            return;
          } while (r05_open_evar_advance(p+17, p[16]));
          r05_stop_e_loop();
        } while (0);

        do {
          /* e.ProgName: 5 */
          /* e.Files: 7 */
          /* e.FoundFiles: 12 */
          /* e.Outputs: 17 */
          /* e.Outputs */
          r05_close_evar(p+17, p[15], p[16]);

          r05_reset_allocator();
          r05_alloc_open_call(p+19);
          r05_alloc_function(&c3);
          r05_alloc_open_call(p+20);
          r05_alloc_function(&r05f_CCompile);
          r05_alloc_evar(p+17);
          r05_alloc_close_call(p+21);
          r05_alloc_close_call(p+22);
          r05_push_stack(p[22]);
          r05_push_stack(p[19]);
          r05_push_stack(p[21]);
          r05_push_stack(p[20]);
          r05_push_context(p, 19);
          r05_splice_from_freelist(p[2]);
          return;

  case 3:
          r05_pop_context(p, 19);
          p[19] = arg_begin;
          p[20] = arg_begin->next;
          p[21] = arg_end;

          do {
            /* e.ProgName: 5 */
            /* e.Files: 7 */
            /* e.FoundFiles: 12 */
            /* e.Outputs: 17 */
            /* 0 */
            if (! r05_number_left(p+22, p[20], p[21], 0UL))
              continue;
            if (! r05_empty_hole(p[22], p[21]))
              continue;

            r05_reset_allocator();
            r05_alloc_open_call(p+23);
            r05_alloc_function(&r05f_Prout);
            r05_alloc_chars("*** Compilation succeded ***", 28);
            r05_alloc_close_call(p+24);
            r05_push_stack(p[24]);
            r05_push_stack(p[23]);
            r05_splice_from_freelist(p[0]);
            r05_splice_to_freelist(p[0], p[2]);
            return;
          } while (0);

          do {
            /* e.ProgName: 5 */
            /* e.Files: 7 */
            /* e.FoundFiles: 12 */
            /* e.Outputs: 17 */
            /* e.RetCode: 22 */
            /* e.RetCode */
            r05_close_evar(p+22, p[20], p[21]);

            r05_reset_allocator();
            r05_alloc_open_call(p+24);
            r05_alloc_function(&r05f_Prout);
            r05_alloc_chars("*** COMPILATION FAILED (C COMPILER FAILED, RETCODE: ", 52);
            r05_alloc_open_call(p+25);
            r05_alloc_function(&r05f_Symb);
            r05_alloc_insert_pos(p+26);
            r05_alloc_close_call(p+27);
            r05_alloc_chars(")***", 4);
            r05_alloc_close_call(p+28);
            r05_alloc_open_call(p+29);
            r05_alloc_function(&r05f_Exit);
            r05_alloc_evar(p+22);
            r05_alloc_close_call(p+30);
            r05_push_stack(p[30]);
            r05_push_stack(p[29]);
            r05_push_stack(p[28]);
            r05_push_stack(p[24]);
            r05_push_stack(p[27]);
            r05_push_stack(p[25]);
            r05_splice_evar(p[26], p+22);
            r05_splice_from_freelist(p[0]);
            r05_splice_to_freelist(p[0], p[2]);
            return;
          } while (0);
        } while (0);
      } while (0);
    } while (0);

    r05_recognition_impossible();
  }
}

R05_DEFINE_ENTRY_FUNCTION(mainu_PrintNotFound, "main_PrintNotFound") {
  struct r05_node *p[12] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /* e.FileName: 6 */
    /* (NotFound e.FileName) */
    if (! r05_brackets_left(p+3, p[1], p[2]))
      continue;
    if (! r05_function_left(p+5, p[3], p[4], &r05f_NotFound))
      continue;
    if (! r05_empty_hole(p[4], p[2]))
      continue;
    r05_close_evar(p+6, p[5], p[4]);

    r05_reset_allocator();
    r05_alloc_open_call(p+8);
    r05_alloc_function(&r05f_Prout);
    r05_alloc_chars("COMMAND LINE ERROR: file ", 25);
    r05_alloc_insert_pos(p+9);
    r05_alloc_chars(" not found", 10);
    r05_alloc_close_call(p+10);
    r05_push_stack(p[10]);
    r05_push_stack(p[8]);
    r05_splice_evar(p[9], p+6);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  do {
    /* e.FileName: 6 */
    /* (Output e.FileName) */
    if (! r05_brackets_left(p+3, p[1], p[2]))
      continue;
    if (! r05_function_left(p+5, p[3], p[4], &r05f_Output))
      continue;
    if (! r05_empty_hole(p[4], p[2]))
      continue;
    r05_close_evar(p+6, p[5], p[4]);

    r05_reset_allocator();
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  do {
    /* e.Source: 8 */
    /* e.Output: 10 */
    /* (Source (e.Source) e.Output) */
    if (! r05_brackets_left(p+3, p[1], p[2]))
      continue;
    if (! r05_function_left(p+5, p[3], p[4], &r05f_Source))
      continue;
    if (! r05_brackets_left(p+6, p[5], p[4]))
      continue;
    if (! r05_empty_hole(p[4], p[2]))
      continue;
    r05_close_evar(p+8, p[6], p[7]);
    r05_close_evar(p+10, p[7], p[4]);

    r05_reset_allocator();
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_ENTRY_FUNCTION(mainu_ProcessEachSource, "main_ProcessEachSource") {
  R05_DEFINE_COND_FUNCTION(mainu_ProcessEachSource, "main_ProcessEachSource$1", 1)
  struct r05_node *p[26] = { 0 };

  r05_this_is_generated_function();
  switch (arg_begin->next->info.function->resume_entry >> 1) {
  case 0:
    p[0] = arg_begin;
    p[1] = arg_begin->next;
    p[2] = arg_end;

    do {
      /* e.OutputName: 6 */
      /* (Output e.OutputName) */
      if (! r05_brackets_left(p+3, p[1], p[2]))
        continue;
      if (! r05_function_left(p+5, p[3], p[4], &r05f_Output))
        continue;
      if (! r05_empty_hole(p[4], p[2]))
        continue;
      r05_close_evar(p+6, p[5], p[4]);

      r05_reset_allocator();
      r05_alloc_open_call(p+8);
      r05_alloc_function(&r05f_Prout);
      r05_alloc_chars("+Linking ", 9);
      r05_alloc_insert_pos(p+9);
      r05_alloc_close_call(p+10);
      r05_alloc_open_bracket(p+11);
      r05_alloc_evar(p+6);
      r05_alloc_close_bracket(p+12);
      r05_link_brackets(p[11], p[12]);
      r05_push_stack(p[10]);
      r05_push_stack(p[8]);
      r05_splice_evar(p[9], p+6);
      r05_splice_from_freelist(p[0]);
      r05_splice_to_freelist(p[0], p[2]);
      return;
    } while (0);

    do {
      /* e.Source: 8 */
      /* e.OutputName: 10 */
      /* (Source (e.Source) e.OutputName) */
      if (! r05_brackets_left(p+3, p[1], p[2]))
        continue;
      if (! r05_function_left(p+5, p[3], p[4], &r05f_Source))
        continue;
      if (! r05_brackets_left(p+6, p[5], p[4]))
        continue;
      if (! r05_empty_hole(p[4], p[2]))
        continue;
      r05_close_evar(p+8, p[6], p[7]);
      r05_close_evar(p+10, p[7], p[4]);

      r05_reset_allocator();
      r05_alloc_open_call(p+12);
      r05_alloc_function(&c1);
      r05_alloc_open_call(p+13);
      r05_alloc_function(&r05f_Prout);
      r05_alloc_chars("*Compiling ", 11);
      r05_alloc_evar(p+8);
      r05_alloc_char(':');
      r05_alloc_close_call(p+14);
      r05_alloc_open_call(p+15);
      r05_alloc_function(&r05f_Parsem_File);
      r05_alloc_evar(p+8);
      r05_alloc_close_call(p+16);
      r05_alloc_close_call(p+17);
      r05_push_stack(p[17]);
      r05_push_stack(p[12]);
      r05_push_stack(p[16]);
      r05_push_stack(p[15]);
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
        /* e.Source: 8 */
        /* e.OutputName: 10 */
        /* e.Tree: 16 */
        /* Success e.Tree */
        if (! r05_function_left(p+15, p[13], p[14], &r05f_Success))
          continue;
        r05_close_evar(p+16, p[15], p[14]);

        r05_reset_allocator();
        r05_alloc_open_call(p+18);
        r05_alloc_function(&r05f_Generatem_ToFile);
        r05_alloc_open_bracket(p+19);
        r05_alloc_insert_pos(p+20);
        r05_alloc_close_bracket(p+21);
        r05_alloc_insert_pos(p+22);
        r05_alloc_close_call(p+23);
        r05_alloc_open_bracket(p+24);
        r05_alloc_evar(p+10);
        r05_alloc_close_bracket(p+25);
        r05_link_brackets(p[24], p[25]);
        r05_push_stack(p[23]);
        r05_push_stack(p[18]);
        r05_link_brackets(p[19], p[21]);
        r05_splice_evar(p[20], p+10);
        r05_splice_evar(p[22], p+16);
        r05_splice_from_freelist(p[0]);
        r05_splice_to_freelist(p[0], p[2]);
        return;
      } while (0);

      do {
        /* e.Source: 8 */
        /* e.OutputName: 10 */
        /* e.Errors: 16 */
        /* Fails e.Errors */
        if (! r05_function_left(p+15, p[13], p[14], &r05f_Fails))
          continue;
        r05_close_evar(p+16, p[15], p[14]);

        r05_reset_allocator();
        r05_alloc_open_call(p+18);
        r05_alloc_function(&r05f_Map);
        r05_alloc_open_bracket(p+19);
        r05_alloc_function(&r05f_mainu_WriteError);
        r05_alloc_insert_pos(p+20);
        r05_alloc_close_bracket(p+21);
        r05_alloc_insert_pos(p+22);
        r05_alloc_close_call(p+23);
        r05_alloc_function(&r05f_Fails);
        r05_push_stack(p[23]);
        r05_push_stack(p[18]);
        r05_link_brackets(p[19], p[21]);
        r05_splice_evar(p[20], p+8);
        r05_splice_evar(p[22], p+16);
        r05_splice_from_freelist(p[0]);
        r05_splice_to_freelist(p[0], p[2]);
        return;
      } while (0);

      r05_recognition_impossible();
    } while (0);

    r05_recognition_impossible();
  }
}

R05_DEFINE_ENTRY_FUNCTION(mainu_WriteError, "main_WriteError") {
  struct r05_node *p[18] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /* e.FileName: 5 */
    /* t.SrcPos: 7 */
    /* e.Message: 9 */
    /* e.FileName (t.SrcPos e.Message) */
    if (! r05_brackets_right(p+3, p[1], p[2]))
      continue;
    r05_close_evar(p+5, p[1], p[3]);
    if (! r05_tvar_left(p+7, p[3], p[4]))
      continue;
    r05_close_evar(p+9, p[8], p[4]);

    r05_reset_allocator();
    r05_alloc_open_call(p+11);
    r05_alloc_function(&r05f_Prout);
    r05_alloc_insert_pos(p+12);
    r05_alloc_char(':');
    r05_alloc_open_call(p+13);
    r05_alloc_function(&r05f_StrFromSrcPos);
    r05_alloc_insert_pos(p+14);
    r05_alloc_close_call(p+15);
    r05_alloc_chars(":ERROR: ", 8);
    r05_alloc_insert_pos(p+16);
    r05_alloc_close_call(p+17);
    r05_push_stack(p[17]);
    r05_push_stack(p[11]);
    r05_push_stack(p[15]);
    r05_push_stack(p[13]);
    r05_splice_evar(p[12], p+5);
    r05_splice_tvar(p[14], p+7);
    r05_splice_evar(p[16], p+9);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(StrFromSrcPos, "StrFromSrcPos") {
  struct r05_node *p[13] = { 0 };

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
    r05_alloc_open_call(p+9);
    r05_alloc_function(&r05f_Symb);
    r05_alloc_svar(p+5);
    r05_alloc_close_call(p+10);
    r05_alloc_char(':');
    r05_alloc_open_call(p+11);
    r05_alloc_function(&r05f_Symb);
    r05_alloc_svar(p+6);
    r05_alloc_close_call(p+12);
    r05_push_stack(p[12]);
    r05_push_stack(p[11]);
    r05_push_stack(p[10]);
    r05_push_stack(p[9]);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(LoadPath, "LoadPath") {
  struct r05_node *p[11] = { 0 };

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
    r05_alloc_function(&r05f_ParsePath);
    r05_alloc_open_call(p+4);
    r05_alloc_function(&r05f_GetEnv);
    r05_alloc_chars("R05PATH", 7);
    r05_alloc_close_call(p+5);
    r05_alloc_close_call(p+6);
    r05_alloc_open_call(p+7);
    r05_alloc_function(&r05f_ParsePath);
    r05_alloc_open_call(p+8);
    r05_alloc_function(&r05f_GetEnv);
    r05_alloc_chars("REF5RSL", 7);
    r05_alloc_close_call(p+9);
    r05_alloc_close_call(p+10);
    r05_push_stack(p[10]);
    r05_push_stack(p[7]);
    r05_push_stack(p[9]);
    r05_push_stack(p[8]);
    r05_push_stack(p[6]);
    r05_push_stack(p[3]);
    r05_push_stack(p[5]);
    r05_push_stack(p[4]);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(ParsePath, "ParsePath") {
  R05_DEFINE_COND_FUNCTION(ParsePath, "ParsePath$1", 1)
  struct r05_node *p[18] = { 0 };

  r05_this_is_generated_function();
  switch (arg_begin->next->info.function->resume_entry >> 1) {
  case 0:
    p[0] = arg_begin;
    p[1] = arg_begin->next;
    p[2] = arg_end;

    do {
      /* e.Folder: 3 */
      /* s.Sep: 5 */
      /* e.Path: 6 */
      /* e.Folder s.Sep e.Path */
      p[3] = NULL;
      p[4] = p[1];
      do {
        r05_start_e_loop();
        if (! r05_svar_left(p+5, p[4], p[2]))
          continue;
        r05_close_evar(p+6, p[5], p[2]);

        r05_reset_allocator();
        r05_alloc_open_call(p+8);
        r05_alloc_function(&c1);
        r05_alloc_open_call(p+9);
        r05_alloc_function(&r05f_PathSeparator);
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
          /* e.Folder: 3 */
          /* s.Sep: 5, 11 */
          /* e.Path: 6 */
          /* s.Sep */
          if (! r05_repeated_svar_left(p+11, p[9], p[10], p+5))
            continue;
          if (! r05_empty_hole(p[11], p[10]))
            continue;

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
          r05_push_stack(p[14]);
          r05_push_stack(p[12]);
          r05_splice_evar(p[13], p+3);
          r05_splice_evar(p[16], p+6);
          r05_splice_from_freelist(p[0]);
          r05_splice_to_freelist(p[0], p[2]);
          return;
        } while (0);
        r05_splice_to_freelist(p[8], p[10]);
      } while (r05_open_evar_advance(p+3, p[2]));
      r05_stop_e_loop();
    } while (0);

    do {
      /* e.Folder: 3 */
      /* e.Folder */
      r05_close_evar(p+3, p[1], p[2]);

      r05_reset_allocator();
      r05_alloc_open_call(p+5);
      r05_alloc_function(&r05f_ParseFolder);
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
}

R05_DEFINE_LOCAL_FUNCTION(ParseFolder, "ParseFolder") {
  R05_DEFINE_COND_FUNCTION(ParseFolder, "ParseFolder$1", 1)
  struct r05_node *p[13] = { 0 };

  r05_this_is_generated_function();
  switch (arg_begin->next->info.function->resume_entry >> 1) {
  case 0:
    p[0] = arg_begin;
    p[1] = arg_begin->next;
    p[2] = arg_end;

    do {
      /* e.Folder: 3 */
      /* e.Folder */
      r05_close_evar(p+3, p[1], p[2]);

      r05_reset_allocator();
      r05_alloc_open_call(p+5);
      r05_alloc_function(&c1);
      r05_alloc_open_call(p+6);
      r05_alloc_function(&r05f_Trim);
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
        /* e.Folder: 3 */
        /*  */
        if (! r05_empty_hole(p[6], p[7]))
          continue;

        r05_reset_allocator();
        r05_splice_from_freelist(p[0]);
        r05_splice_to_freelist(p[0], p[2]);
        return;
      } while (0);

      do {
        /* e.Folder: 3 */
        /* e.TrimmedFolder: 8 */
        /* e.TrimmedFolder */
        r05_close_evar(p+8, p[6], p[7]);

        r05_reset_allocator();
        r05_alloc_open_bracket(p+10);
        r05_alloc_insert_pos(p+11);
        r05_alloc_close_bracket(p+12);
        r05_link_brackets(p[10], p[12]);
        r05_splice_evar(p[11], p+8);
        r05_splice_from_freelist(p[0]);
        r05_splice_to_freelist(p[0], p[2]);
        return;
      } while (0);
    } while (0);
  }
}

R05_DEFINE_LOCAL_FUNCTION(FindFiles, "FindFiles") {
  struct r05_node *p[12] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /* e.Files: 3 */
    /* e.Files */
    r05_close_evar(p+3, p[1], p[2]);

    r05_reset_allocator();
    r05_alloc_open_call(p+5);
    r05_alloc_function(&r05f_Map);
    r05_alloc_open_bracket(p+6);
    r05_alloc_function(&r05f_mainu_AnalyzeFilem_ByFolders);
    r05_alloc_function(&r05f_Current);
    r05_alloc_open_call(p+7);
    r05_alloc_function(&r05f_LoadPath);
    r05_alloc_close_call(p+8);
    r05_alloc_close_bracket(p+9);
    r05_alloc_insert_pos(p+10);
    r05_alloc_close_call(p+11);
    r05_push_stack(p[11]);
    r05_push_stack(p[5]);
    r05_link_brackets(p[6], p[9]);
    r05_push_stack(p[8]);
    r05_push_stack(p[7]);
    r05_splice_evar(p[10], p+3);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);
}

R05_DEFINE_ENTRY_FUNCTION(mainu_AnalyzeFilem_ByFolders, "main_AnalyzeFile-ByFolders") {
  R05_DEFINE_COND_FUNCTION(mainu_AnalyzeFilem_ByFolders, "main_AnalyzeFile-ByFolders$1", 1)
  struct r05_node *p[31] = { 0 };

  r05_this_is_generated_function();
  switch (arg_begin->next->info.function->resume_entry >> 1) {
  case 0:
    p[0] = arg_begin;
    p[1] = arg_begin->next;
    p[2] = arg_end;

    do {
      /* e.Folders: 5 */
      /* e.FileName: 7 */
      /* e.Folders (e.FileName) */
      if (! r05_brackets_right(p+3, p[1], p[2]))
        continue;
      r05_close_evar(p+5, p[1], p[3]);
      r05_close_evar(p+7, p[3], p[4]);

      r05_reset_allocator();
      r05_alloc_open_call(p+9);
      r05_alloc_function(&c1);
      r05_alloc_open_call(p+10);
      r05_alloc_function(&r05f_Map);
      r05_alloc_open_bracket(p+11);
      r05_alloc_function(&r05f_mainu_AnalyzeInFolder);
      r05_alloc_evar(p+7);
      r05_alloc_close_bracket(p+12);
      r05_alloc_evar(p+5);
      r05_alloc_close_call(p+13);
      r05_alloc_close_call(p+14);
      r05_push_stack(p[14]);
      r05_push_stack(p[9]);
      r05_push_stack(p[13]);
      r05_push_stack(p[10]);
      r05_link_brackets(p[11], p[12]);
      r05_push_context(p, 9);
      r05_splice_from_freelist(p[2]);
      return;

  case 1:
      r05_pop_context(p, 9);
      p[9] = arg_begin;
      p[10] = arg_begin->next;
      p[11] = arg_end;

      do {
        /* e.Folders: 5 */
        /* e.FileName: 7 */
        /* e.Source: 17 */
        /* e.Output: 19 */
        /* e.Variants: 21 */
        /* (Source (e.Source) e.Output) e.Variants */
        if (! r05_brackets_left(p+12, p[10], p[11]))
          continue;
        if (! r05_function_left(p+14, p[12], p[13], &r05f_Source))
          continue;
        if (! r05_brackets_left(p+15, p[14], p[13]))
          continue;
        r05_close_evar(p+17, p[15], p[16]);
        r05_close_evar(p+19, p[16], p[13]);
        r05_close_evar(p+21, p[13], p[11]);

        r05_reset_allocator();
        r05_alloc_open_bracket(p+23);
        r05_alloc_function(&r05f_Source);
        r05_alloc_open_bracket(p+24);
        r05_alloc_insert_pos(p+25);
        r05_alloc_close_bracket(p+26);
        r05_alloc_open_call(p+27);
        r05_alloc_function(&r05f_CutFolder);
        r05_alloc_insert_pos(p+28);
        r05_alloc_close_call(p+29);
        r05_alloc_close_bracket(p+30);
        r05_link_brackets(p[23], p[30]);
        r05_push_stack(p[29]);
        r05_push_stack(p[27]);
        r05_link_brackets(p[24], p[26]);
        r05_splice_evar(p[25], p+17);
        r05_splice_evar(p[28], p+19);
        r05_splice_from_freelist(p[0]);
        r05_splice_to_freelist(p[0], p[2]);
        return;
      } while (0);

      do {
        /* e.Folders: 5 */
        /* e.FileName: 7 */
        /* e.Output: 15 */
        /* e.Variants: 17 */
        /* (Output e.Output) e.Variants */
        if (! r05_brackets_left(p+12, p[10], p[11]))
          continue;
        if (! r05_function_left(p+14, p[12], p[13], &r05f_Output))
          continue;
        r05_close_evar(p+15, p[14], p[13]);
        r05_close_evar(p+17, p[13], p[11]);

        r05_reset_allocator();
        r05_alloc_open_bracket(p+19);
        r05_alloc_function(&r05f_Output);
        r05_alloc_insert_pos(p+20);
        r05_alloc_close_bracket(p+21);
        r05_link_brackets(p[19], p[21]);
        r05_splice_evar(p[20], p+15);
        r05_splice_from_freelist(p[0]);
        r05_splice_to_freelist(p[0], p[2]);
        return;
      } while (0);

      do {
        /* e.Folders: 5 */
        /* e.FileName: 7 */
        /*  */
        if (! r05_empty_hole(p[10], p[11]))
          continue;

        r05_reset_allocator();
        r05_alloc_open_bracket(p+12);
        r05_alloc_function(&r05f_NotFound);
        r05_alloc_insert_pos(p+13);
        r05_alloc_close_bracket(p+14);
        r05_link_brackets(p[12], p[14]);
        r05_splice_evar(p[13], p+7);
        r05_splice_from_freelist(p[0]);
        r05_splice_to_freelist(p[0], p[2]);
        return;
      } while (0);

      r05_recognition_impossible();
    } while (0);

    r05_recognition_impossible();
  }
}

R05_DEFINE_ENTRY_FUNCTION(mainu_AnalyzeInFolder, "main_AnalyzeInFolder") {
  struct r05_node *p[15] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /* e.FileName: 4 */
    /* e.FileName Current */
    if (! r05_function_right(p+3, p[1], p[2], &r05f_Current))
      continue;
    r05_close_evar(p+4, p[1], p[3]);

    r05_reset_allocator();
    r05_alloc_open_call(p+6);
    r05_alloc_function(&r05f_AnalyzeFile);
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
    /* e.FileName: 5 */
    /* e.Folder: 7 */
    /* e.FileName (e.Folder) */
    if (! r05_brackets_right(p+3, p[1], p[2]))
      continue;
    r05_close_evar(p+5, p[1], p[3]);
    r05_close_evar(p+7, p[3], p[4]);

    r05_reset_allocator();
    r05_alloc_open_call(p+9);
    r05_alloc_function(&r05f_AnalyzeFile);
    r05_alloc_insert_pos(p+10);
    r05_alloc_open_call(p+11);
    r05_alloc_function(&r05f_DirectorySeparator);
    r05_alloc_close_call(p+12);
    r05_alloc_insert_pos(p+13);
    r05_alloc_close_call(p+14);
    r05_push_stack(p[14]);
    r05_push_stack(p[9]);
    r05_push_stack(p[12]);
    r05_push_stack(p[11]);
    r05_splice_evar(p[10], p+7);
    r05_splice_evar(p[13], p+5);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_LOCAL_FUNCTION(AnalyzeFile, "AnalyzeFile") {
  R05_DEFINE_COND_FUNCTION(AnalyzeFile, "AnalyzeFile$1", 1)
  R05_DEFINE_COND_FUNCTION(AnalyzeFile, "AnalyzeFile$2", 2)
  R05_DEFINE_COND_FUNCTION(AnalyzeFile, "AnalyzeFile$3", 3)
  R05_DEFINE_COND_FUNCTION(AnalyzeFile, "AnalyzeFile$4", 4)
  R05_DEFINE_COND_FUNCTION(AnalyzeFile, "AnalyzeFile$5", 5)
  R05_DEFINE_COND_FUNCTION(AnalyzeFile, "AnalyzeFile$6", 6)
  R05_DEFINE_COND_FUNCTION(AnalyzeFile, "AnalyzeFile$7", 7)
  R05_DEFINE_COND_FUNCTION(AnalyzeFile, "AnalyzeFile$8", 8)
  struct r05_node *p[24] = { 0 };

  r05_this_is_generated_function();
  switch (arg_begin->next->info.function->resume_entry >> 1) {
  case 0:
    p[0] = arg_begin;
    p[1] = arg_begin->next;
    p[2] = arg_end;

    do {
      /* e.SourceName: 3 */
      /* e.SourceName */
      r05_close_evar(p+3, p[1], p[2]);

      r05_reset_allocator();
      r05_alloc_open_call(p+5);
      r05_alloc_function(&c1);
      r05_alloc_evar(p+3);
      r05_alloc_close_call(p+6);
      r05_push_stack(p[6]);
      r05_push_stack(p[5]);
      r05_push_context(p, 5);
      r05_splice_from_freelist(p[2]);
      return;

  case 1:
      r05_pop_context(p, 5);
      p[5] = arg_begin;
      p[6] = arg_begin->next;
      p[7] = arg_end;

      do {
        /* e.SourceName: 3 */
        /* e.BaseName: 12 */
        /* e.BaseName '.ref' */
        if (! r05_char_right(p+8, p[6], p[7], 'f'))
          continue;
        if (! r05_char_right(p+9, p[6], p[8], 'e'))
          continue;
        if (! r05_char_right(p+10, p[6], p[9], 'r'))
          continue;
        if (! r05_char_right(p+11, p[6], p[10], '.'))
          continue;
        r05_close_evar(p+12, p[6], p[11]);

        r05_reset_allocator();
        r05_alloc_open_call(p+14);
        r05_alloc_function(&c2);
        r05_alloc_open_call(p+15);
        r05_alloc_function(&r05f_ExistFile);
        r05_alloc_evar(p+3);
        r05_alloc_close_call(p+16);
        r05_alloc_close_call(p+17);
        r05_push_stack(p[17]);
        r05_push_stack(p[14]);
        r05_push_stack(p[16]);
        r05_push_stack(p[15]);
        r05_push_context(p, 14);
        r05_splice_from_freelist(p[2]);
        return;

  case 2:
        r05_pop_context(p, 14);
        p[14] = arg_begin;
        p[15] = arg_begin->next;
        p[16] = arg_end;

        do {
          /* e.SourceName: 3 */
          /* e.BaseName: 12 */
          /* True */
          if (! r05_function_left(p+17, p[15], p[16], &r05f_True))
            continue;
          if (! r05_empty_hole(p[17], p[16]))
            continue;

          r05_reset_allocator();
          r05_alloc_open_bracket(p+18);
          r05_alloc_function(&r05f_Source);
          r05_alloc_open_bracket(p+19);
          r05_alloc_insert_pos(p+20);
          r05_alloc_close_bracket(p+21);
          r05_alloc_insert_pos(p+22);
          r05_alloc_chars(".c", 2);
          r05_alloc_close_bracket(p+23);
          r05_link_brackets(p[18], p[23]);
          r05_link_brackets(p[19], p[21]);
          r05_splice_evar(p[20], p+3);
          r05_splice_evar(p[22], p+12);
          r05_splice_from_freelist(p[0]);
          r05_splice_to_freelist(p[0], p[2]);
          return;
        } while (0);
        r05_splice_to_freelist(p[14], p[16]);
      } while (0);
      r05_splice_to_freelist(p[5], p[7]);
    } while (0);

    do {
      /* e.OutName: 3 */
      /* e.OutName */
      r05_close_evar(p+3, p[1], p[2]);

      r05_reset_allocator();
      r05_alloc_open_call(p+5);
      r05_alloc_function(&c3);
      r05_alloc_evar(p+3);
      r05_alloc_close_call(p+6);
      r05_push_stack(p[6]);
      r05_push_stack(p[5]);
      r05_push_context(p, 5);
      r05_splice_from_freelist(p[2]);
      return;

  case 3:
      r05_pop_context(p, 5);
      p[5] = arg_begin;
      p[6] = arg_begin->next;
      p[7] = arg_end;

      do {
        /* e.OutName: 3 */
        /* e.BaseName: 10 */
        /* e.BaseName '.c' */
        if (! r05_char_right(p+8, p[6], p[7], 'c'))
          continue;
        if (! r05_char_right(p+9, p[6], p[8], '.'))
          continue;
        r05_close_evar(p+10, p[6], p[9]);

        r05_reset_allocator();
        r05_alloc_open_call(p+12);
        r05_alloc_function(&c4);
        r05_alloc_open_call(p+13);
        r05_alloc_function(&r05f_ExistFile);
        r05_alloc_evar(p+3);
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
          /* e.OutName: 3 */
          /* e.BaseName: 10 */
          /* True */
          if (! r05_function_left(p+15, p[13], p[14], &r05f_True))
            continue;
          if (! r05_empty_hole(p[15], p[14]))
            continue;

          r05_reset_allocator();
          r05_alloc_open_bracket(p+16);
          r05_alloc_function(&r05f_Output);
          r05_alloc_insert_pos(p+17);
          r05_alloc_close_bracket(p+18);
          r05_link_brackets(p[16], p[18]);
          r05_splice_evar(p[17], p+3);
          r05_splice_from_freelist(p[0]);
          r05_splice_to_freelist(p[0], p[2]);
          return;
        } while (0);
        r05_splice_to_freelist(p[12], p[14]);
      } while (0);
      r05_splice_to_freelist(p[5], p[7]);
    } while (0);

    do {
      /* e.BaseName: 3 */
      /* e.BaseName */
      r05_close_evar(p+3, p[1], p[2]);

      r05_reset_allocator();
      r05_alloc_open_call(p+5);
      r05_alloc_function(&c5);
      r05_alloc_evar(p+3);
      r05_alloc_chars(".ref", 4);
      r05_alloc_close_call(p+6);
      r05_push_stack(p[6]);
      r05_push_stack(p[5]);
      r05_push_context(p, 5);
      r05_splice_from_freelist(p[2]);
      return;

  case 5:
      r05_pop_context(p, 5);
      p[5] = arg_begin;
      p[6] = arg_begin->next;
      p[7] = arg_end;

      do {
        /* e.BaseName: 3 */
        /* e.SourceName: 8 */
        /* e.SourceName */
        r05_close_evar(p+8, p[6], p[7]);

        r05_reset_allocator();
        r05_alloc_open_call(p+10);
        r05_alloc_function(&c6);
        r05_alloc_open_call(p+11);
        r05_alloc_function(&r05f_ExistFile);
        r05_alloc_evar(p+8);
        r05_alloc_close_call(p+12);
        r05_alloc_close_call(p+13);
        r05_push_stack(p[13]);
        r05_push_stack(p[10]);
        r05_push_stack(p[12]);
        r05_push_stack(p[11]);
        r05_push_context(p, 10);
        r05_splice_from_freelist(p[2]);
        return;

  case 6:
        r05_pop_context(p, 10);
        p[10] = arg_begin;
        p[11] = arg_begin->next;
        p[12] = arg_end;

        do {
          /* e.BaseName: 3 */
          /* e.SourceName: 8 */
          /* True */
          if (! r05_function_left(p+13, p[11], p[12], &r05f_True))
            continue;
          if (! r05_empty_hole(p[13], p[12]))
            continue;

          r05_reset_allocator();
          r05_alloc_open_bracket(p+14);
          r05_alloc_function(&r05f_Source);
          r05_alloc_open_bracket(p+15);
          r05_alloc_insert_pos(p+16);
          r05_alloc_close_bracket(p+17);
          r05_alloc_insert_pos(p+18);
          r05_alloc_chars(".c", 2);
          r05_alloc_close_bracket(p+19);
          r05_link_brackets(p[14], p[19]);
          r05_link_brackets(p[15], p[17]);
          r05_splice_evar(p[16], p+8);
          r05_splice_evar(p[18], p+3);
          r05_splice_from_freelist(p[0]);
          r05_splice_to_freelist(p[0], p[2]);
          return;
        } while (0);
        r05_splice_to_freelist(p[10], p[12]);
      } while (0);
      r05_splice_to_freelist(p[5], p[7]);
    } while (0);

    do {
      /* e.BaseName: 3 */
      /* e.BaseName */
      r05_close_evar(p+3, p[1], p[2]);

      r05_reset_allocator();
      r05_alloc_open_call(p+5);
      r05_alloc_function(&c7);
      r05_alloc_evar(p+3);
      r05_alloc_chars(".c", 2);
      r05_alloc_close_call(p+6);
      r05_push_stack(p[6]);
      r05_push_stack(p[5]);
      r05_push_context(p, 5);
      r05_splice_from_freelist(p[2]);
      return;

  case 7:
      r05_pop_context(p, 5);
      p[5] = arg_begin;
      p[6] = arg_begin->next;
      p[7] = arg_end;

      do {
        /* e.BaseName: 3 */
        /* e.OutName: 8 */
        /* e.OutName */
        r05_close_evar(p+8, p[6], p[7]);

        r05_reset_allocator();
        r05_alloc_open_call(p+10);
        r05_alloc_function(&c8);
        r05_alloc_open_call(p+11);
        r05_alloc_function(&r05f_ExistFile);
        r05_alloc_evar(p+8);
        r05_alloc_close_call(p+12);
        r05_alloc_close_call(p+13);
        r05_push_stack(p[13]);
        r05_push_stack(p[10]);
        r05_push_stack(p[12]);
        r05_push_stack(p[11]);
        r05_push_context(p, 10);
        r05_splice_from_freelist(p[2]);
        return;

  case 8:
        r05_pop_context(p, 10);
        p[10] = arg_begin;
        p[11] = arg_begin->next;
        p[12] = arg_end;

        do {
          /* e.BaseName: 3 */
          /* e.OutName: 8 */
          /* True */
          if (! r05_function_left(p+13, p[11], p[12], &r05f_True))
            continue;
          if (! r05_empty_hole(p[13], p[12]))
            continue;

          r05_reset_allocator();
          r05_alloc_open_bracket(p+14);
          r05_alloc_function(&r05f_Output);
          r05_alloc_insert_pos(p+15);
          r05_alloc_close_bracket(p+16);
          r05_link_brackets(p[14], p[16]);
          r05_splice_evar(p[15], p+8);
          r05_splice_from_freelist(p[0]);
          r05_splice_to_freelist(p[0], p[2]);
          return;
        } while (0);
        r05_splice_to_freelist(p[10], p[12]);
      } while (0);
      r05_splice_to_freelist(p[5], p[7]);
    } while (0);

    do {
      /* e.FileName: 3 */
      /* e.FileName */
      r05_close_evar(p+3, p[1], p[2]);

      r05_reset_allocator();
      r05_splice_from_freelist(p[0]);
      r05_splice_to_freelist(p[0], p[2]);
      return;
    } while (0);
  }
}

R05_DEFINE_LOCAL_FUNCTION(CutFolder, "CutFolder") {
  R05_DEFINE_COND_FUNCTION(CutFolder, "CutFolder$1", 1)
  struct r05_node *p[15] = { 0 };

  r05_this_is_generated_function();
  switch (arg_begin->next->info.function->resume_entry >> 1) {
  case 0:
    p[0] = arg_begin;
    p[1] = arg_begin->next;
    p[2] = arg_end;

    do {
      /* e.Folder: 3 */
      /* s.Sep: 5 */
      /* e.FileName: 6 */
      /* e.Folder s.Sep e.FileName */
      p[3] = NULL;
      p[4] = p[1];
      do {
        r05_start_e_loop();
        if (! r05_svar_left(p+5, p[4], p[2]))
          continue;
        r05_close_evar(p+6, p[5], p[2]);

        r05_reset_allocator();
        r05_alloc_open_call(p+8);
        r05_alloc_function(&c1);
        r05_alloc_open_call(p+9);
        r05_alloc_function(&r05f_IsDirectorySeparator);
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
          /* e.Folder: 3 */
          /* s.Sep: 5 */
          /* e.FileName: 6 */
          /* True */
          if (! r05_function_left(p+11, p[9], p[10], &r05f_True))
            continue;
          if (! r05_empty_hole(p[11], p[10]))
            continue;

          r05_reset_allocator();
          r05_alloc_open_call(p+12);
          r05_alloc_function(&r05f_CutFolder);
          r05_alloc_insert_pos(p+13);
          r05_alloc_close_call(p+14);
          r05_push_stack(p[14]);
          r05_push_stack(p[12]);
          r05_splice_evar(p[13], p+6);
          r05_splice_from_freelist(p[0]);
          r05_splice_to_freelist(p[0], p[2]);
          return;
        } while (0);
        r05_splice_to_freelist(p[8], p[10]);
      } while (r05_open_evar_advance(p+3, p[2]));
      r05_stop_e_loop();
    } while (0);

    do {
      /* e.FileName: 3 */
      /* e.FileName */
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

R05_DEFINE_LOCAL_FUNCTION(CCompile, "CCompile") {
  R05_DEFINE_COND_FUNCTION(CCompile, "CCompile$1", 1)
  struct r05_node *p[22] = { 0 };

  r05_this_is_generated_function();
  switch (arg_begin->next->info.function->resume_entry >> 1) {
  case 0:
    p[0] = arg_begin;
    p[1] = arg_begin->next;
    p[2] = arg_end;

    do {
      /* e.CSources: 3 */
      /* e.CSources */
      r05_close_evar(p+3, p[1], p[2]);

      r05_reset_allocator();
      r05_alloc_open_call(p+5);
      r05_alloc_function(&c1);
      r05_alloc_open_call(p+6);
      r05_alloc_function(&r05f_GetEnv);
      r05_alloc_chars("R05CCOMP", 8);
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
        /* e.CSources: 3 */
        /*  */
        if (! r05_empty_hole(p[6], p[7]))
          continue;

        r05_reset_allocator();
        r05_alloc_number(0UL);
        r05_splice_from_freelist(p[0]);
        r05_splice_to_freelist(p[0], p[2]);
        return;
      } while (0);

      do {
        /* e.CSources: 3 */
        /* e.CommandLine: 8 */
        /* e.CommandLine */
        r05_close_evar(p+8, p[6], p[7]);

        r05_reset_allocator();
        r05_alloc_open_call(p+10);
        r05_alloc_function(&r05f_System);
        r05_alloc_insert_pos(p+11);
        r05_alloc_char(' ');
        r05_alloc_open_call(p+12);
        r05_alloc_function(&r05f_GetEnv);
        r05_alloc_chars("R05CFLAGS", 9);
        r05_alloc_close_call(p+13);
        r05_alloc_open_call(p+14);
        r05_alloc_function(&r05f_Map);
        r05_alloc_function(&r05f_mainu_IncludeFlag);
        r05_alloc_open_call(p+15);
        r05_alloc_function(&r05f_LoadPath);
        r05_alloc_close_call(p+16);
        r05_alloc_close_call(p+17);
        r05_alloc_open_call(p+18);
        r05_alloc_function(&r05f_Map);
        r05_alloc_function(&r05f_mainu_QuoteFile);
        r05_alloc_insert_pos(p+19);
        r05_alloc_close_call(p+20);
        r05_alloc_close_call(p+21);
        r05_push_stack(p[21]);
        r05_push_stack(p[10]);
        r05_push_stack(p[20]);
        r05_push_stack(p[18]);
        r05_push_stack(p[17]);
        r05_push_stack(p[14]);
        r05_push_stack(p[16]);
        r05_push_stack(p[15]);
        r05_push_stack(p[13]);
        r05_push_stack(p[12]);
        r05_splice_evar(p[11], p+8);
        r05_splice_evar(p[19], p+3);
        r05_splice_from_freelist(p[0]);
        r05_splice_to_freelist(p[0], p[2]);
        return;
      } while (0);
    } while (0);
  }
}

R05_DEFINE_ENTRY_FUNCTION(mainu_IncludeFlag, "main_IncludeFlag") {
  struct r05_node *p[8] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /* e.PathEntry: 5 */
    /* (e.PathEntry) */
    if (! r05_brackets_left(p+3, p[1], p[2]))
      continue;
    if (! r05_empty_hole(p[4], p[2]))
      continue;
    r05_close_evar(p+5, p[3], p[4]);

    r05_reset_allocator();
    r05_alloc_chars(" -I\"", 4);
    r05_alloc_insert_pos(p+7);
    r05_alloc_char('\"');
    r05_splice_evar(p[7], p+5);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  r05_recognition_impossible();
}

R05_DEFINE_ENTRY_FUNCTION(mainu_QuoteFile, "main_QuoteFile") {
  struct r05_node *p[8] = { 0 };

  r05_this_is_generated_function();
  p[0] = arg_begin;
  p[1] = arg_begin->next;
  p[2] = arg_end;

  do {
    /* e.FileName: 5 */
    /* (e.FileName) */
    if (! r05_brackets_left(p+3, p[1], p[2]))
      continue;
    if (! r05_empty_hole(p[4], p[2]))
      continue;
    r05_close_evar(p+5, p[3], p[4]);

    r05_reset_allocator();
    r05_alloc_chars(" \"", 2);
    r05_alloc_insert_pos(p+7);
    r05_alloc_char('\"');
    r05_splice_evar(p[7], p+5);
    r05_splice_from_freelist(p[0]);
    r05_splice_to_freelist(p[0], p[2]);
    return;
  } while (0);

  r05_recognition_impossible();
}


/* End of file */
