/* sub_60813578
 * address: 0x60813578   size: 616   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60813578(_DWORD *a1, int a2)
{
  int v3; // r0
  int v4; // r7
  int v5; // r6
  int v6; // r0
  int v7; // r1
  int v8; // r0
  int v9; // r7
  int v10; // r6
  int v11; // r0
  int v12; // r1
  int v13; // r0
  int v14; // r7
  int v15; // r6
  int v16; // r0
  int v17; // r1
  int result; // r0
  int v19; // r6
  int i; // r5
  int v21; // r0
  int v22; // r1
  _DWORD v23[9]; // [sp+4h] [bp-24h] BYREF

  dword_60CC6B58 = sub_60808F58(SoundSystem_instance, a2);
  dword_60CC6B5C = 10;
  v3 = a1[18];
  v4 = FIELD_U32(v3, 8);
  v5 = v3 + 4;
  while ( v4 != v5 )
  {
    v6 = v4;
    v4 = FIELD_U32(v4, 4);
    v23[0] = 0;
    sub_608AC20C(v23, v6 - 420);
    if ( v23[0] )
      v7 = *(_DWORD *)(v23[0] + 220);
    else
      v7 = -1;
    if ( v7 == dword_60CC6B58 && v23[0] )
      sub_608AF208(v23[0], dword_60CC6B5C);
    sub_608AC1C0(v23);
  }
  v8 = a1[19];
  v9 = FIELD_U32(v8, 8);
  v10 = v8 + 4;
  while ( v9 != v10 )
  {
    v11 = v9;
    v9 = FIELD_U32(v9, 4);
    v23[0] = 0;
    sub_608AC20C(v23, v11 - 420);
    if ( v23[0] )
      v12 = *(_DWORD *)(v23[0] + 220);
    else
      v12 = -1;
    if ( v12 == dword_60CC6B58 && v23[0] )
      sub_608AF208(v23[0], dword_60CC6B5C);
    sub_608AC1C0(v23);
  }
  v13 = a1[20];
  v14 = FIELD_U32(v13, 8);
  v15 = v13 + 4;
  while ( v14 != v15 )
  {
    v16 = v14;
    v14 = FIELD_U32(v14, 4);
    v23[0] = 0;
    sub_608AC20C(v23, v16 - 420);
    if ( v23[0] )
      v17 = *(_DWORD *)(v23[0] + 220);
    else
      v17 = -1;
    if ( v17 == dword_60CC6B58 && v23[0] )
      sub_608AF208(v23[0], dword_60CC6B5C);
    sub_608AC1C0(v23);
  }
  result = a1[21];
  v19 = FIELD_U32(result, 8);
  for ( i = result + 4; v19 != i; result = sub_608AC1C0(v23) )
  {
    v21 = v19;
    v19 = FIELD_U32(v19, 4);
    v23[0] = 0;
    sub_608AC20C(v23, v21 - 420);
    if ( v23[0] )
      v22 = *(_DWORD *)(v23[0] + 220);
    else
      v22 = -1;
    if ( v22 == dword_60CC6B58 )
    {
      if ( v23[0] )
        sub_608AF208(v23[0], dword_60CC6B5C);
    }
  }
  return result;
}
