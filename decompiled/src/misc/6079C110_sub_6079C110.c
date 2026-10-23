/* sub_6079C110
 * address: 0x6079C110   size: 756   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6079C110(int *a1)
{
  int result; // r0
  int *v3; // r6

  result = sub_607753D8((int)a1);
  if ( !result )
  {
    v3 = a1 + 2485;
    result = a1[2485];
    switch ( result )
    {
      case 0:
      case 5:
      case 8:
        if ( sub_60793CA8(a1[2840]) == 1 )
        {
          sub_607C18F4(a1);
          PlayerBase_dispatchVirtual3((int)(a1 + 2839), 0, 0.0);
          *v3 = 1;
        }
        goto LABEL_6;
      case 1:
LABEL_6:
        result = sub_607B74E0(a1, 3.428, 0.0);
        if ( result )
          return result;
        if ( sub_607AA954(a1) == 1 )
        {
          PlayerBase_dispatchVirtual3((int)(a1 + 2839), 33, 0.0);
          sub_60793114((_DWORD *)a1[2840], 0.0);
          a1[40] = sub_60773F3C((int)a1, a1[20]);
          a1[3012] = a1[20];
          result = 4;
        }
        else if ( sub_607C1600(a1) == 1 )
        {
          sub_607C1784(a1);
          a1[40] = sub_60773F3C((int)a1, a1[20]);
          result = 7;
        }
        else
        {
          result = sub_60786974((int)(a1 + 172));
          if ( result != 1 )
            return result;
          result = (*(int (__fastcall **)(int *))(*a1 + 1064))(a1);
          if ( result )
            return result;
          a1[304] |= 0x4000000u;
          PlayerBase_dispatchVirtual3((int)(a1 + 2839), 21, 0.0);
          result = 2;
        }
LABEL_26:
        *v3 = result;
        return result;
      case 2:
        if ( sub_60793CA8(a1[2840]) == 1 )
          PlayerBase_dispatchVirtual3((int)(a1 + 2839), 20, 0.0);
        result = sub_60786974((int)(a1 + 172));
        if ( result )
          return result;
        sub_60794954((int)(a1 + 2839), 0, 10.0, 0.0);
        a1[2486] = 10;
        a1[304] &= ~0x4000000u;
        result = 3;
        goto LABEL_26;
      case 3:
        if ( sub_607AA954(a1) == 1 )
        {
          PlayerBase_dispatchVirtual3((int)(a1 + 2839), 33, 0.0);
          sub_60793114((_DWORD *)a1[2840], 0.0);
          a1[40] = sub_60773F3C((int)a1, a1[20]);
          a1[3012] = a1[20];
          *v3 = 4;
        }
        result = a1[2486];
        if ( result )
          return result;
        PlayerBase_dispatchVirtual3((int)(a1 + 2839), 0, 0.0);
        result = 1;
        goto LABEL_26;
      case 4:
        result = sub_60793DA0(a1[2840], 4.0);
        if ( result != 1 )
          return result;
        SE_PLY_THROW_ICEBALL_ref(a1, 0);
        result = 5;
        goto LABEL_26;
      case 7:
        result = sub_60793DA0(a1[2840], 5.0);
        if ( result == 1 )
        {
          *v3 = 8;
          return SE_PLY_ref_5_helper(a1, 0);
        }
        return result;
      default:
        return result;
    }
  }
  return result;
}
