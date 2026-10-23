/* sub_6020DD54
 * address: 0x6020DD54   size: 292   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6020DD54(int a1)
{
  int v2; // r0

  if ( FIELD_U8(dword_60C8996C, 1385) && sub_60185D08((Actor *)a1) )
    StateMgr__changeState((StateMgr *)(a1 + 284), (StateBase *)&unk_60C8CCEC);
  if ( !sub_60190968(dword_60C8996C) )
  {
    v2 = sub_601774C8(dword_60C88E60, a1 + 324);
    if ( v2 )
    {
      if ( v2 == FIELD_U32(dword_60C8AEF0, 20) )
      {
        FIELD_U32(a1, 404) = FIELD_U32(a1, 80);
        FIELD_U32(a1, 408) = FIELD_U32(a1, 84);
        FIELD_U32(a1, 412) = FIELD_U32(a1, 88);
        StateMgr__changeState((StateMgr *)(a1 + 284), (StateBase *)&dword_60C8CD0C);
      }
    }
  }
  StateMgr__execute((StateMgr *)(a1 + 284));
  if ( sub_60190968(dword_60C8996C)
    && FIELD_U8(dword_60C8996C, 1384)
    && (sub_6019112C(dword_60C8996C) | 0x10) != 0x34 )
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
  }
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 148))(a1);
  return 1;
}
