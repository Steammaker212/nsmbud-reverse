/* sub_60544A68
 * address: 0x60544A68   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60544A68(int a1)
{
  int result; // r0
  _BYTE *v3; // r4
  int v4; // t1

  sub_60473DE4((_DWORD *)(a1 + 44), 0, &dword_60CABF14, 0);
  FIELD_U8(a1, 33497) = 1;
  sub_60502548(a1 + 3632);
  v4 = FIELD_U8(a1, 33504);
  v3 = (_BYTE *)(a1 + 33504);
  result = v4;
  if ( v4 )
  {
    result = sub_608169AC(dword_60CC6B68);
    *v3 = 0;
  }
  return result;
}
