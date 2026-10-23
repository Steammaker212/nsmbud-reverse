/* sub_602B6F1C
 * address: 0x602B6F1C   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602B6F1C(int a1)
{
  int result; // r0
  char v2; // t1

  FIELD_F32(a1, 120) = -(float)byte_60AFE3F4[FIELD_U32(a1, 80)];
  FIELD_U32(a1, 124) = 1080688640;
  FIELD_U32(a1, 128) = 0;
  v2 = FIELD_U8(a1, 6318);
  result = a1 + 6318;
  *(_BYTE *)result = v2 | 1;
  FIELD_U32(result, 6) = 0;
  return result;
}
