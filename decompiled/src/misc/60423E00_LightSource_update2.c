/* LightSource_update2
 * address: 0x60423E00   size: 188   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall LightSource_update2(
        LightSource *this,
        Vec3 *position,
        _DWORD *_24,
        float *attenuationRadius,
        _DWORD *_2C,
        float *_30,
        _DWORD *_40,
        _DWORD *_44)
{
  float v8; // r6
  float v9; // r7
  float v10; // r4
  int v11; // r0

  if ( position )
    FIELD_U32(this, 0x18) = *position;
  if ( _24 )
    FIELD_U32(this, 0x24) = *_24;
  if ( attenuationRadius )
    FIELD_F32(this, 0x28) = *attenuationRadius;
  if ( _2C )
    FIELD_F32(this, 0x2C) = *(float *)_2C;
  if ( _30 )
  {
    v8 = _30[1];
    v9 = _30[2];
    v10 = _30[3];
    FIELD_F32(this, 0x30) = *_30;
    FIELD_F32(this, 0x34) = v8;
    FIELD_F32(this, 0x38) = v9;
    FIELD_F32(this, 0x3C) = v10;
  }
  if ( _40 )
    FIELD_U32(this, 0x40) = *_40;
  if ( _44 )
    FIELD_U32(this, 0x44) = *_44;
  v11 = FIELD_U32(this, 0x14);
  if ( v11 )
    sub_60424300(v11, position, _24, attenuationRadius, _2C, _30, _40, _44);
  return 1;
}
