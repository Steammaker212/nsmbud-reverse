/* sub_60745404
 * address: 0x60745404   size: 364   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60745404(int a1, int a2)
{
  int result; // r0
  int v4; // r4
  int v5; // r6
  StateBase *CurrentState; // r0
  int v7; // r6
  StateBase *v8; // r0
  int v9; // r6
  float v10; // s0
  float v11; // s2
  float v12; // s4
  float v13; // s6

  result = FIELD_U32(a2, 136);
  v4 = FIELD_U32(a1, 64);
  if ( result == 6 )
  {
    v5 = FIELD_U32(a2, 64);
    if ( v5 )
    {
      result = Actor__getProfileId(*(Actor **)(a2 + 64));
      if ( result == 847 )
      {
        CurrentState = StateMgr__getCurrentState((StateMgr *)(v5 + 872));
        v7 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
        result = (*(int (**)(void))(dword_60CBE480 + 8))();
        if ( v7 == result )
        {
          v8 = StateMgr__getCurrentState((StateMgr *)(v4 + 872));
          v9 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v8, 0x0) + 2))(v8);
          result = (*(int (**)(void))(dword_60CBE480 + 8))();
          if ( v9 == result )
          {
            v10 = FIELD_F32(a1, 200) * 0.5;
            v11 = FIELD_F32(a1, 264) * 0.5;
            FIELD_F32(v4, 832) = v10 + FIELD_F32(v4, 832);
            FIELD_F32(v4, 836) = v11 + FIELD_F32(v4, 836);
            v12 = FIELD_F32(v4, 112) - FIELD_F32(v4, 588);
            v13 = FIELD_F32(v4, 108) - FIELD_F32(v4, 584);
            if ( (float)((float)(v12 * v12) + (float)(v13 * v13)) > 0.0625
              && (float)((float)(v11 * v11) + (float)(v10 * v10)) > (float)((float)(FIELD_F32(v4, 844)
                                                                                  * FIELD_F32(v4, 844))
                                                                          + (float)(FIELD_F32(v4, 840)
                                                                                  * FIELD_F32(v4, 840))) )
            {
              FIELD_F32(v4, 840) = v10;
              FIELD_F32(v4, 844) = v11;
            }
          }
        }
      }
    }
  }
  else if ( !result )
  {
    result = SE_SYS_SC_HIT_JUST_ref(FIELD_U32(a1, 64));
    if ( result == 1 )
    {
      result = FIELD_U8(a1, 110) | 2;
      FIELD_U8(a1, 110) = result;
    }
  }
  return result;
}
