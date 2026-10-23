/* sub_60258188
 * address: 0x60258188   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60258188(int result)
{
  int v1; // r1
  __int16 v2; // r1
  int *v3; // r2
  float v4; // s0

  v1 = FIELD_S16(result, 64);
  if ( v1 < 1 )
  {
    v4 = 1.0;
  }
  else
  {
    v2 = v1 - 1;
    FIELD_U16(result, 64) = v2;
    v3 = dword_602581D0;
    if ( (v2 & 4) != 0 )
      v3 = &dword_602581D0[1];
    v4 = *(float *)v3 + FIELD_F32(result, 68);
    FIELD_F32(result, 68) = v4;
  }
  FIELD_F32(result, 32) = v4;
  FIELD_F32(result, 36) = v4;
  FIELD_F32(result, 40) = v4;
  return result;
}
