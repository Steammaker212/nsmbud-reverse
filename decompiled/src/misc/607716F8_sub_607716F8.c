/* sub_607716F8
 * address: 0x607716F8   size: 176   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607716F8(int result)
{
  int v1; // r1
  float v2; // s0

  FIELD_U32(result, 100) = -1111993876;
  v1 = 0;
  v2 = FIELD_F32(result, 124);
  if ( v2 > 2.5 || (v1 = 1, v2 > 1.5) || (v1 = 2, v2 > 0.3) || (v1 = 3, v2 > -0.12) || (v1 = 4, v2 > -3.0) )
    FIELD_U32(result, 100) = dword_60B0AE14[v1 + 6];
  return result;
}
