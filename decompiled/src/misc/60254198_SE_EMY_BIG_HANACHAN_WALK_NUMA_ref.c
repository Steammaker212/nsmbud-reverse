/* SE_EMY_BIG_HANACHAN_WALK_NUMA_ref
 * address: 0x60254198   size: 1284   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall SE_EMY_BIG_HANACHAN_WALK_NUMA_ref(int a1)
{
  int v2; // r0
  int v3; // r2
  int v4; // r4
  float v5; // s0
  int v6; // r0
  float v7; // s0
  float v8; // r0
  TileCheck *v9; // r0
  int v10; // r4
  int v11; // r6
  _DWORD *v12; // r7
  int v13; // r6
  int v14; // r6
  int v15; // r0
  int v16; // r1
  int v17; // r1
  int v18; // r2
  unsigned int v19; // r0
  int v20; // r4
  float v21; // s2
  int v22; // r0
  float *v23; // r1
  _DWORD *v24; // r7
  float v25; // s0
  float v26; // s4
  bool v27; // cc
  float v28; // s6
  int v29; // r0
  float v30; // s0
  int v31; // s6
  int v32; // r0
  int v33; // r0
  int v34; // r0
  int v35; // r1
  int v36; // r5
  TileCheck_Result out; // [sp+8h] [bp-C8h] BYREF
  TileCheck position; // [sp+30h] [bp-A0h] BYREF
  TileCheck_Param v39; // [sp+7Ch] [bp-54h] BYREF
  Vec2 positionOffset; // [sp+88h] [bp-48h] BYREF
  Vec2 a3; // [sp+90h] [bp-40h] BYREF

  v2 = byte_60AFE3F4[FIELD_U32(a1, 80)];
  v3 = FIELD_U32(a1, 160) + (v2 << 25);
  FIELD_U32(a1, 160) = v3;
  if ( v3 < 0 )
  {
    if ( v3 == 0x80000000 )
    {
LABEL_5:
      v4 = 1;
      FIELD_U32(a1, 160) = 715827882 * v2;
      goto LABEL_6;
    }
    v3 = -v3;
  }
  v4 = 0;
  if ( (unsigned int)v3 > 0x2AAAAAA9 )
    goto LABEL_5;
LABEL_6:
  CollisionActor__handleGravity((CollisionActor *)a1);
  v5 = FIELD_F32(a1, 88) * (float)byte_60AFE3F4[FIELD_U32(a1, 80)];
  FIELD_F32(a1, 120) = v5;
  if ( (FIELD_U8(a1, 2872) & 1) == 0
    || (v6 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(FIELD_U32(a1, 6500) + 184) + 184) + 184)) == 0 )
  {
    if ( v4 )
      goto LABEL_14;
    v5 = v5 * 0.5;
LABEL_13:
    FIELD_F32(a1, 120) = v5;
    goto LABEL_14;
  }
  v7 = FIELD_F32(v6, 12);
  v8 = FIELD_F32(v6, 8);
  *(_WORD *)&v39.field_0 = 0;
  a3.x = v8;
  positionOffset.x = v8;
  a3.y = v7 + 16.0;
  positionOffset.y = v7 + -4.0;
  v39.field_2 = FIELD_U8(a1, 86);
  v39.field_3 = FIELD_U8(a1, 87);
  v39.field_4 = 0;
  v39.field_8 = 0;
  v9 = TileCheck_ctor(&position, &v39);
  out.field_C = 0;
  out.field_10 = 0;
  if ( TileCheck_check(v9, &out, &a3, &positionOffset, 8) != 1 )
  {
    v5 = (float)byte_60AFE3F4[FIELD_U32(a1, 80)] * 2.5;
    goto LABEL_13;
  }
  v5 = FIELD_F32(a1, 120);
LABEL_14:
  v10 = a1 + 648;
  FIELD_F32(a1, 108) = FIELD_F32(a1, 108) + v5;
  FIELD_F32(a1, 112) = FIELD_F32(a1, 112) + FIELD_F32(a1, 124);
  FIELD_F32(a1, 116) = FIELD_F32(a1, 116) + FIELD_F32(a1, 128);
  sub_60257E48(a1 + 6316);
  v12 = (_DWORD *)(a1 + 6500);
  v11 = FIELD_U32(a1, 6500);
  sub_60257E48(v11);
  v13 = FIELD_U32(v11, 184);
  sub_60257E48(v13);
  v14 = FIELD_U32(v13, 184);
  sub_60257E48(v14);
  sub_60257E48(FIELD_U32(v14, 184));
  CollisionActor__sub_600034C8((CollisionActor *)a1);
  if ( (FIELD_U8(a1, 2872) & 1) != 0 )
    FIELD_U32(a1, 124) = 0;
  v15 = FIELD_U32(a1, 80);
  if ( ((*(_DWORD *)(v10 + 4 * ((v15 + 18) >> 5) + 2224) & (1 << ((v15 + 18) & 0x1F))) != 0
     || (*(_DWORD *)(v10 + 4 * ((v15 + 22) >> 5) + 2224) & (1 << ((v15 + 22) & 0x1F))) != 0)
    && (*(_DWORD *)(v10 + 4 * ((v15 + 28) >> 5) + 2224) & (1 << ((v15 + 28) & 0x1F))) == 0 )
  {
    FIELD_U32(a1, 80) = v15 ^ 1;
  }
  sub_6025663C(a1);
  v16 = FIELD_U32(a1, 6568);
  FIELD_U32(a1, 6324) = FIELD_U32(a1, 6564);
  FIELD_U32(a1, 6328) = v16;
  v17 = FIELD_U32(a1, 6576);
  v18 = FIELD_U32(a1, 6580);
  FIELD_U32(a1, 6336) = FIELD_U32(a1, 6572);
  FIELD_U32(a1, 6340) = v17;
  FIELD_U32(a1, 6344) = v18;
  SE_EMY_BIG_HANACHAN_DIVE_NUMA_ref(a1 + 6316);
  v19 = sub_6000F7B8(FIELD_F32(a1, 6568) - FIELD_F32(a1, 6600), FIELD_F32(a1, 6564) - FIELD_F32(a1, 6596));
  if ( FIELD_U32(a1, 80) == 1 )
    v19 = 0x80000000 - v19;
  *(_DWORD *)&out.field_0 = v19;
  *(_DWORD *)&position.field_0 = 0x1000000;
  moveValueTo((int *)(a1 + 6368), (int *)&out.field_0, (int *)&position.field_0);
  v20 = 0;
  do
  {
    ++v20;
    v21 = 0.0;
    v22 = 1;
    v23 = (float *)(a1 + 6616);
    v24 = (_DWORD *)*v12;
    v25 = (float)v20 * 29.0;
    while ( 1 )
    {
      v26 = v21 + *(v23 - 8);
      if ( v25 < v26 )
      {
        v28 = v21;
        --v22;
        goto LABEL_30;
      }
      v21 = v26 + *v23;
      if ( v25 < v21 )
        break;
      v23 += 16;
      v27 = v22 + 1 < 120;
      v22 += 2;
      if ( !v27 )
        goto LABEL_31;
    }
    v28 = v26;
    v26 = v26 + *v23;
LABEL_30:
    v29 = a1 + 32 * v22;
    v30 = (float)(v25 - v28) / (float)(v26 - v28);
    *(float *)&v31 = FIELD_F32(v29, 6536) + (float)(v30 * (float)(FIELD_F32(v29, 6568) - FIELD_F32(v29, 6536)));
    *(float *)&position.field_0 = FIELD_F32(v29, 6532)
                                + (float)(v30 * (float)(FIELD_F32(v29, 6564) - FIELD_F32(v29, 6532)));
    position.field_4 = v31;
    position.field_10 = FIELD_U32(v29, 6548);
    position.field_C = FIELD_U32(v29, 6544);
    position.field_8 = FIELD_U32(v29, 6540);
    position.field_1C = FIELD_U32(v29, 6560);
    position.field_18 = FIELD_U32(v29, 6556);
    (*(void (__fastcall **)(_DWORD *, TileCheck *))(*v24 + 12))(v24, &position);
LABEL_31:
    v12 = v24 + 46;
  }
  while ( v20 != 4 );
  if ( sub_60257E24(a1 + 6316, v23) == 0.0 )
  {
    if ( FIELD_U8(a1, 6388)
      || (v32 = FIELD_U32(a1, 6500), FIELD_U8(v32, 72))
      || (v33 = FIELD_U32(v32, 184), FIELD_U8(v33, 72))
      || (v34 = FIELD_U32(v33, 184), FIELD_U8(v34, 72))
      || *(_BYTE *)(FIELD_U32(v34, 184) + 72) )
    {
      v35 = FIELD_U32(a1, 112);
      v36 = Global_BasicSoundActor1;
      *(_DWORD *)&position.field_0 = FIELD_U32(a1, 108);
      position.field_4 = v35;
      mapPositionToScreen((Vec2 *)&out, (Vec3 *)&position);
      BasicSoundActor1_playSound(v36, "SE_EMY_BIG_HANACHAN_WALK_NUMA", (int)&out, 0);
    }
  }
}
