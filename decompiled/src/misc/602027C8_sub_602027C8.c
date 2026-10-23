/* sub_602027C8
 * address: 0x602027C8   size: 328   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_602027C8(int a1)
{
  StateMethodExecuter *result; // r0
  StateBase *v3; // r1

  if ( !sub_60190968(dword_60C8996C) )
    return StateMgr__changeState((StateMgr *)(a1 + 284), (StateBase *)&dword_60C8C3D8);
  result = (StateMethodExecuter *)dword_60C8996C;
  if ( FIELD_U8(dword_60C8996C, 1384) )
  {
    result = (StateMethodExecuter *)(sub_6019112C(dword_60C8996C) - 16);
    switch ( (unsigned int)result )
    {
      case 0u:
        v3 = (StateBase *)&unk_60C8C4F8;
        goto LABEL_11;
      case 1u:
        v3 = (StateBase *)&dword_60C8C598;
        goto LABEL_11;
      case 2u:
        v3 = (StateBase *)&unk_60C8C4D8;
        goto LABEL_11;
      case 0x13u:
        v3 = (StateBase *)&unk_60C8C578;
        goto LABEL_11;
      case 0x14u:
        if ( sub_601916EC(dword_60C8996C) == 32 )
        {
          v3 = (StateBase *)&unk_60C8C558;
LABEL_11:
          result = StateMgr__changeState((StateMgr *)(a1 + 284), v3);
        }
        else
        {
          result = (StateMethodExecuter *)(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
        }
        break;
      default:
        return result;
    }
  }
  return result;
}
