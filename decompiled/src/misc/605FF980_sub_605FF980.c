/* sub_605FF980
 * address: 0x605FF980   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_605FF980(int a1)
{
  signed int v2; // r1
  _BOOL4 result; // r0

  v2 = StageActor__befreDraw((Actor *)a1);
  result = 0;
  if ( v2 == 1 )
    return !FIELD_U8(a1, 6878) || FIELD_U32(a1, 6824) != 0;
  return result;
}
