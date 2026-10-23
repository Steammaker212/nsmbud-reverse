/* sub_60272570
 * address: 0x60272570   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60272570(StageActor *a1, int a2)
{
  int v4; // r6
  _BOOL4 result; // r0

  v4 = FIELD_U8(a2, 84);
  if ( (unsigned __int8)FIELD_U8(a1, 0x54) != v4 )
    sub_600009FC(a1);
  FIELD_U8(a1, 0x54) = v4;
  result = sub_6000ADDC((int)a1, a2);
  FIELD_U32(a1, 0x50) = result;
  return result;
}
