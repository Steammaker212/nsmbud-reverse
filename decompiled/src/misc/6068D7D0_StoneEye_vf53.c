/* StoneEye_vf53
 * address: 0x6068D7D0   size: 284   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall StoneEye_vf53(int a1)
{
  float *v2; // r5
  float v3; // s0
  unsigned int v4; // r0
  int v5; // s4
  float *v6; // r0
  float v7; // s2
  float v8; // s4

  FIELD_U8(a1, 6831) = 0;
  FIELD_U32(a1, 6208) = FIELD_U32(a1, 108);
  FIELD_U32(a1, 6212) = FIELD_U32(a1, 112);
  FIELD_U32(a1, 6216) = FIELD_U32(a1, 116);
  FIELD_U32(a1, 6788) = FIELD_U32(a1, 164);
  sub_6068D904(a1);
  sub_6068E788(a1);
  v2 = (float *)(a1 + 6808);
  if ( sub_60690D70(a1 + 6736) == 1 )
  {
    v3 = 0.0;
    *v2 = 0.0;
  }
  else
  {
    ((void (__fastcall *)(int, float, float, float, float))loc_60832560)(a1 + 6808, 0.1, 0.125, 0.1, 0.003125);
    v3 = *v2;
  }
  v4 = FIELD_U32(a1, 6820);
  v5 = v4 & 0xFFFFFF;
  v6 = (float *)((char *)sinLutTable + ((v4 >> 20) & 0xFF0));
  v7 = (float)(unsigned int)v5 * 0.000000059605;
  v8 = (float)(v3 * (float)(*v6 + (float)(v6[1] * v7))) + 0.05;
  FIELD_F32(a1, 6756) = -(float)(v3 * (float)(v6[2] + (float)(v7 * v6[3])));
  FIELD_F32(a1, 6760) = v8;
  sub_6068DB28(a1);
  FIELD_U8(a1, 6161) = 1;
  return 6161;
}
