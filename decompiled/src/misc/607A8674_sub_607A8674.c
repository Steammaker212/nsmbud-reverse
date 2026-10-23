/* sub_607A8674
 * address: 0x607A8674   size: 268   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607A8674(int a1)
{
  int result; // r0
  _DWORD *v3; // r5
  float v4; // s0
  int v5; // r1

  v3 = (_DWORD *)(a1 + 9708);
  result = FIELD_U32(a1, 9708);
  if ( result == 1 )
  {
    result = sub_60793CA8(FIELD_U32(a1, 11360));
    if ( result == 1 )
    {
      PlayerBase_dispatchVirtual3(a1 + 11356, 0, 0.0);
      if ( sub_6077965C(dword_60CBFA90) )
        v5 = 7;
      else
        v5 = 5;
      return sub_6076D180(a1, v5, 1);
    }
  }
  else if ( !result )
  {
    sub_60771858(a1);
    v4 = FIELD_F32(a1, 100) + FIELD_F32(a1, 124);
    FIELD_F32(a1, 124) = v4;
    if ( v4 < -4.0 )
    {
      FIELD_U32(a1, 124) = -1065353216;
      v4 = -4.0;
    }
    FIELD_F32(a1, 112) = v4 + FIELD_F32(a1, 112);
    FIELD_F32(a1, 108) = FIELD_F32(a1, 88) + FIELD_F32(a1, 108);
    result = FIELD_U8(a1, 6900);
    if ( (result & 1) != 0 )
    {
      FIELD_U32(a1, 88) = 0;
      PlayerBase_dispatchVirtual3(a1 + 11356, 7, 0.0);
      sub_6076F0E0(a1);
      result = 1;
      *v3 = 1;
    }
  }
  return result;
}
