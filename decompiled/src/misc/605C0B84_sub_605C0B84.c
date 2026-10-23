/* sub_605C0B84
 * address: 0x605C0B84   size: 484   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605C0B84(int a1)
{
  unsigned int v2; // r0
  int v3; // r9
  int v4; // r1
  CollisionMgr *v5; // r0
  int v6; // r0
  unsigned int v7; // r0
  int v8; // r6
  float v9; // r1
  float v10; // r2
  Vec3 v12; // [sp+8h] [bp-38h] BYREF

  v2 = FIELD_U32(a1, 20);
  v3 = (v2 >> 4) & 3;
  FIELD_U8(a1, 6974) = v3;
  FIELD_U8(a1, 552) = HIBYTE(v2) & 0xF;
  v4 = ((v2 & 0x40000) != 0) | 2;
  v5 = (CollisionMgr *)(a1 + 648);
  FIELD_F32(a1, 108) = FIELD_F32(a1, 108) + 8.0;
  FIELD_F32(a1, 112) = FIELD_F32(a1, 112) + -16.0;
  if ( v4 == 2 )
  {
    CollisionMgr_init(v5, (StateActor *)a1, 0, &stru_60B055D0, 0);
    v6 = 1073741828;
  }
  else
  {
    CollisionMgr_init(v5, (StateActor *)a1, 0, &stru_60B055DC, 0);
    v6 = 0x40000000;
  }
  FIELD_U32(a1, 3192) |= v6;
  sub_605B2C10(a1, FIELD_F32(a1, 112));
  v7 = FIELD_U32(a1, 20);
  v8 = HIWORD(v7) & 3;
  FIELD_U8(a1, 84) = BYTE2(v7) & 3;
  FIELD_U16(a1, 6972) = 0;
  if ( (v7 & 0xF000) == 0 )
  {
    FIELD_U32(a1, 144) = 1065353216;
    FIELD_U32(a1, 148) = 1065353216;
    FIELD_U32(a1, 152) = 1065353216;
    if ( FIELD_U8(a1, 6974) != 3 )
    {
      ShapedCollider_init((ShapedCollider *)(a1 + 6120), (StageActor *)a1, (ShapedColliderInfo *)&dword_60CB09C0);
      FIELD_U32(a1, 6432) = sub_605B30CC;
      FIELD_U32(a1, 6436) = sub_605B3934;
      ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 6120));
      FIELD_U32(a1, 124) = 1065353216;
      FIELD_U16(a1, 6972) = 1;
      FIELD_U8(a1, 6846) = 1;
      v7 = FIELD_U32(a1, 20);
    }
  }
  FIELD_U16(a1, 6968) = 4;
  FIELD_U8(a1, 6843) = 1;
  BlockFragmentHeap_ref((sead_ListNode *)dword_60C99CDC, (_DWORD *)(a1 + 108), (v7 >> 12) & 0xF00 | v3, v8);
  v9 = FIELD_F32(a1, 112);
  v10 = FIELD_F32(a1, 116);
  v12.x = FIELD_F32(a1, 108);
  v12.z = v10;
  v12.y = v9 + 8.0;
  Pa0_jyotyu_ref(dword_60CB061C, &v12);
  return 1;
}
