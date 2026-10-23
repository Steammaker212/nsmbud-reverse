/* face_1_ref_766074
 * address: 0x60766074   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall face_1_ref_766074(int a1)
{
  int v2; // r0
  _DWORD v4[2]; // [sp+4h] [bp-24h] BYREF
  Vec3 v5[2]; // [sp+Ch] [bp-1Ch] BYREF

  sub_60773630(a1, 51, 0);
  AreaRumbleMgr_rumbleForPlayer(AreaRumbleMgr_instance, FIELD_S8(a1, 84), 8, 0, 0);
  v2 = FIELD_U32(a1, 648);
  v4[0] = &sead__SafeStringBase__vtable;
  v4[1] = "face_1";
  sub_60793F04(FIELD_U32(v2, 4), v5, v4);
  sub_60236E40(FIELD_S8(a1, 84), 376, v5, 0, 0);
  return sub_607601D4((int *)a1, 1);
}
