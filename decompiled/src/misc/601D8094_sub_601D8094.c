/* sub_601D8094
 * address: 0x601D8094   size: 492   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601D8094(_DWORD *a1)
{
  _DWORD *v2; // r4
  int result; // r0
  int v4; // r11
  int v5; // r8
  int v6; // r4
  int v7; // r9
  _DWORD *v8; // r7
  int v9; // r2
  int v10; // r0
  int v11; // r1
  bool v12; // zf
  _DWORD *v13; // r4
  int v14; // [sp+8h] [bp-48h] BYREF
  int v15; // [sp+Ch] [bp-44h]
  int v16; // [sp+10h] [bp-40h]
  int v17; // [sp+14h] [bp-3Ch] BYREF
  int v18; // [sp+18h] [bp-38h]
  int v19; // [sp+1Ch] [bp-34h]
  int v20; // [sp+20h] [bp-30h] BYREF
  int v21; // [sp+24h] [bp-2Ch]
  int v22; // [sp+28h] [bp-28h]

  v2 = a1 + 261;
  result = sub_601E0070(a1 + 258, a1 + 261);
  v4 = result;
  if ( result == 6 )
    return result;
  if ( sub_601D86E4(a1, v2, 0) == 1 )
  {
    sub_6019EC34(a1 + 264, v2);
    result = sub_601E131C(v4);
    a1[276] = result;
    return result;
  }
  v20 = a1[258];
  v21 = a1[259];
  v22 = a1[260];
  v17 = a1[261];
  v18 = a1[262];
  v19 = a1[263];
  v14 = v17;
  v15 = v18;
  v16 = v19;
  while ( 1 )
  {
    v5 = 6;
    v6 = 0;
    v7 = 0;
    do
    {
      v8 = (_DWORD *)sub_601E039C(&v17, v6);
      if ( v8 && RW9M0W909_ref_22AE5C(dword_60C8D864, &v17, v6, 0) == 1 )
      {
        v9 = v8[21];
        v10 = v8[22];
        v11 = v8[24];
        ++v7;
        v12 = v9 == v20;
        if ( v9 == v20 )
          v12 = v10 == v21;
        if ( !v12 || v11 != v22 )
        {
          v5 = v6;
          v14 = v8[21];
          v15 = v10;
          v16 = v11;
        }
      }
      ++v6;
    }
    while ( v6 != 6 );
    if ( v7 == 2 )
    {
      if ( !sub_601E02F8(&v14, 0) )
      {
        v4 = v5;
LABEL_24:
        v13 = a1;
        sub_6019EC34(a1 + 264, &v14);
        result = sub_601E131C(v4);
        goto LABEL_26;
      }
      goto LABEL_11;
    }
    if ( v7 > 2 || v7 == 1 )
    {
      sub_6019EC34(&v14, &v17);
      goto LABEL_24;
    }
    if ( !v7 )
      break;
LABEL_11:
    sub_6019EC34(&v20, &v17);
    sub_6019EC34(&v17, &v14);
    v4 = v5;
  }
  v13 = a1;
  a1[264] = -1;
  a1[265] = -1;
  a1[266] = -1;
  result = 6;
LABEL_26:
  v13[276] = result;
  return result;
}
