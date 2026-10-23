/* sub_6020899C
 * address: 0x6020899C   size: 336   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6020899C(int a1)
{
  int v2; // r5
  StateBase *v3; // r1
  int v4; // r0

  v2 = dword_60C8996C;
  if ( FIELD_U8(dword_60C8996C, 1385) )
  {
    if ( sub_60185D08((Actor *)a1) )
    {
      v3 = (StateBase *)&unk_60C8C814;
LABEL_7:
      StateMgr__changeState((StateMgr *)(a1 + 284), v3);
      goto LABEL_8;
    }
    if ( sub_601916EC(v2) == 95 || sub_601916EC(v2) == 96 )
    {
      v3 = (StateBase *)&dword_60C8C894;
      goto LABEL_7;
    }
  }
LABEL_8:
  if ( !sub_60190968(dword_60C8996C) )
  {
    v4 = sub_601774C8(dword_60C88E60, a1 + 324);
    if ( v4 )
    {
      if ( v4 == FIELD_U32(dword_60C8AEF0, 20) )
      {
        FIELD_U32(a1, 380) = FIELD_U32(a1, 80);
        FIELD_U32(a1, 384) = FIELD_U32(a1, 84);
        FIELD_U32(a1, 388) = FIELD_U32(a1, 88);
        StateMgr__changeState((StateMgr *)(a1 + 284), &stru_60C8C834);
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
