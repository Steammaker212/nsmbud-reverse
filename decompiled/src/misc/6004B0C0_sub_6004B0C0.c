/* sub_6004B0C0
 * address: 0x6004B0C0   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6004B0C0(int a1, int a2)
{
  int v2; // r1
  _BOOL4 result; // r0
  Actor *v4; // r0

  v2 = FIELD_U32(a2, 32);
  result = 0;
  if ( v2 )
  {
    v4 = *(Actor **)(v2 + 144);
    return v4 && Actor__getProfileId(v4) == 372;
  }
  return result;
}
