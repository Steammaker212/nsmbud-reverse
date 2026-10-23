/* sub_605DBCCC
 * address: 0x605DBCCC   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_605DBCCC(int a1, int a2)
{
  Actor *v2; // r1
  _BOOL4 result; // r0
  bool v4; // zf

  v2 = *(Actor **)(a2 + 8);
  result = 0;
  v4 = v2 == 0;
  if ( v2 )
  {
    v2 = (Actor *)v2[1].field_40;
    v4 = v2 == 0;
  }
  if ( !v4 )
    return Actor__getProfileId(v2) == 90;
  return result;
}
