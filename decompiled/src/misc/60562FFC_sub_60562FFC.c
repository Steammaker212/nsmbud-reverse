/* sub_60562FFC
 * address: 0x60562FFC   size: 236   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60562FFC(int a1)
{
  int v1; // r12
  float v2; // lr
  float v3; // r1
  float y; // s0
  float *v5; // r2
  float v6; // s6
  float v7; // s2
  Vec3 v9; // [sp+8h] [bp-18h] BYREF

  v1 = FIELD_U32(a1, 164);
  v2 = FIELD_F32(a1, 108);
  v3 = FIELD_F32(a1, 112);
  v9.z = FIELD_F32(a1, 116);
  v9.y = v3;
  v9.x = v2;
  if ( FIELD_U8(a1, 7377) )
  {
    y = FIELD_F32(a1, 6796) + v9.y;
    v9.y = y;
  }
  else
  {
    y = v9.y;
  }
  v5 = (float *)((char *)sinLutTable + (((unsigned int)(v1 + 0x40000000) >> 20) & 0xFF0));
  v6 = (float)((v1 + 0x40000000) & 0xFFFFFF);
  v7 = *v5 + (float)((float)(v6 * v5[1]) * 0.000000059605);
  v9.x = v9.x + (float)((float)(v5[2] + (float)((float)(v6 * v5[3]) * 0.000000059605)) * 8.0);
  v9.y = y + (float)(v7 * 8.0);
  DrawMgr_drawTile((int)DrawMgr_instance, FIELD_U32(a1, 7296), &v9, (int *)(a1 + 164), (Vec3 *)(a1 + 144));
  return 1;
}
