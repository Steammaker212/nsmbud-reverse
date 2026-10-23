/* sub_6008A848
 * address: 0x6008A848   size: 228   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6008A848(int result, int a2, int a3)
{
  int v5; // r9
  int v6; // r5
  StateBase *CurrentState; // r0
  int v8; // r7
  StateBase *v9; // r0
  int v10; // r6

  v5 = result;
  v6 = FIELD_U32(a3, 64);
  if ( v6 )
  {
    result = Actor__getProfileId(*(Actor **)(a3 + 64));
    if ( result == 728 )
    {
      CurrentState = StateMgr__getCurrentState((StateMgr *)(v6 + 6084));
      v8 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
      result = (*(int (**)(void))(dword_60C810B8 + 8))();
      if ( v8 != result )
      {
        v9 = StateMgr__getCurrentState((StateMgr *)(v6 + 6084));
        v10 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v9, 0x0) + 2))(v9);
        result = (*(int (**)(void))(dword_60C810D8 + 8))();
        if ( v10 != result )
        {
          if ( (FIELD_U8(v5, 7616) & 2) != 0 )
          {
            SE_EMY_DOWN_ref_2A58B4(v6, FIELD_U32(a2, 64));
            result = FIELD_U8(a3, 110) | 2;
            FIELD_U8(a3, 110) = result;
          }
          else
          {
            return sub_60063B8C(v6, FIELD_U32(v5, 80));
          }
        }
      }
    }
  }
  return result;
}
