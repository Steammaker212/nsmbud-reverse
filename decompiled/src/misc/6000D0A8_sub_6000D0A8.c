/* sub_6000D0A8
 * address: 0x6000D0A8   size: 416   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_6000D0A8(int a1)
{
  int v2; // r5
  float v3; // r9
  int v4; // r8
  float *v5; // r7
  float v6; // s2
  float v7; // s0
  unsigned int result; // r0
  float v9; // s0
  float v10; // s2
  unsigned int v11; // s0

  v2 = 1;
  v3 = FIELD_F32(a1, 100);
  v4 = FIELD_U32(a1, 104);
  v5 = (float *)(a1 + 40);
  v6 = FIELD_F32(a1, 136);
  v7 = v6 + v3;
  FIELD_F32(a1, 100) = v6 + v3;
  FIELD_F32(a1, 92) = v6;
  FIELD_U32(a1, 96) = 0;
  while ( 1 )
  {
    result = sub_607160F4(
               TileMgr_instance,
               (int)(float)((float)(int)(float)((float)(v7 + *(v5 - 1)) * 0.0625) * 16.0),
               (unsigned __int16)(int)(float)((float)(int)(float)((float)(FIELD_F32(a1, 104) + *v5) * 0.0625) * -16.0),
               FIELD_U8(a1, 141),
               1)
           & 0xFFFFFF;
    if ( result == 0x200001 )
      break;
    if ( v2 > 6 )
    {
      v9 = FIELD_F32(a1, 100);
      v10 = FIELD_F32(a1, 116);
      if ( v9 < v10 )
        return sub_60012FA4(a1, a1 + 116, 0);
      if ( v9 >= (float)(v10 + 16.0) )
        return (unsigned int)StateMgr__changeState((StateMgr *)(a1 + 20), (StateBase *)&dword_60C7B528);
      return result;
    }
    v7 = FIELD_F32(a1, 100);
    v5 += 2;
    ++v2;
  }
  if ( FIELD_U8(a1, 140) )
  {
    result = FIELD_U32(a1, 136);
  }
  else
  {
    *(float *)&v11 = -FIELD_F32(a1, 136);
    FIELD_F32(a1, 136) = *(float *)&v11;
    FIELD_U8(a1, 142) ^= 1u;
    result = v11;
  }
  FIELD_U8(a1, 143) = 1;
  FIELD_U32(a1, 92) = result;
  FIELD_U32(a1, 96) = 0;
  FIELD_F32(a1, 100) = v3;
  FIELD_U32(a1, 104) = v4;
  return result;
}
