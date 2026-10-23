/* sub_602CB320
 * address: 0x602CB320   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602CB320(int a1)
{
  ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 4));
  ActorScaler_execute((ActorScaler *)(a1 + 8));
  guru_iron_ball_ref(a1);
  return sub_602CB558(a1);
}
