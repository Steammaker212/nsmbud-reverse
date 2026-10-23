/* sub_607A9E84
 * address: 0x607A9E84   size: 368   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607A9E84(int result, int a2)
{
  int v3; // r4
  bool v4; // zf
  float v5; // s16
  float v6; // s0
  int v7; // r1
  _DWORD v8[18]; // [sp+0h] [bp-48h] BYREF

  v3 = result;
  v4 = a2 == 0;
  if ( a2 )
  {
    result = FIELD_U32(result, 1236);
    v4 = (result & 0x10000000) == 0;
  }
  if ( !v4 )
  {
    if ( (result & 0x20000000) != 0 )
    {
      FIELD_F32(v3, 108) = FIELD_F32(a2, 108)
                           + (float)(FIELD_F32(v3, 12968)
                                   * (float)(*(float *)((char *)sinLutTable + ((FIELD_U32(a2, 160) >> 20) & 0xFF0))
                                           + (float)((float)((float)(FIELD_U32(a2, 160) & 0xFFFFFF)
                                                           * *(float *)((char *)&sinLutTable[1]
                                                                      + ((FIELD_U32(a2, 160) >> 20) & 0xFF0)))
                                                   * 0.000000059605)));
      FIELD_F32(v3, 112) = FIELD_F32(a2, 112) + FIELD_F32(v3, 12972);
    }
    else
    {
      result = tongue_tip_ref_2(a2, v8);
      if ( result != 1 )
        return result;
      v5 = *(float *)&v8[7];
      FIELD_U32(v3, 108) = v8[3];
      v6 = v5 + flt_60B0C8E4[(*(int (__fastcall **)(int, _DWORD))(*(_DWORD *)v3 + 156))(v3, FIELD_U32(v3, 1320))];
      FIELD_F32(v3, 112) = v6;
      FIELD_F32(v3, 12968) = (float)(FIELD_F32(v3, 108) - FIELD_F32(a2, 108))
                             / (float)(*(float *)((char *)sinLutTable + ((FIELD_U32(a2, 160) >> 20) & 0xFF0))
                                     + (float)((float)((float)(FIELD_U32(a2, 160) & 0xFFFFFF)
                                                     * *(float *)((char *)&sinLutTable[1]
                                                                + ((FIELD_U32(a2, 160) >> 20) & 0xFF0)))
                                             * 0.000000059605));
      FIELD_F32(v3, 12972) = v6 - FIELD_F32(a2, 112);
    }
    v7 = FIELD_U32(a2, 112);
    FIELD_U32(v3, 12980) = FIELD_U32(a2, 108);
    FIELD_U32(v3, 12984) = v7;
    return 12984;
  }
  return result;
}
