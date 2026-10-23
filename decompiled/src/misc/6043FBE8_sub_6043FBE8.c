/* sub_6043FBE8
 * address: 0x6043FBE8   size: 188   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6043FBE8(_DWORD *a1)
{
  int v2; // r6
  _DWORD *v3; // r0
  int i; // r5
  _DWORD v6[7]; // [sp+4h] [bp-1Ch] BYREF

  v2 = 0;
  *a1 = off_60BFAB34;
  do
  {
    v3 = &a1[v2];
    if ( a1[v2 + 7] )
    {
      v6[0] = a1[v2 + 7];
      v6[1] = v3[8];
      v6[2] = v3[9];
      sub_60913ABC(v6);
    }
    v2 += 146;
  }
  while ( v2 != 9344 );
  sub_6092138C(a1 + 9446);
  sub_6092138C(a1 + 9422);
  sub_6092138C(a1 + 9398);
  sub_6092138C(a1 + 9374);
  sub_6092138C(a1 + 9350);
  for ( i = 9204; i != -140; i -= 146 )
    sub_60918DB8(&a1[i]);
  return a1;
}
