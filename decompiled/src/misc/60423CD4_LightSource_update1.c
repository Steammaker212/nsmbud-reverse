/* LightSource_update1
 * address: 0x60423CD4   size: 296   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall LightSource_update1(
        LightSource *a1,
        int a2,
        Vec3 *position,
        _DWORD *_24,
        float *attenuationRadius,
        float *_2C,
        _DWORD *color,
        _DWORD *_40,
        _DWORD *_44)
{
  sead_ListNode *v13; // r0
  float v14; // r1
  float v15; // r5
  float v16; // r7
  int v17; // r0

  FIELD_U8(a1, 0x10) = 1;
  if ( !FIELD_U32(a1, 0x14) )
  {
    v13 = LightSource_update1_helper((sead_ListNode *)dword_60C9A698);
    FIELD_U32(a1, 0x14) = (int)v13;
    if ( v13 )
    {
      FIELD_U32(v13, 0x0) = (sead_ListNode *)a1;
      LightSource_update1_helper_4242A8((void *)FIELD_U32(a1, 0x14), (StateBase *)a2);
    }
  }
  if ( position )
    FIELD_U32(a1, 0x18) = *position;
  if ( _24 )
    FIELD_U32(a1, 0x24) = *_24;
  if ( attenuationRadius )
    FIELD_F32(a1, 0x28) = *attenuationRadius;
  if ( _2C )
    FIELD_F32(a1, 0x2C) = *_2C;
  if ( color )
  {
    v14 = *((float *)color + 1);
    v15 = *((float *)color + 2);
    v16 = *((float *)color + 3);
    FIELD_F32(a1, 0x30) = *(float *)color;
    FIELD_F32(a1, 0x34) = v14;
    FIELD_F32(a1, 0x38) = v15;
    FIELD_F32(a1, 0x3C) = v16;
  }
  if ( _40 )
    FIELD_U32(a1, 0x40) = *_40;
  if ( _44 )
    FIELD_U32(a1, 0x44) = *_44;
  v17 = FIELD_U32(a1, 0x14);
  if ( !v17 )
    return 0;
  sub_60424300(v17, position, _24, attenuationRadius, _2C, color, _40, _44);
  return FIELD_U32(a1, 0x14) != 0;
}
