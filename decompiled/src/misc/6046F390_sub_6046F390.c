/* sub_6046F390
 * address: 0x6046F390   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6046F390(int a1)
{
  if ( FIELD_U8(a1, 6989) )
    sub_60460DA8(a1);
  LightMask__draw((RevealMaskRelated *)(a1 + 6828));
  return 1;
}
