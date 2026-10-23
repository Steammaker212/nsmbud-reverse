/* sub_604D8A68
 * address: 0x604D8A68   size: 164   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604D8A68(int a1)
{
  int *v1; // r4
  int result; // r0
  int (**v3)(); // [sp+0h] [bp-18h] BYREF
  int v4; // [sp+4h] [bp-14h]

  v1 = (int *)(a1 + 13276);
  if ( FIELD_U32(a1, 13276) == 1 )
  {
    v3 = &sead__SafeStringBase__vtable;
    v4 = InOut_ScrollToR_ScrollToL_LoopArrow_ref(1);
    sub_60473DE4(v1 - 3308, 1u, &v3, 0);
  }
  else
  {
    v3 = &sead__SafeStringBase__vtable;
    v4 = InOut_ScrollToR_ScrollToL_LoopArrow_ref(2);
    sub_604741D8(v1 - 3308, 1u, &v3, 0);
  }
  result = *v1 + 1;
  if ( result >= 2 )
    result = 2;
  *v1 = result;
  return result;
}
