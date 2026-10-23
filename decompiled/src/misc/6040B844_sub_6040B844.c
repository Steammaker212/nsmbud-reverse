/* sub_6040B844
 * address: 0x6040B844   size: 504   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6040B844(int a1)
{
  StateMethodExecuter *result; // r0
  int v3; // r0
  int v4; // r5
  const unsigned int *v5; // r2
  unsigned int v6; // r6
  int v7; // r1
  int v8; // r0
  int v9; // r2
  int v10; // r1
  unsigned int v11; // [sp+4h] [bp-14h] BYREF

  result = (StateMethodExecuter *)dword_60C99DD4;
  if ( dword_60C99DD4 )
  {
    result = (StateMethodExecuter *)sub_607F6ABC(dword_60CC62E4);
    if ( !result )
    {
      if ( FIELD_U32(a1, 2076) )
      {
        v3 = FIELD_U32(a1, 2080);
        if ( !v3 || (result = (StateMethodExecuter *)(v3 - 1), (FIELD_U32(a1, 2080) = result) == 0) )
        {
          v4 = 1;
          if ( !sub_6045A664(dword_60C9CFB8, 0) )
          {
            v4 = 1;
            v6 = 1;
            if ( sub_6045A664(dword_60C9CFB8, 1)
              || (v6 = 2, sub_6045A664(dword_60C9CFB8, 2))
              || (v6 = 3, sub_6045A664(dword_60C9CFB8, 3)) )
            {
              v11 = v6;
              nn__hid__SwapNpadAssignment((nn__hid *)&nn__hid__NpadId__No1, &v11, v5);
            }
            else
            {
              sub_6045B594(dword_60C9CFB8);
              v4 = 0;
            }
          }
          if ( sub_6045BD08(dword_60C9CFB8, 0, 24576)
            || sub_6045BD08(dword_60C9CFB8, 0, 36)
            || (result = (StateMethodExecuter *)(v4 | sub_6045A500(dword_60C9CFB8)), result == (StateMethodExecuter *)1) )
          {
            v7 = sub_6045A500(dword_60C9CFB8);
            if ( v7 )
              v7 = 4;
            if ( sub_6045B0B0(dword_60C9CFB8, v7, 7) == 1 )
              FIELD_U8(dword_60C9CFB8, 84) ^= 1u;
            return StateMgr__changeState((StateMgr *)(a1 + 36), (StateBase *)&dword_60C9A294);
          }
        }
      }
      else
      {
        v8 = FIELD_U32(a1, 2072);
        v9 = v8 + 1;
        if ( v8 > 6 )
          v9 = 0;
        v10 = dword_60C99DD4;
        FIELD_U32(a1, 2072) = v9;
        return (StateMethodExecuter *)sub_6040C14C(a1, v10);
      }
    }
  }
  return result;
}
