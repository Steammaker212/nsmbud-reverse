/* sub_6095DC40
 * address: 0x6095DC40   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6095DC40(_DWORD *a1, int a2)
{
  int v2; // r2
  int v3; // r12
  int v4; // r3
  _DWORD *v5; // r0

  v2 = a1[114];
  v3 = a1[155];
  v4 = a1[118];
  v5 = a1 + 158;
  if ( v2 <= 1 )
    v2 = 1;
  if ( v2 >= v3 )
    v2 = v3;
  return shadow_map_ref(v5, a2, v2, v4);
}
