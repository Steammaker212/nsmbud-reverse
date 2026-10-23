/* spin_jump_ed_ref_3
 * address: 0x6012654C   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall spin_jump_ed_ref_3(int a1)
{
  float v2; // s16
  int result; // r0

  v2 = FIELD_F32(a1, 7760);
  sub_60421AD4(FIELD_U32(a1, 7096));
  result = 30 - (int)(float)(6.0 / v2);
  FIELD_U16(a1, 6276) = result;
  return result;
}
