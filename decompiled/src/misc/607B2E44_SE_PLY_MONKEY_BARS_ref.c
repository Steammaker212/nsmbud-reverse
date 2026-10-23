/* SE_PLY_MONKEY_BARS_ref
 * address: 0x607B2E44   size: 288   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_PLY_MONKEY_BARS_ref(int a1)
{
  int result; // r0

  if ( (FIELD_U8(a1, 6905) & 0x10) != 0 && sub_60786744(a1 + 688) != 1 )
  {
    sub_60774040(a1, FIELD_U32(a1, 80));
    result = FIELD_U32(a1, 9940);
    switch ( result )
    {
      case 2:
        return SE_PLY_MONKEY_BARS_ref_3(a1);
      case 1:
        FIELD_U32(a1, 88) = 0;
        if ( sub_6078675C(a1 + 688) || (result = sub_60786750(a1 + 688), result == 1) )
        {
          FIELD_U32(a1, 9940) = 2;
          PlayerBase_dispatchVirtual3(a1 + 11356, dword_60AF2290[FIELD_U32(a1, 12988)], 0.0);
          FIELD_U32(a1, 12988) ^= 1u;
          return sub_607734E8((unsigned __int8 *)a1, (int)"SE_PLY_MONKEY_BARS", 0, 0);
        }
        break;
      case 0:
        return SE_PLY_MONKEY_BARS_ref_2(a1);
    }
  }
  else
  {
    Player_changeState(a1, (StateBase *)&unk_60CC4C04, 1);
    return sub_60773630(a1, 29, 0);
  }
  return result;
}
