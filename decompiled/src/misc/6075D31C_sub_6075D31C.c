/* sub_6075D31C
 * address: 0x6075D31C   size: 144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_6075D31C(_DWORD *a1)
{
  int v2; // r1
  unsigned int v3; // r0
  int v4; // r5
  int v5; // r6
  unsigned int result; // r0

  v2 = 0;
  v3 = a1[289];
  if ( v3 >= 4 )
    v3 = 0;
  v4 = a1[v3 + 290];
  if ( a1[74] < 6u )
    v2 = a1[74];
  v5 = a1[v2 + 60];
  a1[134] &= ~2u;
  if ( v5 )
  {
    sub_6078E940(a1, v5);
    sub_6078EE88(a1, v5);
  }
  sub_6078E940(a1, v4);
  sub_6078EE88(a1, v4);
  result = sub_6078F0F8(a1);
  if ( result <= 2 )
    *(_DWORD *)(a1[141] + 884) = result;
  return result;
}
