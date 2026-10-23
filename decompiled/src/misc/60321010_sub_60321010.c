/* sub_60321010
 * address: 0x60321010   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60321010(int a1)
{
  int v1; // r1
  int v2; // r0
  float v3; // s0

  v1 = FIELD_U32(a1, 6308);
  v2 = a1 + 13020;
  if ( v1 )
    v3 = 0.04;
  else
    v3 = 0.01;
  sub_602A3EFC(v2, 24, v3);
  return 1;
}
