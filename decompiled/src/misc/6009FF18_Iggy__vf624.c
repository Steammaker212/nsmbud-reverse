/* Iggy__vf624
 * address: 0x6009FF18   size: 232   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: KoopalingBase : 0x600B6A98
// 
// Overridden by: None
int __fastcall Iggy__vf624(int a1)
{
  float v2; // s16
  float v3; // s18
  float v4; // s0

  KoopalingBase__vf624();
  FIELD_U32(a1, 80) = StageActor__directionToPlayerX((StateActor *)a1, (Vec3 *)(a1 + 108));
  FIELD_U32(a1, 7752) = 3;
  v2 = FIELD_F32(dword_60CC6484, 112);
  v3 = FIELD_F32(dword_60CC6484, 120);
  FIELD_F32(a1, 8156) = (float)(v2 + 144.0)
                        + (float)((float)((float)(v3 + -144.0) - (float)(v2 + 144.0))
                                * (float)(COERCE_FLOAT((sead__Random__getU32((void *)(dword_60C9CF0C + 1340)) >> 9) | 0x3F800000)
                                        + -1.0));
  v4 = (*(float (__fastcall **)(int))(*(_DWORD *)a1 + 1672))(a1);
  FIELD_F32(a1, 132) = v4;
  if ( FIELD_U32(a1, 80) == 1 )
    FIELD_F32(a1, 132) = -v4;
  FIELD_U32(a1, 120) = 0;
  FIELD_U32(a1, 104) = 1036831949;
  FIELD_U16(a1, 6276) = 600;
  FIELD_U32(a1, 7092) = 1;
  return 7092;
}
