/* KoopaTroopa_executeState_Slide
 * address: 0x6035D18C   size: 216   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall KoopaTroopa_executeState_Slide(int a1)
{
  float v2; // s0
  bool v3; // zf
  float v4; // s0

  if ( FIELD_U32(a1, 7476) == 1 )
    Animation_update(**(_DWORD **)(FIELD_U32(a1, 6820) + 28));
  v2 = FIELD_F32(a1, 636);
  v3 = v2 == 0.0;
  if ( v2 != 0.0 )
    v3 = (FIELD_U8(a1, 24) & 0x10) == 0;
  if ( !v3 && Actor__getProfileId((Actor *)a1) == 512 && FIELD_U8(dword_60CC6D8C, 17) )
  {
    if ( (FIELD_U8(a1, 2872) & 1) != 0
      || (v4 = FIELD_F32(a1, 636), (float)((float)byte_60AFE3F4[FIELD_U32(a1, 80)] * v4) < 0.0) )
    {
      FIELD_U32(a1, 636) = 0;
    }
    else
    {
      FIELD_F32(a1, 108) = v4 + FIELD_F32(a1, 108);
    }
  }
  JUMPOUT(0x603A3A80);
}
