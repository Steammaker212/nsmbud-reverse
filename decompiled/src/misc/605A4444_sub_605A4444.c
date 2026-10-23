/* sub_605A4444
 * address: 0x605A4444   size: 584   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605A4444(int a1)
{
  float v1; // s0
  float v2; // s2
  float v3; // s2
  unsigned int v4; // r1
  float v5; // s0
  int result; // r0
  float v7; // s0
  unsigned int v8; // r1
  float v9; // s0

  v1 = FIELD_F32(a1, 6876) + (float)(FIELD_F32(a1, 6868) * 0.5);
  FIELD_F32(a1, 6876) = v1;
  v2 = FIELD_F32(a1, 72308) + 8.0;
  if ( v1 >= v2 )
  {
    FIELD_F32(a1, 6876) = v2;
    v7 = v2 + FIELD_F32(a1, 112);
    v8 = FIELD_U32(a1, 72304) + dword_60CAFEC4;
    FIELD_U32(a1, 72304) = v8;
    v9 = v7
       + (float)((float)(*(float *)((char *)sinLutTable + ((v8 >> 20) & 0xFF0))
                       + (float)((float)((float)(v8 & 0xFFFFFF)
                                       * *(float *)((char *)&sinLutTable[1] + ((v8 >> 20) & 0xFF0)))
                               * 0.000000059605))
               * 4.0);
    if ( (FIELD_U8(a1, 21) & 8) == 0 && FIELD_U8(a1, 6894) )
      FIELD_F32(a1, 6916) = v9;
    FIELD_F32(a1, 6128) = v9;
    FIELD_F32(a1, 6860) = (float)(v9 + FIELD_F32(a1, 6856)) - FIELD_F32(a1, 6116);
    if ( !FIELD_U32(a1, 6836) )
      FIELD_F32(TileMgr_instance, 24) = v9;
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CAFFC8);
  }
  else
  {
    v3 = FIELD_F32(a1, 112);
    v4 = FIELD_U32(a1, 72304) + dword_60CAFEC4;
    FIELD_U32(a1, 72304) = v4;
    v5 = (float)(v1 + v3)
       + (float)((float)(*(float *)((char *)sinLutTable + ((v4 >> 20) & 0xFF0))
                       + (float)((float)((float)(v4 & 0xFFFFFF)
                                       * *(float *)((char *)&sinLutTable[1] + ((v4 >> 20) & 0xFF0)))
                               * 0.000000059605))
               * 4.0);
    if ( (FIELD_U8(a1, 21) & 8) == 0 && FIELD_U8(a1, 6894) )
      FIELD_F32(a1, 6916) = v5;
    FIELD_F32(a1, 6128) = v5;
    FIELD_F32(a1, 6860) = (float)(v5 + FIELD_F32(a1, 6856)) - FIELD_F32(a1, 6116);
    result = FIELD_U32(a1, 6836);
    if ( !result )
    {
      result = TileMgr_instance;
      FIELD_F32(TileMgr_instance, 24) = v5;
    }
  }
  return result;
}
