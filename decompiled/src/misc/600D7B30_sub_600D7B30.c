/* sub_600D7B30
 * address: 0x600D7B30   size: 476   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600D7B30(int a1)
{
  signed int v2; // r0
  int v3; // r6
  int v4; // r2

  FIELD_U32(a1, 116) = 1117782016;
  FIELD_U32(a1, 144) = 1067030938;
  FIELD_U32(a1, 148) = 1067030938;
  FIELD_U32(a1, 152) = 1067030938;
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
  FIELD_U32(a1, 7488) = 1126039552;
  FIELD_U32(a1, 7492) = -1021444096;
  FIELD_U32(a1, 7104) = &dword_60C84764;
  FIELD_U32(a1, 7108) = &dword_60C84810;
  FIELD_U32(a1, 7112) = &dword_60C84774;
  FIELD_U32(a1, 7116) = &dword_60C8479C;
  FIELD_U32(a1, 7120) = &unk_60C847D0;
  FIELD_U32(a1, 7800) = &unk_60AF5C70;
  FIELD_U32(a1, 8116) = &dword_60C84860;
  FIELD_U32(a1, 7772) = 0;
  FIELD_U32(a1, 7768) = 0;
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1140))(a1);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 76))(a1);
  CollisionMgr_init((CollisionMgr *)(a1 + 648), (StateActor *)a1, &stru_60AF5CBC, &stru_60AF5CC8, &stru_60AF5CD4);
  FIELD_U32(a1, 3200) |= 0x10000800u;
  FIELD_U32(a1, 3192) |= 0x10000800u;
  v4 = FIELD_U32(a1, 3184);
  FIELD_U32(a1, 3176) |= 0x10000800u;
  FIELD_U32(a1, 3184) = v4 | 0x10000800;
  (*(void (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60C84688);
  return 1;
}
