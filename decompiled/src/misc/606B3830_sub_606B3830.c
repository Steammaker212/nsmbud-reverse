/* sub_606B3830
 * address: 0x606B3830   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606B3830(_DWORD *a1, unsigned int a2)
{
  int v2; // r12
  int v3; // r3
  int v4; // r2
  int v5; // r0

  v2 = a1[4];
  v3 = a1[5];
  v4 = a1[6];
  if ( a1[7] >= a2 )
    v4 += a2;
  v5 = v4 - v3;
  if ( v4 < v3 )
    v5 = v4;
  return *(_DWORD *)(v2 + 4 * v5);
}
