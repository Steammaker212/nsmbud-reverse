/* sub_60576384
 * address: 0x60576384   size: 188   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60576384(int a1)
{
  int v1; // r12
  float v2; // r2
  float v3; // r1
  float *v4; // r1
  float v5; // s4
  float v6; // s0
  Vec3 v8; // [sp+8h] [bp-18h] BYREF

  v1 = FIELD_U32(a1, 164);
  v2 = FIELD_F32(a1, 112);
  v3 = FIELD_F32(a1, 108);
  v8.z = FIELD_F32(a1, 116);
  v8.y = v2;
  v8.x = v3;
  v4 = (float *)((char *)sinLutTable + (((unsigned int)(v1 + 0x40000000) >> 20) & 0xFF0));
  v5 = (float)((v1 + 0x40000000) & 0xFFFFFF);
  v6 = *v4 + (float)((float)(v5 * v4[1]) * 0.000000059605);
  v8.x = v8.x + (float)((float)(v4[2] + (float)((float)(v5 * v4[3]) * 0.000000059605)) * 8.0);
  v8.y = v2 + (float)(v6 * 8.0);
  DrawMgr_drawTile((int)DrawMgr_instance, FIELD_U32(a1, 7296), &v8, (int *)(a1 + 164), (Vec3 *)(a1 + 144));
  return 1;
}
