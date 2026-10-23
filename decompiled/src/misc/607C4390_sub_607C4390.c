/* sub_607C4390
 * address: 0x607C4390   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607C4390(int a1)
{
  int v2; // r5
  int result; // r0

  v2 = FIELD_U32(a1, 9936);
  ((void (__fastcall *)(int))loc_607741E4)(a1);
  FIELD_U8(a1, 12068) = (FIELD_U32(a1, 6912) & 0x40000) == 0;
  FIELD_U8(a1, 12052) = 0;
  if ( FIELD_F32(a1, 88) == 0.0 )
  {
    (*(void (__fastcall **)(int, int))(*(_DWORD *)a1 + 984))(a1, v2);
  }
  else
  {
    FIELD_U32(a1, 9940) = 1;
    sub_607740E8(a1);
  }
  result = FIELD_U32(a1, 1224) | 0x9F50;
  FIELD_U32(a1, 1224) = result;
  return result;
}
