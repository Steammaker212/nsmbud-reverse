/* LavaGeyser_vf178
 * address: 0x6070CC54   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall LavaGeyser_vf178(_DWORD *a1)
{
  _DWORD *v2; // r5
  int v3; // r0

  v2 = a1 + 1581;
  v3 = (*(int (__fastcall **)(_DWORD *))(*a1 + 624))(a1);
  if ( !v3 )
    v3 = 3;
  a1[1583] = v3;
  a1[1578] = a1[1596];
  a1[1580] = a1[1589];
  *v2 = 0;
  return 0;
}
