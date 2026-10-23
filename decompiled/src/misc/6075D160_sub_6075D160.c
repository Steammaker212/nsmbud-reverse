/* sub_6075D160
 * address: 0x6075D160   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_6075D160(_DWORD *a1)
{
  int v2; // r1
  unsigned int v3; // r2
  unsigned int result; // r0

  v2 = a1[134];
  v3 = v2 & 0xFFFFFFFB;
  if ( a1[118] == 8 )
    v3 = v2 | 4;
  a1[134] = v3;
  sub_6078E940(a1, a1[6]);
  sub_6078E940(a1, a1[294]);
  result = sub_6078F0F8(a1);
  if ( result <= 2 )
    *(_DWORD *)(a1[141] + 884) = result;
  return result;
}
