/* sub_6064FBDC
 * address: 0x6064FBDC   size: 772   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6064FBDC(int a1)
{
  float v2; // s0
  float v3; // s16
  float v4; // s18
  int v5; // r0
  __int64 v6; // r2
  char v7; // r0
  unsigned int v8; // r1
  int v9; // r6
  int v10; // r0
  __int16 v11; // r1
  float v12; // r1
  StateBase *v13; // r1
  Vec2 position; // [sp+8h] [bp-88h] BYREF
  ShapedColliderInfo v16; // [sp+10h] [bp-80h] BYREF
  SolidOnTopColliderInfo info; // [sp+38h] [bp-58h] BYREF
  float v18[16]; // [sp+50h] [bp-40h] BYREF

  sub_6064FEF8();
  sub_6064D604(a1);
  v2 = (float)((float)((FIELD_U32(a1, 24) >> 8) & 0xF) + 7.0) * 16.0;
  v3 = v2 * -0.5;
  v4 = v2 * 0.5;
  FIELD_F32(a1, 7576) = v2 * -0.5;
  FIELD_U32(a1, 144) = 1065353216;
  FIELD_U32(a1, 148) = 1065353216;
  FIELD_U32(a1, 152) = 1065353216;
  FIELD_U32(a1, 7524) = 0;
  memset(&info, 0, 16);
  v18[0] = v2 * -0.5;
  v18[1] = 8.0;
  info.points = (Vec2 *)v18;
  v18[2] = v2 * 0.5;
  v18[3] = 8.0;
  info.rotation = 0;
  SolidOnTopCollider_init((SolidOnTopCollider *)(a1 + 6104), (StageActor *)a1, &info);
  FIELD_U32(a1, 6276) = 0;
  FIELD_U32(a1, 6280) = 0;
  FIELD_U32(a1, 6428) = sub_60650050;
  FIELD_U32(a1, 6328) = 4;
  v5 = FIELD_U32(a1, 6456);
  v6 = FIELD_U64(v5, 24);
  HIDWORD(v6) = HIDWORD(v6) & 0xFFFFFF0F | 0x20;
  FIELD_U64(v5, 24) = v6;
  ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 6104));
  memset(&v16, 0, 16);
  v16.topLeft.x = FIELD_F32(a1, 7576);
  v16.topLeft.y = 8.0;
  LODWORD(v16.bottomRight.x) = LODWORD(v16.topLeft.x) ^ 0x80000000;
  v16.bottomRight.y = -8.0;
  v16.rotation = 0;
  ShapedCollider_init((ShapedCollider *)(a1 + 6592), (StageActor *)a1, &v16);
  ColliderBase_setSolidity((ColliderBase *)(a1 + 6592), 0);
  FIELD_U32(a1, 6928) = a1 + 7248;
  ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 6592));
  FIELD_U32(a1, 6560) = FIELD_U32(a1, 7576);
  v7 = 1;
  FIELD_U32(a1, 6556) = 1;
  FIELD_U8(a1, 6552) = -1;
  FIELD_U32(a1, 6564) = 0;
  FIELD_U32(a1, 492) = 0;
  FIELD_U32(a1, 496) = 0;
  FIELD_U32(a1, 500) = 1137508352;
  FIELD_U32(a1, 504) = 1098907648;
  FIELD_U32(a1, 508) = 1137508352;
  FIELD_U32(a1, 512) = 1098907648;
  FIELD_U32(a1, 164) = 0;
  FIELD_U8(a1, 7570) = 0;
  v8 = FIELD_U32(a1, 20);
  v9 = (v8 >> 4) & 3;
  if ( v9 )
  {
    if ( v9 != 1 )
      goto LABEL_5;
    v7 = sub_6078A030(PlayerMgr_instance);
    v8 = FIELD_U32(a1, 20);
  }
  FIELD_U8(a1, 7564) = v7;
LABEL_5:
  v10 = HIWORD(v8) & 0xF;
  v11 = 320;
  if ( v10 )
    v11 = (_WORD)v10 << 6;
  FIELD_U16(a1, 7560) = v11;
  FIELD_U16(a1, 7562) = v11;
  FIELD_U8(a1, 7567) = 0;
  FIELD_U8(a1, 7569) = 0;
  v12 = FIELD_F32(a1, 112);
  position.x = FIELD_F32(a1, 108);
  position.y = v12;
  LineFollower_init((LineFollower *)(a1 + 7380), &position, FIELD_U8(a1, 86), 1, 0);
  FIELD_F32(a1, 7424) = v4;
  FIELD_U32(a1, 7428) = 0;
  FIELD_F32(a1, 7432) = v3;
  FIELD_U32(a1, 7436) = 0;
  ((void (__fastcall *)(int, _DWORD))LineFollower_start)(a1 + 7380, 0);
  FIELD_F32(a1, 112) = FIELD_F32(a1, 7484) + 4.0;
  sub_60650090(a1);
  if ( v9 == 2 )
    v13 = &stru_60CB6170;
  else
    v13 = (StateBase *)&dword_60CB6150;
  StateMgr__changeState((StateMgr *)(a1 + 6084), v13);
  return 1;
}
