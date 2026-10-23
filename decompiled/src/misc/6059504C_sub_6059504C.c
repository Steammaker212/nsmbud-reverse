/* sub_6059504C
 * address: 0x6059504C   size: 1116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6059504C(int a1, int a2)
{
  char v2; // r12
  int (__fastcall ***v4)(_DWORD, int *); // r6
  int v5; // r5
  int (__fastcall ***v6)(_DWORD, int *); // r6
  int v7; // r4
  char v8; // r12
  bool v9; // zf
  int v10; // r0
  int v11; // r0
  int v12; // r6
  _DWORD *v13; // r6
  int v14; // t1
  int v15; // r1
  int v16; // r1
  int v17; // r0
  int v18; // r2
  int v19; // r3
  int v20; // r6
  int v21; // r5
  int v22; // r12
  int v23; // lr
  int v24; // r11
  int v25; // r8
  int v26; // r9
  int v27; // r10
  int v28; // r7
  int v29; // r1

  v4 = *(int (__fastcall ****)(_DWORD, int *))(a2 + 64);
  if ( ((unsigned int)&dword_60C7B364 & ~(1616466028 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
  {
    StageActor_RTTI = (int)&off_60BC0098;
    _cxa_guard_release(&dword_60C7B364);
  }
  if ( v4 )
  {
    v5 = (**v4)(v4, &StageActor_RTTI);
    if ( v5 )
      v5 = (int)v4;
  }
  else
  {
    v5 = 0;
  }
  v6 = *(int (__fastcall ****)(_DWORD, int *))(a1 + 64);
  if ( ((unsigned int)&dword_60C9D3DC & ~(1616466160 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C9D3DC) )
  {
    dword_60C9D3D8 = (int)&off_60BC00C8;
    _cxa_guard_release(&dword_60C9D3DC);
  }
  if ( v6 )
  {
    v7 = (**v6)(v6, &dword_60C9D3D8);
    if ( v7 )
      v7 = (int)v6;
    v9 = v5 == 0;
    if ( v5 )
      v9 = v7 == 0;
    if ( !v9 )
    {
      v10 = FIELD_U8(v5, 533);
      if ( v10 == 1 )
      {
        if ( ((unsigned int)&dword_60C7B37C & ~(1616466304 << v8) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
        {
          dword_60C7B378 = (int)&off_60BC00BC;
          _cxa_guard_release(&dword_60C7B37C);
        }
        if ( (**(int (__fastcall ***)(int, int *))v5)(v5, &dword_60C7B378) == 1 )
        {
          v11 = FIELD_S8(v5, 84);
          if ( (unsigned __int8)v11 != 255 )
          {
            if ( (unsigned __int8)v11 >= 4u )
              v11 = 0;
            v12 = v7 + 8 * v11;
            v14 = FIELD_U32(v12, 6116);
            v13 = (_DWORD *)(v12 + 6116);
            if ( !v14 )
            {
              if ( ((unsigned int)&dword_60C7B364 & ~(1616466456 << v8) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
              {
                StageActor_RTTI = (int)&off_60BC0098;
                _cxa_guard_release(&dword_60C7B364);
              }
              v15 = (**(int (__fastcall ***)(int, int *))v7)(v7, &StageActor_RTTI);
              if ( v15 )
                v15 = v7;
              if ( (*(int (__fastcall **)(int, int, int))(*(_DWORD *)v5 + 1172))(v5, v15, 18) == 1 )
                *v13 = 1;
            }
          }
        }
        v10 = FIELD_U8(v5, 533);
      }
      if ( v10 == 4 )
      {
        if ( ((unsigned int)&dword_60C7B410 & ~(1616466612 << v8) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B410) )
        {
          dword_60C7B40C = (int)&off_60BC00D4;
          _cxa_guard_release(&dword_60C7B410);
        }
        if ( (**(int (__fastcall ***)(int, int *))v5)(v5, &dword_60C7B40C) == 1 )
        {
          v16 = FIELD_U32(v7, 6152);
          v17 = FIELD_U32(v5, 8);
          if ( v16 != v17 )
          {
            v18 = FIELD_U32(v7, 6164);
            if ( v18 != v17 )
            {
              v19 = FIELD_U32(v7, 6176);
              if ( v19 != v17 )
              {
                v20 = FIELD_U32(v7, 6188);
                if ( v20 != v17 )
                {
                  v21 = FIELD_U32(v7, 6200);
                  if ( v21 != v17 )
                  {
                    v22 = FIELD_U32(v7, 6212);
                    if ( v22 != v17 )
                    {
                      v23 = FIELD_U32(v7, 6224);
                      if ( v23 != v17 )
                      {
                        v24 = FIELD_U32(v7, 6236);
                        if ( v24 != v17 )
                        {
                          v25 = FIELD_U32(v7, 6248);
                          if ( v25 != v17 )
                          {
                            v26 = FIELD_U32(v7, 6260);
                            if ( v26 != v17 )
                            {
                              v27 = FIELD_U32(v7, 6272);
                              if ( v27 != v17 )
                              {
                                v28 = FIELD_U32(v7, 6284);
                                if ( v28 != v17 )
                                {
                                  if ( v16 )
                                  {
                                    if ( v18 )
                                    {
                                      if ( v19 )
                                      {
                                        if ( v20 )
                                        {
                                          if ( v21 )
                                          {
                                            if ( v22 )
                                            {
                                              if ( v23 )
                                              {
                                                if ( v24 )
                                                {
                                                  if ( v25 )
                                                  {
                                                    if ( v26 )
                                                    {
                                                      if ( v27 )
                                                      {
                                                        if ( v28 )
                                                          return;
                                                        v29 = 11;
                                                      }
                                                      else
                                                      {
                                                        v29 = 10;
                                                      }
                                                    }
                                                    else
                                                    {
                                                      v29 = 9;
                                                    }
                                                  }
                                                  else
                                                  {
                                                    v29 = 8;
                                                  }
                                                }
                                                else
                                                {
                                                  v29 = 7;
                                                }
                                              }
                                              else
                                              {
                                                v29 = 6;
                                              }
                                            }
                                            else
                                            {
                                              v29 = 5;
                                            }
                                          }
                                          else
                                          {
                                            v29 = 4;
                                          }
                                        }
                                        else
                                        {
                                          v29 = 3;
                                        }
                                      }
                                      else
                                      {
                                        v29 = 2;
                                      }
                                    }
                                    else
                                    {
                                      v29 = 1;
                                    }
                                  }
                                  else
                                  {
                                    v29 = 0;
                                  }
                                  *(_DWORD *)(v7 + 12 * v29 + 6152) = v17;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
}
