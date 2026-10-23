/* sub_60383BAC
 * address: 0x60383BAC   size: 736   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60383BAC(int a1, int a2)
{
  int result; // r0
  unsigned int v5; // r5
  char v6; // r12
  _DWORD *v7; // r7
  unsigned int v8; // r0
  unsigned int *v9; // r9
  int **v10; // r8
  _DWORD *v11; // r0
  int v12; // r1
  int v13; // r2
  int v14; // r0
  unsigned int v15; // r3
  unsigned int v16; // r1
  int *v17; // r0
  unsigned int v18; // r2
  int *v19; // r0
  unsigned int v20; // r1
  unsigned int v21; // r2
  int v22; // r3
  int v23; // r7
  unsigned int v24; // r1
  unsigned int v25; // r6
  int v26; // r2
  int v27; // r7
  float v28; // s0
  float v29; // s2
  unsigned int v30; // r3
  int v31; // r6
  int v32; // r3
  int *v33; // r7
  int v34; // r6
  int v35; // r4
  int v36; // r3
  _DWORD v37[5]; // [sp+0h] [bp-40h] BYREF
  char v38; // [sp+14h] [bp-2Ch]
  _BOOL4 v39; // [sp+18h] [bp-28h]
  char v40; // [sp+1Ch] [bp-24h]

  result = 6360;
  v5 = FIELD_U32(a1, 6360);
  if ( (v5 & 0x80000000) == 0 )
  {
    result = (int)sub_60382024(a1, a2, FIELD_U32(a1, 6360));
    v7 = (_DWORD *)result;
    if ( result )
    {
      v9 = (unsigned int *)(a1 + 6300);
      v8 = FIELD_U32(a1, 6300);
      v10 = (int **)(a1 + 6304);
      if ( v8 >= v5 )
        v8 = v5;
      v11 = *(_DWORD **)(FIELD_U32(a1, 6304) + 4 * v8);
      v7[39] = v11[21];
      v7[40] = v11[22];
      v7[41] = v11[23];
      v12 = v11[24];
      v13 = v11[25];
      v7[38] = v11[26];
      v7[37] = v13;
      v7[36] = v12;
      if ( ((unsigned int)&dword_60C7B408 & ~(1614298184 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B408) )
      {
        dword_60C7B404 = (int)&off_60BC00B0;
        _cxa_guard_release(&dword_60C7B408);
      }
      if ( a2 )
      {
        v14 = (**(int (__fastcall ***)(int, int *))a2)(a2, &dword_60C7B404);
        if ( v14 )
          v14 = a2;
      }
      else
      {
        v14 = 0;
      }
      sub_607D19E4(v14, v7);
      if ( v5 )
      {
        v15 = *v9;
        v16 = v5;
        v17 = *v10;
        v18 = *v9 - 1;
        if ( *v9 < v5 )
          v16 = *v9;
        if ( v15 < v18 )
          v18 = *v9;
        if ( v18 )
        {
          v19 = v17 - 1;
          v20 = v16 + 1;
          v21 = v18 + 1;
          v22 = 0;
          do
          {
            if ( v20 != v21 )
            {
              v23 = v19[v21];
              if ( FIELD_U8(v23, 128) )
                FIELD_U32(v23, 116) = v22++;
            }
            --v21;
          }
          while ( v21 != 1 );
          v15 = *v9;
          v17 = *v10;
        }
        v24 = v5;
        if ( v15 < v5 )
          v24 = v15;
        if ( !v24 )
          goto LABEL_43;
        v25 = v5;
        if ( v5 > v15 )
          v25 = v15;
        if ( (v24 & 1) != 0 )
        {
          v27 = 1;
          v26 = *(unsigned __int8 *)(*v17 + 128);
          if ( v25 != 1 )
          {
LABEL_36:
            v30 = ~v15;
            v31 = ~v5;
            if ( v30 > ~v5 )
              v31 = v30;
            v32 = ~v27 - v31;
            v33 = &v17[v27 + 1];
            do
            {
              v34 = *(v33 - 1);
              v35 = *v33;
              v33 += 2;
              v32 -= 2;
              v26 += FIELD_U8(v35, 128) + FIELD_U8(v34, 128);
            }
            while ( v32 );
            goto LABEL_40;
          }
        }
        else
        {
          v26 = 0;
          v27 = 0;
          if ( v25 != 1 )
            goto LABEL_36;
        }
        do
        {
LABEL_40:
          v36 = *v17++;
          if ( FIELD_U8(v36, 128) )
            FIELD_U32(v36, 120) = v26--;
          --v24;
        }
        while ( v24 );
LABEL_43:
        sub_60381F48(a1, v5);
        return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C969FC);
      }
      FIELD_U32(a1, 6392) = FIELD_U32(a2, 8);
      sub_60386654(**v10 + 12, 6);
      v28 = FIELD_F32(a1, 108);
      v29 = FIELD_F32(a2, 108);
      memset(v37, 0, 16);
      v37[4] = &unk_60C96A5C;
      v38 = -1;
      v39 = v29 < v28;
      v40 = FIELD_U8(a2, 84);
      return sub_602A852C(a1 + 6104, v37);
    }
  }
  return result;
}
