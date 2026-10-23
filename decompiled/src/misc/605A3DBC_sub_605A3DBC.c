/* sub_605A3DBC
 * address: 0x605A3DBC   size: 320   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605A3DBC(int result, double a2, float32x2_t a3)
{
  float v3; // s4
  float v4; // s6
  unsigned int v5; // r1
  float v6; // s4

  a3.n64_u32[0] = -8.0;
  *(float *)&a2 = FIELD_F32(result, 6876) + (float)(FIELD_F32(result, 6868) * -0.5);
  v3 = vmax_f32(*(float32x2_t *)&a2, a3).n64_f32[0];
  FIELD_F32(result, 6876) = v3;
  v4 = FIELD_F32(result, 112);
  v5 = FIELD_U32(result, 72304) + dword_60CAFEC4;
  FIELD_U32(result, 72304) = v5;
  v6 = (float)(v4 + v3)
     + (float)((float)(*(float *)((char *)sinLutTable + ((v5 >> 20) & 0xFF0))
                     + (float)((float)((float)(v5 & 0xFFFFFF)
                                     * *(float *)((char *)&sinLutTable[1] + ((v5 >> 20) & 0xFF0)))
                             * 0.000000059605))
             * 4.0);
  if ( (FIELD_U8(result, 21) & 8) == 0 && FIELD_U8(result, 6894) )
    FIELD_F32(result, 6916) = v6;
  FIELD_F32(result, 6128) = v6;
  FIELD_F32(result, 6860) = (float)(v6 + FIELD_F32(result, 6856)) - FIELD_F32(result, 6116);
  if ( !FIELD_U32(result, 6836) )
    FIELD_F32(TileMgr_instance, 24) = v6;
  if ( *(float *)&a2 < -8.0 )
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)result + 192))(result, &dword_60CAFF68);
  return result;
}
