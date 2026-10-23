/* sub_60321FD0
 * address: 0x60321FD0   size: 372   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_60321FD0(int a1)
{
  int v2; // r1
  EffectWrapper *v3; // r0
  signed int result; // r0
  ActorBuildInfo v5; // [sp+4h] [bp-44h] BYREF

  v2 = FIELD_U32(a1, 6308);
  v3 = (EffectWrapper *)(a1 + 7352);
  if ( v2 )
  {
    EffectWrapper_update(v3, 543, (Vec3 *)(a1 + 108), (Vec3i *)(a1 + 156), (Vec3 *)(a1 + 144));
    result = FIELD_U32(a1, 6312);
    if ( result == 1 )
      return EffectWrapper_update(
               (EffectWrapper *)(a1 + 7456),
               549,
               (Vec3 *)(a1 + 108),
               (Vec3i *)(a1 + 156),
               (Vec3 *)(a1 + 144));
  }
  else
  {
    EffectWrapper_update(v3, 554, (Vec3 *)(a1 + 108), (Vec3i *)(a1 + 156), (Vec3 *)(a1 + 144));
    result = FIELD_U32(a1, 6312);
    if ( result == 1 )
    {
      EffectWrapper_update(
        (EffectWrapper *)(a1 + 7456),
        555,
        (Vec3 *)(a1 + 108),
        (Vec3i *)(a1 + 156),
        (Vec3 *)(a1 + 144));
      result = FIELD_U32(a1, 6300);
      if ( result == 12 )
      {
        result = FIELD_U8(dword_60C99DD4, 1052);
        if ( (result & 0x3F) == 0 )
        {
          memset(&v5.settings2, 0, 40);
          v5.settings1 = 144;
          v5.parentId = 0;
          v5.profile = Profile__get(0x314u);
          v5.position = *(Vec3 *)(a1 + 108);
          v5.field_1C = FIELD_U32(a1, 160);
          v5.field_20 = 0;
          result = (signed int)ActorMgr__create((void *)ActorMgr__instance, &v5, 0);
          if ( result )
            FIELD_U32(result, 16544) = FIELD_U32(a1, 8);
        }
      }
    }
  }
  return result;
}
