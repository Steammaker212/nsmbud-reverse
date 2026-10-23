/* sub_603B46E0
 * address: 0x603B46E0   size: 552   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603B46E0(int a1)
{
  int v2; // r0
  _DWORD *v3; // r8
  int v4; // r6
  int v5; // r0
  float v6; // s0
  int v7; // r1
  int v8; // r1
  int v9; // r1
  __int64 v10; // kr00_8
  int v11; // r2
  unsigned int v12; // r7
  float v13; // s0
  int result; // r0
  int v15; // [sp+0h] [bp-20h] BYREF
  int target[7]; // [sp+4h] [bp-1Ch] BYREF

  v3 = (_DWORD *)(a1 + 11944);
  v2 = FIELD_U32(a1, 11944);
  if ( v2 )
    *v3 = v2 - 1;
  v4 = FIELD_U32(a1, 80);
  target[0] = -596523230;
  v15 = 59652323;
  moveValueTo((int *)(a1 + 156), target, &v15);
  v15 = 59652323;
  target[0] = -596523230 * byte_60AFE3F4[v4];
  moveValueTo((int *)(a1 + 164), target, &v15);
  CollisionActor__handleGravity((CollisionActor *)a1);
  CollisionActor__handleSpeed((CollisionActor *)a1);
  nullsub_7();
  v5 = FIELD_U32(a1, 8672);
  v6 = FIELD_F32(a1, 120);
  v7 = 0x40000;
  if ( v6 < 0.0 )
    v7 = 0x80000;
  if ( (v7 & v5) != 0 )
    goto LABEL_9;
  v8 = 0x400000;
  if ( v6 < 0.0 )
    v8 = 0x800000;
  if ( (v8 & v5) != 0 )
  {
LABEL_9:
    v9 = 0x10000000;
    if ( v6 < 0.0 )
      v9 = 0x20000000;
    if ( (v5 & v9) == 0 )
    {
      FIELD_F32(a1, 120) = -v6;
      FIELD_F32(a1, 132) = -FIELD_F32(a1, 132);
    }
  }
  if ( (v5 & 1) != 0 )
  {
    v10 = 100LL * sead__Random__getU32((void *)(dword_60C9CF0C + 1340));
    v11 = HIDWORD(v10) > 0x4F;
    if ( HIDWORD(v10) < 0x3C )
      v11 = 2;
    v12 = v11;
    if ( FIELD_U32(a1, 11800) == v11 )
      v12 = 2;
    if ( (v10 & 0x100000000LL) == 0 )
      v12 = v11;
    if ( v12 > 1 )
      v13 = 0.0;
    else
      v13 = (float)byte_60AFE3F4[v12] * 0.5;
    FIELD_U32(a1, 11800) = v12;
    FIELD_F32(a1, 120) = v13;
    FIELD_U32(a1, 124) = 1067030938;
    FIELD_U32(a1, 128) = 0;
    *v3 = 16;
    v5 = FIELD_U32(a1, 8672);
  }
  if ( (v5 & 0x10400) == 0x400 )
    FIELD_U32(a1, 124) = -1090519040;
  result = FIELD_U8(a1, 20);
  if ( (result & 0xF) != 0 && FIELD_F32(a1, 124) < 0.0 )
  {
    result = a1 + 6332;
    if ( FIELD_F32(a1, 112) < FIELD_F32(a1, 6332) )
      return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C98040);
  }
  return result;
}
