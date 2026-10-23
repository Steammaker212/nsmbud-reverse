/* sub_60119338
 * address: 0x60119338   size: 228   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60119338(int result)
{
  bool v1; // r2

  FIELD_U32(result, 9196) = 1;
  FIELD_U32(result, 9200) = 0;
  v1 = 0;
  if ( FIELD_F32(result, 9372) <= FIELD_F32(result, 9364) )
  {
    v1 = 0;
    if ( FIELD_F32(result, 9356) <= FIELD_F32(result, 9380) )
      v1 = FIELD_F32(result, 9376) <= FIELD_F32(result, 9368)
        && FIELD_F32(result, 9360) <= FIELD_F32(result, 9384);
  }
  FIELD_U8(result, 9320) = v1;
  FIELD_U32(result, 9340) = 3;
  FIELD_U32(result, 9216) = 0;
  return result;
}
