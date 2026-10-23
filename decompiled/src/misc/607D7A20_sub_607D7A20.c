/* sub_607D7A20
 * address: 0x607D7A20   size: 192   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607D7A20(_DWORD *a1)
{
  int result; // r0

  a1[306] &= ~0x800u;
  if ( (a1[1726] & 0x18) == 0 || (result = (*(int (__fastcall **)(_DWORD *))(*a1 + 1020))(a1)) == 0 )
  {
    result = (*(int (__fastcall **)(_DWORD *))(*a1 + 1024))(a1);
    if ( !result )
    {
      if ( (a1[1725] & 1) != 0 )
      {
        result = sub_60773318((int)a1);
        if ( !result )
        {
          ((void (__fastcall *)(_DWORD *))loc_607747EC)(a1);
          result = sub_60786974((int)(a1 + 172));
          if ( !result )
            return (*(int (__fastcall **)(_DWORD *))(*a1 + 1020))(a1);
        }
      }
      else
      {
        a1[31] = 0;
        return Player_changeState((int)a1, &stru_60CC553C, 1);
      }
    }
  }
  return result;
}
