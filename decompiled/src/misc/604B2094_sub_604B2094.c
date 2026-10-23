/* sub_604B2094
 * address: 0x604B2094   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604B2094(int a1, int a2)
{
  int result; // r0
  char v3; // r2
  char v4; // r3

  FIELD_U8(a1, 38107) = a2;
  result = FIELD_U32(a1, 6184);
  v3 = FIELD_U8(result, 64);
  v4 = v3 | 1;
  if ( a2 )
    v4 = v3 & 0xFE;
  FIELD_U8(result, 64) = v4;
  return result;
}
