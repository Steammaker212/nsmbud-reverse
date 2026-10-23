/* sub_607AA814
 * address: 0x607AA814   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_607AA814(int a1)
{
  EffectData *v1; // r4

  v1 = (EffectData *)(a1 + 13192);
  if ( sub_60235E50(a1 + 13192) == 1 )
    EffectData_init(v1);
}
