/* SE_PLY_JUMP_FENCE_ref
 * address: 0x607C2AF0   size: 388   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_PLY_JUMP_FENCE_ref(int a1)
{
  int result; // r0
  int v3; // r0
  const char *v4; // r1

  if ( (FIELD_U8(a1, 6907) & 8) != 0 && ((FIELD_U8(a1, 6900) & 1) == 0 || sub_60786738(a1 + 688)) )
  {
    if ( FIELD_U32(a1, 6696) == 2 )
    {
      result = sub_607C2248(a1);
      if ( !result )
        goto LABEL_15;
    }
    else
    {
      if ( !sub_607B74E0(a1, 3.628, 0.0) && sub_6075FB84(a1, 0, 0) != 1 )
      {
LABEL_15:
        FIELD_U32(a1, 160) = FIELD_U32(a1, 12264);
        ((void (__fastcall *)(int))loc_607C2F34)(a1);
        if ( !sub_60786738(a1 + 688) )
          FIELD_U32(a1, 12272) = 0;
        JUMPOUT(0x607C3220);
      }
      FIELD_U32(a1, 12268) = 10;
      v3 = FIELD_U32(a1, 1320);
      if ( v3 == 3 )
      {
        v4 = "SE_PLY_JUMP_FENCE_SS";
      }
      else if ( v3 )
      {
        v4 = "SE_PLY_JUMP_FENCE";
      }
      else
      {
        v4 = "SE_PLY_JUMP_FENCE_S";
      }
      sub_607734E8((unsigned __int8 *)a1, (int)v4, 0, 0);
      result = sub_60773F3C(a1, FIELD_U32(a1, 80));
      FIELD_U32(a1, 160) = result;
    }
  }
  else
  {
    FIELD_U32(a1, 160) = sub_60773F3C(a1, FIELD_U32(a1, 80));
    if ( (FIELD_U8(a1, 6906) & 0x80) != 0 )
      return Player_changeState(a1, (StateBase *)&dword_60CC508C, 3);
    else
      return Player_changeState(a1, (StateBase *)&dword_60CC4BBC, 0);
  }
  return result;
}
