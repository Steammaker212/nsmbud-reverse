/* SE_PLY_POLE_SLIDE_ref
 * address: 0x607B5BF8   size: 268   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_PLY_POLE_SLIDE_ref(int a1)
{
  int v2; // r1
  int v4; // r1
  _DWORD *v5; // r0
  float v6; // s0
  int v7; // r1

  v2 = FIELD_U32(a1, 80) ^ 1;
  if ( (FIELD_U8(a1, 6907) & 4) != 0 )
  {
    sub_60774040(a1, v2);
    FIELD_U32(a1, 124) = 0;
    if ( sub_60786738(a1 + 688) == 1 )
    {
      FIELD_U32(a1, 9940) = 2;
      return PlayerBase_dispatchVirtual3(a1 + 11356, 47, 0.0);
    }
    else if ( sub_60786744(a1 + 688) )
    {
      v4 = sub_607868A0(a1 + 688);
      v5 = *(_DWORD **)(a1 + 11360);
      if ( v4 == 1 )
      {
        v6 = 1.6;
        v7 = -1068708659;
      }
      else
      {
        v6 = 1.0;
        v7 = -1073741824;
      }
      FIELD_U32(a1, 124) = v7;
      sub_60793088(v5, v6);
      return sub_60773558(a1, (int)"SE_PLY_POLE_SLIDE", 0);
    }
    else
    {
      FIELD_U32(a1, 9940) = 1;
      return PlayerBase_dispatchVirtual3(a1 + 11356, 46, 0.0);
    }
  }
  else
  {
    FIELD_U32(a1, 80) = v2;
    return Player_changeState(a1, (StateBase *)&unk_60CC4C04, 1);
  }
}
