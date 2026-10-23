/* sub_60467838
 * address: 0x60467838   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60467838(int a1)
{
  FIELD_U8(a1, 6199) = 1;
  FIELD_U32(a1, 6168) = 0;
  sub_60467880(a1);
  sub_6046135C(a1);
  Item_playAppearSound_461C50(a1);
  sub_60462018(a1);
  return 1;
}
