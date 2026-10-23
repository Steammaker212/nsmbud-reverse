/* Skl_root_ref
 * address: 0x600A7D18   size: 552   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Skl_root_ref(int a1)
{
  ActiveColliderMgr *v2; // r6
  int v3; // r1
  int v4; // r2
  int v5; // r0
  int v6; // r0
  int v7; // r0
  int (__fastcall *v8)(int, _DWORD *); // r2
  _DWORD v10[6]; // [sp+8h] [bp-18h] BYREF

  qmemcpy((void *)(a1 + 144), "fff?fff?fff?", 12);
  FIELD_U32(a1, 116) = 1158250496;
  FIELD_U32(a1, 572) = 0;
  FIELD_U32(a1, 576) = 1098907648;
  FIELD_U32(a1, 580) = 0;
  FIELD_U32(a1, 80) = 1;
  FIELD_U32(a1, 160) = -(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1216))(a1);
  FIELD_U32(a1, 7112) = &dword_60C82ECC;
  FIELD_U32(a1, 7116) = &dword_60C82EF4;
  FIELD_U32(a1, 7120) = &dword_60C82F30;
  FIELD_U32(a1, 7800) = &unk_60AF5718;
  FIELD_U32(a1, 8116) = &dword_60C82F70;
  ActiveCollider__init((ActiveCollider *)(a1 + 188), (StageActor *)a1, (ActiveColliderInfo *)&unk_60BC8C98, 0);
  v2 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188))
    && !ActiveColliderMgr_isInCreateList(v2, (ActiveCollider *)(a1 + 188)) )
  {
    ActiveColliderMgr_addToCreateList(v2, (ActiveCollider *)(a1 + 188));
  }
  CollisionMgr_init((CollisionMgr *)(a1 + 648), (StateActor *)a1, &stru_60AF5764, &stru_60AF5770, &stru_60AF577C);
  v3 = FIELD_U32(a1, 3184);
  v4 = FIELD_U32(a1, 3192) | 0x50000800;
  v5 = FIELD_U32(a1, 3176) | 0x50000800;
  FIELD_U32(a1, 3200) |= 0x50000800u;
  FIELD_U32(a1, 3192) = v4;
  FIELD_U32(a1, 3176) = v5;
  FIELD_U32(a1, 3184) = v3 | 0x50000800;
  v6 = dword_60CC6484;
  FIELD_U32(a1, 19824) = FIELD_U32(dword_60CC6484, 256);
  FIELD_F32(a1, 19816) = FIELD_F32(v6, 116) + -204.32;
  FIELD_F32(a1, 19820) = FIELD_F32(v6, 132) + 224.0;
  FIELD_U32(v6, 260) = 1065353216;
  FIELD_U32(v6, 264) = FIELD_U32(a1, 19816);
  FIELD_U32(v6, 268) = FIELD_U32(a1, 19820);
  v7 = **(_DWORD **)(a1 + 7096);
  v8 = *(int (__fastcall **)(int, _DWORD *))(*(_DWORD *)v7 + 84);
  v10[0] = &sead__SafeStringBase__vtable;
  v10[1] = "Skl_root";
  FIELD_U32(a1, 7768) = v8(v7, v10);
  return 1;
}
