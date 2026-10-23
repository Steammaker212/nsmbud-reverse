/* sub_602EC628
 * address: 0x602EC628   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602EC628(int result)
{
  int v1; // r2

  FIELD_U32(result, 3200) &= 0xFFFFFFE7;
  v1 = FIELD_U32(result, 3184);
  FIELD_U32(result, 3176) &= 0xFFFFFB87;
  FIELD_U32(result, 3184) = v1 & 0xFFFFFB87;
  if ( FIELD_U8(result, 6780) )
    FIELD_U32(result, 6252) = 0;
  return result;
}
