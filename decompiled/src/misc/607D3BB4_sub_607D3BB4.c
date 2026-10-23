/* sub_607D3BB4
 * address: 0x607D3BB4   size: 284   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607D3BB4(int a1)
{
  int result; // r0
  int v3; // r0

  ((void (*)(void))loc_60771910)();
  ((void (__fastcall *)(int))loc_60770F74)(a1);
  sub_60773F4C(a1);
  result = sub_607D3918((_BYTE *)a1);
  if ( !result )
  {
    if ( (FIELD_U8(a1, 6900) & 0x60) != 0 )
      sub_607865BC(a1 + 688, 2);
    ((void (__fastcall *)(int))loc_607D3CDC)(a1);
    ((void (__fastcall *)(int))loc_60764488)(a1);
    result = FIELD_U8(a1, 6900);
    if ( (result & 1) != 0 )
    {
      sub_6076F0E0(a1);
      if ( (FIELD_U8(a1, 1207) & 0x40) != 0 )
      {
        return Player_changeState(a1, &stru_60CC5518, 2);
      }
      else
      {
        result = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 972))(a1);
        if ( !result )
        {
          FIELD_U32(a1, 156) = 0;
          if ( FIELD_F32(a1, 88) == 0.0 )
          {
            v3 = a1 + 11364;
            if ( (FIELD_U8(a1, 1207) & 0x10) != 0 )
              sub_60794954(v3, 71, 0.0, 0.0);
            else
              PlayerBase_dispatchVirtual3(v3, 7, 0.0);
            return Player_changeState(a1, (StateBase *)&dword_60CC54F4, 0);
          }
          else
          {
            return sub_607D71F8(a1);
          }
        }
      }
    }
  }
  return result;
}
