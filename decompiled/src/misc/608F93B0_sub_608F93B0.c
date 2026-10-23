/* sub_608F93B0
 * address: 0x608F93B0   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_608F93B0(_DWORD *a1)
{
  int v1; // r12
  int v2; // lr
  int v3; // r1
  int v4; // r3
  int v5; // r1
  int v6; // r0

  v1 = a1[7];
  v2 = a1[20];
  v3 = 0;
  v4 = v1;
  if ( v2 == 1 )
    v4 = v1 + 132;
  if ( a1[31] == v4 )
  {
    v5 = a1[8];
    v6 = a1[32];
    if ( v2 != 1 )
      v5 -= 132;
    return v6 == v5 + v1;
  }
  return v3;
}
