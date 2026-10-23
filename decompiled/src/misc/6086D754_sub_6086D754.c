/* sub_6086D754
 * address: 0x6086D754   size: 248   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_6086D754(int a1, int a2)
{
  unsigned int result; // r0
  bool v5; // zf
  _DWORD *v6; // r7
  _DWORD *v7; // r10
  int v8; // r1
  int *v9; // r0
  _DWORD *v10; // r0
  int v11; // r2
  int v12; // r3
  int v13; // r6
  int v14; // r7
  int v15; // r3
  int v16; // r6
  int v17; // r7
  unsigned int v18; // r7
  int v19; // r4
  int v20; // r6
  int v21; // r1
  int v22; // r0
  int v23; // r2

  result = FIELD_U32(a1, 40);
  v5 = result == 0;
  if ( result )
    v5 = FIELD_U16(a1, 24) == 0;
  if ( !v5 )
  {
    v6 = *(_DWORD **)(a1 + 32);
    v7 = (_DWORD *)(result + 32 * a2);
    v8 = FIELD_U32(a1, 28);
    if ( *(unsigned __int8 *)(*v6 + 103) <= a2 )
    {
      ((void (__fastcall *)(_DWORD, int, _DWORD))loc_60875824)(FIELD_U32(a1, 32), v8, 0);
      v9 = (int *)v6[8];
    }
    else
    {
      ((void (__fastcall *)(_DWORD, int, int))loc_60875824)(FIELD_U32(a1, 32), v8, a2);
      v9 = (int *)v6[8];
      if ( v9 )
        v9 += 16 * a2;
    }
    v11 = *v9;
    v12 = v9[1];
    v13 = v9[2];
    v14 = v9[3];
    v10 = v9 + 4;
    *v7 = v11;
    v7[1] = v12;
    v7[2] = v13;
    v7[3] = v14;
    v15 = v10[1];
    v16 = v10[2];
    v17 = v10[3];
    v7[4] = *v10;
    v7[5] = v15;
    v7[6] = v16;
    v7[7] = v17;
    result = FIELD_U16(a1, 24);
    if ( result >= 2 )
    {
      v18 = result - 1;
      v19 = 56;
      do
      {
        v20 = FIELD_U32(a1, 32);
        v21 = FIELD_U32(a1, 28);
        v22 = v20 + v19;
        if ( *(unsigned __int8 *)(*(_DWORD *)(v20 + v19) + 103) <= a2 )
        {
          ((void (__fastcall *)(int, int, _DWORD))loc_60875824)(v22, v21, 0);
          v23 = *(_DWORD *)(v20 + v19 + 32);
        }
        else
        {
          ((void (__fastcall *)(int, int, int))loc_60875824)(v22, v21, a2);
          v23 = *(_DWORD *)(v20 + v19 + 32);
          if ( v23 )
            v23 += a2 << 6;
        }
        result = sub_608747A0(v7, v7, v23);
        --v18;
        v19 += 56;
      }
      while ( v18 );
    }
  }
  return result;
}
