/* ShapedCollider_init
 * address: 0x6016522C   size: 276   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall ShapedCollider_init(ShapedCollider *this, StageActor *owner, ShapedColliderInfo *info)
{
  int v6; // r0
  float y; // r2
  int v8; // r1
  float v9; // r0
  int v10; // r1
  float v11; // r2
  int v12; // r1
  float v13; // r2
  int result; // r0

  FIELD_U32(this, 0x98) = &FIELD_U32(owner, 0x6C);
  FIELD_U32(this, 0x9C) = &FIELD_U32(owner, 0x248);
  FIELD_U32(this, 0xA0) = &FIELD_U8(owner, 0x56);
  FIELD_U32(this, 0xA4) = &FIELD_U8(owner, 0x57);
  FIELD_U32(this, 0xA8) = &FIELD_U8(owner, 0x54);
  FIELD_U32(this, 0xAC) = FIELD_U32(info, 0x0);
  FIELD_F32(this, 0xBC) = FIELD_F32(info, 0x8);
  FIELD_F32(this, 0xC0) = FIELD_F32(info, 0xC);
  FIELD_U32(this, 0xF4) = FIELD_U32(info, 0x20);
  ColliderBase_setSolidity(&FIELD_U32(this, 0x0), 1);
  v6 = FIELD_U32(this, 0x158);
  y = FIELD_F32(info, 0x14);
  *(float *)v6 = FIELD_F32(info, 0x10);
  FIELD_F32(v6, 4) = y;
  v8 = FIELD_U32(this, 0x158);
  v9 = FIELD_F32(info, 0x14);
  if ( FIELD_U32(this, 0x154) > 1u )
    v8 += 8;
  *(float *)v8 = FIELD_F32(info, 0x18);
  FIELD_F32(v8, 4) = v9;
  v10 = FIELD_U32(this, 0x158);
  v11 = FIELD_F32(info, 0x1C);
  if ( FIELD_U32(this, 0x154) > 2u )
    v10 += 16;
  *(float *)v10 = FIELD_F32(info, 0x18);
  FIELD_F32(v10, 4) = v11;
  v12 = FIELD_U32(this, 0x158);
  v13 = FIELD_F32(info, 0x1C);
  if ( FIELD_U32(this, 0x154) > 3u )
    v12 += 24;
  *(float *)v12 = FIELD_F32(info, 0x10);
  FIELD_F32(v12, 4) = v13;
  FIELD_U32(this, 0x90) = 0;
  (*(void (__fastcall **)(ShapedCollider *))(FIELD_U32(this, 0x0) + 64))(this);
  (*(void (__fastcall **)(ShapedCollider *))(FIELD_U32(this, 0x0) + 48))(this);
  result = (*(int (__fastcall **)(ShapedCollider *))(FIELD_U32(this, 0x0) + 52))(this);
  FIELD_U32(this, 0x90) = owner;
  return result;
}
