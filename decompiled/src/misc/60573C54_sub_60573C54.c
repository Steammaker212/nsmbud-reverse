/* sub_60573C54
 * address: 0x60573C54   size: 188   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60573C54(int a1)
{
  int v1; // r12
  float v2; // r2
  float v3; // r3
  float *v4; // r2
  float v5; // s0
  float v6; // s2
  float v7; // s4
  float v8; // s8
  float v9; // s0
  Vec3 v11; // [sp+8h] [bp-18h] BYREF
  int a4; // [sp+14h] [bp-Ch] BYREF

  v1 = FIELD_U32(a1, 164);
  v2 = FIELD_F32(a1, 112);
  v3 = FIELD_F32(a1, 116);
  v11.x = FIELD_F32(a1, 108);
  v11.y = v2;
  v11.z = v3;
  v4 = (float *)((char *)sinLutTable + (((unsigned int)(v1 + 0x40000000) >> 20) & 0xFF0));
  v5 = v4[2];
  v6 = v4[3];
  v7 = (float)((v1 + 0x40000000) & 0xFFFFFF);
  a4 = v1;
  v8 = v11.x + (float)((float)(v5 + (float)((float)(v7 * v6) * 0.000000059605)) * 8.0);
  v9 = *v4 + (float)((float)(v7 * v4[1]) * 0.000000059605);
  v11.x = v8;
  v11.y = v11.y + (float)(v9 * 8.0);
  DrawMgr_drawTile((int)DrawMgr_instance, FIELD_U32(a1, 7296), &v11, &a4, (Vec3 *)(a1 + 144));
  return 1;
}
