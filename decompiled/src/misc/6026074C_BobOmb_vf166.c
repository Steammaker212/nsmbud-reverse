/* BobOmb_vf166
 * address: 0x6026074C   size: 244   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall BobOmb_vf166(int a1)
{
  StateBase *CurrentState; // r0
  int v3; // r5
  int result; // r0
  int v5; // r5

  CarryableEnemy__vf298((int *)a1);
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v3 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  result = (*((int (**)(void))stru_60C8E1EC._._.vtable + 2))();
  if ( v3 == result )
  {
    result = sub_60271EC4(a1);
    v5 = result;
    if ( result )
    {
      result = sub_60766708(result);
      if ( result == 1 )
      {
        result = (*(int (__fastcall **)(int, int))(*(_DWORD *)v5 + 640))(v5, 3);
        if ( result == 1 )
        {
          result = FIELD_U32(v5, 1228);
          if ( (result & 0x2000000) != 0 )
          {
            FIELD_U16(a1, 6364) |= 0x20u;
            FIELD_U32(a1, 6748) = FIELD_U32(v5, 9884);
          }
          else
          {
            if ( (result & 0x1000000) == 0 )
              return result;
            FIELD_U16(a1, 6364) |= 0x20u;
          }
          if ( (FIELD_U8(v5, 1226) & 0x10) != 0 || (result = FIELD_U8(v5, 535), !FIELD_U8(v5, 535)) )
          {
            FIELD_U8(a1, 535) = 0;
            return 0;
          }
        }
      }
    }
  }
  return result;
}
