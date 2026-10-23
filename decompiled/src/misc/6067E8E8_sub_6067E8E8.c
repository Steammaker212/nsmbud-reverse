/* sub_6067E8E8
 * address: 0x6067E8E8   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6067E8E8(int a1)
{
  int result; // r0

  result = LightMask__draw((RevealMaskRelated *)(a1 + 4));
  if ( FIELD_F32(a1, 372) > 0.0 )
    return sub_60606B2C((_DWORD *)(a1 + 364));
  return result;
}
