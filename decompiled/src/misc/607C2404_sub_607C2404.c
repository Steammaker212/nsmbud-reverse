/* sub_607C2404
 * address: 0x607C2404   size: 204   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607C2404(int a1)
{
  int v2; // r4
  int v3; // r2

  v2 = 0;
  if ( (FIELD_U8(a1, 1224) & 0x40) != 0
    && !(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1064))(a1)
    && !FIELD_U32(a1, 12268)
    && FIELD_F32(a1, 124) <= 0.0
    && sub_60786738(a1 + 688) == 1
    && (FIELD_U8(a1, 6907) & 0x10) != 0 )
  {
    if ( FIELD_U32(a1, 6696) != 2 )
    {
      v3 = 0;
      goto LABEL_11;
    }
    if ( !FIELD_U8(dword_60C9A1F0, 6536) )
    {
      v3 = 2;
LABEL_11:
      Player_changeState(a1, (StateBase *)&dword_60CC4F2C, v3);
      return 1;
    }
  }
  return v2;
}
