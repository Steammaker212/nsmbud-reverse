/* ActorScaler_execute
 * address: 0x602A3F10   size: 108   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Vec3 *__fastcall ActorScaler_execute(ActorScaler *this)
{
  float v2; // s0
  float v3; // s1
  float v4; // s2
  int v5; // r0
  int v6; // r0
  float v7; // s6
  float v8; // s4

  (*(void (__fastcall **)(ActorScaler *))FIELD_U32(this, 0x0))(this);// scale = getOwnerScale();
  v5 = FIELD_U32(this, 0x18);
  if ( v5 )
  {
    v6 = v5 - 1;
    FIELD_U32(this, 0x18) = v6;
    v7 = FIELD_F32(this, 0x14);
    if ( (v6 & 4) == 0 )
      v7 = -v7;
    v8 = FIELD_F32(this, 0x10) + v7;
    v4 = v4 * v8;
    v3 = v3 * v8;
    v2 = v2 * v8;
    FIELD_F32(this, 0x10) = v8;
  }
  else
  {
    FIELD_F32(this, 0x10) = 1.0;
  }
  FIELD_U32(this, 0x4).x = v2;
  FIELD_U32(this, 0x4).y = v3;
  FIELD_U32(this, 0x4).z = v4;
  return &FIELD_U32(this, 0x4);
}
