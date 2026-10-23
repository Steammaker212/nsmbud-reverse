/* sub_602E8068
 * address: 0x602E8068   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602E8068(int result)
{
  int v1; // r1
  int v2; // r2

  v1 = FIELD_U8(result, 7537);
  FIELD_U32(result, 120) = 0;
  FIELD_U32(result, 124) = dword_60AFECC4[v1];
  FIELD_U32(result, 128) = 0;
  FIELD_U32(result, 164) = 0;
  FIELD_U32(result, 3196) |= 3u;
  v2 = FIELD_U32(result, 3188);
  FIELD_U32(result, 3180) |= 3u;
  FIELD_U32(result, 3188) = v2 | 3;
  FIELD_U32(result, 3204) |= 3u;
  FIELD_U32(result, 3176) |= 0x80000000;
  FIELD_U32(result, 3184) |= 0x80000000;
  FIELD_U32(result, 3200) |= 0x80000000;
  return result;
}
