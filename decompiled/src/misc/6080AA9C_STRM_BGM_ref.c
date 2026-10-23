/* STRM_BGM_ref
 * address: 0x6080AA9C   size: 416   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall STRM_BGM_ref(int a1)
{
  int v2; // r5
  const char *v3; // r6
  float v4; // s0
  float v5; // s18
  float v6; // s16
  int v7; // r0
  int v8; // r1
  float v9; // r0
  float v10; // s6
  float v11; // s0
  float v12; // s2
  _DWORD v14[11]; // [sp+4h] [bp-2Ch] BYREF

  sub_608A8604(v14, SoundSystem_instance + 64);
  if ( v14[0] )
  {
    v2 = sub_608089A4(SoundSystem_instance);
    if ( v2 )
    {
      v3 = *(const char **)(a1 + 56);
      if ( !strcmp(v3, "STRM_BGM_CHIKA")
        || !strcmp(v3, "STRM_BGM_CHIKA_FAST")
        || !strcmp(v3, "STRM_BGM_ATHLETIC")
        || !strcmp(v3, "STRM_BGM_ATHLETIC_FAST") )
      {
        v4 = 192.0;
      }
      else
      {
        v4 = 96.0;
      }
      v5 = (float)((float)((float)(unsigned int)v2 * v4) * FIELD_F32(a1, 108)) / 60.0;
      v6 = v5 / 60.0;
      if ( v14[0] )
        v7 = sub_608B73A4();
      else
        v7 = 0;
      v8 = FIELD_U32(a1, 112);
      FIELD_U32(a1, 112) = v7;
      FIELD_F32(a1, 116) = FIELD_F32(a1, 116) + (float)((float)(unsigned int)(v7 - v8) / (float)(v6 * 60.0));
      v9 = (float)(unsigned __int64)(sub_6080A430(SoundSystem_instance, v8) - FIELD_U64(a1, 96));
      v10 = FIELD_F32(a1, 116);
      v11 = 0.75;
      v12 = (float)(v5 * (float)((float)((float)(v9 / 1000.0) + 0.016667) - v10)) / v6;
      if ( v12 >= 0.75 )
      {
        v11 = (float)(v5 * (float)((float)((float)(v9 / 1000.0) + 0.016667) - v10)) / v6;
        if ( v12 > 1.5 )
          v11 = 1.5;
      }
      FIELD_F32(a1, 104) = v11;
    }
  }
  return sub_608A86F0(v14);
}
