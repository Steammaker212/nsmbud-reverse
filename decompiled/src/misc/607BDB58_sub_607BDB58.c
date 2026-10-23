/* sub_607BDB58
 * address: 0x607BDB58   size: 340   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607BDB58(_DWORD *a1)
{
  int result; // r0

  if ( (*(int (__fastcall **)(_DWORD *))(*a1 + 1064))(a1) != 1 )
  {
    if ( a1[330] != 5 && !sub_6075EE0C((int)a1) )
      sub_6075EDF8((int)a1);
LABEL_19:
    JUMPOUT(0x607BBBF8);
  }
  if ( !sub_6079DF08((int)a1) || !sub_6079B7A4((int)a1) )
    goto LABEL_19;
  ((void (__fastcall *)(_DWORD *))loc_607BE9F8)(a1);
  sub_60773F4C((int)a1);
  if ( sub_607C1600(a1) == 1 )
  {
    sub_60773630((int)a1, 19, 0);
    return SE_PLY_ref_5_helper(a1, 0);
  }
  else
  {
    if ( sub_6078663C((int)(a1 + 172)) == 1 && (a1[2485] != 2 || sub_60786738((int)(a1 + 172)) == 1) )
      a1[3102] = 20;
    result = ((int (__fastcall *)(_DWORD *))loc_607BF96C)(a1);
    if ( result == 1 )
    {
      result = a1[2485];
      if ( result == 3 )
      {
        result = a1[3099];
        if ( !result )
          return SE_PLY_THROW_ICEBALL_ref((int)a1, 0);
      }
    }
  }
  return result;
}
