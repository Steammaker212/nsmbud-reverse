/* sub_60704774
 * address: 0x60704774   size: 688   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60704774(int a1)
{
  signed int v2; // r9
  _BOOL4 v3; // r10
  _DWORD *v4; // r8
  float v5; // r1
  unsigned int v6; // r2
  int v7; // r3
  float *v8; // r3
  float v9; // s0
  float v10; // s2
  float v11; // s8
  float v12; // s0
  TileCheck *v13; // r0
  int v14; // r7
  _BOOL4 v15; // r0
  int v16; // r1
  int v17; // r2
  unsigned int v18; // r0
  float *v19; // r1
  float v20; // s4
  float v21; // s0
  _BYTE *v22; // r4
  TileCheck v24; // [sp+8h] [bp-C8h] BYREF
  TileCheck_Param v25; // [sp+58h] [bp-78h] BYREF
  int (**v26)(); // [sp+64h] [bp-6Ch] BYREF
  TileCheck_Result v27; // [sp+68h] [bp-68h] BYREF
  Vec2 positionOffset; // [sp+90h] [bp-40h] BYREF
  Vec2 a3; // [sp+98h] [bp-38h] BYREF

  v2 = 1;
  v3 = 0;
  v4 = (_DWORD *)(a1 + 6300);
  if ( FIELD_U32(a1, 6300) <= 3u )
  {
    v2 = sub_60704A44(a1);
    FIELD_U8(a1, 6444) = v2 ^ 1;
    v3 = FIELD_U32(a1, 6316) != 0;
  }
  FIELD_U8(a1, 6320) = 0;
  v5 = FIELD_F32(a1, 112);
  positionOffset.x = FIELD_F32(a1, 108);
  positionOffset.y = v5;
  v6 = FIELD_U32(a1, 164);
  v7 = (v6 >> 20) & 0xFF0;
  v6 &= 0xFFFFFFu;
  v8 = (float *)((char *)sinLutTable + (v7 ^ 0x800));
  v9 = *v8;
  v10 = v8[1];
  v27.field_C = 0;
  v27.field_10 = 0;
  v26 = off_60C20F2C;
  *(_WORD *)&v25.field_0 = 0;
  v11 = positionOffset.x + (float)((float)(v9 + (float)((float)((float)v6 * v10) * 0.000000059605)) * 32.0);
  v12 = v8[2] + (float)((float)((float)v6 * v8[3]) * 0.000000059605);
  a3.x = v11;
  a3.y = v5 - (float)(v12 * 32.0);
  v25.field_2 = FIELD_U8(a1, 86);
  v25.field_3 = FIELD_U8(a1, 87);
  v25.field_4 = 0;
  v25.field_8 = (int)&v26;
  v13 = TileCheck_ctor(&v24, &v25);
  if ( TileCheck_check(v13, &v27, &a3, &positionOffset, 15) == 1 )
  {
    v3 = 1;
    FIELD_U8(a1, 6320) = 1;
  }
  v14 = FIELD_U8(a1, 6444);
  v15 = sub_601536B0((int)ColliderMgr_instance, a1 + 6448);
  if ( v14 )
  {
    if ( v15 )
    {
      ColliderMgr_removeRelated1(ColliderMgr_instance, (ColliderBase *)(a1 + 6448));
      if ( v2 != 1 )
        goto LABEL_15;
      goto LABEL_13;
    }
  }
  else
  {
    if ( !v15 )
      ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 6448));
    ShapedCollider_execute((ColliderBase *)(a1 + 6448));
  }
  if ( v2 != 1 )
    goto LABEL_15;
LABEL_13:
  SE_AMB_DOKAN_AWA_ref_2(a1);
  v16 = FIELD_U32(a1, 112);
  v17 = FIELD_U32(a1, 116);
  *(_DWORD *)&v24.field_0 = FIELD_U32(a1, 108);
  v24.field_4 = v16;
  v24.field_8 = v17;
  v18 = FIELD_U32(a1, 164);
  v19 = (float *)((char *)sinLutTable + ((v18 >> 20) & 0xFF0 ^ 0x800));
  v20 = (float)(v18 & 0xFFFFFF);
  v21 = v19[2] + (float)((float)(v20 * v19[3]) * 0.000000059605);
  *(float *)&v24.field_0 = *(float *)&v24.field_0
                         - (float)((float)(*v19 + (float)((float)(v20 * v19[1]) * 0.000000059605)) * 16.0);
  *(float *)&v24.field_4 = *(float *)&v24.field_4 + (float)(v21 * 16.0);
  if ( !v3 )
    EffectWrapper_update((EffectWrapper *)(a1 + 6324), 412, (Vec3 *)&v24, (Vec3i *)(a1 + 156), 0);
LABEL_15:
  if ( *v4 != 4 )
    StageActor__cullCheck((StageActor *)a1, 0);
  FIELD_U8(a1, 7104) = 0;
  v22 = (_BYTE *)(a1 + 7104);
  v22[3] = 0;
  v22[2] = 0;
  v22[1] = 0;
  return 1;
}
