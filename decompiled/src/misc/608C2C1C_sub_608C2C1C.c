/* sub_608C2C1C
 * address: 0x608C2C1C   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608C2C1C(_DWORD *a1, _DWORD *a2)
{
  _DWORD *v2; // r2

  v2 = (_DWORD *)a1[95];
  if ( !v2 )
    v2 = a1 + 94;
  *v2 = a2;
  a1[95] = a2;
  *a2 = 0;
  return a1[97];
}
