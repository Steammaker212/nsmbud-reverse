/* sub_60826C38
 * address: 0x60826C38   size: 12   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60826C38(int a1, char a2)
{
  int result; // r0

  result = FIELD_U32(a1, 40);
  FIELD_U8(result, 7) = a2;
  return result;
}
