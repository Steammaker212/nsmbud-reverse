/* BrickBlockHuge__onDraw
 * address: 0x60565FA8   size: 340   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: BlockBase : 0x60563984
// 
// Overridden by: None
signed int __fastcall BrickBlockHuge__onDraw(int a1)
{
  int v2; // r7
  Vec3 *a5; // r6
  float v4; // r1
  float v5; // r2
  int v6; // r1
  int v7; // r1
  float v8; // s0
  float v9; // s2
  int v10; // r1
  int v11; // r1
  Vec3 v13; // [sp+8h] [bp-40h] BYREF
  int a4[13]; // [sp+14h] [bp-34h] BYREF

  v2 = FIELD_U32(a1, 7368);
  a5 = (Vec3 *)(a1 + 144);
  a4[0] = 0;
  v4 = FIELD_F32(a1, 112);
  v5 = FIELD_F32(a1, 116);
  v13.x = FIELD_F32(a1, 108);
  v13.y = v4;
  v13.z = v5;
  v6 = 112;
  if ( v2 == 2 )
    v6 = 116;
  v13.x = v13.x - (float)((float)(FIELD_F32(a1, 144) * 16.0) * 0.5);
  v13.y = v13.y + (float)((float)(FIELD_F32(a1, 148) * 16.0) * 0.5);
  DrawMgr_drawTile((int)DrawMgr_instance, v6, &v13, a4, a5);
  v7 = 113;
  if ( v2 == 2 )
    v7 = 117;
  v13.x = v13.x + (float)(FIELD_F32(a1, 144) * 16.0);
  DrawMgr_drawTile((int)DrawMgr_instance, v7, &v13, a4, a5);
  v8 = FIELD_F32(a1, 108);
  v9 = FIELD_F32(a1, 112);
  v10 = 128;
  if ( v2 == 2 )
    v10 = 132;
  v13.z = FIELD_F32(a1, 116);
  v13.x = v8 - (float)((float)(FIELD_F32(a1, 144) * 16.0) * 0.5);
  v13.y = v9 - (float)((float)(FIELD_F32(a1, 148) * 16.0) * 0.5);
  DrawMgr_drawTile((int)DrawMgr_instance, v10, &v13, a4, a5);
  v11 = 129;
  if ( v2 == 2 )
    v11 = 133;
  v13.x = v13.x + (float)(FIELD_F32(a1, 144) * 16.0);
  DrawMgr_drawTile((int)DrawMgr_instance, v11, &v13, a4, a5);
  return 1;
}
