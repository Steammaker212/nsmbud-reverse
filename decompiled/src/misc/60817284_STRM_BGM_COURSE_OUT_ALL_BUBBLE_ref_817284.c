/* STRM_BGM_COURSE_OUT_ALL_BUBBLE_ref_817284
 * address: 0x60817284   size: 316   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall STRM_BGM_COURSE_OUT_ALL_BUBBLE_ref_817284(int a1)
{
  int result; // r0
  int v3; // r1
  float v4; // s16
  float v5; // s22
  float v6; // s18
  float v7; // s0

  result = FIELD_U32(a1, 20);
  if ( result == 17 )
  {
    v3 = FIELD_U32(a1, 60);
    result = v3 + 1;
    FIELD_U32(a1, 60) = v3 + 1;
    if ( v3 + 1 > 119 )
    {
      if ( v3 == 134 )
      {
        return sub_608091A4((_DWORD *)SoundSystem_instance, (int)"STRM_BGM_COURSE_OUT_ALL_BUBBLE");
      }
      else if ( v3 == 119 )
      {
        return sub_60816F60(a1, 1u);
      }
    }
    else if ( result >= 35 )
    {
      v4 = 0.75;
      v5 = sub_6080E4E0((float)result, 35.0, 110.0, 1.0, 0.75);
      v6 = 0.0;
      v7 = sub_6080E4E0((float)FIELD_S32(a1, 60), 35.0, 110.0, 1.0, 0.0);
      if ( v5 >= 0.75 )
      {
        v4 = v5;
        if ( v5 > 1.0 )
          v4 = 1.0;
      }
      if ( v7 >= 0.0 )
      {
        v6 = v7;
        if ( v7 > 1.0 )
          v6 = 1.0;
      }
      sub_6080A0CC((_DWORD *)SoundSystem_instance, v4);
      return sub_6080C38C(dword_60CC6B0C, 10, v6);
    }
  }
  return result;
}
