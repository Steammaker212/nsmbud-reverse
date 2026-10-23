/* sub_601AF4F8
 * address: 0x601AF4F8   size: 412   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_601AF4F8(int a1)
{
  StateMethodExecuter *result; // r0
  StateBase *v3; // r1
  StateMgr *v4; // r5
  StateMgr *v5; // r0

  if ( !sub_60190968(dword_60C8996C) )
    return StateMgr__changeState((StateMgr *)(a1 + 284), (StateBase *)&dword_60C8A6CC);
  result = (StateMethodExecuter *)dword_60C8996C;
  if ( FIELD_U8(dword_60C8996C, 1384) )
  {
    result = (StateMethodExecuter *)(sub_6019112C(dword_60C8996C) - 16);
    switch ( (unsigned int)result )
    {
      case 0u:
        v3 = (StateBase *)&unk_60C8A7EC;
        goto LABEL_10;
      case 1u:
        v4 = (StateMgr *)(a1 + 284);
        (*(void (__fastcall **)(int, int))(*(_DWORD *)a1 + 128))(a1, 3);
        v3 = (StateBase *)&dword_60C8A86C;
        goto LABEL_8;
      case 2u:
        sub_601B03A8(a1);
        v4 = (StateMgr *)(a1 + 284);
        (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 124))(a1);
        v3 = (StateBase *)&unk_60C8A7CC;
LABEL_8:
        v5 = v4;
        goto LABEL_11;
      case 0x13u:
        v3 = (StateBase *)&unk_60C8A84C;
LABEL_10:
        v5 = (StateMgr *)(a1 + 284);
LABEL_11:
        result = StateMgr__changeState(v5, v3);
        break;
      case 0x14u:
        if ( sub_601916EC(dword_60C8996C) == 32 )
        {
          (*(void (__fastcall **)(int, int))(*(_DWORD *)a1 + 128))(a1, 3);
          StateMgr__changeState((StateMgr *)(a1 + 284), (StateBase *)&dword_60C8A72C);
        }
        result = (StateMethodExecuter *)(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
        break;
      default:
        return result;
    }
  }
  return result;
}
