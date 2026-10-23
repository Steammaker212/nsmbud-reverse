/* sub_6026C424
 * address: 0x6026C424   size: 932   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6026C424(int a1)
{
  unsigned int v2; // r2
  int v3; // r0
  int v4; // r9
  float *v5; // lr
  float v6; // r6
  float v7; // s0
  int v8; // r5
  float v9; // s2
  float v10; // s0
  float *v11; // r5
  float v12; // s12
  float v13; // s2
  float v14; // s6
  float v15; // s8
  float v16; // r1
  float v17; // r0
  float v18; // s2
  float v19; // s8
  float v20; // s2
  float v21; // s8
  float v22; // s0
  float v23; // s0
  ShapedColliderInfo v25[2]; // [sp+0h] [bp-48h] BYREF

  v2 = FIELD_U32(a1, 20);
  FIELD_U32(a1, 6880) = v2 & 0xF;
  v3 = (unsigned __int8)v2 >> 4;
  FIELD_U32(a1, 6896) = v3;
  v4 = ((v2 >> 8) & 0xF) + 1;
  v5 = (float *)(a1 + 6860);
  FIELD_U32(a1, 6884) = v4;
  v6 = FIELD_F32(a1, 108);
  FIELD_F32(a1, 6788) = v6;
  v7 = FIELD_F32(a1, 112);
  v8 = FIELD_U32(a1, 116);
  v9 = flt_60AF24F4[2 * v3 + (v2 & 0xF)];
  FIELD_U32(a1, 6796) = v8;
  v10 = v7 + v9;
  FIELD_F32(a1, 6792) = v10;
  FIELD_U32(a1, 6812) = 0;
  FIELD_U32(a1, 6816) = 0;
  FIELD_U32(a1, 6820) = dword_60AF5A54[v2 & 0xF];
  FIELD_F32(a1, 6836) = v6;
  FIELD_F32(a1, 6840) = v10;
  FIELD_U32(a1, 6844) = v8;
  FIELD_F32(a1, 6860) = v6;
  FIELD_F32(a1, 6864) = v10;
  FIELD_U32(a1, 6868) = v8;
  v11 = (float *)(a1 + 6836);
  if ( v3 == 1 )
  {
    FIELD_U32(a1, 144) = 1065353216;
    FIELD_U32(a1, 148) = 1065353216;
    FIELD_U32(a1, 152) = 1065353216;
    FIELD_U32(a1, 6800) = 1065353216;
    FIELD_U32(a1, 6804) = 1065353216;
    FIELD_U32(a1, 6808) = 1065353216;
    FIELD_U32(a1, 6848) = 1065353216;
    FIELD_U32(a1, 6852) = 1065353216;
    FIELD_U32(a1, 6856) = 1065353216;
    FIELD_U32(a1, 6828) = 1065353216;
    FIELD_U32(a1, 6832) = 1065353216;
    v12 = (float)(unsigned int)v4 * 16.0;
    v13 = 8.0;
    v14 = v12 + 16.0;
    v15 = (float)(v12 * 0.5) + 8.0;
    FIELD_F32(a1, 6824) = (float)(v12 + 0.5) * 0.0625;
    if ( (v2 & 0xF) != 0 )
    {
      *v11 = v6 + v15;
      *v5 = v14 + v6;
      FIELD_U32(a1, 6908) = 1065353216;
      v16 = -8.0;
      v17 = -16.0;
      v13 = (float)((float)((float)(unsigned int)v4 + 1.0) * 16.0) + 8.0;
    }
    else
    {
      *v11 = v6 - v15;
      *v5 = v6 - v14;
      FIELD_U32(a1, 6908) = 1065353216;
      v17 = -16.0;
      v16 = (float)((float)((float)(unsigned int)v4 + 1.0) * -16.0) + -8.0;
    }
  }
  else
  {
    FIELD_U32(a1, 144) = 1056964608;
    FIELD_U32(a1, 148) = 1056964608;
    FIELD_U32(a1, 152) = 1056964608;
    FIELD_U32(a1, 6800) = 1065353216;
    FIELD_U32(a1, 6804) = 1065353216;
    FIELD_U32(a1, 6808) = 1065353216;
    FIELD_U32(a1, 6848) = 1056964608;
    FIELD_U32(a1, 6852) = 1056964608;
    FIELD_U32(a1, 6856) = 1056964608;
    FIELD_U32(a1, 6828) = 1056964608;
    v18 = (float)((2 * v4) | 1u);
    FIELD_U32(a1, 6832) = 1056964608;
    FIELD_U32(a1, 6884) = (2 * v4) | 1;
    v19 = (float)((float)(v18 * 8.0) * 0.5) + 4.0;
    FIELD_F32(a1, 6824) = v18 * 0.5;
    v20 = (float)(v18 * 8.0) + 8.0;
    if ( (v2 & 0xF) != 0 )
    {
      v21 = v6 + v19;
      v22 = v20 + v6;
    }
    else
    {
      v21 = v6 - v19;
      v22 = v6 - v20;
    }
    *v11 = v21;
    *v5 = v22;
    FIELD_U32(a1, 6908) = 1065353216;
    v17 = 0.0;
    v23 = (float)((2 * v4) | 1u) + 1.0;
    v13 = (float)(v23 * 8.0) + 4.0;
    if ( (v2 & 0xF) != 0 )
    {
      v16 = -4.0;
    }
    else
    {
      v13 = 4.0;
      v16 = -(float)((float)(v23 * 8.0) + 4.0);
    }
  }
  memset(v25, 0, 16);
  v25[0].topLeft.x = v16;
  v25[0].topLeft.y = 16.0;
  v25[0].bottomRight.x = v13;
  v25[0].bottomRight.y = v17;
  v25[0].rotation = 0;
  ShapedCollider_init((ShapedCollider *)(a1 + 6120), (StageActor *)a1, v25);
  FIELD_U32(a1, 6284) = a1 + 87;
  FIELD_U32(a1, 6280) = a1 + 86;
  ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 6120));
  sub_6026C7DC(a1);
  ((void (__fastcall *)(int))loc_6026C9AC)(a1);
  (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C8E7C0);
  return 1;
}
