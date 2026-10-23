/* sub_60127AC0
 * address: 0x60127AC0   size: 704   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60127AC0(int a1)
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
  FIELD_U32(a1, 576) = 1094713344;
  FIELD_U32(a1, 580) = 0;
  FIELD_U32(a1, 492) = 0;
  FIELD_U32(a1, 496) = 1103101952;
  FIELD_U32(a1, 500) = 1111490560;
  FIELD_U32(a1, 504) = 1119879168;
  v2 = StageActor__directionToPlayerX((StateActor *)a1, (Vec3 *)(a1 + 108));
  FIELD_U32(a1, 80) = v2;
  v3 = byte_60AFE3F4[v2];
  FIELD_U32(a1, 160) = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1216))(a1) * v3;
  FIELD_U32(a1, 7492) = -1021313024;
  FIELD_U32(a1, 7488) = 1126170624;
  FIELD_U32(a1, 7104) = &dword_60C8717C;
  FIELD_U32(a1, 7108) = &dword_60C87230;
  FIELD_U32(a1, 7112) = &dword_60C8718C;
  FIELD_U32(a1, 7116) = &dword_60C871C0;
  FIELD_U32(a1, 7120) = &dword_60C871F0;
  v4 = **(_DWORD **)(a1 + 7100);
  v5 = *(int (__fastcall **)(int, int (***)()))(*(_DWORD *)v4 + 84);
  v11 = &sead__SafeStringBase__vtable;
  v12 = "wendy_shell_model";
  FIELD_U32(a1, 7772) = v5(v4, &v11);
  v6 = **(_DWORD **)(a1 + 7096);
  v7 = *(int (__fastcall **)(int, int (***)()))(*(_DWORD *)v6 + 84);
  v11 = &sead__SafeStringBase__vtable;
  v12 = "wendy_all_root";
  FIELD_U32(a1, 7768) = v7(v6, &v11);
  FIELD_U32(a1, 7800) = &unk_60AF63C0;
  FIELD_U32(a1, 8116) = &dword_60C87280;
  ActiveCollider__init((ActiveCollider *)(a1 + 188), (StageActor *)a1, (ActiveColliderInfo *)&unk_60BD17B0, 0);
  v8 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188))
    && !ActiveColliderMgr_isInCreateList(v8, (ActiveCollider *)(a1 + 188)) )
  {
    ActiveColliderMgr_addToCreateList(v8, (ActiveCollider *)(a1 + 188));
  }
  FIELD_U32(a1, 6844) = 1099956224;
  FIELD_U32(a1, 6848) = 1101004800;
  FIELD_U32(a1, 6836) = 0;
  FIELD_U32(a1, 6840) = 1101004800;
  CollisionMgr_init((CollisionMgr *)(a1 + 648), (StateActor *)a1, &stru_60AF640C, &stru_60AF6418, &stru_60AF6424);
  FIELD_U32(a1, 3200) |= 0x10000800u;
  FIELD_U32(a1, 3192) |= 0x10000800u;
  v9 = FIELD_U32(a1, 3184);
  FIELD_U32(a1, 3176) |= 0x10000800u;
  FIELD_U32(a1, 3184) = v9 | 0x10000800;
  FIELD_U32(a1, 3204) |= 0x80000u;
  (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C834AC);
  return 1;
}
