/* sub_6024EB20
 * address: 0x6024EB20   size: 792   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6024EB20(int a1)
{
  unsigned int v2; // r0
  int v3; // r1
  ActiveColliderMgr *v4; // r6
  ActiveColliderMgr *v5; // r6
  unsigned int v6; // r1
  int v7; // r0
  int v8; // r1
  int *v9; // r1
  int v10; // s2

  v2 = FIELD_U32(a1, 20);
  FIELD_U8(a1, 6352) = (v2 & 0x1000) != 0;
  v3 = HIWORD(v2) & 0xF;
  if ( !v3 )
    v3 = 3;
  FIELD_U32(a1, 6356) = v3;
  FIELD_U8(a1, 6360) = (v2 & 0x10000000) != 0;
  FIELD_U32(a1, 6336) = 0;
  if ( sub_6068C438(MaskMgr_instance) == 1 )
    FIELD_U32(a1, 6336) = 1;
  FIELD_U8(a1, 6056) = 1;
  ((void (__fastcall *)(int))loc_6024F4A8)(a1);
  ((void (__fastcall *)(int))loc_6024F660)(a1);
  sub_6024F818(a1);
  FIELD_U32(a1, 6312) = FIELD_U32(a1, 6300);
  FIELD_U32(a1, 144) = 1065353216;
  FIELD_U32(a1, 148) = 1065353216;
  FIELD_U32(a1, 152) = 1065353216;
  FIELD_U32(a1, 116) = 1164394496;
  ActiveCollider__init((ActiveCollider *)(a1 + 188), (StageActor *)a1, (ActiveColliderInfo *)&unk_60BDA4B0, 0);
  FIELD_U32(a1, 572) = 0;
  FIELD_U32(a1, 576) = 1090519040;
  FIELD_U32(a1, 580) = 0;
  v4 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188))
    && !ActiveColliderMgr_isInCreateList(v4, (ActiveCollider *)(a1 + 188)) )
  {
    ActiveColliderMgr_addToCreateList(v4, (ActiveCollider *)(a1 + 188));
  }
  ActiveCollider__init((ActiveCollider *)(a1 + 11820), (StageActor *)a1, &stru_60AFD778, 0);
  v5 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 11820))
    && !ActiveColliderMgr_isInCreateList(v5, (ActiveCollider *)(a1 + 11820)) )
  {
    ActiveColliderMgr_addToCreateList(v5, (ActiveCollider *)(a1 + 11820));
  }
  FIELD_U32(a1, 11932) = a1 + 12172;
  FIELD_U32(a1, 620) = a1 + 6384;
  FIELD_U32(a1, 6400) = 3;
  FIELD_U32(a1, 624) = a1 + 6420;
  FIELD_U32(a1, 6448) = 1;
  FIELD_U32(a1, 6244) = 1;
  FIELD_U32(a1, 156) = 0x80000000;
  FIELD_U32(a1, 160) = 0x80000000;
  FIELD_U32(a1, 164) = 0;
  FIELD_U32(a1, 80) = StageActor__directionToPlayerX((StateActor *)a1, (Vec3 *)(a1 + 108));
  v6 = FIELD_U32(a1, 20);
  v7 = (unsigned __int8)v6;
  FIELD_U32(a1, 6340) = (unsigned __int8)v6;
  v8 = (v6 >> 8) & 1;
  FIELD_U32(a1, 6344) = v8;
  FIELD_U32(a1, 120) = 0;
  FIELD_U32(a1, 124) = 0;
  FIELD_U32(a1, 128) = 0;
  FIELD_U32(a1, 492) = 0;
  FIELD_U32(a1, 496) = 1090519040;
  FIELD_U32(a1, 516) = 1107296256;
  FIELD_U32(a1, 520) = 1107296256;
  FIELD_U32(a1, 524) = 1115684864;
  FIELD_U32(a1, 528) = 1115684864;
  if ( v8 || !v7 )
    v9 = &dword_60C8DDD8;
  else
    v9 = &dword_60C8DE58;
  (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, v9);
  if ( FIELD_U8(a1, 6360) )
  {
    FIELD_U32(a1, 6364) = FIELD_U8(a1, 28);
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C8DD98);
  }
  if ( FIELD_U8(a1, 30) )
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C8DE18);
  FIELD_F64(a1, 12144) = ((double (__fastcall *)(int))**(_DWORD **)(a1 + 12140))(a1 + 12140);
  FIELD_U32(a1, 12152) = v10;
  sub_6024EE5C(a1);
  skl_root_ref_24F1F8(a1);
  return 1;
}
