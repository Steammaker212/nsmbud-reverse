/* sub_605D477C
 * address: 0x605D477C   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605D477C(int a1, int a2)
{
  int v2; // r2
  float *v3; // r1
  float v5[5]; // [sp+4h] [bp-14h] BYREF

  if ( a2 )
  {
    v5[0] = FIELD_F32(a2, 108) + FIELD_F32(a2, 572);
    v5[1] = FIELD_F32(a2, 112) + FIELD_F32(a2, 576);
    v5[2] = FIELD_F32(a2, 116) + FIELD_F32(a2, 580);
    v2 = FIELD_S8(a2, 84);
    v3 = v5;
  }
  else
  {
    v3 = (float *)(a1 + 768);
    v2 = -1;
  }
  return sub_605D56D4(a1, v3, v2, 0);
}
