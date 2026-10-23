/* BowserJrBase__vf3FC
 * address: 0x600CE3D4   size: 264   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: BossBase : 0x60026BF4
// 
// Overridden by: None
int __fastcall BowserJrBase__vf3FC(int r0_0)
{
  float v2; // r5
  float v3; // r6
  signed int v4; // r0
  Vec2 v6; // [sp+0h] [bp-28h] BYREF
  Vec2 a1; // [sp+8h] [bp-20h] BYREF

  v2 = FIELD_F32(r0_0, 108);
  FIELD_F32(r0_0, 7156) = v2;
  v3 = FIELD_F32(r0_0, 112);
  FIELD_F32(r0_0, 7160) = v3;
  FIELD_U32(r0_0, 7164) = FIELD_U32(r0_0, 116);
  FIELD_U32(r0_0, 160) = -536870912;
  FIELD_U8(r0_0, 7248) = 0;
  FIELD_U32(r0_0, 7252) = 0;
  FIELD_U32(r0_0, 492) = 0;
  FIELD_U32(r0_0, 496) = 0;
  memset((void *)(r0_0 + 7108), 0, 48);
  FIELD_U32(r0_0, 7188) = 0;
  FIELD_U32(r0_0, 7184) = 0;
  FIELD_U32(r0_0, 7180) = 0;
  FIELD_U32(r0_0, 7176) = 0;
  FIELD_U32(r0_0, 7172) = 0;
  FIELD_U32(r0_0, 7168) = 0;
  FIELD_U32(r0_0, 500) = 1115684864;
  FIELD_U32(r0_0, 504) = 1115684864;
  FIELD_U32(r0_0, 508) = 1115684864;
  FIELD_U32(r0_0, 512) = 1115684864;
  v6.x = v2;
  v6.y = v3;
  v4 = distanceToPLayer(&a1, &v6);
  FIELD_U32(r0_0, 7240) = v4;
  if ( v4 < 0 )
    FIELD_U32(r0_0, 7240) = FIELD_U32(dword_60CBFA90, 440);
  (*(void (__fastcall **)(int))(*(_DWORD *)r0_0 + 1008))(r0_0);
  return 1;
}
