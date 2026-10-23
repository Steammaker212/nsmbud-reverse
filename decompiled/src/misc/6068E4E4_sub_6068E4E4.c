/* sub_6068E4E4
 * address: 0x6068E4E4   size: 220   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6068E4E4(int a1)
{
  int result; // r0
  _BYTE *v3; // r5
  float v4; // s16
  float v5; // s18
  float v6; // [sp+8h] [bp-28h] BYREF
  float v7; // [sp+Ch] [bp-24h] BYREF

  v3 = (_BYTE *)(a1 + 6162);
  result = FIELD_U8(a1, 6162);
  if ( result )
  {
    result = ((int (__fastcall *)(int, float *, float *))loc_6068E614)(a1, &v7, &v6);
    if ( result == 1 )
    {
      v4 = v6;
      v5 = v7;
      FIELD_F32(a1, 6172) = FIELD_F32(a1, 108) + (float)((float)(v7 + v6) * 0.5);
      if ( FIELD_U8(a1, 6828) )
      {
        result = EffectData_create(963, (Vec3 *)(a1 + 6172), 0, 0);
        *v3 = 0;
      }
      else
      {
        EffectWrapper_update((EffectWrapper *)(a1 + 6220), 962, (Vec3 *)(a1 + 6172), 0, 0);
        FIELD_F32(a1, 6184) = (float)(v4 - v5) * 0.0625;
        return sub_60236290(a1 + 6236, a1 + 6184);
      }
    }
  }
  return result;
}
