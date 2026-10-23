/* sub_605A46DC
 * address: 0x605A46DC   size: 412   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605A46DC(int result)
{
  float *v1; // r2
  float v2; // s2
  float v3; // s0
  float v4; // s0
  int v5; // r12
  float v6; // s2
  float v7; // s2
  unsigned int v8; // r1
  float v9; // s0

  v1 = (float *)(result + 6876);
  v2 = FIELD_F32(result, 6868);
  v3 = FIELD_F32(result, 6876);
  if ( FIELD_U8(result, 72323) )
  {
    v4 = v3 - v2;
    v5 = 0;
    *v1 = v4;
    if ( v4 < 0.0 )
    {
      v4 = 0.0;
      v5 = 2;
      *v1 = 0.0;
    }
  }
  else
  {
    v4 = v2 + v3;
    v5 = 0;
    *v1 = v4;
    v6 = FIELD_F32(result, 72308);
    if ( v4 >= v6 )
    {
      v4 = FIELD_F32(result, 72308);
      v5 = 1;
      *v1 = v6;
    }
  }
  v7 = FIELD_F32(result, 112);
  v8 = FIELD_U32(result, 72304) + dword_60CAFEC4;
  FIELD_U32(result, 72304) = v8;
  v9 = (float)(v7 + v4)
     + (float)((float)(*(float *)((char *)sinLutTable + ((v8 >> 20) & 0xFF0))
                     + (float)((float)((float)(v8 & 0xFFFFFF)
                                     * *(float *)((char *)&sinLutTable[1] + ((v8 >> 20) & 0xFF0)))
                             * 0.000000059605))
             * 4.0);
  if ( (FIELD_U8(result, 21) & 8) == 0 && FIELD_U8(result, 6894) )
    FIELD_F32(result, 6916) = v9;
  FIELD_F32(result, 6128) = v9;
  FIELD_F32(result, 6860) = (float)(v9 + FIELD_F32(result, 6856)) - FIELD_F32(result, 6116);
  if ( !FIELD_U32(result, 6836) )
    FIELD_F32(TileMgr_instance, 24) = v9;
  if ( v5 == 2 )
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)result + 192))(result, &dword_60CAFF28);
  return result;
}
