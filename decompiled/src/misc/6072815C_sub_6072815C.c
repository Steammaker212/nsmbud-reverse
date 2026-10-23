/* sub_6072815C
 * address: 0x6072815C   size: 976   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6072815C(int a1, int a2)
{
  int v4; // r1
  int v5; // r6
  int i; // r8
  unsigned int v7; // r0
  int v8; // r7
  int v9; // r5
  unsigned int v10; // r0
  int v11; // r5
  int v12; // r7
  unsigned int v13; // r0
  int v14; // r5
  int v15; // r7
  unsigned int v16; // r0
  int v17; // r5
  int v18; // r7
  unsigned int v19; // r0
  int v20; // r5
  int v21; // r7
  unsigned int v22; // r0
  int v23; // r5
  int v24; // r7
  int v25; // r0
  unsigned int v26; // r0
  unsigned int v27; // r0
  unsigned int v28; // r0
  int result; // r0
  _BYTE v30[12]; // [sp+8h] [bp-78h] BYREF
  _DWORD v31[3]; // [sp+14h] [bp-6Ch] BYREF
  _BYTE v32[12]; // [sp+20h] [bp-60h] BYREF
  _BYTE v33[12]; // [sp+2Ch] [bp-54h] BYREF
  _BYTE v34[12]; // [sp+38h] [bp-48h] BYREF
  _BYTE v35[12]; // [sp+44h] [bp-3Ch] BYREF
  _DWORD v36[12]; // [sp+50h] [bp-30h] BYREF

  FIELD_U32(a1, 3896) = 0;
  FIELD_U32(a1, 4) = 0;
  FIELD_U32(a1, 8) = 0;
  v4 = 0;
  if ( FIELD_U32(dword_60C9CD58, 16) >= 9u )
    v4 = *(_DWORD *)(FIELD_U32(dword_60C9CD58, 24) + 32);
  v5 = a1 + 12;
  FIELD_U32(a1, 4) = v4;
  sub_60913D88(a1 + 12, 3072, a2, 4, 0);
  sub_60913A6C(v35, a1 + 12, 0);
  sub_60913D88(a1 + 40, 3072, a2, 4, 0);
  sub_60913A6C(v34, a1 + 40, 0);
  sub_60913D88(a1 + 3224, 5120, a2, 4, 0);
  sub_60913A6C(v33, a1 + 3224, 0);
  sub_60913D88(a1 + 3252, 5120, a2, 4, 0);
  sub_60913A6C(v32, a1 + 3252, 0);
  for ( i = 0; i != 3072; i += 24 )
  {
    v7 = FIELD_U32(a1, 3896);
    if ( v7 >= 2 )
      v7 = 0;
    v8 = v5 + 28 * v7;
    v9 = dword_60CC73E8(FIELD_U32(v8, 12));
    *(_DWORD *)(v9 + sub_60913FB4(v8) + i) = 0;
    v10 = FIELD_U32(a1, 3896);
    if ( v10 >= 2 )
      v10 = 0;
    v11 = v5 + 28 * v10;
    v12 = dword_60CC73E8(FIELD_U32(v11, 12));
    *(_DWORD *)(v12 + sub_60913FB4(v11) + i + 4) = 0;
    v13 = FIELD_U32(a1, 3896);
    if ( v13 >= 2 )
      v13 = 0;
    v14 = v5 + 28 * v13;
    v15 = dword_60CC73E8(FIELD_U32(v14, 12));
    *(_DWORD *)(v15 + sub_60913FB4(v14) + i + 8) = 0;
    v16 = FIELD_U32(a1, 3896);
    if ( v16 >= 2 )
      v16 = 0;
    v17 = v5 + 28 * v16;
    v18 = dword_60CC73E8(FIELD_U32(v17, 12));
    *(_DWORD *)(v18 + sub_60913FB4(v17) + i + 12) = 0;
    v19 = FIELD_U32(a1, 3896);
    if ( v19 >= 2 )
      v19 = 0;
    v20 = v5 + 28 * v19;
    v21 = dword_60CC73E8(FIELD_U32(v20, 12));
    *(_DWORD *)(v21 + sub_60913FB4(v20) + i + 16) = 0;
    v22 = FIELD_U32(a1, 3896);
    if ( v22 >= 2 )
      v22 = 0;
    v23 = v5 + 28 * v22;
    v24 = dword_60CC73E8(FIELD_U32(v23, 12));
    v25 = v24 + sub_60913FB4(v23) + i;
    FIELD_U32(v25, 20) = 0;
  }
  v26 = FIELD_U32(a1, 3896);
  if ( v26 >= 2 )
    v26 = 0;
  sub_60913A6C(v31, v5 + 28 * v26, 0);
  v27 = FIELD_U32(a1, 3896);
  if ( v27 >= 2 )
    v27 = 0;
  v28 = *(_DWORD *)(v5 + 28 * v27 + 8);
  v36[0] = v31[0];
  v36[1] = v31[1];
  v36[2] = v31[2];
  sub_60919D48(a1 + 72, v36, 2, v28 >> 2);
  FIELD_U32(a1, 80) = 4;
  sub_60913A6C(v30, a1 + 3224, 0);
  sub_609225B8(a1 + 3280, v30, 20, 5120);
  sub_60922768(a1 + 3280, 0, 34, 0, 0);
  sub_60922768(a1 + 3280, 1, 22, 12, 0);
  sub_60921D30(a1 + 3552, 1, a2);
  sub_60921DF0(a1 + 3552, 0, a1 + 3280, 0);
  sub_60921DF0(a1 + 3552, 3, a1 + 3280, 1);
  sub_60921F90(a1 + 3552);
  sub_60922730(a1 + 3280, 0, FIELD_U32(a1, 3548));
  FIELD_U32(a1, 4252) |= 1u;
  FIELD_U8(a1, 4250) = 1;
  FIELD_U8(a1, 4248) = 0;
  FIELD_U8(a1, 4249) = 1;
  FIELD_U8(a1, 4337) = 0;
  FIELD_U32(a1, 3892) = 0;
  FIELD_U32(a1, 3888) = 0;
  result = (FIELD_U32(a1, 3896) + 1) % 2;
  FIELD_U32(a1, 3896) = result;
  return result;
}
