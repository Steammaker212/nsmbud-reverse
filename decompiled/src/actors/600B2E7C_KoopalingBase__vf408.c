/* KoopalingBase__vf408
 * address: 0x600B2E7C   size: 120   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by: None
int __fastcall KoopalingBase__vf408(int result)
{
  float v1; // s4
  float v2; // s0
  float v3; // s2
  float v4; // s2
  float v5; // s2

  v1 = FIELD_F32(result, 120);
  v2 = FIELD_F32(result, 108);
  v3 = FIELD_F32(dword_60CC6484, 116) + *(float *)(result + 4 * (v1 < 0.0) + 7488);
  if ( v1 >= 0.0 )
  {
    v5 = v3 + -1.0;
    if ( v2 > v5 )
      FIELD_F32(result, 108) = v5;
  }
  else
  {
    v4 = v3 + 1.0;
    if ( v2 < v4 )
      FIELD_F32(result, 108) = v4;
  }
  return result;
}
