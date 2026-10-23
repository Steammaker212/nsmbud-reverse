/* sub_6020B70C
 * address: 0x6020B70C   size: 412   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6020B70C(unsigned int *a1)
{
  StateMethodExecuter *result; // r0
  int *v3; // r1
  StateMgr *v4; // r0

  if ( sub_60190968(dword_60C8996C) )
  {
    result = (StateMethodExecuter *)dword_60C8996C;
    if ( FIELD_U8(dword_60C8996C, 1384) )
    {
      result = (StateMethodExecuter *)(sub_6019112C(dword_60C8996C) - 16);
      switch ( (unsigned int)result )
      {
        case 0u:
          v3 = &dword_60C8CB54;
          goto LABEL_10;
        case 1u:
          (*(void (__fastcall **)(unsigned int *, int))(*a1 + 128))(a1, 3);
          v3 = &dword_60C8CBB8;
          v4 = (StateMgr *)(a1 + 71);
          goto LABEL_11;
        case 2u:
          (*(void (__fastcall **)(unsigned int *))(*a1 + 124))(a1);
          v3 = (int *)&unk_60C8CB34;
          v4 = (StateMgr *)(a1 + 71);
          goto LABEL_11;
        case 0x10u:
          return (StateMethodExecuter *)sub_60186FC0(dword_60CC6D78 + 984, a1[60], a1[88], (int)(a1 + 75));
        case 0x13u:
          v3 = &dword_60C8CBD8;
LABEL_10:
          v4 = (StateMgr *)(a1 + 71);
LABEL_11:
          result = StateMgr__changeState(v4, (StateBase *)v3);
          break;
        case 0x14u:
          (*(void (__fastcall **)(unsigned int *, int))(*a1 + 128))(a1, 3);
          result = (StateMethodExecuter *)(*(int (__fastcall **)(unsigned int *))(*a1 + 72))(a1);
          break;
        default:
          return result;
      }
    }
  }
  else
  {
    a1[131] = 0;
    return StateMgr__changeState((StateMgr *)(a1 + 71), (StateBase *)&dword_60C8CAB4);
  }
  return result;
}
