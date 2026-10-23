/* sub_607ECBC0
 * address: 0x607ECBC0   size: 304   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_607ECBC0(int a1)
{
  int v2; // r4
  StateMethodExecuter *result; // r0
  int *v4; // r1
  int v5; // r6
  int v6; // r0
  int v7; // r6
  int v8; // r0
  int v9; // r5
  int v10; // r1
  unsigned int v11; // r2

  v2 = a1 + 14376;
  result = (StateMethodExecuter *)sub_60515B24((_BYTE *)(a1 + 14376));
  if ( !result )
  {
    if ( sub_60515B04(v2) == 1 )
    {
      if ( FIELD_U32(dword_60C99DEC, 508) == 2 )
        v4 = &dword_60CC5C0C;
      else
        v4 = &dword_60CC5BCC;
      return StateMgr__changeState((StateMgr *)(a1 + 216), (StateBase *)v4);
    }
    else if ( sub_60515AC0(v2) < 2 )
    {
      return StateMgr__changeState((StateMgr *)(a1 + 216), (StateBase *)&dword_60CC5C6C);
    }
    else
    {
      v5 = dword_60C9CFB8;
      v6 = sub_60515AC0(v2);
      if ( sub_6045A7C0(v5, v6) || (v7 = dword_60C9CFB8, v8 = sub_60515AC0(v2), sub_6045A444(v7, v8) == 1) )
      {
        StateMgr__changeState((StateMgr *)(a1 + 216), (StateBase *)&dword_60CC5C6C);
        v9 = dword_60C9CFB8;
        v10 = sub_60515AC0(v2);
        return (StateMethodExecuter *)sub_6045BE8C(v9, v10);
      }
      else
      {
        v11 = sub_60515AC0(v2);
        return (StateMethodExecuter *)sub_60515B80(v2, 0, v11);
      }
    }
  }
  return result;
}
