/* sub_60996004
 * address: 0x60996004   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60996004(int result, float *a2)
{
  float v2; // s0
  int v3; // r2
  float v4; // s2

  if ( a2 )
  {
    v2 = FIELD_F32(result, 76);
    v3 = *(_DWORD *)(FIELD_U32(result, 16) + 12);
    if ( FIELD_U8(result, 86) )
      v2 = v2 + (float)(*a2 - FIELD_F32(result, 68));
    v4 = FIELD_F32(result, 80);
    if ( FIELD_U8(result, 87) )
      v4 = v4 + (float)(a2[1] - FIELD_F32(result, 72));
    FIELD_F32(v3, 24) = v2;
    FIELD_F32(v3, 28) = v4;
    result = FIELD_U8(v3, 64) | 0x10;
    FIELD_U8(v3, 64) = result;
  }
  return result;
}
