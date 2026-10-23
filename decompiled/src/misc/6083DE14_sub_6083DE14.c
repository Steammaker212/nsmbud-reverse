/* sub_6083DE14
 * address: 0x6083DE14   size: 12   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6083DE14(int a1, int a2, int a3)
{
  int result; // r0

  result = a1 + 4 * a2;
  FIELD_U32(result, 56) = a3;
  return result;
}
