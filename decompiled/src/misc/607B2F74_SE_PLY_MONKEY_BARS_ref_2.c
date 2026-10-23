/* SE_PLY_MONKEY_BARS_ref_2
 * address: 0x607B2F74   size: 208   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_PLY_MONKEY_BARS_ref_2(int a1)
{
  _DWORD *v2; // r7
  int result; // r0

  FIELD_U32(a1, 88) = 0;
  FIELD_U32(a1, 12988) = 0;
  v2 = (_DWORD *)(a1 + 12988);
  if ( sub_60793CA8(FIELD_U32(a1, 11360)) == 1 )
  {
    FIELD_U32(a1, 9940) = 1;
    return PlayerBase_dispatchVirtual3((int)(v2 - 408), dword_60AF2288[*v2], 0.0);
  }
  else if ( sub_6078675C(a1 + 688) || (result = sub_60786750(a1 + 688), result == 1) )
  {
    FIELD_U32(a1, 9940) = 2;
    PlayerBase_dispatchVirtual3((int)(v2 - 408), dword_60AF2290[*v2], 0.0);
    *v2 ^= 1u;
    return sub_607734E8((unsigned __int8 *)a1, (int)"SE_PLY_MONKEY_BARS", 0, 0);
  }
  return result;
}
