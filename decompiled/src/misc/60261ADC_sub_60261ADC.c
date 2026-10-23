/* sub_60261ADC
 * address: 0x60261ADC   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60261ADC(int a1)
{
  BobOmb_onDraw(a1);
  if ( FIELD_U8(a1, 7108) )
    DrawMgr_drawModel(DrawMgr_instance, **(void ***)(a1 + 7068));
  return 1;
}
