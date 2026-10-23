/* Enemy__vf1A8
 * address: 0x602A3CB8   size: 124   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by:
//   - 0x6031789C : DryBones
bool __fastcall Enemy__vf1A8(float *a1)
{
  float v1; // s0
  float v2; // s2
  float v3; // s2
  float v4; // s0

  v1 = a1[27] + a1[143];
  v2 = FIELD_F32(dword_60CC6484, 112);
  if ( v1 >= v2
    && v1 <= (float)(v2 + FIELD_F32(dword_60CC6484, 104))
    && (v3 = FIELD_F32(dword_60CC6484, 124), v4 = a1[28] + a1[144], v4 <= v3) )
  {
    return v4 >= (float)(v3 - FIELD_F32(dword_60CC6484, 108));
  }
  else
  {
    return 0;
  }
}
