/* sub_607302AC
 * address: 0x607302AC   size: 752   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_607302AC(int a1)
{
  signed int v2; // r0
  int *v3; // r10
  int v4; // r4
  int v5; // r0
  float *v6; // r0
  float v7; // s2
  float v8; // s4
  float v9; // s0
  float v10; // s6
  int v11; // r0
  float v12; // s16
  signed int v13; // r0
  int v14; // r5
  int v15; // r8
  int v16; // r7
  int v17; // r6
  float v18; // s0
  int v19; // r0
  int v20; // r0
  int v21; // r0
  int v22; // r1
  int v23; // r2
  _DWORD *result; // r0
  int v25; // r1
  int v26; // r0
  int v27; // r0
  int v28; // r1
  int v29; // r2
  int v30; // r3
  int v31; // [sp+0h] [bp-50h] BYREF
  int v32; // [sp+4h] [bp-4Ch] BYREF
  int v33; // [sp+8h] [bp-48h] BYREF
  Vec2 out; // [sp+Ch] [bp-44h] BYREF
  int target; // [sp+14h] [bp-3Ch] BYREF
  int v36; // [sp+18h] [bp-38h] BYREF
  int v37[13]; // [sp+1Ch] [bp-34h] BYREF

  if ( FIELD_U8(a1, 6328) )
  {
    v2 = StageActor__directionToPlayerX((StateActor *)a1, (Vec3 *)(a1 + 108));
    FIELD_U32(a1, 80) = v2;
    v3 = (int *)(a1 + 160);
    target = dword_60AF2240[v2];
    v31 = 0x4000000;
    moveValueTo((int *)(a1 + 160), &target, &v31);
    v4 = a1 + 6300;
    *(_DWORD *)(*(_DWORD *)(FIELD_U32(a1, 6300) + 4) + 232) |= 2u;
    *(_DWORD *)(*(_DWORD *)(FIELD_U32(a1, 6300) + 4) + 232) |= 4u;
    v5 = (unsigned __int8)StageActor__distanceToPlayer((StateActor *)a1, &out);
    if ( (unsigned __int8)v5 >= 4u )
      v5 = 0;
    v6 = *(float **)(PlayerMgr_instance + 4 * v5 + 32);
    v7 = v6[27];
    v8 = v6[143];
    v9 = v6[28];
    v10 = v6[144];
    v11 = *(_DWORD *)(FIELD_U32(a1, 6300) + 4);
    v12 = (float)(v7 + v8) - FIELD_F32(v11, 152);
    v13 = sub_6000F7B8((float)(v9 + v10) - FIELD_F32(v11, 156), fabsf(v12));
    v14 = 417566264;
    v15 = 119304647;
    v16 = v13;
    v17 = 417566264;
    if ( v13 < 417566264 )
      v17 = v13;
    if ( v12 >= 0.0 )
    {
      if ( v12 <= 60.0 )
        v19 = sub_608FBB48(v12 / 60.0);
      else
        v19 = 0x40000000 - sub_608FBB48(60.0 / v12);
    }
    else
    {
      v18 = -v12;
      if ( v12 >= -60.0 )
        v19 = -sub_608FBB48(v18 / 60.0);
      else
        v19 = sub_608FBB48(60.0 / v18) - 0x40000000;
    }
    v25 = *v3;
    target = 0;
    v26 = v25 - v19;
    if ( v26 < 119304647 )
      v15 = v26;
    if ( v26 < -119304647 )
      v15 = -119304647;
    v36 = v15;
    if ( v16 >= -417566264 )
      v14 = -v17;
    v37[0] = v14;
    v27 = *(_DWORD *)(*(_DWORD *)v4 + 4);
    v28 = FIELD_U32(v27, 228);
    v31 = 0;
    v32 = FIELD_U32(v27, 224);
    v33 = 7 * (v28 / 8);
    sub_608322C0(&v32, &v36, &dword_60CBDBE0, &dword_60CBDBE4);
    sub_608322C0(&v33, v37, &dword_60CBDBE0, &dword_60CBDBE4);
    v29 = v32;
    v30 = v33;
    result = (_DWORD *)(*(_DWORD *)(*(_DWORD *)v4 + 4) + 220);
    *result = v31;
    result[1] = v29;
    result[2] = v30;
  }
  else
  {
    v20 = *(_DWORD *)(FIELD_U32(a1, 6300) + 4);
    target = 0;
    v36 = FIELD_U32(v20, 224);
    v21 = FIELD_U32(v20, 228);
    v31 = 0;
    v37[0] = v21;
    sub_608322C0(&v36, &v31, &dword_60CBDBE0, &dword_60CBDBE4);
    v31 = 0;
    sub_608322C0(v37, &v31, &dword_60CBDBE0, &dword_60CBDBE4);
    v22 = v36;
    v23 = v37[0];
    result = *(_DWORD **)(FIELD_U32(a1, 6300) + 4);
    result[55] = 0;
    result[56] = v22;
    result[57] = v23;
  }
  return result;
}
