/* sub_606B7B88
 * address: 0x606B7B88   size: 532   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606B7B88(int a1)
{
  ActiveColliderMgr *v2; // r6
  ActiveColliderMgr *v3; // r6
  _DWORD v5[2]; // [sp+8h] [bp-60h] BYREF
  SolidOnTopColliderInfo info; // [sp+10h] [bp-58h] BYREF
  _DWORD v7[16]; // [sp+28h] [bp-40h] BYREF

  FIELD_U32(a1, 6148) = 1;
  FIELD_U32(a1, 6152) = 1109393408;
  FIELD_U32(a1, 144) = 1065353216;
  FIELD_U32(a1, 148) = 1065353216;
  FIELD_U32(a1, 152) = 1065353216;
  ((void (__fastcall *)(int))loc_606B61B0)(a1);
  met_pataBig_ref(a1);
  memset(&info, 0, 16);
  v7[0] = -1037041664;
  v7[1] = 0;
  v7[2] = -1044381696;
  v7[3] = 1105199104;
  v7[4] = 1103101952;
  v7[5] = 1105199104;
  v7[6] = 1110441984;
  v7[7] = 0;
  info.points = (Vec2 *)v7;
  info.rotation = 0;
  SolidOnTopCollider_init((SolidOnTopCollider *)(a1 + 6632), (StageActor *)a1, &info);
  FIELD_U32(a1, 6856) = 4;
  v5[0] = 1115684864;
  v5[1] = 1115684864;
  sub_6069AFA0(a1 + 6108, a1 + 108, (_DWORD *)(a1 + 492), v5, (ColliderBase *)(a1 + 6632));
  LOBYTE(v7[0]) = 3;
  ActiveCollider_init2(
    (ActiveCollider *)(a1 + 188),
    (StateActor *)a1,
    (ActiveColliderInfo *)&unk_60C1B1D8,
    (unsigned __int8 *)v7,
    0);
  v2 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188))
    && !ActiveColliderMgr_isInCreateList(v2, (ActiveCollider *)(a1 + 188)) )
  {
    ActiveColliderMgr_addToCreateList(v2, (ActiveCollider *)(a1 + 188));
  }
  LOBYTE(v7[0]) = 3;
  ActiveCollider_init2((ActiveCollider *)(a1 + 6264), (StateActor *)a1, &stru_60B08784, (unsigned __int8 *)v7, 0);
  FIELD_U32(a1, 6376) = a1 + 6568;
  v3 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 6264))
    && !ActiveColliderMgr_isInCreateList(v3, (ActiveCollider *)(a1 + 6264)) )
  {
    ActiveColliderMgr_addToCreateList(v3, (ActiveCollider *)(a1 + 6264));
  }
  FIELD_U32(a1, 508) = 1115684864;
  FIELD_U32(a1, 512) = 1115684864;
  sub_606B65D8(a1);
  (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CBA478);
  return 1;
}
