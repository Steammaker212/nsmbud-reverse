/* sub_6036E230
 * address: 0x6036E230   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6036E230(int a1)
{
  Vec3 *v2; // r5

  v2 = (Vec3 *)(a1 + 108);
  sub_60237208(a1 + 6768, (Vec3 *)(a1 + 108), 0, 0);
  EffectWrapper_update((EffectWrapper *)(a1 + 6872), 923, v2, 0, 0);
  FIELD_U16(a1, 6276) = 60;
  FIELD_U32(a1, 6348) = 0x2000000;
  return 6348;
}
