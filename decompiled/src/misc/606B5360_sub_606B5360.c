/* sub_606B5360
 * address: 0x606B5360   size: 472   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606B5360(int a1)
{
  ActiveColliderMgr *v2; // r6
  _DWORD v4[2]; // [sp+8h] [bp-50h] BYREF
  SolidOnTopColliderInfo info; // [sp+10h] [bp-48h] BYREF
  _DWORD v6[12]; // [sp+28h] [bp-30h] BYREF

  FIELD_U32(a1, 6148) = 0;
  FIELD_U32(a1, 6152) = 1092616192;
  FIELD_U32(a1, 144) = 1069547520;
  FIELD_U32(a1, 148) = 1069547520;
  FIELD_U32(a1, 152) = 1069547520;
  ((void (__fastcall *)(int))loc_606B61B0)(a1);
  met_pata_ref(a1);
  memset(&info, 0, 16);
  v6[0] = -1046740992;
  v6[1] = 0;
  v6[2] = -1052770304;
  v6[3] = 1092616192;
  v6[4] = 1094713344;
  v6[5] = 1092616192;
  v6[6] = 1100742656;
  v6[7] = 0;
  info.points = (Vec2 *)v6;
  info.rotation = 0;
  SolidOnTopCollider_init((SolidOnTopCollider *)(a1 + 6632), (StageActor *)a1, &info);
  FIELD_U32(a1, 6856) = 4;
  v4[0] = 1115684864;
  v4[1] = 1115684864;
  sub_6069AFA0(a1 + 6108, a1 + 108, (_DWORD *)(a1 + 492), v4, (ColliderBase *)(a1 + 6632));
  LOBYTE(v6[0]) = 3;
  ActiveCollider_init2(
    (ActiveCollider *)(a1 + 188),
    (StateActor *)a1,
    (ActiveColliderInfo *)&unk_60C1AF48,
    (unsigned __int8 *)v6,
    0);
  FIELD_U32(a1, 7224) = 0;
  FIELD_U8(a1, 7228) = 0;
  LOBYTE(v6[0]) = 3;
  ActiveCollider_init2((ActiveCollider *)(a1 + 6264), (StateActor *)a1, &stru_60B08724, (unsigned __int8 *)v6, 0);
  FIELD_U32(a1, 6376) = a1 + 6568;
  v2 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 6264))
    && !ActiveColliderMgr_isInCreateList(v2, (ActiveCollider *)(a1 + 6264)) )
  {
    ActiveColliderMgr_addToCreateList(v2, (ActiveCollider *)(a1 + 6264));
  }
  FIELD_U32(a1, 508) = 1107296256;
  FIELD_U32(a1, 512) = 1107296256;
  sub_606B65D8(a1);
  (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CBA478);
  return 1;
}
