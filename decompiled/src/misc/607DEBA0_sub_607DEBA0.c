/* sub_607DEBA0
 * address: 0x607DEBA0   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607DEBA0(int a1, int a2)
{
  int result; // r0
  float v5; // s2
  float v6; // s4
  float v7; // s0

  result = FIELD_U32(a1, 40);
  if ( result )
  {
    sub_607DEA44(result, (_DWORD *)a2, FIELD_U32(a1, 44));
    result = (int)&flt_60C2636C;
    v5 = flt_60C2636C;
    v6 = flt_60C2636C * FIELD_F32(a2, 8);
    FIELD_F32(a2, 8) = v6;
    v7 = v5 * *(float *)a2;
    *(float *)a2 = v7;
    if ( v6 > 1.0 )
    {
      result = 1065353216;
      FIELD_U32(a2, 8) = 1065353216;
    }
    if ( v7 > 1.0 )
    {
      *(_DWORD *)a2 = 1065353216;
      return 1065353216;
    }
  }
  return result;
}
