/* sub_607C0ED0
 * address: 0x607C0ED0   size: 216   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607C0ED0(int *a1)
{
  int result; // r0
  int *v3; // r5

  v3 = a1 + 3208;
  result = a1[3208];
  if ( result == 2 )
  {
    a1[31] = -1073741824;
    return Player_changeState((int)a1, (StateBase *)&dword_60CC4BBC, 1);
  }
  if ( result != 1 )
  {
    if ( result )
      return result;
    PlayerBase_dispatchVirtual3((int)(a1 + 2839), 65, 0.0);
    result = 1;
    goto LABEL_10;
  }
  (*(void (__fastcall **)(int *))(*a1 + 1412))(a1);
  if ( sub_60793DA0(a1[2840], 25.0) == 1 )
    sub_6075F970((int)a1, 0);
  result = sub_60793CA8(a1[2840]);
  if ( result == 1 )
  {
    sub_60794954((int)(a1 + 2839), 61, 0.0, 0.0);
    result = 2;
LABEL_10:
    *v3 = result;
  }
  return result;
}
