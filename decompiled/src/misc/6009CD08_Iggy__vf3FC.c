/* Iggy__vf3FC
 * address: 0x6009CD08   size: 684   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: BossBase : 0x60026BF4
// 
// Overridden by: None
int __fastcall Iggy__vf3FC(int a1)
{
  signed int v2; // r0
  int v3; // r5
  int v4; // r0
  int (__fastcall *v5)(int, int (***)()); // r2
  int v6; // r0
  int (__fastcall *v7)(int, int (***)()); // r2
  ActiveColliderMgr *v8; // r6
  int v9; // r2
  int (**v11)(); // [sp+8h] [bp-20h] BYREF
  const char *v12; // [sp+Ch] [bp-1Ch]

  FIELD_U32(a1, 144) = 1067030938;
  FIELD_U32(a1, 148) = 1067030938;
  FIELD_U32(a1, 152) = 1067030938;
  FIELD_U32(a1, 116) = -988004352;
  FIELD_U32(a1, 572) = 0;
  FIELD_U32(a1, 576) = 1101004800;
  FIELD_U32(a1, 580) = 0;
  FIELD_U32(a1, 492) = 0;
  FIELD_U32(a1, 496) = 1098907648;
  FIELD_U32(a1, 500) = 1119879168;
  FIELD_U32(a1, 504) = 1125122048;
  v2 = StageActor__directionToPlayerX((StateActor *)a1, (Vec3 *)(a1 + 108));
  FIELD_U32(a1, 80) = v2;
  v3 = byte_60AFE3F4[v2];
  FIELD_U32(a1, 160) = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1216))(a1) * v3;
  FIELD_U32(a1, 7492) = -1021313024;
  FIELD_U32(a1, 7488) = 1126170624;
  FIELD_U32(a1, 7104) = &dword_60C828A8;
  FIELD_U32(a1, 7108) = &dword_60C82950;
  FIELD_U32(a1, 7112) = &dword_60C828B8;
  FIELD_U32(a1, 7116) = &dword_60C828E0;
  FIELD_U32(a1, 7120) = &dword_60C82910;
  v4 = **(_DWORD **)(a1 + 7100);
  v5 = *(int (__fastcall **)(int, int (***)()))(*(_DWORD *)v4 + 84);
  v11 = &sead__SafeStringBase__vtable;
  v12 = "iggy_shell_model";
  FIELD_U32(a1, 7772) = v5(v4, &v11);
  v6 = **(_DWORD **)(a1 + 7096);
  v7 = *(int (__fastcall **)(int, int (***)()))(*(_DWORD *)v6 + 84);
  v11 = &sead__SafeStringBase__vtable;
  v12 = "iggy_all_root";
  FIELD_U32(a1, 7768) = v7(v6, &v11);
  FIELD_U32(a1, 7800) = &unk_60AF55E8;
  FIELD_U32(a1, 8116) = &dword_60C829A0;
  ActiveCollider__init((ActiveCollider *)(a1 + 188), (StageActor *)a1, (ActiveColliderInfo *)&unk_60BC82E0, 0);
  v8 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188))
    && !ActiveColliderMgr_isInCreateList(v8, (ActiveCollider *)(a1 + 188)) )
  {
    ActiveColliderMgr_addToCreateList(v8, (ActiveCollider *)(a1 + 188));
  }
  FIELD_U32(a1, 6844) = 1101004800;
  FIELD_U32(a1, 6848) = 1103101952;
  FIELD_U32(a1, 6836) = 0;
  FIELD_U32(a1, 6840) = 1103101952;
  CollisionMgr_init((CollisionMgr *)(a1 + 648), (StateActor *)a1, &stru_60AF5634, &stru_60AF5640, &stru_60AF564C);
  FIELD_U32(a1, 3200) |= 0x10000800u;
  FIELD_U32(a1, 3192) |= 0x10000800u;
  v9 = FIELD_U32(a1, 3184);
  FIELD_U32(a1, 3176) |= 0x10000800u;
  FIELD_U32(a1, 3184) = v9 | 0x10000800;
  (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C834AC);
  return 1;
}
