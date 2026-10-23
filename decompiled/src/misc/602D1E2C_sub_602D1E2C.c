/* sub_602D1E2C
 * address: 0x602D1E2C   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_602D1E2C(int a1)
{
  _DWORD *v1; // r0
  int v2; // r1
  unsigned int v3; // r2
  unsigned int v4; // r0

  v1 = *(_DWORD **)(a1 + 4);
  v2 = v1[3];
  v3 = v1[2];
  v4 = v1[17];
  if ( v3 > v4 )
    v2 += 4 * v4;
  return *(float *)(*(_DWORD *)v2 + 8);
}
