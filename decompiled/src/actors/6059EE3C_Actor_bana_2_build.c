/* Actor_bana_2_build
 * address: 0x6059EE3C   size: 168   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_bana_2_build(int a1)
{
  int v2; // r0
  int result; // r0
  unsigned int v4; // r1

  v2 = operator_new(0x1C08u);
  result = sub_6059BFA4(v2, a1, 0);
  *(_DWORD *)result = off_60C07BF0;
  v4 = FIELD_U32(result, 20);
  FIELD_U32(result, 7140) = HIBYTE(v4) & 0xF;
  FIELD_U8(result, 7144) = BYTE1(v4) & 1;
  FIELD_U32(result, 7152) = 1065353216;
  FIELD_U32(result, 7148) = 1065353216;
  FIELD_U32(result, 7160) = 0;
  FIELD_U32(result, 7156) = 0;
  FIELD_U32(result, 7164) = 0;
  FIELD_U32(result, 7168) = 0;
  FIELD_U32(result, 7172) = 0;
  return result;
}
