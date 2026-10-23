/* Player__vf30
 * address: 0x6079585C   size: 68   group: player
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6079585C(int a1)
{
  int v2; // r0

  v2 = FIELD_U32(a1, 1224);
  if ( (v2 & 0x200000) != 0 )
  {
    FIELD_U32(a1, 1224) = v2 & 0xFFDFFFFF;
  }
  else
  {
    sub_607949E8(a1 + 11356);
    sub_60750560((void ***)(a1 + 10636));
  }
  return 1;
}
