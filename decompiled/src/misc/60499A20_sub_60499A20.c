/* sub_60499A20
 * address: 0x60499A20   size: 308   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60499A20(_BYTE *a1)
{
  _BOOL4 v2; // r1
  _BOOL4 result; // r0
  _BOOL4 v4; // r1
  _BOOL4 v5; // r1
  _BOOL4 v6; // r1
  _BOOL4 v7; // r1

  if ( !a1[131453] || (v2 = sub_603FF810(a1 + 128764), result = 1, !v2) )
  {
    if ( !a1[134441] || (v4 = sub_603FF810(a1 + 131752), result = 1, !v4) )
    {
      if ( !a1[137429] || (v5 = sub_603FF810(a1 + 134740), result = 1, !v5) )
      {
        if ( !a1[140417] || (v6 = sub_603FF810(a1 + 137728), result = 1, !v6) )
        {
          if ( !a1[143405] )
            return a1[146393] && sub_603FF810(a1 + 143704);
          v7 = sub_603FF810(a1 + 140716);
          result = 1;
          if ( !v7 )
            return a1[146393] && sub_603FF810(a1 + 143704);
        }
      }
    }
  }
  return result;
}
