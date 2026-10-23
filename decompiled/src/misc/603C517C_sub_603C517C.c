/* sub_603C517C
 * address: 0x603C517C   size: 404   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_603C517C(int a1)
{
  __int16 *v3; // r2
  __int16 v4; // r0
  char v5; // r1
  bool v6; // zf
  int v7; // r0
  int *v8; // r5
  int v9; // t1
  int v10; // r2
  unsigned int v11; // r0
  float *v12; // r4
  int v13; // t1
  float *v14; // r1
  float v15; // s4
  float v16; // s6
  float v17; // s8
  float v18; // s10
  unsigned __int8 *v19; // r1
  float v20; // s0
  float v21; // s2
  float result; // s0
  int speed; // [sp+4h] [bp-24h] BYREF
  int target; // [sp+8h] [bp-20h] BYREF
  int v25; // [sp+Ch] [bp-1Ch] BYREF

  v25 = 0;
  v3 = (__int16 *)(a1 + 27016);
  v4 = FIELD_U16(a1, 27016) + 1;
  *v3 = v4;
  v5 = FIELD_U8(a1, 27028);
  if ( v4 == 64 )
  {
    v4 = 128;
    FIELD_U8(a1, 27028) = ++v5;
    *v3 = 128;
  }
  v6 = (v4 & (1 << v5)) == 0;
  v9 = FIELD_U32(a1, 27004);
  v8 = (int *)(a1 + 27004);
  v7 = v9;
  v10 = dword_60C987F0;
  if ( !v6 )
    v10 = -dword_60C987F0;
  v11 = v10 + v7;
  v25 = v11;
  v13 = FIELD_U32(a1, 26980);
  v12 = (float *)(a1 + 26980);
  v14 = (float *)((char *)sinLutTable + ((v11 >> 20) & 0xFF0));
  v15 = *v14;
  v16 = v14[1];
  v17 = v14[2];
  v18 = v14[3];
  v19 = &byte_60B00E8C[16 * v13];
  v20 = (float)(v11 & 0xFFFFFF) * 0.000000059605;
  v21 = *(float *)v19 * (float)(v15 + (float)(v16 * v20));
  *(v12 - 6715) = *(float *)v19 * (float)(v17 + (float)(v18 * v20));
  *(v12 - 6714) = v21;
  target = -v11;
  speed = *((_DWORD *)v19 + 2);
  moveValueTo((int *)v12 - 6706, &target, &speed);
  target = *(_DWORD *)&byte_60B00E8C[16 * *(_DWORD *)v12 + 4];
  moveValueTo(v8, &v25, &target);
  *(v12 - 6718) = *(v12 - 6718) + *(v12 - 6715);
  *(v12 - 6717) = *(v12 - 6717) + *(v12 - 6714);
  result = *(v12 - 6716) + *(v12 - 6713);
  *(v12 - 6716) = result;
  return result;
}
