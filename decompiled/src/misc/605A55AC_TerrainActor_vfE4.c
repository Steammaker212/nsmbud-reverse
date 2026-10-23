/* TerrainActor_vfE4
 * address: 0x605A55AC   size: 172   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall TerrainActor_vfE4(int a1)
{
  float result; // s0
  float v2; // s2
  float *v3; // r1

  result = FIELD_F32(a1, 112) + FIELD_F32(dword_60CC6484, 316);
  if ( (FIELD_U8(a1, 21) & 8) == 0 && FIELD_U8(a1, 6894) )
    FIELD_F32(a1, 6916) = result;
  FIELD_F32(a1, 6128) = result;
  v2 = FIELD_F32(a1, 6856);
  v3 = (float *)(a1 + 6860);
  FIELD_F32(a1, 6860) = (float)(result + v2) - FIELD_F32(a1, 6116);
  if ( FIELD_U32(a1, 6836) )
  {
    *v3 = v2;
  }
  else
  {
    FIELD_F32(TileMgr_instance, 24) = result;
    *v3 = FIELD_F32(a1, 6856);
  }
  return result;
}
