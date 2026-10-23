/* sub_601D8424
 * address: 0x601D8424   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601D8424(int a1, unsigned int a2)
{
  int result; // r0
  bool v3; // zf

  result = 3;
  v3 = (a2 & 0x10) == 0;
  if ( (a2 & 0x10) == 0 )
  {
    result = 2;
    v3 = (a2 & 0x20) == 0;
  }
  if ( v3 )
  {
    result = 4;
    if ( (a2 & 0x40) == 0 )
      return 6 - ((a2 >> 7) & 1);
  }
  return result;
}
