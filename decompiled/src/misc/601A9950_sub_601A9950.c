/* sub_601A9950
 * address: 0x601A9950   size: 360   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_601A9950(int a1)
{
  StateMethodExecuter *result; // r0
  int *v3; // r1
  StateMgr *v4; // r0

  if ( !sub_60190968(dword_60C8996C) )
    return StateMgr__changeState((StateMgr *)(a1 + 284), (StateBase *)&unk_60C8A44C);
  result = (StateMethodExecuter *)dword_60C8996C;
  if ( FIELD_U8(dword_60C8996C, 1384) )
  {
    result = (StateMethodExecuter *)(sub_6019112C(dword_60C8996C) - 16);
    switch ( (unsigned int)result )
    {
      case 0u:
        v3 = &dword_60C8A4AC;
        v4 = (StateMgr *)(a1 + 284);
        return StateMgr__changeState(v4, (StateBase *)v3);
      case 1u:
        (*(void (__fastcall **)(int, int))(*(_DWORD *)a1 + 128))(a1, 3);
        v3 = &dword_60C8A4CC;
        v4 = (StateMgr *)(a1 + 284);
        return StateMgr__changeState(v4, (StateBase *)v3);
      case 2u:
        (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 124))(a1);
        goto LABEL_12;
      case 0x14u:
        if ( sub_601916EC(dword_60C8996C) == 32 )
          (*(void (__fastcall **)(int, int))(*(_DWORD *)a1 + 128))(a1, 3);
LABEL_12:
        result = (StateMethodExecuter *)(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
        break;
      default:
        return result;
    }
  }
  return result;
}
