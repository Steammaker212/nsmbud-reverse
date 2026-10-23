/* SE_PLY_MONKEY_BARS_ref_3
 * address: 0x607B3054   size: 304   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_PLY_MONKEY_BARS_ref_3(int a1)
{
  int v2; // r5
  int v3; // r1
  _DWORD *v4; // r0
  float v5; // s0
  float v6; // s0
  int result; // r0

  v2 = a1 + 688;
  v3 = sub_607868A0(a1 + 688);
  v4 = *(_DWORD **)(a1 + 11360);
  v5 = flt_60B0A898[FIELD_U32(a1, 80)];
  if ( v3 == 1 )
  {
    FIELD_F32(a1, 88) = v5 * 1.125;
    v6 = 1.5;
  }
  else
  {
    FIELD_F32(a1, 88) = v5 * 0.875;
    v6 = 1.0;
  }
  sub_60793088(v4, v6);
  result = sub_60793CA8(FIELD_U32(a1, 11360));
  if ( result == 1 )
  {
    if ( sub_6078675C(v2) || sub_60786750(v2) == 1 )
    {
      FIELD_U32(a1, 9940) = 2;
      PlayerBase_dispatchVirtual3(a1 + 11356, dword_60AF2290[FIELD_U32(a1, 12988)], 0.0);
      FIELD_U32(a1, 12988) ^= 1u;
      return sub_607734E8((unsigned __int8 *)a1, (int)"SE_PLY_MONKEY_BARS", 0, 0);
    }
    else
    {
      FIELD_U32(a1, 9940) = 1;
      return PlayerBase_dispatchVirtual3(a1 + 11356, dword_60AF2288[FIELD_U32(a1, 12988)], 0.0);
    }
  }
  return result;
}
