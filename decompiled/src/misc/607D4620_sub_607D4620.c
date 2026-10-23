/* sub_607D4620
 * address: 0x607D4620   size: 280   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607D4620(int *a1)
{
  int result; // r0
  int *v3; // r5

  result = sub_607753D8((int)a1);
  if ( !result )
  {
    v3 = a1 + 2485;
    result = a1[2485];
    switch ( result )
    {
      case 0:
        if ( sub_60793CA8(a1[2842]) == 1 )
        {
          (*(void (__fastcall **)(int *, _DWORD))(*a1 + 976))(a1, 0);
          *v3 = 1;
        }
        goto LABEL_5;
      case 1:
LABEL_5:
        result = sub_60786974((int)(a1 + 172));
        if ( result != 1 )
          return result;
        a1[304] |= 0x4000000u;
        PlayerBase_dispatchVirtual3((int)(a1 + 2841), 21, 0.0);
        result = 2;
        break;
      case 2:
        result = sub_60786974((int)(a1 + 172));
        if ( result )
          return result;
        a1[304] &= ~0x4000000u;
        sub_60793088((_DWORD *)a1[2842], -1.0);
        result = 3;
        break;
      case 3:
        result = sub_60793CA8(a1[2842]);
        if ( result != 1 )
          return result;
        (*(void (__fastcall **)(int *, _DWORD))(*a1 + 976))(a1, 0);
        result = 1;
        break;
      default:
        return result;
    }
    *v3 = result;
  }
  return result;
}
