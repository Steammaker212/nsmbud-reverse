/* sub_60084F00
 * address: 0x60084F00   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60084F00(int result)
{
  int v1; // r1
  float v2; // s0
  float v3; // r1
  int v4; // r2

  v1 = FIELD_U32(result, 7244);
  if ( v1 )
  {
    v2 = (float)(FIELD_F32(v1, 108) - FIELD_F32(result, 108)) / 60.0;
    v3 = v2;
    FIELD_F32(result, 120) = v2;
  }
  else
  {
    v3 = FIELD_F32(result, 120);
    v2 = v3;
  }
  FIELD_F32(result, 132) = v3;
  v4 = dword_60C81F50;
  FIELD_U32(result, 124) = dword_60C81F50;
  FIELD_U32(result, 100) = dword_60C81F2C;
  FIELD_U32(result, 136) = v4 ^ 0x80000000;
  FIELD_U32(result, 80) = v2 < 0.0;
  FIELD_U16(result, 6278) = 60;
  return result;
}
