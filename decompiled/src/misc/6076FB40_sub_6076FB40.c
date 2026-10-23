/* sub_6076FB40
 * address: 0x6076FB40   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6076FB40(_DWORD *a1)
{
  int result; // r0
  StateBase *v3; // r1

  result = (*(int (__fastcall **)(_DWORD *))(*a1 + 1016))(a1);
  if ( !result )
  {
    if ( ((int (__fastcall *)(_DWORD *))loc_60763E28)(a1) == 1 )
    {
      v3 = (StateBase *)&unk_60CBF8AC;
      return Player_changeState((int)a1, v3, 1);
    }
    if ( sub_60793CA8(*(_DWORD *)(a1[162] + 4)) == 1 )
    {
      v3 = &stru_60CBF81C;
      return Player_changeState((int)a1, v3, 1);
    }
    return sub_60773F4C(a1);
  }
  return result;
}
