/* sub_6088A6BC
 * address: 0x6088A6BC   size: 356   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6088A6BC(int a1, int a2, _DWORD *a3, int a4, int a5, int a6)
{
  int v8; // r11
  int v9; // r2
  int v10; // r9
  int result; // r0
  int v12; // r7
  _DWORD *v13; // r0
  int i; // r7
  int v15; // r7
  int v16; // r8
  int v17; // r1
  bool v18; // zf
  int v19; // [sp+10h] [bp-30h]
  int v20; // [sp+14h] [bp-2Ch]
  int v21; // [sp+18h] [bp-28h]

  v8 = 0;
  v21 = FIELD_U32(a2, 32);
  v20 = FIELD_U32(a6, 36);
  v9 = a3[87];
  v10 = a3[183];
  v19 = FIELD_U32(v9, 580);
  if ( a4 != 3 )
    v8 = *(_DWORD *)(v9 + 4 * a4 + 584);
  result = sub_6088ACD0(a1, a3, a4, v8, a5, a6);
  if ( result == 1 )
  {
    v12 = *(_DWORD *)(a3[87] + 704);
    v13 = (_DWORD *)sub_608966EC(a3 + 344, FIELD_U32(v10, 48));
    sub_60835D28(a1, v12, v13, 80, a3[364]);
    for ( i = FIELD_U32(v10, 20); i; i = FIELD_U32(i, 92) )
    {
      if ( FIELD_S32(i, 104) >= 1 )
        sub_6088A820(a1, v21, v20, a3, v8, v19, v10, i);
    }
    result = a3[85];
    if ( result >= 1 )
    {
      v15 = 0;
      v16 = 20;
      do
      {
        v17 = *(_DWORD *)(a3[37] + v16);
        v18 = v17 == 0;
        if ( v17 )
          v18 = FIELD_U8(v17, 116) == 0;
        if ( !v18 && FIELD_S32(v17, 104) >= 1 )
        {
          sub_6088A820(a1, v21, v20, a3, v8, v19, v10, v17);
          result = a3[85];
        }
        ++v15;
        v16 += 24;
      }
      while ( v15 < result );
    }
  }
  return result;
}
