/* LargeGoomba_vf173
 * address: 0x6033F124   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall LargeGoomba_vf173(int result)
{
  int v1; // r1

  v1 = FIELD_U32(result, 6956);
  if ( v1 )
  {
    if ( v1 == FIELD_U32(result, 6960) )
      FIELD_U8(result, 536) = 1;
  }
  return result;
}
