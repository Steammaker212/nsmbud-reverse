/* sub_607DCFD8
 * address: 0x607DCFD8   size: 172   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607DCFD8(int a1)
{
  int result; // r0
  int v3; // r0
  bool v4; // zf

  result = FIELD_U8(a1, 4);
  if ( !result )
    return result;
  if ( !FIELD_U8(a1, 52) && FIELD_U32(a1, 16) == 2 )
    sub_607DD084(a1);
  if ( FIELD_S32(a1, 16) >= 3 && FIELD_S32(a1, 16) <= 5 )
  {
    v3 = FIELD_U32(a1, 24);
    if ( v3 != 1 )
    {
      if ( v3 )
      {
LABEL_12:
        FIELD_U32(a1, 16) = 6;
        goto LABEL_13;
      }
      if ( !nn__hid__VibrationPlayer__IsPlaying_const(*(nn__hid__VibrationPlayer **)(a1 + 464)) )
      {
        if ( !FIELD_U32(a1, 24) )
          nn__hid__VibrationPlayer__Stop(*(nn__hid__VibrationPlayer **)(a1 + 464));
        goto LABEL_12;
      }
    }
  }
LABEL_13:
  result = FIELD_U8(a1, 52);
  v4 = result == 0;
  if ( FIELD_U8(a1, 52) )
  {
    result = FIELD_U32(a1, 16);
    v4 = result == 5;
  }
  if ( v4 )
    return sub_607DD164(a1);
  return result;
}
