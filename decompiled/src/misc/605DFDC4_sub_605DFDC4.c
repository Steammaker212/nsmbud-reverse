/* sub_605DFDC4
 * address: 0x605DFDC4   size: 152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605DFDC4(int a1)
{
  int v1; // r4
  int v2; // r1
  int v3; // r0
  int v4; // t1

  v1 = a1;
  sub_605EAB48(a1 + 6064, 0.0);
  sub_605D847C((_DWORD *)v1);
  v2 = FIELD_U32(v1, 80);
  FIELD_F32(v1, 120) = (float)byte_60B0594C[v2] + (float)byte_60B0594C[v2];
  FIELD_U32(v1, 104) = 1022739087;
  v3 = sub_605D792C(v1, v2);
  FIELD_U32(v1, 156) = 0;
  FIELD_U32(v1, 160) = v3;
  FIELD_U32(v1, 164) = 0;
  FIELD_U32(v1, 6260) |= 0x10000000u;
  v4 = FIELD_U32(v1, 6268);
  v1 += 6268;
  *(_DWORD *)v1 = v4 | 1;
  FIELD_U32(v1, 1744) = 0;
  return v4 | 1;
}
