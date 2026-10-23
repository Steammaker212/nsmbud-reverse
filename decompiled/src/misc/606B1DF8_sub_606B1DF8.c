/* sub_606B1DF8
 * address: 0x606B1DF8   size: 336   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606B1DF8(int result)
{
  int v1; // r4
  int v2; // r1
  float v3; // s10
  float v4; // s8
  float v5; // s12
  int v6; // r12
  int v7; // r3
  bool v8; // zf

  v1 = result;
  v2 = FIELD_U32(result, 156);
  if ( v2 != -1 )
  {
    result = sub_606B3830(dword_60CBA43C, v2);
    if ( result )
    {
      FIELD_U32(v1, 172) = 0;
      FIELD_U32(v1, 184) = 0;
      FIELD_U32(v1, 180) = 0;
      FIELD_U32(v1, 176) = 0;
      FIELD_U32(v1, 188) = FIELD_U32(result, 56);
      if ( FIELD_U32(result, 40) )
      {
        v3 = FIELD_F32(v1, 28);
        v4 = FIELD_F32(v1, 24);
        v5 = FIELD_F32(v1, 32);
        *(float *)v1 = FIELD_F32(result, 128)
                     + (float)((float)((float)(v3 * FIELD_F32(result, 120)) + (float)(v4 * FIELD_F32(result, 116)))
                             + (float)(v5 * FIELD_F32(result, 124)));
        FIELD_F32(v1, 4) = FIELD_F32(result, 144)
                           + (float)((float)((float)(v3 * FIELD_F32(result, 136))
                                           + (float)(v4 * FIELD_F32(result, 132)))
                                   + (float)(v5 * FIELD_F32(result, 140)));
        FIELD_F32(v1, 8) = FIELD_F32(result, 160)
                           + (float)((float)((float)(v3 * FIELD_F32(result, 152))
                                           + (float)(v4 * FIELD_F32(result, 148)))
                                   + (float)(v5 * FIELD_F32(result, 156)));
        v6 = FIELD_U32(result, 24);
        v7 = FIELD_U32(result, 28);
        FIELD_U32(v1, 168) = FIELD_U32(result, 32);
        FIELD_U32(v1, 164) = v7;
        FIELD_U32(v1, 160) = v6;
        FIELD_U32(v1, 80) = FIELD_U32(v1, 168);
        FIELD_U32(v1, 184) = 1;
      }
      if ( FIELD_U8(result, 53) )
        FIELD_U32(v1, 172) = 1;
      if ( FIELD_U8(result, 54) )
        FIELD_U32(v1, 176) = 1;
      v8 = FIELD_U8(dword_60CC6D8C, 17) == 0;
      if ( FIELD_U8(dword_60CC6D8C, 17) )
      {
        result = FIELD_U8(result, 55);
        v8 = result == 0;
      }
      if ( !v8 )
      {
        FIELD_U32(v1, 180) = 1;
        return 1;
      }
    }
    else
    {
      FIELD_U32(v1, 68) = 1;
      return 1;
    }
  }
  return result;
}
