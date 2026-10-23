/* sub_607BA7C0
 * address: 0x607BA7C0   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_607BA7C0(int a1)
{
  int v2; // r5
  signed int result; // r0
  Vec3 *v4; // r1
  EffectData *v5; // r0

  v2 = sub_6079D894(a1);
  if ( v2 )
  {
    result = sub_60235E50(v2 + 13840);
    if ( result != 1 )
      return result;
    v4 = (Vec3 *)(v2 + 108);
    v5 = (EffectData *)(v2 + 13840);
  }
  else
  {
    result = sub_60235E50(a1 + 13840);
    if ( result != 1 )
      return result;
    v4 = (Vec3 *)(a1 + 108);
    v5 = (EffectData *)(a1 + 13840);
  }
  return EffectData_update(v5, v4, 0, 0);
}
