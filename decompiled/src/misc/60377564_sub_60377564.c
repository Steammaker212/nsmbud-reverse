/* sub_60377564
 * address: 0x60377564   size: 392   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60377564(int result)
{
  float v1; // s0
  float v2; // s2
  unsigned int v3; // r0
  float v4; // s4
  float v5; // s2
  int v6; // r1
  float v7; // s10
  float v8; // s8
  float v9; // s2
  float v10; // s6
  float v11; // s2
  float v12; // s0

  if ( FIELD_U8(dword_60CC6D78, 109032) )
  {
    if ( !FIELD_U32(dword_60C99DD4, 764) )
    {
      result = FIELD_U32(result, 104);
      if ( result )
      {
        v1 = FIELD_F32(result, 108);
        v2 = FIELD_F32(result, 112);
        if ( FIELD_U8(dword_60CC6D8C, 17) )
        {
          v3 = FIELD_S8(LevelInfo_instance, 16);
          if ( v3 > 6 )
          {
            v4 = 64.0;
            v5 = v2 + -32.0;
          }
          else
          {
            v4 = flt_60B005C0[v3];
            v5 = v2 - flt_60B005E0[v3];
          }
          result = dword_60CC6484;
          v10 = 0.95 / FIELD_F32(dword_60CC6484, 256);
          v11 = v5 + (float)(v10 * FIELD_F32(dword_60CC6484, 108));
          v12 = (float)(v1 + v4) - (float)(v10 * FIELD_F32(dword_60CC6484, 104));
        }
        else
        {
          result = dword_60CC6484;
          v6 = FIELD_U8(LevelInfo_instance, 16);
          v7 = FIELD_F32(dword_60CC6484, 256);
          if ( v6 == 5 )
          {
            v9 = v2 + -40.0;
            v8 = v1 + 80.0;
          }
          else
          {
            v8 = v1 + 64.0;
            if ( v6 == 2 )
            {
              v9 = v2 + -96.0;
            }
            else
            {
              v9 = v2 + -32.0;
              if ( !FIELD_U8(LevelInfo_instance, 16) )
                v8 = v1 + 128.0;
            }
          }
          v11 = (float)((float)(0.95 / v7) * FIELD_F32(dword_60CC6484, 108)) + v9;
          v12 = v8 - (float)((float)(0.95 / v7) * FIELD_F32(dword_60CC6484, 104));
        }
        FIELD_F32(result, 264) = v12;
        FIELD_F32(result, 268) = v11;
        FIELD_U32(result, 260) = 1064514355;
      }
    }
  }
  return result;
}
