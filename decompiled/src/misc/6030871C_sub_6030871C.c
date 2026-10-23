/* sub_6030871C
 * address: 0x6030871C   size: 988   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6030871C(int a1)
{
  int *v2; // r8
  int v3; // s2
  char v4; // r12
  int v5; // s2
  ActiveColliderMgr *v6; // r6
  int v7; // r0
  int v8; // r1
  int ProfileId; // r0
  int *v10; // r2
  ActorBuildInfo out; // [sp+4h] [bp-44h] BYREF

  FIELD_U32(a1, 6552) = 0;
  v2 = (int *)(a1 + 6552);
  if ( Actor__getProfileId((Actor *)a1) == 622 )
    *v2 = 1;
  FIELD_U32(a1, 6536) = FIELD_U32(a1, 116);
  sub_60308B44((_DWORD *)a1);
  if ( FIELD_U32(dword_60C99DD4, 764) == 4 )
    sub_60003D84((_DWORD *)a1);
  FIELD_U32(a1, 572) = 0;
  FIELD_U32(a1, 576) = 1090519040;
  FIELD_U32(a1, 580) = 0;
  FIELD_U32(a1, 120) = 0;
  FIELD_U32(a1, 124) = 0;
  FIELD_U32(a1, 128) = 0;
  FIELD_U32(a1, 6556) = 900;
  FIELD_U32(a1, 6560) = 600 * (FIELD_U16(a1, 22) & 0xF);
  FIELD_U32(a1, 492) = 0;
  FIELD_U32(a1, 496) = 0;
  FIELD_U32(a1, 500) = 1115684864;
  FIELD_U32(a1, 504) = 1107296256;
  FIELD_U32(a1, 508) = 1115684864;
  FIELD_U32(a1, 512) = 1107296256;
  if ( !FIELD_U8(dword_60CC6D8C, 17) )
  {
    FIELD_F64(a1, 6920) = ((double (__fastcall *)(int))**(_DWORD **)(a1 + 6916))(a1 + 6916);
    FIELD_U32(a1, 6928) = v3;
  }
  if ( *v2 == 1 )
  {
    FIELD_U32(a1, 144) = 964689877;
    FIELD_U32(a1, 148) = 964689877;
    FIELD_U32(a1, 152) = 964689877;
    *(_DWORD *)(**(_DWORD **)(FIELD_U32(a1, 6300) + 12) + 24) = 0;
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C92F88);
  }
  else if ( (FIELD_U8(a1, 21) & 1) != 0 )
  {
    FIELD_F32(a1, 108) = FIELD_F32(dword_60CC6484, 112) + (float)(128.0 / FIELD_F32(dword_60CC6484, 16));
    FIELD_U32(a1, 80) = 0;
    FIELD_U32(a1, 160) = 0;
    FIELD_U32(a1, 144) = 964689877;
    FIELD_U32(a1, 148) = 964689877;
    FIELD_U32(a1, 152) = 964689877;
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C92FA8);
  }
  else
  {
    StageActor__distanceToPlayer((StateActor *)a1, (Vec2 *)&out);
    FIELD_U32(a1, 80) = *(float *)&out.settings1 < 0.0;
    FIELD_U32(a1, 144) = 1067450368;
    FIELD_U32(a1, 148) = 1067450368;
    FIELD_U32(a1, 152) = 1067450368;
    if ( ((unsigned int)&unk_60C93050 & ~(1613793484 << v4) & 1) == 0 && _cxa_guard_acquire((__guard *)&unk_60C93050) )
    {
      dword_60C9305C = 0x40000000;
      dword_60C93060 = -1073741824;
      _cxa_guard_release((__guard *)&unk_60C93050);
    }
    FIELD_U32(a1, 160) = *((_DWORD *)&unk_60C93050 + FIELD_U32(a1, 80) + 3);
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C92FC8);
  }
  if ( FIELD_U8(dword_60CC6D8C, 17) )
  {
    FIELD_F64(a1, 6920) = ((double (__fastcall *)(int))**(_DWORD **)(a1 + 6916))(a1 + 6916);
    FIELD_U32(a1, 6928) = v5;
  }
  LOBYTE(out.settings1) = 3;
  ActiveCollider_init2((ActiveCollider *)(a1 + 6612), (StateActor *)a1, &stru_60AFF1CC, (unsigned __int8 *)&out, 0);
  FIELD_U32(a1, 6724) = a1 + 6948;
  v6 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 6612))
    && !ActiveColliderMgr_isInCreateList(v6, (ActiveCollider *)(a1 + 6612)) )
  {
    ActiveColliderMgr_addToCreateList(v6, (ActiveCollider *)(a1 + 6612));
  }
  skl_root_ref_308D1C(a1);
  v7 = *v2;
  memset(&out.field_1C, 0, 12);
  v8 = FIELD_U32(a1, 20);
  if ( v7 == 1 )
    v8 |= 2u;
  out.settings1 = v8;
  out.settings2 = FIELD_U32(a1, 24);
  ProfileId = Actor__getProfileId((Actor *)a1);
  v10 = &dword_60AF36E8;
  if ( ProfileId == 623 )
    v10 = &dword_60AF36EC;
  out.profile = Profile__get(*v10);
  out.parentId = FIELD_U32(a1, 8);
  out.position = *(Vec3 *)(a1 + 108);
  *(_WORD *)&out.field_20 = 0;
  out.eventId2 = 0;
  out.field_28 = 0;
  ActorMgr__create((void *)ActorMgr__instance, &out, 0);
  return 1;
}
