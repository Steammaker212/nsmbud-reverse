/* SE_PLY_POLE_CLIMB_ref
 * address: 0x607B5AD8   size: 280   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_PLY_POLE_CLIMB_ref(int a1)
{
  int v2; // r1
  _DWORD *v3; // r0

  sub_60774040(a1, FIELD_U32(a1, 80) ^ 1);
  if ( sub_60793DA0(FIELD_U32(a1, 11360), 0.0) == 1 )
    sub_607734E8((unsigned __int8 *)a1, (int)"SE_PLY_POLE_CLIMB", 0, 0);
  FIELD_U32(a1, 124) = 0;
  if ( (FIELD_U8(a1, 6907) & 4) == 0 )
    FIELD_U32(a1, 112) = FIELD_U32(a1, 12388);
  if ( sub_60786744(a1 + 688) == 1 )
  {
    FIELD_U32(a1, 9940) = 3;
    return PlayerBase_dispatchVirtual3(a1 + 11356, 48, 0.0);
  }
  else if ( sub_60786738(a1 + 688) )
  {
    v2 = sub_607868A0(a1 + 688);
    v3 = *(_DWORD **)(a1 + 11360);
    if ( v2 == 1 )
    {
      sub_60793088(v3, 1.875);
      FIELD_U32(a1, 124) = 1069547520;
      return 1069547520;
    }
    else
    {
      sub_60793088(v3, 1.5);
      FIELD_U32(a1, 124) = 1065353216;
      return 1065353216;
    }
  }
  else
  {
    FIELD_U32(a1, 9940) = 1;
    return PlayerBase_dispatchVirtual3(a1 + 11356, 46, 0.0);
  }
}
