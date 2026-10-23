/* sub_607CF550
 * address: 0x607CF550   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607CF550(int a1)
{
  FIELD_U32(a1, 11420) = FIELD_S8(a1, 84);
  *(_DWORD *)(FIELD_U32(a1, 11368) + 208) |= 0x80u;
  sub_607949A4(a1 + 11364, 103);
  FIELD_U8(a1, 11460) = 0;
  FIELD_U32(a1, 11452) = 30;
  return 11452;
}
