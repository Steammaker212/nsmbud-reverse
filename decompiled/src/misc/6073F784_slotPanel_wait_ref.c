/* slotPanel_wait_ref
 * address: 0x6073F784   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall slotPanel_wait_ref(int a1)
{
  sub_60421AD4(FIELD_U32(a1, 6300));
  FIELD_U8(a1, 6340) = 0;
  return 6340;
}
