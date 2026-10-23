/* sub_607F8CE0
 * address: 0x607F8CE0   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607F8CE0(nn__hid *a1)
{
  int result; // r0

  nn__hid__StopLrAssignmentMode(a1);
  sub_604574C8(dword_60C9CF18, 0, 0);
  sub_6040C410(dword_60C9A230);
  result = dword_60CC6D78;
  FIELD_U8(dword_60CC6D78, 109057) = 1;
  return result;
}
