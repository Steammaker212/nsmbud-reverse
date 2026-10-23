/* sub_605C2CCC
 * address: 0x605C2CCC   size: 272   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605C2CCC(int a1)
{
  float v2; // s4
  int result; // r0
  float v4; // s2
  float v5; // s0
  float v6; // s4
  __int64 v7; // r6
  int i; // r5
  float v9; // s4

  v2 = FIELD_F32(a1, 12);
  result = dword_60CC6484;
  if ( v2 >= (float)((float)(FIELD_F32(dword_60CC6484, 124) - FIELD_F32(dword_60CC6484, 108)) + -16.0) )
  {
    v4 = FIELD_F32(dword_60CC6484, 104);
    v5 = FIELD_F32(dword_60CC6484, 112);
    v6 = FIELD_F32(a1, 8);
    if ( v6 <= (float)((float)(v5 + v4) + 8.0) && (float)(v6 + FIELD_F32(a1, 92)) >= (float)(v5 + -8.0) )
    {
      v7 = FIELD_U64(a1, 112);
      if ( (int)v7 < SHIDWORD(v7) )
      {
        for ( i = 8 * v7 + 712; ; i += 8 )
        {
          result = FIELD_U32(a1, 4);
          v9 = FIELD_F32(a1, 32) + (float)(*(float *)(result + i) * FIELD_F32(a1, 108));
          if ( v9 <= (float)((float)(v5 + v4) + 8.0) && (float)(v9 + 4.0) >= (float)(v5 + -8.0) )
          {
            result = sub_6044E800(result, (unsigned __int16)v7);
            HIDWORD(v7) = FIELD_U32(a1, 116);
          }
          LODWORD(v7) = v7 + 1;
          if ( (int)v7 >= SHIDWORD(v7) )
            break;
          v4 = FIELD_F32(dword_60CC6484, 104);
          v5 = FIELD_F32(dword_60CC6484, 112);
        }
      }
    }
  }
  return result;
}
