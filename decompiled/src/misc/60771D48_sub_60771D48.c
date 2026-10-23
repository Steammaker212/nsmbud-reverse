/* sub_60771D48
 * address: 0x60771D48   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60771D48(int a1, int a2)
{
  int v3; // r1
  int result; // r0
  unsigned int v5; // r1

  if ( a2 || (v3 = FIELD_U8(a1, 1230), result = 0, (v3 & 8) == 0) )
  {
    v5 = FIELD_U32(a1, 6900);
    result = 1;
    if ( (v5 & 0x8000000) == 0 )
    {
      result = 2;
      if ( (v5 & 0x10000000) == 0 )
        return (v5 >> 25) & 2;
    }
  }
  return result;
}
