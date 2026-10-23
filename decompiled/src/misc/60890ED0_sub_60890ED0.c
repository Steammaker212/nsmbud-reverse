/* sub_60890ED0
 * address: 0x60890ED0   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60890ED0(int a1, int a2, int a3)
{
  int result; // r0

  result = sub_608820E8(a2, a3, 256);
  if ( result )
  {
    FIELD_U32(a1, 4) += (a2 + 255) & 0xFFFFFF00;
    ++FIELD_U32(a1, 8);
  }
  return result;
}
