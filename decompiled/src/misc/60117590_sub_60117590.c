/* sub_60117590
 * address: 0x60117590   size: 448   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60117590(int a1, int a2)
{
  int v3; // r4
  int v4; // r5
  int ProfileId; // r0
  bool v6; // zf
  float v7; // s0
  int v8; // r1
  StateBase *CurrentState; // r0
  int v10; // r6
  StateBase *v11; // r0
  int v12; // r5

  v3 = FIELD_U32(a2, 64);
  if ( FIELD_U8(v3, 533) == 1 )
  {
    sub_600D18C8(a1, a2);
  }
  else
  {
    v4 = FIELD_U32(a1, 64);
    ProfileId = Actor__getProfileId((Actor *)v3);
    if ( ProfileId == 476 )
    {
      (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 240))(v3);
      sub_601362A0(v3);
    }
    else if ( ProfileId == 474 )
    {
      SE_OBJ_PNGN_ICEBALL_DISAPP_ref(v3);
    }
    else
    {
      v6 = ProfileId == 818;
      if ( ProfileId == 818 )
        v6 = FIELD_U32(a2, 104) == 2;
      if ( v6 && FIELD_U8(v3, 8289) )
      {
        v7 = FIELD_F32(v3, 120);
        FIELD_U32(v4, 9244) = FIELD_U32(v3, 8128);
        v8 = FIELD_U32(v3, 156);
        FIELD_U32(v4, 9280) = v7 < 0.0;
        FIELD_U32(v4, 9284) = v8;
        CurrentState = StateMgr__getCurrentState((StateMgr *)(v4 + 6084));
        v10 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
        if ( v10 != (*(int (**)(void))(dword_60C86D08 + 8))() )
        {
          sub_60115DC4(*(int **)(v4 + 9232));
          (*(void (__fastcall **)(int, int *))(*(_DWORD *)v4 + 192))(v4, &dword_60C86D08);
        }
        sub_6038CF8C(v3, FIELD_F32(v3, 8260), FIELD_F32(v3, 8264), FIELD_F32(v3, 8268));
        v11 = StateMgr__getCurrentState((StateMgr *)(v3 + 6084));
        v12 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v11, 0x0) + 2))(v11);
        if ( v12 != (*(int (**)(void))(dword_60C98504 + 8))() )
          (*(void (__fastcall **)(int, int *))(*(_DWORD *)v3 + 192))(v3, &dword_60C98504);
      }
    }
  }
}
