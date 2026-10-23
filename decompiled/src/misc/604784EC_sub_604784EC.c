/* sub_604784EC
 * address: 0x604784EC   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604784EC(int a1)
{
  int result; // r0
  int v3; // r1

  result = FIELD_U8(a1, 8);
  if ( (result & 0x10) == 0 )
  {
    v3 = FIELD_U32(a1, 124);
    if ( v3 )
    {
      sub_60477B30((_DWORD *)a1, v3);
      (*(void (__fastcall **)(_DWORD, _DWORD, float))(**(_DWORD **)(a1 + 124) + 92))(FIELD_U32(a1, 124), 0, 1.0);
      *(_DWORD *)(FIELD_U32(a1, 124) + 16) = 0;
    }
    return (*(int (__fastcall **)(int, int))(*(_DWORD *)a1 + 40))(a1, 1);
  }
  return result;
}
