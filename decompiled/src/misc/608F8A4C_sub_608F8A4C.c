/* sub_608F8A4C
 * address: 0x608F8A4C   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608F8A4C(_DWORD *a1, unsigned int a2)
{
  unsigned int v2; // r12
  int v3; // lr
  int v4; // r2
  int v5; // r0
  unsigned int v6; // r3
  _BOOL4 v7; // r3

  v2 = a1[7];
  v3 = a1[20];
  v4 = a1[8];
  v5 = 0;
  v6 = v2;
  if ( v3 == 1 )
    v6 = v2 + 132;
  v7 = v6 <= a2;
  if ( v3 != 1 )
    v4 -= 132;
  if ( v4 + v2 > a2 )
    v5 = 1;
  return v7 & v5;
}
