/* sub_603FF0A8
 * address: 0x603FF0A8   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603FF0A8(int a1, int a2)
{
  int result; // r0
  int v4; // r1

  result = 0;
  if ( a2 )
  {
    v4 = FIELD_U32(a2, 20528);
    if ( v4 <= 3 )
    {
      if ( (unsigned int)v4 >= 4 )
        v4 = 0;
      return a1 + 40116 * v4 + 16;
    }
  }
  return result;
}
