/* sub_607C06A8
 * address: 0x607C06A8   size: 296   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607C06A8(_DWORD *a1)
{
  int result; // r0
  _DWORD *v3; // r5
  int v4; // r0
  int v5; // r2

  v3 = a1 + 2485;
  result = a1[2485];
  switch ( result )
  {
    case 0:
      if ( sub_60793CA8(a1[2840]) || (result = sub_6075EDF8((int)a1), result == 1) )
      {
        *v3 = 1;
        a1[3207] = 0;
        v4 = a1[3211];
        a1[3213] = v4;
        v5 = a1[1688];
        a1[3211] = v5;
        a1[3214] = a1[3212];
        a1[3212] = v4 - v5;
        a1[3209] = 0;
        sub_607C0FB4(a1);
        a1[3213] = a1[3211];
        result = a1[3212];
        a1[3214] = result;
      }
      break;
    case 1:
      result = sub_607C07D0(a1);
      break;
    case 2:
      result = SE_PLY_CLIMB_ref(a1);
      break;
    case 3:
      result = SE_PLY_SLIDE_ref(a1);
      break;
    case 4:
      JUMPOUT(0x607C0BE0);
    case 5:
      result = sub_607C0DA4(a1);
      break;
    case 6:
      result = sub_607C0ED0(a1);
      break;
    default:
      return result;
  }
  return result;
}
