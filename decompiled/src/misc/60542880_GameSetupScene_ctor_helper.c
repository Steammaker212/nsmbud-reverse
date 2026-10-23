/* GameSetupScene_ctor_helper
 * address: 0x60542880   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall GameSetupScene_ctor_helper(int a1)
{
  *(_DWORD *)a1 = off_60C0061C;
  FIELD_U32(a1, 4) = &off_60BFDC40;
  sub_60475900((sead_IDisposer *)(a1 + 4), a1 + 3532, 2)->vtable = (int)&off_60BFDC40;
  FIELD_U32(a1, 3532) = 0;
  FIELD_U32(a1, 3536) = &sead__SafeStringBase__vtable;
  FIELD_U32(a1, 3540) = &byte_60B3BA34;
  FIELD_U32(a1, 3544) = 0;
  FIELD_U8(a1, 3548) = 0;
  FIELD_U32(a1, 3552) = 0;
  FIELD_U32(a1, 3556) = &sead__SafeStringBase__vtable;
  FIELD_U32(a1, 3560) = &byte_60B3BA34;
  FIELD_U32(a1, 3564) = 0;
  FIELD_U8(a1, 3568) = 0;
  return a1;
}
