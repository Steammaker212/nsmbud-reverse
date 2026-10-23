/* sub_607A1B30
 * address: 0x607A1B30   size: 348   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607A1B30(int a1)
{
  _BYTE *v2; // r0
  ActorBuildInfo v4; // [sp+8h] [bp-48h] BYREF

  (*(void (__fastcall **)(int, int))(*(_DWORD *)a1 + 624))(a1, 1);
  sub_6079EA38((_DWORD *)a1);
  FIELD_U32(a1, 88) = 0;
  FIELD_U32(a1, 92) = 0;
  FIELD_U32(a1, 100) = 0;
  FIELD_U32(a1, 124) = 0;
  FIELD_F32(a1, 112) = FIELD_F32(a1, 112) + 2.0;
  sub_60773630(a1, 45, 0);
  FIELD_U32(a1, 1232) |= 0x20000000u;
  FIELD_U32(a1, 1236) |= 0x10000u;
  FIELD_U32(a1, 1204) |= 0x60018u;
  memset(&v4, 0, sizeof(v4));
  v4.parentId = FIELD_U32(a1, 8);
  v4.profile = Profile__get(0xEDu);
  v4.position = *(Vec3 *)(a1 + 108);
  v4.field_20 = FIELD_U8(a1, 86);
  v2 = ActorMgr__create((void *)ActorMgr__instance, &v4, 0);
  if ( v2 )
    FIELD_U32(a1, 12792) = *((_DWORD *)v2 + 2);
  AreaRumbleMgr_rumbleForPlayer(AreaRumbleMgr_instance, FIELD_S8(a1, 84), 4, 0, 0);
  (*(void (__fastcall **)(_DWORD, int, float, float, float))(**(_DWORD **)(a1 + 11360) + 84))(
    FIELD_U32(a1, 11360),
    5,
    0.0,
    0.0,
    0.0);
  return sub_60793114(*(_DWORD **)(a1 + 11360), 0.0);
}
