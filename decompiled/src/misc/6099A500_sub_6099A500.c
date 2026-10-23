/* sub_6099A500
 * address: 0x6099A500   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6099A500(_DWORD *a1, int a2, unsigned int a3)
{
  int v5; // r2

  v5 = sub_6099A310(a1, a3);
  if ( v5 == 0xFFFF )
    v5 = *(unsigned __int16 *)(a1[4] + 6);
  return sub_6099A53C(a1, a2, v5);
}
