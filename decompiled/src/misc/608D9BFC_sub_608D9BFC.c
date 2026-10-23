/* sub_608D9BFC
 * address: 0x608D9BFC   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608D9BFC(_DWORD *a1)
{
  _DWORD *v1; // r4
  int *v2; // r0

  v1 = a1 + 23;
  a1[41] = a1[20];
  v2 = sub_608C4DF4();
  return sub_608C4F14((int)v2, v1, 1);
}
