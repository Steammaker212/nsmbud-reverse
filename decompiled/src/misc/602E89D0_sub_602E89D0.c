/* sub_602E89D0
 * address: 0x602E89D0   size: 144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602E89D0(int result)
{
  int v1; // r2

  FIELD_U32(result, 7424) = 1056964608;
  FIELD_U32(result, 7428) = 0;
  FIELD_U32(result, 88) = 0;
  if ( !FIELD_U8(result, 7535) )
    FIELD_U32(result, 7448) = 0;
  FIELD_U8(result, 7536) = 0;
  FIELD_U32(result, 3196) |= 3u;
  v1 = FIELD_U32(result, 3188);
  FIELD_U32(result, 3180) |= 3u;
  FIELD_U32(result, 3188) = v1 | 3;
  FIELD_U32(result, 3204) |= 3u;
  FIELD_U32(result, 3176) |= 0x80000000;
  FIELD_U32(result, 3184) |= 0x80000000;
  FIELD_U32(result, 3200) |= 0x80000000;
  return result;
}
