/* sub_604BC590
 * address: 0x604BC590   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_604BC590(_DWORD *result, int a2, int a3)
{
  bool v3; // cc
  unsigned int v4; // r12
  int v5; // r0

  v3 = a2 <= 0;
  if ( a2 >= 0 )
    v3 = result[823] <= a2;
  if ( !v3 )
  {
    v4 = result[1722];
    v5 = result[1723];
    if ( v4 > a2 )
      v5 += 3584 * a2;
    return (_DWORD *)sub_60507FE0(v5, a3);
  }
  return result;
}
