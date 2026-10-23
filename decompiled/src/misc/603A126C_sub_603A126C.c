/* sub_603A126C
 * address: 0x603A126C   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603A126C(int a1, int a2)
{
  StateBase *CurrentState; // r0
  int v5; // r6
  int v6; // r0
  bool v7; // zf
  int v8; // r0
  bool v9; // zf
  int v10; // r0
  unsigned int v11; // r0
  unsigned int v12; // r0
  _WORD *v13; // r0
  int v14; // t1

  if ( !sub_602A588C(a1) )
  {
    CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
    v5 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    if ( v5 != (*((int (**)(void))Enemy_StateId_Frozen._._.vtable + 2))() )
    {
      v6 = FIELD_U32(a1, 620);
      v7 = v6 == 0;
      if ( v6 )
        v7 = FIELD_U32(v6, 12) == 0;
      if ( v7 )
      {
        v8 = FIELD_U32(a1, 624);
        v9 = v8 == 0;
        if ( v8 )
          v9 = FIELD_U32(v8, 24) == 0;
        if ( v9 )
        {
          v10 = FIELD_U32(a2, 64);
          if ( v10 )
          {
            v11 = FIELD_S8(v10, 84);
            if ( v11 <= 3 )
            {
              v12 = a1 + 2 * v11;
              v14 = FIELD_U16(v12, 6140);
              v13 = (_WORD *)(v12 + 6140);
              if ( v14 )
                return 0;
              *v13 = 16;
            }
            FIELD_U8(a1, 6393) = 0;
            JUMPOUT(0x603A2CA0);
          }
        }
      }
    }
  }
  return 0;
}
