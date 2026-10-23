/* sub_604ED800
 * address: 0x604ED800   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604ED800(int a1, int a2)
{
  char v4; // r6
  int result; // r0
  _DWORD *v6; // r1

  v4 = 1;
  result = sub_604741D8((_DWORD *)a1, 1u, &off_60BFECBC, 0);
  if ( a2 == 1 )
  {
    v6 = *(_DWORD **)(a1 + 3512);
    if ( FIELD_U32(a1, 3508) > 1u )
      v6 += 5;
    result = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)*v6 + 104))(*v6);
    v4 = 0;
  }
  FIELD_U8(a1, 3584) = v4;
  return result;
}
