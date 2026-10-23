/* sub_605D66B0
 * address: 0x605D66B0   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605D66B0(_DWORD *a1)
{
  int v2; // r0
  int v3; // r1

  a1[1565] |= 1u;
  sub_605EAB48(a1 + 1516, 0.0);
  a1[30] = 0;
  a1[26] = 0;
  a1[33] = 0;
  a1[25] = -1103101952;
  v2 = sub_605E3BBC(a1);
  v3 = 1;
  if ( v2 == 1 )
  {
    a1[2001] = 60;
    v3 = 0;
  }
  a1[2002] = v3;
  return 8008;
}
