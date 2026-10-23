/* sub_601A63D0
 * address: 0x601A63D0   size: 364   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_601A63D0(int a1)
{
  StateMethodExecuter *result; // r0
  unsigned int v3; // r1
  StateBase *v4; // r1

  if ( !sub_60190968(dword_60C8996C) )
    return StateMgr__changeState((StateMgr *)(a1 + 284), (StateBase *)&dword_60C8A14C);
  result = (StateMethodExecuter *)dword_60C8996C;
  if ( FIELD_U8(dword_60C8996C, 1384) )
  {
    result = (StateMethodExecuter *)(sub_6019112C(dword_60C8996C) - 32);
    switch ( (unsigned int)result )
    {
      case 0u:
        return (StateMethodExecuter *)sub_60186FC0(
                                        dword_60CC6D78 + 984,
                                        FIELD_U32(a1, 240),
                                        FIELD_U32(a1, 352),
                                        a1 + 300);
      case 3u:
        v4 = (StateBase *)&dword_60C8A22C;
        goto LABEL_11;
      case 4u:
        v3 = FIELD_U32(a1, 316);
        if ( v3 == 6 )
        {
          result = (StateMethodExecuter *)(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
        }
        else
        {
          FIELD_U32(a1, 376) = sub_60178694(FIELD_U32(a1, 372), v3);
          sub_6020AE5C(a1);
          FIELD_U8(a1, 452) = 1;
          v4 = &stru_60C8A16C;
LABEL_11:
          result = StateMgr__changeState((StateMgr *)(a1 + 284), v4);
        }
        break;
      case 0x14u:
        v4 = (StateBase *)&dword_60C8A20C;
        goto LABEL_11;
      default:
        return result;
    }
  }
  return result;
}
