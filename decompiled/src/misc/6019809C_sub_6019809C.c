/* sub_6019809C
 * address: 0x6019809C   size: 244   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6019809C(int a1)
{
  StateBase *v2; // r1
  int (__fastcall *v3)(int, int); // r5
  int v4; // r0

  if ( FIELD_U8(dword_60C8996C, 1385) && sub_60185D08((Actor *)a1) )
  {
    if ( sub_601916EC(dword_60C8996C) == 67 || sub_601916EC(dword_60C8996C) == 94 )
      v2 = (StateBase *)&unk_60C89B70;
    else
      v2 = (StateBase *)&dword_60C89B50;
    StateMgr__changeState((StateMgr *)(a1 + 284), v2);
  }
  StateMgr__execute((StateMgr *)(a1 + 284));
  if ( sub_60190968(dword_60C8996C) )
  {
    if ( FIELD_U8(dword_60C8996C, 1384) )
    {
      v3 = *(int (__fastcall **)(int, int))(*(_DWORD *)a1 + 84);
      v4 = sub_6019112C(dword_60C8996C);
      if ( !v3(a1, v4) )
        (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
    }
  }
  sub_60197CE4(a1);
  return 1;
}
