/* sub_605CD500
 * address: 0x605CD500   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605CD500(int result)
{
  int v1; // r2
  int v2; // r1

  v1 = FIELD_U8(result, 104);
  FIELD_U8(result, 106) = v1;
  FIELD_U32(result, 64) = FIELD_U32(result, 68);
  v2 = FIELD_U32(result, 84);
  if ( !FIELD_U8(result, 103) )
    v2 += FIELD_U32(result, 76) * byte_60AFE3F4[v1];
  FIELD_U32(result, 88) = v2;
  FIELD_U8(result, 95) = 1;
  FIELD_U8(result, 96) = 1;
  FIELD_U8(result, 98) = 0;
  return result;
}
