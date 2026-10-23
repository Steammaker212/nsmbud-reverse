/* sub_607FA4E0
 * address: 0x607FA4E0   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607FA4E0(_BYTE *a1)
{
  int result; // r0
  bool v3; // zf

  result = 0;
  if ( a1[30] )
  {
    v3 = a1[31] == 0;
    if ( a1[31] )
      v3 = a1[24] == 0;
    if ( v3 )
      return 1;
  }
  return result;
}
