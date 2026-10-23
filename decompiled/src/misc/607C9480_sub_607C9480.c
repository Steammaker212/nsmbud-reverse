/* sub_607C9480
 * address: 0x607C9480   size: 296   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607C9480(_DWORD *a1)
{
  int result; // r0
  int *v3; // r5
  int v4; // [sp+4h] [bp-1Ch] BYREF

  v4 = 0;
  sub_60773F88((int)a1, &v4);
  v3 = a1 + 2485;
  result = a1[2485];
  switch ( result )
  {
    case 2:
      result = sub_60793CA8(a1[2840]);
      if ( result != 1 )
        return result;
      sub_60794954((int)(a1 + 2839), 0, 10.0, 0.0);
      a1[301] &= ~0x10u;
      result = 3;
LABEL_11:
      *v3 = result;
      return result;
    case 1:
      result = a1[2486];
      if ( result )
        return result;
      if ( a1[3778] )
      {
        sub_607C90E4((int)a1);
        PlayerBase_dispatchVirtual3((int)(a1 + 2839), 225, 0.0);
        sub_60793114((_DWORD *)a1[2840], 0.0);
        a1[2486] = 40;
        result = 1;
      }
      else
      {
        result = 2;
      }
      goto LABEL_11;
    case 0:
      a1[306] |= 1u;
      *v3 = 1;
      a1[2486] = 30;
      return 9944;
  }
  return result;
}
