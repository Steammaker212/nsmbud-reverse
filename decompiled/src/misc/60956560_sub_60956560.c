/* sub_60956560
 * address: 0x60956560   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60956560(int a1, _DWORD *a2)
{
  int result; // r0
  int v5; // r2
  bool v6; // zf

  result = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
  if ( !result )
  {
    v5 = FIELD_U8(a1, 91);
    v6 = v5 == 0;
    if ( FIELD_U8(a1, 91) )
    {
      result = a2[3];
      v6 = result == 0;
    }
    if ( !v6 )
      return sub_6091A804(
               result,
               a2[10],
               0,
               v5 & 1 | ((unsigned __int8)(v5 & 4) >> 1),
               FIELD_F32(a1, 116),
               a1 + 100,
               0,
               a2[8]);
  }
  return result;
}
