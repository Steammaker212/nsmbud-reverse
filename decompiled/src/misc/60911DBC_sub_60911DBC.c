/* sub_60911DBC
 * address: 0x60911DBC   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60911DBC(int a1, int a2)
{
  int result; // r0
  void *v5; // r0
  float32x2_t v6; // d0
  float v7; // s2
  float v8; // s3
  float32x2_t v9; // d2

  result = FIELD_U32(a1, 12);
  if ( !result )
  {
    v5 = sub_608065A0();
    v6.n64_u32[0] = 0;
    sub_608B6A64((int)v5, a2, v6, v7, v8, v9);
    sub_60913100(a1, a2);
    FIELD_U32(a1, 12) = 1;
    return 1;
  }
  return result;
}
