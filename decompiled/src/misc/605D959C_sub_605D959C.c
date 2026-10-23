/* sub_605D959C
 * address: 0x605D959C   size: 148   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605D959C(_DWORD *a1)
{
  _DWORD *v2; // r1
  _DWORD *v3; // r0
  int v4; // r0
  int v5; // r2
  bool v6; // zf
  int result; // r0

  a1[1565] |= 4u;
  v2 = a1 + 1701;
  a1[1701] &= ~1u;
  v3 = a1 + 1516;
  if ( v2[299] == 1 && a1[1536] == 14 )
    sub_605EB89C(v3, 3.0);
  else
    sub_605EAB48(v3, 0.0);
  v4 = a1[20];
  v5 = 0x40000000;
  a1[39] = 0;
  v6 = v4 == 1;
  result = 8008;
  if ( v6 )
    v5 = -1073741824;
  a1[40] = v5;
  a1[41] = 0;
  a1[2002] = 0;
  return result;
}
