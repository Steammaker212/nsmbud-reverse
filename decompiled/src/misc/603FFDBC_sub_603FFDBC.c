/* sub_603FFDBC
 * address: 0x603FFDBC   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603FFDBC(int result, int a2)
{
  unsigned int v2; // r1
  int v3; // r2

  v2 = FIELD_U32(result, 40) + a2;
  v3 = 999;
  if ( v2 < 0x3E7 )
    v3 = v2;
  FIELD_U32(result, 40) = v3;
  return result;
}
