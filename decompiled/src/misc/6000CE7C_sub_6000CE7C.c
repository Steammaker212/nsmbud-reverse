/* sub_6000CE7C
 * address: 0x6000CE7C   size: 420   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_6000CE7C(int a1)
{
  int v2; // r5
  float v3; // r0
  int v4; // r8
  float v5; // r9
  float *v6; // r7
  float v7; // s0
  float v8; // s2
  unsigned int result; // r0
  float v10; // s2
  float v11; // s0
  unsigned int v12; // s0

  v2 = 1;
  v3 = FIELD_F32(a1, 136);
  v4 = FIELD_U32(a1, 104);
  v5 = FIELD_F32(a1, 100);
  FIELD_U32(a1, 92) = 0;
  v6 = (float *)(a1 + 40);
  FIELD_F32(a1, 96) = v3;
  v7 = v3 + FIELD_F32(a1, 104);
  v8 = v5;
  FIELD_F32(a1, 104) = v7;
  while ( 1 )
  {
    result = sub_607160F4(
               TileMgr_instance,
               (int)(float)((float)(int)(float)((float)(v8 + *(v6 - 1)) * 0.0625) * 16.0),
               (unsigned __int16)(int)(float)((float)(int)(float)((float)(v7 + *v6) * 0.0625) * -16.0),
               FIELD_U8(a1, 141),
               1)
           & 0xFFFFFF;
    if ( result == 0x200001 )
      break;
    if ( v2 > 6 )
    {
      v10 = FIELD_F32(a1, 120);
      v11 = FIELD_F32(a1, 104);
      if ( v11 < (float)(v10 + -16.0) )
        return (unsigned int)StateMgr__changeState((StateMgr *)(a1 + 20), (StateBase *)&dword_60C7B548);
      if ( v11 >= v10 )
        return sub_60012E98(a1, a1 + 116);
      return result;
    }
    v8 = FIELD_F32(a1, 100);
    v7 = FIELD_F32(a1, 104);
    v6 += 2;
    ++v2;
  }
  if ( FIELD_U8(a1, 140) )
  {
    result = FIELD_U32(a1, 136);
  }
  else
  {
    *(float *)&v12 = -FIELD_F32(a1, 136);
    FIELD_F32(a1, 136) = *(float *)&v12;
    FIELD_U8(a1, 142) ^= 1u;
    result = v12;
  }
  FIELD_U8(a1, 143) = 1;
  FIELD_U32(a1, 92) = 0;
  FIELD_U32(a1, 96) = result;
  FIELD_F32(a1, 100) = v5;
  FIELD_U32(a1, 104) = v4;
  return result;
}
