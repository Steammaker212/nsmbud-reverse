/* sub_60593B98
 * address: 0x60593B98   size: 1640   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_60593B98(int a1)
{
  int v2; // r5
  _BYTE *v3; // r7
  unsigned int v4; // r0
  _DWORD *v5; // r0
  _DWORD *v6; // r0
  float v7; // r1
  ColliderBase *v8; // r1
  int v9; // s2
  int v10; // r6
  float *v11; // r7
  float v12; // s0
  float v13; // s0
  float v14; // s0
  int v15; // r1
  int v16; // r0
  float v17; // s0
  _DWORD v19[6]; // [sp+8h] [bp-68h] BYREF
  ShapedColliderInfo v20[2]; // [sp+20h] [bp-50h] BYREF

  v2 = 0;
  FIELD_U8(a1, 8215) = 0;
  v3 = (_BYTE *)(a1 + 8215);
  FIELD_U8(a1, 8215) = FIELD_U32(dword_60C99DD4, 764) == 3;
  FIELD_U32(a1, 7744) = 0;
  FIELD_U32(a1, 7752) = 0;
  FIELD_U8(a1, 7748) = 0;
  FIELD_U8(a1, 7756) = 0;
  v4 = FIELD_U32(a1, 20);
  FIELD_U8(a1, 8160) = v4 & 0xF;
  FIELD_U32(a1, 8216) = (v4 >> 20) & 1;
  FIELD_F32(a1, 112) = FIELD_F32(a1, 112) + -3.0;
  shell_fish_ref(a1);
  FIELD_U32(a1, 620) = a1 + 8224;
  FIELD_U32(a1, 8240) = 1;
  FIELD_U32(a1, 144) = 1065353216;
  FIELD_U32(a1, 148) = 1065353216;
  FIELD_U32(a1, 152) = 1065353216;
  FIELD_U32(a1, 492) = 0;
  FIELD_U32(a1, 496) = 0;
  FIELD_U32(a1, 500) = 1132462080;
  FIELD_U32(a1, 504) = 1132462080;
  FIELD_U32(a1, 508) = 1111490560;
  FIELD_U32(a1, 512) = 1111490560;
  LOBYTE(v20[0].distToCenter.x) = 3;
  ActiveCollider_init2(
    (ActiveCollider *)(a1 + 188),
    (StateActor *)a1,
    (ActiveColliderInfo *)&unk_60C07530,
    (unsigned __int8 *)v20,
    0);
  LOBYTE(v20[0].distToCenter.x) = 3;
  ActiveCollider_init2(
    (ActiveCollider *)(a1 + 7840),
    (StateActor *)a1,
    (ActiveColliderInfo *)&unk_60C0755C,
    (unsigned __int8 *)v20,
    0);
  FIELD_U8(a1, 7949) = FIELD_U8(a1, 86);
  FIELD_U8(a1, 6113) = 0;
  FIELD_U8(a1, 6112) = 0;
  FIELD_U32(a1, 6116) = 0;
  FIELD_U8(a1, 6121) = 0;
  FIELD_U8(a1, 6120) = 0;
  FIELD_U32(a1, 6124) = 0;
  FIELD_U8(a1, 6129) = 0;
  FIELD_U8(a1, 6128) = 0;
  FIELD_U32(a1, 6132) = 0;
  FIELD_U8(a1, 6137) = 0;
  FIELD_U8(a1, 6136) = 0;
  FIELD_U32(a1, 6140) = 0;
  FIELD_U8(a1, 6145) = 0;
  FIELD_U8(a1, 6144) = 0;
  FIELD_U32(a1, 6280) = 0;
  FIELD_U32(a1, 6284) = 0;
  FIELD_U16(a1, 6156) = 0;
  FIELD_U32(a1, 6152) = 0;
  FIELD_U32(a1, 6148) = 0;
  FIELD_U16(a1, 6168) = 0;
  FIELD_U32(a1, 6164) = 0;
  FIELD_U32(a1, 6160) = 0;
  FIELD_U16(a1, 6180) = 0;
  FIELD_U32(a1, 6176) = 0;
  FIELD_U32(a1, 6172) = 0;
  FIELD_U16(a1, 6192) = 0;
  FIELD_U32(a1, 6188) = 0;
  FIELD_U32(a1, 6184) = 0;
  FIELD_U16(a1, 6204) = 0;
  FIELD_U32(a1, 6200) = 0;
  FIELD_U32(a1, 6196) = 0;
  FIELD_U16(a1, 6216) = 0;
  FIELD_U32(a1, 6212) = 0;
  FIELD_U32(a1, 6208) = 0;
  FIELD_U16(a1, 6228) = 0;
  FIELD_U32(a1, 6224) = 0;
  FIELD_U32(a1, 6220) = 0;
  FIELD_U16(a1, 6240) = 0;
  FIELD_U32(a1, 6236) = 0;
  FIELD_U32(a1, 6232) = 0;
  FIELD_U16(a1, 6252) = 0;
  FIELD_U32(a1, 6248) = 0;
  FIELD_U32(a1, 6244) = 0;
  FIELD_U16(a1, 6264) = 0;
  FIELD_U32(a1, 6260) = 0;
  FIELD_U32(a1, 6256) = 0;
  FIELD_U16(a1, 6276) = 0;
  FIELD_U32(a1, 6272) = 0;
  FIELD_U32(a1, 6268) = 0;
  CollisionMgr_init((CollisionMgr *)(a1 + 648), (StateActor *)a1, &stru_60B04CE8, 0, &stru_60B04CF4);
  if ( FIELD_U8(a1, 30) )
  {
    FIELD_U32(a1, 8176) = 0;
    sub_605943EC(a1, 1);
    v5 = **(_DWORD ***)(FIELD_U32(a1, 6104) + 12);
    v5[5] = v5[2];
    v5[7] |= 2u;
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CAF848);
  }
  else
  {
    v6 = (_DWORD *)(a1 + 8176);
    if ( (FIELD_U8(a1, 20) & 0xF0) != 0 )
    {
      v2 = 0;
      *v6 = 0;
      (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CAF788);
    }
    else
    {
      *v6 = 1065353216;
      (*(void (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60CAF7E8);
      v2 = 1;
    }
  }
  if ( *v3 )
  {
    memset(v20, 0, 16);
    v20[0].topLeft.x = -32.0;
    if ( v2 )
      v7 = 70.0;
    else
      v7 = 40.0;
    v20[0].topLeft.y = v7;
    v20[0].bottomRight.x = 32.0;
    v20[0].bottomRight.y = 0.0;
    v20[0].rotation = 0;
    ShapedCollider_init((ShapedCollider *)(a1 + 7088), (StageActor *)a1, v20);
    v8 = (ColliderBase *)(a1 + 7088);
  }
  else
  {
    memset(v20, 0, 48);
    memset(v19, 0, 16);
    v19[4] = v20;
    v19[5] = 0;
    sub_60161E18((_DWORD *)(a1 + 6288), a1, v19);
    FIELD_U32(a1, 6604) = sub_60595760;
    FIELD_U32(a1, 6616) = sub_605958FC;
    sub_60595A64(a1, v2);
    ShapedCollider_execute((ColliderBase *)(a1 + 6288));
    FIELD_U32(a1, 6624) = a1 + 8292;
    v8 = (ColliderBase *)(a1 + 6288);
  }
  ColliderMgr_add(ColliderMgr_instance, v8);
  FIELD_F64(a1, 8264) = ((double (__fastcall *)(int))**(_DWORD **)(a1 + 8260))(a1 + 8260);
  FIELD_U32(a1, 8272) = v9;
  sub_6059454C(a1);
  switch ( FIELD_U8(a1, 8160) )
  {
    case 1:
      sub_6059680C(a1);
      break;
    case 2:
      sub_605969F8(a1);
      break;
    case 3:
      sub_60596D08(a1);
      break;
    case 4:
      sub_60596ED8(a1);
      break;
    default:
      break;
  }
  FIELD_U8(a1, 8214) = 1;
  if ( FIELD_U32(a1, 8216) )
  {
    v10 = 1132789760;
    FIELD_U32(a1, 8180) = 1132789760;
    v11 = (float *)(a1 + 8180);
    LightMask__init((RevealMaskRelated *)(a1 + 7760), 0, 2);
    v12 = FIELD_F32(a1, 8180);
    if ( FIELD_U8(a1, 8214) )
    {
      v13 = v12 + 33.25;
      *v11 = v13;
      if ( v13 < 266.0 )
      {
        v10 = LODWORD(v13);
LABEL_25:
        v15 = FIELD_U32(a1, 7800);
        v16 = FIELD_U32(a1, 7808);
        v17 = FIELD_F32(a1, 7804);
        FIELD_U32(a1, 7764) = v10;
        FIELD_U32(a1, 7772) = v15;
        FIELD_F32(a1, 7776) = v17 + 8.0;
        FIELD_U32(a1, 7780) = v16;
        LightMask__update((LightMask *)(a1 + 7760));
        return 1;
      }
    }
    else
    {
      v14 = v12 + -33.25;
      *v11 = v14;
      if ( v14 > 0.0 )
      {
        v10 = LODWORD(v14);
        goto LABEL_25;
      }
      v10 = 0;
    }
    *(_DWORD *)v11 = v10;
    goto LABEL_25;
  }
  return 1;
}
