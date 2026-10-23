/* sub_607C48A8
 * address: 0x607C48A8   size: 256   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607C48A8(int a1)
{
  int result; // r0

  if ( (FIELD_U8(a1, 6904) & 0x18) == 0 || (result = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1020))(a1)) == 0 )
  {
    result = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1024))(a1);
    if ( !result )
    {
      if ( (FIELD_U8(a1, 6900) & 1) != 0 )
      {
        result = sub_60773318(a1);
        if ( !result )
        {
          ((void (__fastcall *)(int))loc_607747EC)(a1);
          if ( sub_60786974(a1 + 688) || (result = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1020))(a1)) == 0 )
          {
            if ( (FIELD_U8(a1, 6902) & 4) != 0 )
            {
              FIELD_U32(a1, 9940) = 1;
              FIELD_U32(a1, 1224) &= ~0x400u;
              result = FIELD_U32(a1, 1228) | 0x20000;
              FIELD_U32(a1, 1228) = result;
            }
            else
            {
              result = FIELD_U32(a1, 1224) & 0xFDFFFFFF;
              FIELD_U32(a1, 1224) = result;
            }
          }
        }
      }
      else
      {
        FIELD_U32(a1, 124) = 0;
        return Player_changeState(a1, (StateBase *)&unk_60CC4C70, 1);
      }
    }
  }
  return result;
}
