/* sub_60606CB0
 * address: 0x60606CB0   size: 176   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60606CB0(int result)
{
  float v1; // s2
  float v2; // s0
  _DWORD v3[4]; // [sp+0h] [bp-10h] BYREF

  FIELD_U32(result, 124) = -1081123799;
  FIELD_U32(result, 100) = 1017370378;
  v1 = FIELD_F32(result, 112);
  v2 = FIELD_F32(result, 6800);
  if ( v1 <= v2 && v1 >= (float)(v2 + (float)(FIELD_F32(result, 6796) * -0.5)) && FIELD_S32(result, 7256) <= 0 )
  {
    FIELD_U32(result, 7256) = 16;
    v3[0] = FIELD_U32(result, 108);
    *(float *)&v3[1] = v2;
    return TileMgr_splashRelated(TileMgr_instance, v3, 27);
  }
  return result;
}
