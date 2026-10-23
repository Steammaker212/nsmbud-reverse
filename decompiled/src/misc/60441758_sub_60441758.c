/* sub_60441758
 * address: 0x60441758   size: 436   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60441758(_DWORD *a1, int a2, int a3, float a4)
{
  float v7; // s18
  unsigned int v8; // r5
  int v9; // r0
  signed int v10; // r4
  int v11; // r6
  unsigned int v12; // r7
  _DWORD *v13; // r2
  int v14; // r1
  _DWORD *v15; // r0
  int v16; // r6
  int v17; // r5
  __int64 v18; // r0
  float v20[2]; // [sp+10h] [bp-1A0h] BYREF
  _BYTE v21[80]; // [sp+18h] [bp-198h] BYREF
  int v22; // [sp+68h] [bp-148h] BYREF
  float v23[16]; // [sp+170h] [bp-40h] BYREF

  v7 = a4 / 30.0;
  v23[0] = 1.0 - a4;
  v23[1] = 1.0 - a4;
  v23[2] = 1.0 - a4;
  v23[3] = 1.0;
  if ( (float)(a4 / 30.0) >= 0.0 )
  {
    if ( v7 > 1.0 )
      v7 = 1.0;
  }
  else
  {
    v7 = 0.0;
  }
  v8 = FIELD_U16(a3, 24);
  v9 = sub_609200A0(a3);
  v10 = FIELD_U16(a3, 26);
  v11 = v9;
  agl_TextureSampler_copy_ref(v21, a3);
  v12 = 1;
  sub_6091DD8C(a1[1], FIELD_U32(a2, 40), 1);
  if ( v8 > 1 )
    v12 = v8;
  if ( v11 > v10 )
    v10 = v11;
  v13 = (_DWORD *)a1[1];
  v14 = FIELD_U32(a2, 40);
  v20[0] = (float)v12 / (float)((float)(v7 * (float)((float)v12 + -1.0)) + 1.0);
  v20[1] = (float)((float)(unsigned int)v10 * v20[0]) / (float)v12;
  v15 = (_DWORD *)v13[153];
  if ( *v15 != -1 )
  {
    sub_6091B890(v15, v14, 2, v20);
    v13 = (_DWORD *)a1[1];
    v15 = (_DWORD *)v13[153];
  }
  if ( v13[152] > 1u )
    v15 += 3;
  if ( *v15 != -1 )
  {
    sub_6091B890(v15, FIELD_U32(a2, 40), 4, v23);
    v13 = (_DWORD *)a1[1];
  }
  sub_60920FDC(v21, FIELD_U32(a2, 40), v13[159], -1, 0);
  sub_60922278(a1 + 104, FIELD_U32(a2, 40));
  v16 = a1[86];
  v17 = *(_DWORD *)(FIELD_U32(a2, 40) + 192);
  v18 = dword_60CC746C(a1 + 92);
  dword_60CC7874(v17, v16, a1[85], 6, v18, HIDWORD(v18));
  sub_609175E4(&v22);
  return sub_60917AE4(v21);
}
