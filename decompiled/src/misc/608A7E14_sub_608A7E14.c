/* sub_608A7E14
 * address: 0x608A7E14   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608A7E14(int a1)
{
  int v1; // r1
  int result; // r0

  v1 = FIELD_U32(a1, 12);
  result = -(v1 & 1) & 0xC;
  if ( (v1 & 2) != 0 )
    result += 12;
  if ( (v1 & 4) != 0 )
    result += 8;
  return result;
}
