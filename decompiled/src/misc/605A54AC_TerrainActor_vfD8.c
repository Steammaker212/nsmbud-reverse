/* TerrainActor_vfD8
 * address: 0x605A54AC   size: 228   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall TerrainActor_vfD8(int a1)
{
  float *v1; // r1
  float result; // s0
  float v3; // s2
  float v4; // s2

  v1 = (float *)(a1 + 6876);
  result = FIELD_F32(a1, 6876);
  v3 = FIELD_F32(a1, 112) + result;
  FIELD_F32(a1, 6844) = v3;
  if ( FIELD_U16(a1, 6890) )
  {
    --FIELD_U16(a1, 6890);
  }
  else
  {
    v4 = v3 - FIELD_F32(a1, 6872);
    if ( (FIELD_U8(a1, 21) & 8) == 0 && FIELD_U8(a1, 6894) )
      FIELD_F32(a1, 6916) = v4;
    FIELD_F32(a1, 6128) = v4;
    FIELD_F32(a1, 6860) = (float)(v4 + FIELD_F32(a1, 6856)) - FIELD_F32(a1, 6116);
    if ( !FIELD_U32(a1, 6836) )
    {
      FIELD_F32(TileMgr_instance, 24) = v4;
      result = *v1;
    }
    result = FIELD_F32(a1, 6868) + result;
    *v1 = result;
  }
  return result;
}
