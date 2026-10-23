/* jc_quake_ed_ref_8ED88
 * address: 0x6008ED88   size: 164   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall jc_quake_ed_ref_8ED88(int a1)
{
  int v2; // r0
  _DWORD v4[6]; // [sp+8h] [bp-18h] BYREF

  v2 = FIELD_U32(a1, 6304);
  v4[0] = &sead__SafeStringBase__vtable;
  v4[1] = "jc_quake_ed";
  sub_60421AE4(v2, v4, 0);
  AreaRumbleMgr_rumbleForPlayer(AreaRumbleMgr_instance, FIELD_S8(a1, 15240), 3, 0, 0);
  FIELD_U32(a1, 120) = 0;
  FIELD_U32(a1, 124) = 0;
  FIELD_U32(a1, 128) = 0;
  FIELD_U32(a1, 9356) = 0;
  FIELD_U32(a1, 9352) = 0;
  FIELD_U8(a1, 15264) = 0;
  FIELD_U16(a1, 6276) = 60;
  return 6276;
}
