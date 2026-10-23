/* sub_60843C5C
 * address: 0x60843C5C   size: 220   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_60843C5C(int a1)
{
  int v1; // r2
  unsigned int result; // r0
  int v3; // r1

  v1 = FIELD_U16(a1, 4);
  result = (v1 << 16) & 0x80000000;
  v3 = v1 & 0x7C00;
  if ( (v1 & 0x7C00) != 0 )
  {
    if ( v3 == 31744 )
      result |= (v1 << 13) | 0x7F800000;
    else
      result |= (v1 << 13) & 0x7FE000 | ((v3 << 13) + 939524096);
  }
  return result;
}
