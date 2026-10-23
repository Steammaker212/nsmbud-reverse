/* sub_600ECCE0
 * address: 0x600ECCE0   size: 792   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600ECCE0(int a1)
{
  signed int v2; // r0
  int v3; // r6
  int v4; // r0
  int (__fastcall *v5)(int, int (***)()); // r2
  int v6; // r0
  int (__fastcall *v7)(int, int (***)()); // r2
  float v8; // s2
  int v9; // r1
  int v10; // r2
  int v11; // r0
  int (**v13)(); // [sp+8h] [bp-28h] BYREF
  const char *v14; // [sp+Ch] [bp-24h]

  FIELD_U32(a1, 116) = -988004352;
  FIELD_U32(a1, 144) = 1067869798;
  FIELD_U32(a1, 148) = 1067869798;
  FIELD_U32(a1, 152) = 1067869798;
  FIELD_U32(a1, 492) = 0;
  FIELD_U32(a1, 496) = 1103101952;
  FIELD_U32(a1, 500) = 1111490560;
  FIELD_U32(a1, 504) = 1111490560;
  FIELD_U32(a1, 572) = 0;
  FIELD_U32(a1, 576) = 1098907648;
  FIELD_U32(a1, 580) = 0;
  v2 = StageActor__directionToPlayerX((StateActor *)a1, (Vec3 *)(a1 + 108));
  FIELD_U32(a1, 80) = v2;
  v3 = byte_60AFE3F4[v2];
  FIELD_U32(a1, 160) = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1216))(a1) * v3;
  FIELD_U32(a1, 7492) = -1021509632;
  FIELD_U32(a1, 7488) = 1125974016;
  FIELD_U32(a1, 7104) = &dword_60C852C0;
  FIELD_U32(a1, 7108) = &dword_60C85370;
  FIELD_U32(a1, 7112) = &dword_60C852D0;
  FIELD_U32(a1, 7116) = &dword_60C852F8;
  FIELD_U32(a1, 7120) = &unk_60C85330;
  FIELD_U32(a1, 7800) = &unk_60AF5EA0;
  FIELD_U32(a1, 8116) = &dword_60C853C0;
  v4 = **(_DWORD **)(a1 + 7100);
  v5 = *(int (__fastcall **)(int, int (***)()))(*(_DWORD *)v4 + 84);
  v13 = &sead__SafeStringBase__vtable;
  v14 = "ludwig_shell_model";
  FIELD_U32(a1, 7772) = v5(v4, &v13);
  v6 = **(_DWORD **)(a1 + 7096);
  v7 = *(int (__fastcall **)(int, int (***)()))(*(_DWORD *)v6 + 84);
  v13 = &sead__SafeStringBase__vtable;
  v14 = "ludwig_all_root";
  FIELD_U32(a1, 7768) = v7(v6, &v13);
  FIELD_U32(a1, 7488) = 1125122048;
  FIELD_U32(a1, 7492) = -1022361600;
  v8 = FIELD_F32(dword_60CC6484, 116);
  FIELD_F32(a1, 8172) = v8 + -112.0;
  FIELD_F32(a1, 8176) = v8;
  FIELD_F32(a1, 8180) = v8 + 112.0;
  ActiveCollider__init((ActiveCollider *)(a1 + 188), (StageActor *)a1, (ActiveColliderInfo *)&unk_60BCE314, 0);
  FIELD_U32(a1, 304) = 0;
  FIELD_U32(a1, 308) = 1065353216;
  FIELD_U32(a1, 312) = 1097859072;
  FIELD_U32(a1, 316) = 1097859072;
  FIELD_U32(a1, 6836) = 0;
  FIELD_U32(a1, 6840) = 1103101952;
  FIELD_U32(a1, 6844) = 1101004800;
  FIELD_U32(a1, 6848) = 1103101952;
  CollisionMgr_init((CollisionMgr *)(a1 + 648), (StateActor *)a1, &stru_60AF5EEC, &stru_60AF5EF8, &stru_60AF5F04);
  v9 = FIELD_U32(a1, 3184);
  v10 = FIELD_U32(a1, 3192) | 0x14000A00;
  v11 = FIELD_U32(a1, 3176) | 0x14000A00;
  FIELD_U32(a1, 3200) |= 0x14000A00u;
  FIELD_U32(a1, 3192) = v10;
  FIELD_U32(a1, 3176) = v11;
  FIELD_U32(a1, 3184) = v9 | 0x14000A00;
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
  FIELD_U32(a1, 100) = 0;
  FIELD_U32(a1, 120) = 0;
  FIELD_U32(a1, 124) = 0;
  FIELD_U32(a1, 128) = 0;
  FIELD_U8(a1, 8132) = 1;
  FIELD_U32(a1, 6300) = 6;
  (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C85234);
  return 1;
}
