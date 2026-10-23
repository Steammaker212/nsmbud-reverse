/* sub_60599120
 * address: 0x60599120   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60599120(int a1)
{
  int v2; // r1
  int v3; // r3
  float v4; // s2

  if ( (FIELD_U8(a1, 6262) & 2) == 0 )
    return sub_605D9ED4();
  v2 = FIELD_U32(a1, 80);
  v3 = 357913941;
  FIELD_U32(a1, 156) = 0;
  if ( v2 == 1 )
    v3 = -357913941;
  FIELD_U32(a1, 160) = v3;
  v4 = (float)byte_60B0594C[v2];
  FIELD_U32(a1, 164) = 0;
  FIELD_F32(a1, 120) = v4 * 0.0;
  FIELD_U32(a1, 124) = 0;
  FIELD_U32(a1, 128) = 0;
  return sub_605D79D0(a1, &dword_60CAF978, 0);
}
