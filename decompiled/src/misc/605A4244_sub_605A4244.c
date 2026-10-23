/* sub_605A4244
 * address: 0x605A4244   size: 472   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605A4244(int result)
{
  float v1; // s0
  unsigned int v2; // r1
  float v3; // s0
  int v4; // r1
  int v5; // lr
  unsigned int v6; // r2
  int v7; // r1
  int v8; // r2
  bool v9; // zf
  __int16 v10; // r2

  v1 = FIELD_F32(result, 112) + FIELD_F32(result, 6876);
  v2 = FIELD_U32(result, 72304) + dword_60CAFEC4;
  FIELD_U32(result, 72304) = v2;
  v3 = v1
     + (float)((float)(*(float *)((char *)sinLutTable + ((v2 >> 20) & 0xFF0))
                     + (float)((float)((float)(v2 & 0xFFFFFF)
                                     * *(float *)((char *)&sinLutTable[1] + ((v2 >> 20) & 0xFF0)))
                             * 0.000000059605))
             * 4.0);
  if ( (FIELD_U8(result, 21) & 8) == 0 && FIELD_U8(result, 6894) )
    FIELD_F32(result, 6916) = v3;
  FIELD_F32(result, 6128) = v3;
  FIELD_F32(result, 6860) = (float)(v3 + FIELD_F32(result, 6856)) - FIELD_F32(result, 6116);
  if ( !FIELD_U32(result, 6836) )
    FIELD_F32(TileMgr_instance, 24) = v3;
  v4 = FIELD_U8(result, 72322);
  if ( !FIELD_U8(result, 72322) )
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)result + 192))(result, &dword_60CAFFC8);
  v5 = v4 - 33;
  v6 = 1u >> (33 - v4);
  v7 = 1 << (v4 - 1);
  if ( v5 >= 0 )
  {
    v6 = 1 << v5;
    v7 = 0;
  }
  if ( !(FIELD_U32(EventMgr__instance, 16) & v7 | FIELD_U32(EventMgr__instance, 20) & v6) )
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)result + 192))(result, &dword_60CAFFC8);
  v8 = FIELD_U16(result, 6888);
  v9 = v8 == 0;
  if ( FIELD_U16(result, 6888) )
  {
    v10 = v8 - 1;
    FIELD_U16(result, 6888) = v10;
    v9 = v10 == 0;
  }
  if ( v9 )
    return (*(int (**)(void))(*(_DWORD *)result + 192))();
  return result;
}
