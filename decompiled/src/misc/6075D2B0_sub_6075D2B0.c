/* sub_6075D2B0
 * address: 0x6075D2B0   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_6075D2B0(_DWORD *a1)
{
  int v2; // r6
  int v3; // r5
  unsigned int result; // r0

  v2 = a1[6];
  v3 = a1[294];
  a1[134] &= ~2u;
  if ( v2 )
  {
    sub_6078E940(a1, v2);
    sub_6078EE88(a1, v2);
  }
  sub_6078E940(a1, v3);
  sub_6078EE88(a1, v3);
  result = sub_6078F0F8(a1);
  if ( result <= 2 )
    *(_DWORD *)(a1[141] + 884) = result;
  return result;
}
