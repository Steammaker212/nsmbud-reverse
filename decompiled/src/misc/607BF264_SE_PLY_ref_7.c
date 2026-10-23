/* SE_PLY_ref_7
 * address: 0x607BF264   size: 180   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_PLY_ref_7(int a1)
{
  int v2; // r1
  int result; // r0
  const char *v4; // r1

  v2 = sub_60786A8C(a1 + 688);
  result = 0;
  if ( v2 == 1 )
  {
    FIELD_U32(a1, 12396) = 2;
    if ( sub_6075EDF8(a1) )
    {
      FIELD_U32(a1, 12416) = 1077936128;
      sub_60793088(*(_DWORD **)(a1 + 11360), 3.0);
      v4 = "SE_PLY_TOTTEN_SWIM";
    }
    else
    {
      PlayerBase_dispatchVirtual3(a1 + 11356, 167, 0.0);
      v4 = "SE_PLY_PNGN_SWIM";
    }
    sub_607734E8((unsigned __int8 *)a1, (int)v4, 0, 0);
    FIELD_U32(a1, 1212) |= 0x400000u;
    FIELD_U32(a1, 12432) = 35;
    return 1;
  }
  return result;
}
