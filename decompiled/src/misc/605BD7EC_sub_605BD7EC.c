/* sub_605BD7EC
 * address: 0x605BD7EC   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605BD7EC(int a1)
{
  if ( FIELD_U8(a1, 7793) )
    CoinBase__onDraw(a1);
  if ( (FIELD_U8(a1, 22) & 0x10) != 0 )
    LightMask__draw((RevealMaskRelated *)(a1 + 7740));
  return 1;
}
