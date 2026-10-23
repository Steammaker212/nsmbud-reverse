/* sub_607DD550
 * address: 0x607DD550   size: 204   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607DD550(int a1, float a2, float a3)
{
  int result; // r0
  int v5; // r5

  if ( a2 < 0.0 )
    goto LABEL_18;
  if ( FIELD_S32(a1, 16) >= 5 )
  {
    result = FIELD_U32(a1, 16);
    if ( result < 7 )
      return result;
  }
  if ( FIELD_S32(a1, 16) > 2 )
  {
    FIELD_F32(a1, 64) = a3;
    FIELD_F32(a1, 68) = a2;
    if ( a3 == 0.0 )
    {
      if ( a2 == 0.0 )
      {
        result = FIELD_U32(a1, 24);
        v5 = 6;
        if ( !result )
        {
          result = nn__hid__VibrationPlayer__Stop(*(nn__hid__VibrationPlayer **)(a1 + 464));
          FIELD_U32(a1, 16) = 6;
          return result;
        }
      }
      else
      {
        result = FIELD_U32(a1, 72);
        v5 = 5;
        if ( result )
          result = sub_607DAC90(result, 0.0, a2);
      }
      FIELD_U32(a1, 16) = v5;
    }
    else
    {
      FIELD_U32(a1, 16) = 4;
      return 4;
    }
  }
  else
  {
LABEL_18:
    if ( !FIELD_U32(a1, 24) )
      nn__hid__VibrationPlayer__Stop(*(nn__hid__VibrationPlayer **)(a1 + 464));
    FIELD_U32(a1, 16) = 6;
    return 6;
  }
  return result;
}
