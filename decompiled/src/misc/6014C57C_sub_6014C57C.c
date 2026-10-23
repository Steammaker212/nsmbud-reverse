/* sub_6014C57C
 * address: 0x6014C57C   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_6014C57C(int a1, signed int a2)
{
  unsigned int v2; // r2
  signed int result; // r0
  bool v4; // cf

  v2 = a2;
  if ( a2 < 0 )
  {
    v2 = 0x80000000;
    if ( a2 == 0x80000000 )
    {
LABEL_9:
      result = 4;
      if ( v2 < 0x268B0000 )
        return 3;
      return result;
    }
    v2 = -a2;
  }
  result = 0;
  if ( v2 >= 0x4FD8000 )
  {
    result = 1;
    v4 = v2 >= 0xE728000;
    if ( v2 >= 0xE728000 )
    {
      result = 2;
      v4 = v2 >= 0x19750000;
    }
    if ( v4 )
      goto LABEL_9;
  }
  return result;
}
