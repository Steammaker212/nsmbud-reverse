/* sub_603FF530
 * address: 0x603FF530   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603FF530(int a1)
{
  int result; // r0
  _BYTE *v3; // r5

  v3 = (_BYTE *)(a1 + 7776);
  result = FIELD_U8(a1, 7776);
  if ( result )
  {
    sub_6050103C(a1 + 16);
    result = FIELD_U8(a1, 7765);
    if ( !FIELD_U8(a1, 7765) )
    {
      *v3 = 0;
      return 0;
    }
  }
  return result;
}
