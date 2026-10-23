/* sub_60458A04
 * address: 0x60458A04   size: 1024   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60458A04(int a1)
{
  char v1; // r12
  int v2; // r6
  _DWORD *v3; // r7
  int v4; // r4
  int v5; // r8
  int v6; // r9
  int (__fastcall ***v7)(_DWORD, int *); // r5
  int v8; // r0
  bool v9; // zf
  int v10; // r4
  int result; // r0
  int *v12; // r8
  int v13; // r0
  int v14; // r7
  unsigned int v15; // r8
  int v16; // r1
  int v17; // r6
  int v18; // r4
  int v19; // r7
  int *v20; // r4
  int v21; // r8
  int v22; // r0
  int v23; // r4
  int v24; // r5
  int v25; // r1
  int v26; // r4
  int v27; // [sp+8h] [bp-38h]

  v2 = 0;
  v3 = (_DWORD *)dword_60CCF448;
  v4 = FIELD_U32(dword_60CCF448, 200);
  v5 = dword_60CCF448 + 196;
  v27 = a1;
  if ( v4 == dword_60CCF448 + 196 )
  {
    v7 = 0;
  }
  else
  {
    v6 = FIELD_U32(dword_60CCF448, 208);
    v7 = (int (__fastcall ***)(_DWORD, int *))(v4 - v6);
    while ( 1 )
    {
      if ( ((unsigned int)&dword_60C9CFA8 & ~(1615170180 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C9CFA8) )
      {
        dword_60C9CFA4 = (int)&off_60BFB1D8;
        _cxa_guard_release(&dword_60C9CFA8);
      }
      v8 = (**v7)(v7, &dword_60C9CFA4);
      v9 = v7 == 0;
      if ( v7 )
        v9 = (v8 ^ 1) == 1;
      if ( !v9 )
        break;
      v4 = FIELD_U32(v4, 4);
      v7 = (int (__fastcall ***)(_DWORD, int *))(v4 - v6);
      if ( v4 - v6 == v5 - v3[52] )
      {
        v7 = 0;
        break;
      }
    }
    a1 = v27;
    v3 = (_DWORD *)dword_60CCF448;
  }
  v10 = FIELD_U32(a1, 360);
  result = v3[53];
  if ( result )
  {
    v12 = (int *)v3[55];
    do
    {
      v2 = *v12;
      if ( ((unsigned int)&dword_60C8C224 & ~(1615170404 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C8C224) )
      {
        dword_60C8C220 = (int)&off_60BD84A8;
        _cxa_guard_release(&dword_60C8C224);
      }
      v13 = (**(int (__fastcall ***)(int, int *))v2)(v2, &dword_60C8C220);
      if ( v2 && v13 == 1 )
      {
        if ( !v10 )
          goto LABEL_25;
        --v10;
      }
      ++v12;
    }
    while ( v12 != (int *)(v3[55] + 4 * v3[53]) );
    v2 = 0;
LABEL_25:
    result = v27;
    v10 = FIELD_U32(v27, 360);
  }
  if ( v10 || (result = FIELD_U8(dword_60C9CFB8, 81), !FIELD_U8(dword_60C9CFB8, 81)) )
  {
LABEL_27:
    if ( v2 )
    {
      v14 = FIELD_U8(v2, 353);
      result = FIELD_U32(v27, 444);
      if ( v14 != result )
      {
        v15 = FIELD_U32(v2, 348);
        result = v15;
        if ( v15 >= 9 )
          result = 0;
        v16 = (int)v7[934 * result + 177];
        v17 = v16;
        if ( v16 >= 2 )
          v17 = 2;
        if ( v16 >= 1 )
        {
          if ( v14 == 5 )
          {
            if ( v15 == 8 )
            {
              v18 = 0;
              do
                result = sub_607DBF84(dword_60CC5754, 0, v18++, 5, 0);
              while ( v18 < v17 );
            }
            else
            {
              v26 = 0;
              do
                result = sub_607DBF84(dword_60CC5754, FIELD_U32(v27, 360), v26++, 5, 0);
              while ( v26 < v17 );
            }
          }
          else
          {
            v23 = 0;
            v24 = (int)&v7[934 * result + 948];
            do
            {
              v25 = 0;
              if ( v15 != 8 )
                v25 = FIELD_U32(v27, 360);
              result = sub_607DBF84(dword_60CC5754, v25, v23++, v14, v24);
              v24 += 4;
            }
            while ( v23 < v17 );
          }
        }
        FIELD_U32(v27, 444) = v14;
      }
    }
  }
  else
  {
    v19 = dword_60CCF448;
    result = FIELD_U32(dword_60CCF448, 212);
    if ( result )
    {
      v20 = *(int **)(dword_60CCF448 + 220);
      v21 = 4;
      do
      {
        v2 = *v20;
        if ( ((unsigned int)&dword_60C8C224 & ~(1615170820 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C8C224) )
        {
          dword_60C8C220 = (int)&off_60BD84A8;
          _cxa_guard_release(&dword_60C8C224);
        }
        v22 = (**(int (__fastcall ***)(int, int *))v2)(v2, &dword_60C8C220);
        if ( v2 )
        {
          result = v22 ^ 1;
          if ( !result )
          {
            if ( !v21 )
              goto LABEL_27;
            --v21;
          }
        }
        ++v20;
        result = FIELD_U32(v19, 220) + 4 * FIELD_U32(v19, 212);
      }
      while ( v20 != (int *)result );
    }
  }
  return result;
}
