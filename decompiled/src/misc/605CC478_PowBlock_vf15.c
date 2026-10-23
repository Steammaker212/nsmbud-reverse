/* PowBlock_vf15
 * address: 0x605CC478   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall PowBlock_vf15(int a1)
{
  _BYTE *v1; // r4

  v1 = (_BYTE *)(a1 + 6112);
  if ( FIELD_U8(a1, 6112) )
  {
    sub_60001688(a1, FIELD_U32(a1, 6100), -1);
    *v1 = 0;
  }
  return 1;
}
