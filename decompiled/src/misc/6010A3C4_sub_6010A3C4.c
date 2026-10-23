/* sub_6010A3C4
 * address: 0x6010A3C4   size: 816   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6010A3C4(int a1)
{
  signed int v2; // r0
  int v3; // r5
  int v4; // r0
  int (__fastcall *v5)(int, int (***)()); // r2
  int v6; // r0
  int (__fastcall *v7)(int, int (***)()); // r2
  ActiveColliderMgr *v8; // r6
  int v9; // r0
  int v10; // r2
  int v11; // r1
  int v12; // r0
  int (**v14)(); // [sp+8h] [bp-20h] BYREF
  const char *v15; // [sp+Ch] [bp-1Ch]

  FIELD_U32(a1, 144) = 1067030938;
  FIELD_U32(a1, 148) = 1067030938;
  FIELD_U32(a1, 152) = 1067030938;
  FIELD_U32(a1, 116) = -1018691584;
  FIELD_U32(a1, 572) = 0;
  FIELD_U32(a1, 576) = 1101004800;
  FIELD_U32(a1, 580) = 0;
  FIELD_U32(a1, 492) = 0;
  FIELD_U32(a1, 496) = 1098907648;
  FIELD_U32(a1, 500) = 1132462080;
  FIELD_U32(a1, 504) = 1132462080;
  v2 = StageActor__directionToPlayerX((StateActor *)a1, (Vec3 *)(a1 + 108));
  FIELD_U32(a1, 80) = v2;
  v3 = byte_60AFE3F4[v2];
  FIELD_U32(a1, 160) = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1216))(a1) * v3;
  FIELD_U32(a1, 7492) = -1022361600;
  FIELD_U32(a1, 7488) = 1125122048;
  FIELD_U32(a1, 8140) = FIELD_U32(a1, 112);
  FIELD_U32(a1, 7104) = &dword_60C86734;
  FIELD_U32(a1, 7108) = &dword_60C867E0;
  FIELD_U32(a1, 7112) = &dword_60C86744;
  FIELD_U32(a1, 7116) = &dword_60C86770;
  FIELD_U32(a1, 7120) = &dword_60C867A0;
  v4 = **(_DWORD **)(a1 + 7100);
  v5 = *(int (__fastcall **)(int, int (***)()))(*(_DWORD *)v4 + 84);
  v14 = &sead__SafeStringBase__vtable;
  v15 = "roy_shell_model";
  FIELD_U32(a1, 7772) = v5(v4, &v14);
  v6 = **(_DWORD **)(a1 + 7096);
  v7 = *(int (__fastcall **)(int, int (***)()))(*(_DWORD *)v6 + 84);
  v14 = &sead__SafeStringBase__vtable;
  v15 = "roy_all_root";
  FIELD_U32(a1, 7768) = v7(v6, &v14);
  FIELD_U32(a1, 7800) = &unk_60AF61E0;
  FIELD_U32(a1, 8116) = &dword_60C86830;
  ActiveCollider__init((ActiveCollider *)(a1 + 188), (StageActor *)a1, (ActiveColliderInfo *)&unk_60BD055C, 0);
  v8 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188))
    && !ActiveColliderMgr_isInCreateList(v8, (ActiveCollider *)(a1 + 188)) )
  {
    ActiveColliderMgr_addToCreateList(v8, (ActiveCollider *)(a1 + 188));
  }
  FIELD_U32(a1, 6844) = 1103101952;
  FIELD_U32(a1, 6848) = 1103101952;
  FIELD_U32(a1, 6836) = 0;
  FIELD_U32(a1, 6840) = 1103101952;
  CollisionMgr_init((CollisionMgr *)(a1 + 648), (StateActor *)a1, &stru_60AF622C, &stru_60AF6238, &stru_60AF6244);
  v9 = FIELD_U32(a1, 3176);
  v10 = FIELD_U32(a1, 3192);
  v11 = FIELD_U32(a1, 3184);
  FIELD_U32(a1, 3200) |= 0x10000840u;
  FIELD_U32(a1, 3192) = v10 | 0x14000A40;
  FIELD_U32(a1, 3176) = v9 | 0x14000A40;
  FIELD_U32(a1, 3184) = v11 | 0x14000A40;
  if ( FIELD_U8(dword_60C9A1F0, 6559) != 1 )
  {
    v12 = dword_60CC6484;
    FIELD_U32(a1, 8160) = FIELD_U32(dword_60CC6484, 256);
    FIELD_F32(a1, 8152) = FIELD_F32(v12, 116) + -204.32;
    FIELD_F32(a1, 8156) = FIELD_F32(v12, 132) + 224.0;
    FIELD_U32(v12, 260) = 1065353216;
    FIELD_U32(v12, 264) = FIELD_U32(a1, 8152);
    FIELD_U32(v12, 268) = FIELD_U32(a1, 8156);
  }
  (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C834AC);
  return 1;
}
