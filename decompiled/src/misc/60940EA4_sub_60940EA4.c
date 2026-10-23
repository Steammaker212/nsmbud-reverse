/* sub_60940EA4
 * address: 0x60940EA4   size: 452   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_60940EA4(_DWORD *a1)
{
  int v2; // r1
  _DWORD *v3; // r5
  unsigned int v4; // r0
  int v5; // r6
  int v6; // r0
  int i; // r2
  int v8; // r3
  unsigned int v9; // r0
  int v10; // r1
  int *v11; // r11
  int v12; // r9
  _DWORD *v13; // r6
  int v14; // r7
  int v15; // r0
  int v16; // r1
  _DWORD *v18; // [sp+0h] [bp-28h]

  sub_608DED80((signed int)(a1 + 1), (int (__fastcall *)(int, _DWORD))sub_60941074);
  a1[6] = 0;
  v2 = a1[1];
  if ( v2 )
  {
    v3 = (_DWORD *)a1[3];
    v18 = &v3[v2];
LABEL_3:
    v4 = 0;
LABEL_4:
    v5 = a1[5];
    if ( a1[4] > v4 )
      v5 += 324 * v4;
    v6 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)*v3 + 16))(*v3);
    sub_60941198(v5, v6);
    v9 = a1[6];
    if ( (signed int)v9 < a1[7] )
    {
      v10 = a1[5];
      v8 = a1[8];
      i = 324;
      if ( a1[4] > v9 )
        v10 += 324 * v9;
      *(_DWORD *)(v8 + 4 * v9) = v10;
      ++a1[6];
    }
LABEL_10:
    while ( ++v3 != v18 )
    {
      if ( !a1[6] )
        goto LABEL_3;
      v11 = (int *)a1[8];
      while ( 1 )
      {
        v12 = *v11;
        v13 = (_DWORD *)(*(int (__fastcall **)(_DWORD, _DWORD, int, int))(*(_DWORD *)*v3 + 16))(
                          *v3,
                          *(_DWORD *)(*(_DWORD *)*v3 + 16),
                          i,
                          v8);
        (*(void (__fastcall **)(int))(FIELD_U32(v12, 12) + 12))(v12 + 12);
        (*(void (__fastcall **)(int))(FIELD_U32(v12, 12) + 12))(v12 + 12);
        v14 = FIELD_U32(v12, 16);
        (*(void (__fastcall **)(_DWORD *))(*v13 + 12))(v13);
        v15 = v13[1];
        if ( v14 == v15 )
          break;
        v16 = FIELD_U32(v12, 16);
        for ( i = 1; ; i += 2 )
        {
          v8 = *(unsigned __int8 *)(v16 + i - 1);
          if ( v8 != *(unsigned __int8 *)(v15 + i - 1) )
            break;
          if ( !*(_BYTE *)(v16 + i - 1) )
            goto LABEL_10;
          if ( i > 0x80000 )
            break;
          v8 = *(unsigned __int8 *)(v16 + i);
          if ( v8 != *(unsigned __int8 *)(v15 + i) )
            break;
          if ( !*(_BYTE *)(v16 + i) )
            goto LABEL_10;
        }
        v4 = a1[6];
        if ( ++v11 == (int *)(a1[8] + 4 * v4) )
          goto LABEL_4;
      }
    }
  }
  return sub_608DED80((signed int)(a1 + 6), (int (__fastcall *)(int, _DWORD))sub_60941370);
}
