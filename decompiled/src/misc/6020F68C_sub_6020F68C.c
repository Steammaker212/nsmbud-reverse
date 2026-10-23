/* sub_6020F68C
 * address: 0x6020F68C   size: 236   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6020F68C(int a1)
{
  int result; // r0
  signed int v3; // r1

  result = FIELD_U32(a1, 460);
  if ( result == 10 )
  {
    v3 = FIELD_U32(a1, 364);
    if ( v3 >= 0 )
    {
      sub_601E4F60(dword_60C8B13C, v3);
      FIELD_U32(a1, 364) = -1;
    }
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
    sub_6021007C(a1);
    return (int)StateMgr__changeState((StateMgr *)(a1 + 284), (StateBase *)&dword_60C8CF34);
  }
  else if ( !result )
  {
    if ( FIELD_S32(a1, 364) < 0 )
      FIELD_U32(a1, 364) = sub_601E4EA4(dword_60C8B13C, 204, 0, a1 + 80, 1);
    result = ((int (__fastcall *)(int))loc_6020F78C)(a1);
    if ( result == 1 )
    {
      if ( dword_60C8CF60 == FIELD_U32(a1, 8) )
        dword_60C8CF60 = 0;
      result = 10;
      FIELD_U32(a1, 460) = 10;
    }
  }
  return result;
}
