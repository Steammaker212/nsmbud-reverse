/* sub_603E069C
 * address: 0x603E069C   size: 184   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603E069C(int a1)
{
  float v2; // s2
  float v3; // s4
  float v4; // s0
  _DWORD v6[3]; // [sp+4h] [bp-24h] BYREF
  float v7[6]; // [sp+10h] [bp-18h] BYREF

  DrawMgr_drawModel(DrawMgr_instance, **(void ***)(a1 + 7560));
  v2 = FIELD_F32(a1, 6308);
  v7[0] = v2 / FIELD_F32(a1, 6396);
  v7[1] = v7[0] * 0.9;
  v7[2] = v7[0] * 0.3;
  v7[3] = 1.0;
  v3 = FIELD_F32(a1, 0x2000);
  v4 = FIELD_F32(a1, 112);
  v6[0] = FIELD_U32(a1, 108);
  *(float *)&v6[1] = v4 + (float)(v2 * v3);
  v6[2] = 1166843904;
  sub_604145D0(dword_60C9A698, 51, v6, v7);
  return 1;
}
