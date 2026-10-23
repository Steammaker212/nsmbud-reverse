/* sub_6066D224
 * address: 0x6066D224   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6066D224(int a1)
{
  if ( FIELD_U8(a1, 6860) )
    ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 6196));
  ((void (__fastcall *)(int))loc_606BBA3C)(a1 + 6100);
  sub_6066D73C(a1);
  FIELD_F32(a1, 112) = FIELD_F32(a1, 6856) + FIELD_F32(a1, 6168);
  return sub_6066D564(a1);
}
