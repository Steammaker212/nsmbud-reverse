/* sub_602E7794
 * address: 0x602E7794   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int *__fastcall sub_602E7794(int a1)
{
  int v1; // r2
  unsigned int *result; // r0
  int v3; // t1

  FIELD_U32(a1, 3192) |= 0x80000000;
  FIELD_U32(a1, 3196) |= 3u;
  v1 = FIELD_U32(a1, 3188);
  FIELD_U32(a1, 3180) |= 3u;
  FIELD_U32(a1, 3188) = v1 | 3;
  FIELD_U32(a1, 3204) |= 3u;
  FIELD_U8(a1, 7532) = 9;
  if ( !FIELD_U8(a1, 7531) )
    FIELD_U32(a1, 328) = 9;
  v3 = FIELD_U32(a1, 7440);
  result = (unsigned int *)(a1 + 7440);
  *result = v3 & 0xFFFFFFFD;
  return result;
}
