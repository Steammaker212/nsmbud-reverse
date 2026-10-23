/* sub_603C4ED4
 * address: 0x603C4ED4   size: 652   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_603C4ED4(int a1, float a2)
{
  unsigned int v3; // r0
  int v4; // r2
  int *v5; // r8
  char *v6; // r1
  int v7; // r7
  int v8; // r3
  unsigned int v9; // r7
  int v10; // r6
  unsigned int v11; // r2
  char v12; // r2
  float result; // s0
  __int16 v14; // r2
  float *v15; // r4
  int v16; // t1
  float *v17; // r2
  float v18; // s0
  unsigned __int8 *v19; // r1
  float v20; // s2
  unsigned int v21; // r7
  int speed; // [sp+4h] [bp-2Ch] BYREF
  int target; // [sp+8h] [bp-28h] BYREF
  int v24; // [sp+Ch] [bp-24h] BYREF
  Vec2 out; // [sp+10h] [bp-20h] BYREF

  CollisionMgr_process((_BYTE *)(a1 + 648), a2);
  if ( StageActor__distanceToPlayer((StateActor *)a1, &out) == -1 )
  {
    sub_603C517C(a1);
    return result;
  }
  v3 = sub_6000F7B8(out.y, out.x);
  v24 = v3;
  v5 = (int *)(a1 + 27004);
  v4 = FIELD_U32(a1, 27004);
  v6 = (char *)(a1 + 27031);
  v7 = FIELD_U8(a1, 27031);
  if ( v7 == 2 )
  {
    v3 = dword_60C987F0 + v4;
    goto LABEL_21;
  }
  if ( v7 == 1 )
  {
    v3 = v4 - dword_60C987F0;
LABEL_21:
    v24 = v3;
    v14 = FIELD_U16(a1, 27018) - 1;
    FIELD_U16(a1, 27018) = v14;
    if ( !v14 )
      *v6 = 0;
    goto LABEL_23;
  }
  v8 = v4 - v3;
  if ( FIELD_U8(a1, 27031) )
  {
    v21 = v4 - v3;
    if ( v8 < 0 )
    {
      v21 = v4 - v3;
      if ( v8 != 0x80000000 )
        v21 = v3 - v4;
    }
    if ( v21 > dword_60C987F0 )
    {
      if ( v8 >= 1 )
        v3 = v4 - dword_60C987F0;
      else
        v3 = v4 + dword_60C987F0;
      v24 = v3;
    }
    goto LABEL_23;
  }
  v9 = v4 - v3;
  if ( v8 < 0 )
  {
    v9 = v4 - v3;
    if ( v8 != 0x80000000 )
      v9 = v3 - v4;
  }
  v10 = dword_60C987F0;
  if ( v9 > dword_60C987F0 )
  {
    if ( v8 > 0 )
      v10 = -dword_60C987F0;
    v3 = v4 + v10;
    v11 = v8;
    v24 = v3;
    if ( v8 < 0 )
    {
      if ( v8 == 0x80000000 )
      {
LABEL_15:
        FIELD_U16(a1, 27018) = 60;
        v12 = 2;
        if ( v8 > 0 )
          v12 = 1;
        *v6 = v12;
        goto LABEL_23;
      }
      v11 = -v8;
    }
    if ( v11 >= 0x78E38E39 )
      goto LABEL_15;
  }
LABEL_23:
  v16 = FIELD_U32(a1, 26980);
  v15 = (float *)(a1 + 26980);
  v17 = (float *)((char *)sinLutTable + ((v3 >> 20) & 0xFF0));
  v18 = (float)(v3 & 0xFFFFFF) * 0.000000059605;
  v19 = &byte_60B00E8C[16 * v16];
  v20 = (float)(*v17 + (float)(v17[1] * v18)) * *(float *)v19;
  *(v15 - 6715) = *(float *)v19 * (float)(v17[2] + (float)(v18 * v17[3]));
  *(v15 - 6714) = v20;
  target = -v3;
  speed = *((_DWORD *)v19 + 2);
  moveValueTo((int *)v15 - 6706, &target, &speed);
  target = *(_DWORD *)&byte_60B00E8C[16 * *(_DWORD *)v15 + 4];
  moveValueTo(v5, &v24, &target);
  *(v15 - 6718) = *(v15 - 6718) + *(v15 - 6715);
  *(v15 - 6717) = *(v15 - 6717) + *(v15 - 6714);
  result = *(v15 - 6716) + *(v15 - 6713);
  *(v15 - 6716) = result;
  return result;
}
