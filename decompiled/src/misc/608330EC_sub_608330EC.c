/* sub_608330EC
 * address: 0x608330EC   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_608330EC(int result)
{
  float v1; // s0
  float v2; // s4
  float v3; // s2
  float v4; // s6
  float v5; // s8
  float v6; // s10
  float v7; // s12
  float v8; // s0

  if ( dword_60CC6484 )
  {
    v1 = FIELD_F32(dword_60CC6484, 136);
    v2 = FIELD_F32(dword_60CC6484, 144);
    v3 = FIELD_F32(dword_60CC6484, 140);
    v4 = FIELD_F32(dword_60CC6484, 148);
    v5 = *(float *)result;
    v6 = FIELD_F32(result, 4);
    FIELD_U32(result, 8) = 0;
    v7 = v2 - v1;
    v8 = v1 + v2;
    *(float *)result = (float)((float)(v7 * v5) / 1280.0) + (float)(v8 * 0.5);
    FIELD_F32(result, 4) = (float)((float)((float)(v4 - v3) * v6) / 720.0) - (float)((float)(v3 + v4) * 0.5);
  }
  return v8;
}
