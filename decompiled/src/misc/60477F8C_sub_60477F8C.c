/* sub_60477F8C
 * address: 0x60477F8C   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60477F8C(_DWORD *a1)
{
  int v2; // r0
  int v3; // r0

  sub_608535C4();
  v2 = a1[32];
  if ( v2 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 108))(v2);
  v3 = a1[28];
  if ( v3 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 108))(v3);
  return sub_60477B30(a1, a1[32]);
}
