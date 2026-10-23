/* sub_607A7AA4
 * address: 0x607A7AA4   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_607A7AA4(int a1, int a2, int a3)
{
  int v6; // r0
  bool v7; // zf

  FIELD_U8(a1, 12013) = 0;
  if ( a3 == 17 )
    goto LABEL_7;
  if ( !(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1204))(a1) )
  {
    v6 = FIELD_U32(a1, 1320);
    v7 = v6 == 3;
    if ( v6 != 3 )
      v7 = v6 == 0;
    if ( v7 )
LABEL_7:
      FIELD_U8(a1, 12013) = 1;
  }
  FIELD_U32(a1, 9720) = FIELD_U32(a2, 8);
  return sub_60766314(a1, (StateBase *)&dword_60CC4B0C, a3);
}
