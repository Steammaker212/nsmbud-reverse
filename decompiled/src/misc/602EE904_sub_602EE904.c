/* sub_602EE904
 * address: 0x602EE904   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_602EE904(int a1)
{
  int v2; // r2
  _BOOL4 result; // r0
  int v4; // r0

  v2 = FIELD_U8(a1, 7525);
  result = 1;
  if ( !v2 )
  {
    v4 = FIELD_U32(a1, 7368);
    return v4 && FIELD_U8(v4, 74) != 0;
  }
  return result;
}
