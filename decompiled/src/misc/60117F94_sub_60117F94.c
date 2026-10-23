/* sub_60117F94
 * address: 0x60117F94   size: 328   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60117F94(int a1)
{
  float v2; // s20
  float v3; // s18
  float v4; // s22
  float v5; // s16
  float v6; // s0
  float v7; // s0
  float v8; // s0
  float v9; // s0

  v2 = FIELD_F32(a1, 8944) - FIELD_F32(a1, 112);
  v3 = FIELD_F32(a1, 8948) - FIELD_F32(a1, 116);
  v4 = FIELD_F32(a1, 8940) - FIELD_F32(a1, 108);
  v5 = (float)((float)(v2 * v2) + (float)(v4 * v4)) + (float)(v3 * v3);
  if ( sqrtf(v5) <= 0.8 )
  {
    FIELD_U32(a1, 108) = FIELD_U32(a1, 8940);
    FIELD_U32(a1, 112) = FIELD_U32(a1, 8944);
    FIELD_U32(a1, 116) = FIELD_U32(a1, 8948);
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C86C24);
    v8 = FIELD_F32(a1, 108);
  }
  else
  {
    v6 = sqrtf(v5);
    if ( v6 > 0.0 )
    {
      v7 = 1.0 / v6;
      v3 = v3 * v7;
      v2 = v2 * v7;
      v4 = v4 * v7;
    }
    v8 = FIELD_F32(a1, 108) + (float)(v4 * 0.8);
    FIELD_F32(a1, 108) = v8;
    FIELD_F32(a1, 112) = FIELD_F32(a1, 112) + (float)(v2 * 0.8);
    FIELD_F32(a1, 116) = FIELD_F32(a1, 116) + (float)(v3 * 0.8);
  }
  v9 = v8 - FIELD_F32(a1, 584);
  if ( v9 <= 0.0 )
  {
    if ( v9 < 0.0 )
      FIELD_U32(a1, 80) = 1;
  }
  else
  {
    FIELD_U32(a1, 80) = 0;
  }
  JUMPOUT(0x6011B35C);
}
