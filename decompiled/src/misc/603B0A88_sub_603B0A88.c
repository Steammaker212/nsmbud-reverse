/* sub_603B0A88
 * address: 0x603B0A88   size: 552   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_603B0A88(int a1)
{
  int v2; // r0
  signed int v3; // r0
  float v4; // s4
  float v5; // s6
  ActiveColliderMgr *v6; // r6
  int v7; // s2
  Vec3 a3; // [sp+14h] [bp-24h] BYREF

  v2 = FIELD_U32(a1, 20);
  FIELD_U32(a1, 6456) = v2 & 0xF;
  FIELD_U8(a1, 6609) = BYTE1(v2) & 1;
  sub_603B0CC0(a1);
  v3 = StageActor__directionToPlayerX((StateActor *)a1, (Vec3 *)(a1 + 108));
  FIELD_U32(a1, 80) = v3;
  FIELD_U32(a1, 620) = 0;
  FIELD_U32(a1, 624) = a1 + 6500;
  FIELD_U32(a1, 6528) = 1;
  FIELD_U32(a1, 492) = 0;
  FIELD_U32(a1, 496) = 0;
  FIELD_U32(a1, 500) = 1115684864;
  FIELD_U32(a1, 504) = 1115684864;
  FIELD_U32(a1, 572) = 0;
  FIELD_U32(a1, 576) = 1090519040;
  FIELD_U32(a1, 580) = 0;
  FIELD_U32(a1, 144) = 1065353216;
  FIELD_U32(a1, 148) = 1065353216;
  FIELD_U32(a1, 152) = 1065353216;
  FIELD_U32(a1, 160) = Enemy_CommonRotations[v3];
  ActiveCollider__init((ActiveCollider *)(a1 + 188), (StageActor *)a1, (ActiveColliderInfo *)&unk_60BF53CC, a1 + 6648);
  v4 = FIELD_F32(a1, 112);
  v5 = FIELD_F32(a1, 6436);
  FIELD_F32(a1, 304) = FIELD_F32(a1, 6432) - FIELD_F32(a1, 108);
  FIELD_F32(a1, 308) = v5 - v4;
  FIELD_U32(a1, 312) = 1092616192;
  FIELD_U32(a1, 316) = 1092616192;
  FIELD_U32(a1, 320) = 1;
  v6 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188))
    && !ActiveColliderMgr_isInCreateList(v6, (ActiveCollider *)(a1 + 188)) )
  {
    ActiveColliderMgr_addToCreateList(v6, (ActiveCollider *)(a1 + 188));
  }
  sub_603B1028(a1);
  a3.x = FIELD_F32(a1, 108) + FIELD_F32(a1, 572);
  a3.y = FIELD_F32(a1, 112) + FIELD_F32(a1, 576);
  a3.z = FIELD_F32(a1, 116) + FIELD_F32(a1, 580);
  LightSource_update1((LightSource *)(a1 + 6536), 18, &a3, 0, 0, 0, 0, 0, 0);
  LightSource_unkUpdate3((LightSource *)(a1 + 6536));
  FIELD_F64(a1, 6620) = ((double (__fastcall *)(int))**(_DWORD **)(a1 + 6616))(a1 + 6616);
  FIELD_U32(a1, 6628) = v7;
  (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C97C04);
  FIELD_U32(a1, 492) = 0;
  FIELD_U32(a1, 496) = 0;
  FIELD_U32(a1, 500) = 1115684864;
  FIELD_U32(a1, 504) = 1115684864;
  return 1;
}
