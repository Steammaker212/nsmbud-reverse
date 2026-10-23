/* sub_606AD31C
 * address: 0x606AD31C   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606AD31C(int a1)
{
  float v2; // s16

  v2 = (float)((FIELD_U32(a1, 24) >> 5) & 0x78);
  lift_zen_warning_ref(a1, v2);
  FIELD_F32(a1, 6164) = v2 + 16.0;
  FIELD_F32(a1, 108) = FIELD_F32(a1, 108) + (float)(v2 + 16.0);
  FIELD_F32(a1, 492) = 136.0 - (float)(v2 + 16.0);
  FIELD_U32(a1, 496) = 0;
  return 1;
}
