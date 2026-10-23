/* sub_60709E0C
 * address: 0x60709E0C   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60709E0C(int a1, int a2)
{
  Actor *v2; // r5
  Actor *v3; // r6
  int result; // r0

  v2 = *(Actor **)(a1 + 64);
  v3 = *(Actor **)(a2 + 64);
  result = Actor__getProfileId(v2);
  if ( result == 324 )
  {
    result = Actor__getProfileId(v3);
    if ( v2 )
    {
      result = result != 660 && result != 661 && result != 662;
      if ( !result )
        return (int)SE_OBJ_WOOD_BOX_BREAK_ref_2((int)v2, (int)v3);
    }
  }
  return result;
}
