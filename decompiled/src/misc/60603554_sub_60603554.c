/* sub_60603554
 * address: 0x60603554   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60603554(int a1)
{
  EffectData *v1; // r4

  v1 = (EffectData *)(a1 + 16);
  if ( sub_60235E50(a1 + 16) == 1 )
    EffectData_init(v1);
}
