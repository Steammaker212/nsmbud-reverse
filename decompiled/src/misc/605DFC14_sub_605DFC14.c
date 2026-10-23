/* sub_605DFC14
 * address: 0x605DFC14   size: 168   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605DFC14(int a1)
{
  _BOOL4 v2; // r1
  int v3; // r0

  v2 = FIELD_U32(a1, 6756) != 20;
  FIELD_U32(a1, 80) = v2;
  FIELD_F32(a1, 108) = FIELD_F32(a1, 108) + (float)((float)byte_60B0594C[v2] * 16.0);
  FIELD_U32(a1, 6264) |= 1u;
  FIELD_U32(a1, 6268) |= 3u;
  v3 = sub_605D792C(a1, v2);
  FIELD_U32(a1, 156) = 0;
  FIELD_U32(a1, 160) = v3;
  FIELD_U32(a1, 164) = 0;
  FIELD_U32(a1, 8012) = 0;
  return sub_605EAB48(a1 + 6064, 0.0);
}
