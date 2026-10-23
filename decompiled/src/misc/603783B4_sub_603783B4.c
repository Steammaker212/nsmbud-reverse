/* sub_603783B4
 * address: 0x603783B4   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603783B4(int a1)
{
  int result; // r0
  _BYTE *v3; // r5
  int v4; // r4
  int v5; // t1

  v3 = (_BYTE *)(a1 + 6108);
  result = FIELD_U8(a1, 6108);
  if ( result )
  {
    v5 = FIELD_U32(a1, 6100);
    v4 = a1 + 6100;
    result = sub_60793CA8(FIELD_U32(v5, 4));
    if ( result == 1 )
    {
      result = (*(int (__fastcall **)(_DWORD, _DWORD, float, float, float))(**(_DWORD **)(*(_DWORD *)v4 + 4) + 84))(
                 *(_DWORD *)(*(_DWORD *)v4 + 4),
                 0,
                 1.0,
                 0.0,
                 0.0);
      *v3 = 0;
    }
  }
  return result;
}
