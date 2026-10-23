/* sub_607DD620
 * address: 0x607DD620   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607DD620(int result, char a2, int a3)
{
  int v3; // r12
  char v4; // r3

  v3 = FIELD_U8(result, 52);
  v4 = v3 & ~a2;
  if ( a3 )
    v4 = v3 | a2;
  FIELD_U8(result, 52) = v4;
  if ( v3 )
  {
    if ( !v4 && FIELD_S32(result, 16) >= 3 && FIELD_S32(result, 16) <= 5 )
      return nn__hid__VibrationPlayer__Play(*(nn__hid__VibrationPlayer **)(result + 464));
  }
  else if ( v4 && FIELD_S32(result, 16) >= 3 && FIELD_S32(result, 16) <= 5 )
  {
    return nn__hid__VibrationPlayer__Stop(*(nn__hid__VibrationPlayer **)(result + 464));
  }
  return result;
}
