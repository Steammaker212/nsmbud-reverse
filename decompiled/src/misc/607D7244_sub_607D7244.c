/* sub_607D7244
 * address: 0x607D7244   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607D7244(int a1)
{
  int v2; // r5
  int result; // r0

  v2 = FIELD_U32(a1, 9936);
  ((void (__fastcall *)(int))loc_607741E4)(a1);
  if ( FIELD_F32(a1, 88) == 0.0 )
  {
    (*(void (__fastcall **)(int, int))(*(_DWORD *)a1 + 984))(a1, v2);
  }
  else
  {
    FIELD_U32(a1, 9940) = 1;
    sub_607740E8(a1);
  }
  FIELD_U32(a1, 1224) |= 0x800u;
  result = FIELD_U32(a1, 1236) | 0x1000000;
  FIELD_U32(a1, 1236) = result;
  return result;
}
