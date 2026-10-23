/* sub_607D4270
 * address: 0x607D4270   size: 236   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607D4270(int a1)
{
  int result; // r0
  int *v3; // r5
  int v4; // r0

  sub_607712D4(a1);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1104))(a1);
  ((void (__fastcall *)(int))loc_60771D8C)(a1);
  sub_607711C8(a1);
  result = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 972))(a1);
  if ( !result )
  {
    if ( (FIELD_U8(a1, 6900) & 0x60) != 0 )
      sub_607865BC(a1 + 688, 2);
    if ( FIELD_U32(a1, 9940) )
    {
      FIELD_U32(a1, 88) = 0;
      v3 = (int *)(a1 + 11368);
      if ( sub_607868D4(a1 + 688, 0) != 1 || sub_60793184(*v3) < 10.0 )
      {
        v4 = *v3;
        goto LABEL_10;
      }
    }
    else if ( !sub_607868D4(a1 + 688, 0) )
    {
      v4 = FIELD_U32(a1, 11368);
LABEL_10:
      result = sub_60793CA8(v4);
      if ( result != 1 )
        return result;
    }
    return sub_607D71F8(a1);
  }
  return result;
}
