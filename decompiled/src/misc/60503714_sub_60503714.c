/* sub_60503714
 * address: 0x60503714   size: 672   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60503714(int a1, int a2, int a3, int a4)
{
  StateMethodExecuter *result; // r0
  bool v6; // zf
  int v7; // r2
  int v8; // r7
  StateMethodExecuter *v9; // r6
  int v10; // r1
  bool v11; // zf
  int v12; // r1
  int *v13; // r1
  int v14; // r0
  bool v15; // zf
  int v16; // r2
  int v17; // r7
  int v18; // r3
  int v19; // r6
  int v20; // r0
  int v21; // r6
  int v22; // r1
  int v23; // r0
  int v24; // r1
  int v25; // r1
  int i; // r1
  int v27; // r2
  int v28; // r0
  bool v29; // zf
  int j; // r1
  int v31; // r2

  result = (StateMethodExecuter *)FIELD_U8(a1, 731);
  if ( !result )
  {
    result = *(StateMethodExecuter **)(a1 + 68);
    v6 = result == 0;
    if ( result )
    {
      a2 = FIELD_U32(a1, 56);
      a4 = a1 + 52;
      v6 = a2 == a1 + 52;
    }
    if ( !v6 )
    {
      v7 = FIELD_U32(a1, 64);
      v8 = 0;
      a4 -= v7;
      v9 = (StateMethodExecuter *)(a2 - v7);
      while ( v9 != result )
      {
        a2 = FIELD_U32(a2, 4);
        ++v8;
        v9 = (StateMethodExecuter *)(a2 - v7);
        if ( a2 - v7 == a4 )
          goto LABEL_11;
      }
      FIELD_U32(a1, 716) = v8;
    }
LABEL_11:
    if ( (FIELD_U8(a1, 369) & 0x10) == 0 )
    {
      v10 = 0;
      v11 = result == 0;
      FIELD_U8(a1, 734) = 0;
      if ( result )
        v11 = FIELD_U32(result + (13) * 12, 0x8) == 4;
      if ( v11 )
      {
        v12 = FIELD_U32(a1, 716);
        if ( v12 == 99 )
        {
          v13 = &dword_60CA7748;
        }
        else
        {
          v20 = sub_608DE61C(a1 + 52, v12);
          if ( v20 )
            v21 = v20 - FIELD_U32(a1, 64);
          else
            v21 = 0;
          if ( FIELD_U8(v21, 208) )
          {
            v13 = &dword_60CA7748;
          }
          else
          {
            v25 = FIELD_U32(a1, 720);
            if ( v25 == 99 )
            {
              FIELD_U32(a1, 716) = 99;
              sub_6047EBB4(a1 + 40, v21);
              v13 = &dword_60CA7728;
            }
            else
            {
              v28 = sub_608DE61C(a1 + 52, v25);
              v29 = v28 == 0;
              if ( v28 )
              {
                v28 -= FIELD_U32(a1, 64);
                v29 = v28 == 0;
              }
              if ( v29 || FIELD_U32(v28, 164) != 4 )
              {
                FIELD_U32(a1, 716) = FIELD_U32(a1, 720);
                sub_6047EBB4(a1 + 40, v21);
                v13 = &dword_60CA7728;
              }
              else
              {
                v13 = &dword_60CA7748;
              }
            }
          }
        }
      }
      else if ( FIELD_U8(a1, 736) || FIELD_U8(a1, 733) )
      {
        v14 = FIELD_U32(a1, 76);
        v15 = v14 == 0;
        if ( v14 )
        {
          v10 = FIELD_U32(a1, 56);
          a4 = a1 + 52;
          v15 = v10 == a1 + 52;
        }
        if ( !v15 )
        {
          v16 = FIELD_U32(a1, 64);
          v17 = 0;
          v18 = a4 - v16;
          v19 = v10 - v16;
          while ( v19 != v14 )
          {
            v10 = FIELD_U32(v10, 4);
            ++v17;
            v19 = v10 - v16;
            if ( v10 - v16 == v18 )
              goto LABEL_30;
          }
          FIELD_U32(a1, 716) = v17;
        }
LABEL_30:
        if ( FIELD_U8(v14, 208) )
        {
          v22 = FIELD_U32(a1, 716);
        }
        else
        {
          v22 = FIELD_U32(a1, 720);
          FIELD_U32(a1, 716) = v22;
        }
        v23 = sub_608DE61C(a1 + 52, v22);
        if ( v23 )
          v24 = v23 - FIELD_U32(a1, 64);
        else
          v24 = 0;
        sub_6047EBB4(a1 + 40, v24);
        v13 = &dword_60CA7728;
      }
      else
      {
        FIELD_U8(a1, 731) = 1;
        if ( FIELD_U8(a1, 732) )
        {
          for ( i = 0; ; i += 2 )
          {
            v27 = a1 + 4 * i;
            if ( FIELD_U32(v27, 744) <= 1u )
              FIELD_U32(v27, 744) = 1;
            if ( i == 98 )
              break;
            if ( FIELD_U32(v27, 748) <= 1u )
              FIELD_U32(v27, 748) = 1;
          }
        }
        else
        {
          for ( j = 0; ; j += 2 )
          {
            v31 = a1 + 4 * j;
            if ( FIELD_U32(v31, 744) <= 1u )
              FIELD_U32(v31, 744) = 0;
            if ( j == 98 )
              break;
            if ( FIELD_U32(v31, 748) <= 1u )
              FIELD_U32(v31, 748) = 0;
          }
        }
        v13 = &dword_60CA7768;
      }
      return StateMgr__changeState((StateMgr *)(a1 + 24), (StateBase *)v13);
    }
  }
  return result;
}
