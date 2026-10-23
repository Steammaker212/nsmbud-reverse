/* sub_607C1BB0
 * address: 0x607C1BB0   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_607C1BB0(_DWORD *a1)
{
  unsigned int v1; // r1

  v1 = a1[302];
  if ( (v1 & 0x800) != 0 )
  {
    a1[302] = v1 & 0xFFFFF7FF;
    if ( (a1[301] & 0x24000) != 0 )
      return sub_6079EA38(a1);
    else
      return sub_607C195C(a1, (v1 >> 12) & 1);
  }
  return a1;
}
