/* lkp_jump_st_ref_3
 * address: 0x60084284   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall lkp_jump_st_ref_3(int a1)
{
  int v1; // r0
  _DWORD v3[4]; // [sp+0h] [bp-10h] BYREF

  v1 = FIELD_U32(a1, 7100);
  v3[0] = &sead__SafeStringBase__vtable;
  v3[1] = "lkp_jump_st";
  return sub_60421AE4(v1, v3, 0);
}
