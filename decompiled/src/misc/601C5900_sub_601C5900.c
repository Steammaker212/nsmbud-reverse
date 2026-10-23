/* sub_601C5900
 * address: 0x601C5900   size: 220   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601C5900(int a1)
{
  int result; // r0
  int v3; // r1

  result = FIELD_U32(a1, 772);
  if ( result == 2 )
  {
    if ( !sub_60237208(a1 + 668, a1 + 80, 0, 0) )
    {
      sub_60237560(a1 + 668);
      FIELD_U32(a1, 772) = 0;
    }
LABEL_7:
    result = FIELD_U8(a1, 776);
    if ( !FIELD_U8(a1, 776) )
      return result;
    result = 1;
    goto LABEL_13;
  }
  if ( result != 1 )
  {
    if ( result )
      return result;
    goto LABEL_7;
  }
  v3 = 887;
  if ( (FIELD_U32(a1, 264) | 1) != 7 )
    v3 = dword_60AFC250[dword_60AFC268[FIELD_U32(a1, 268)]];
  EffectWrapper_update((EffectWrapper *)(a1 + 668), v3, (Vec3 *)(a1 + 80), 0, 0);
  result = FIELD_U8(a1, 776);
  if ( !FIELD_U8(a1, 776) )
  {
    sub_60236074(a1 + 684);
    result = 2;
LABEL_13:
    FIELD_U32(a1, 772) = result;
  }
  return result;
}
