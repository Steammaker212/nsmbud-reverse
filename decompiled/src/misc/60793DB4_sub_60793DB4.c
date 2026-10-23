/* sub_60793DB4
 * address: 0x60793DB4   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60793DB4(int a1, float a2)
{
  int v2; // r0
  unsigned int v3; // r1
  _DWORD *v4; // r0

  v2 = FIELD_U32(a1, 24);
  v3 = FIELD_U32(v2, 8);
  v4 = *(_DWORD **)(v2 + 12);
  if ( v3 > 1 )
    ++v4;
  return sub_60418548(*v4 + 4, a2);
}
