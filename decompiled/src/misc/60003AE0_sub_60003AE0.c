/* sub_60003AE0
 * address: 0x60003AE0   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60003AE0(StageActor *a1)
{
  int result; // r0
  int v3; // r1

  result = 0;
  if ( !FIELD_U8(a1, 0x218) )
  {
    v3 = sub_60001B14(a1, (int)&FIELD_U32(a1 + (1) * 644, 0x4));
    result = 1;
    if ( !v3 )
      return sub_60001814(a1, (int)&FIELD_U32(a1 + (1) * 644, 0x4));
  }
  return result;
}
