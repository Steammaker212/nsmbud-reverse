/* sub_603FF044
 * address: 0x603FF044   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603FF044(int a1, int a2)
{
  int result; // r0
  int *v5; // r6
  int i; // r7
  int v7; // r0

  v5 = (int *)(a1 + 160480);
  result = FIELD_U32(a1, 160480);
  if ( result >= 1 )
  {
    for ( i = 0; i < result; ++i )
    {
      if ( i <= 3 )
      {
        v7 = 0;
        if ( (unsigned int)i < 4 )
          v7 = i;
        sub_604FDA70(a1 + 40116 * v7 + 16, a2);
        result = *v5;
      }
    }
  }
  return result;
}
