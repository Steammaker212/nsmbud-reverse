/* sub_609AA8AC
 * address: 0x609AA8AC   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609AA8AC(int a1, int a2)
{
  int v2; // r3
  int v3; // r2
  float v4; // s2
  int result; // r0

  v2 = 1;
  v3 = (int)(float)((float)FIELD_S32(a2, 4) * FIELD_F32(a1, 180));
  if ( v3 <= 1 )
    v3 = 1;
  FIELD_U32(a2, 4) = v3;
  v4 = FIELD_F32(a1, 184);
  result = (int)(float)((float)FIELD_S32(a2, 8) * v4);
  if ( result > 1 )
    v2 = (int)(float)((float)FIELD_S32(a2, 8) * v4);
  FIELD_U32(a2, 8) = v2;
  return result;
}
