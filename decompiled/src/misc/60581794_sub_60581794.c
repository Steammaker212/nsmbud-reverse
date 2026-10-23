/* sub_60581794
 * address: 0x60581794   size: 488   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60581794(int a1)
{
  unsigned int v2; // r0
  float v3; // s0
  int v4; // r1
  float *v5; // r1
  float v6; // s2
  int v7; // r1
  int v8; // r0
  int *v9; // r1

  v2 = FIELD_U32(a1, 20);
  FIELD_U32(a1, 7496) = v2 & 0xF;
  if ( (FIELD_U8(a1, 25) & 0x20) != 0 )
  {
    v4 = ((v2 & 0xF) << 26) | 0x4000000;
    if ( (v2 & 1) != 0 )
      v4 = -v4;
    v5 = (float *)((char *)sinLutTable + ((unsigned int)(v4 - 0x40000000) >> 20));
    v6 = *v5 + (float)(v5[1] * 0.0);
    FIELD_F32(a1, 108) = FIELD_F32(a1, 108) + (float)((float)(v5[2] + (float)(v5[3] * 0.0)) * 128.0);
    v3 = (float)(FIELD_F32(a1, 112) + (float)(v6 * 128.0)) + 144.0;
    FIELD_F32(a1, 112) = v3;
  }
  else
  {
    v3 = FIELD_F32(a1, 112);
  }
  FIELD_U8(a1, 7402) = 1;
  FIELD_F32(a1, 112) = v3 - 7.0;
  FIELD_U32(a1, 7372) = 1;
  FIELD_U32(a1, 7352) = 0;
  FIELD_U32(a1, 7356) = 1090519040;
  FIELD_U32(a1, 7500) = (unsigned __int8)v2 >> 4;
  FIELD_U32(a1, 7504) = (v2 >> 8) & 0xF;
  FIELD_U32(a1, 7508) = HIWORD(v2) & 0xF;
  obj_coin_ref(a1);
  FIELD_U16(a1, 7376) = 1;
  FIELD_U32(a1, 7288) = 0;
  sub_60579AE4(a1);
  FIELD_U32(a1, 572) = 0;
  FIELD_U32(a1, 576) = 1090519040;
  FIELD_U32(a1, 580) = 0;
  if ( Actor__getProfileId((Actor *)a1) != 403 && FIELD_U8(LevelInfo_instance, 17) != 40 )
    sub_6057A360((StateActor *)a1, 3u);
  v7 = (FIELD_U32(a1, 20) >> 20) & 1;
  FIELD_U8(a1, 7401) = (FIELD_U32(a1, 20) & 0x100000) != 0;
  sub_6057A2D0(a1, v7);
  sub_601606A4((__int64 *)(a1 + 6120), 1);
  sub_6057A210((_DWORD *)a1);
  v8 = FIELD_U32(a1, 24);
  if ( (v8 & 0x2000) != 0 )
  {
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CAF0F0);
  }
  else
  {
    if ( (v8 & 1) != 0 )
      v9 = (int *)&unk_60CAF0D0;
    else
      v9 = &dword_60CAF0B0;
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, v9);
  }
  sub_60579D4C(a1);
  return 1;
}
