/* sub_6039A580
 * address: 0x6039A580   size: 536   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6039A580(int a1)
{
  StateBase *CurrentState; // r0
  int v3; // r5
  StateBase *v4; // r0
  int v5; // r5
  StateBase *v6; // r0
  int v7; // r5
  int v8; // r5
  StateBase *v9; // r0
  int v10; // r7
  StateBase *v11; // r0
  int v12; // r6
  int v13; // r1
  int v14; // r1
  int v15; // r1
  int v16; // r0

  if ( FIELD_U32(a1, 6512) )
    return 0;
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v3 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v3 == (*(int (**)(void))(dword_60C972A0 + 8))() )
    return 0;
  v4 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v5 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v4, 0x0) + 2))(v4);
  if ( v5 == (*(int (**)(void))(dword_60C972C0 + 8))() )
    return 0;
  v6 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v7 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v6, 0x0) + 2))(v6);
  if ( v7 == (*(int (**)(void))(dword_60C972E0 + 8))() )
    return 0;
  v8 = 1;
  if ( FIELD_U8(a1, 6524) )
    return v8;
  v9 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v10 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v9, 0x0) + 2))(v9);
  if ( v10 == (*(int (**)(void))(dword_60C973E0 + 8))() )
    return 0;
  if ( FIELD_U8(a1, 6520) )
  {
    v11 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
    v12 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v11, 0x0) + 2))(v11);
    if ( v12 != (*(int (**)(void))(dword_60C971A0 + 8))() || FIELD_U16(a1, 6342) )
      return 0;
  }
  v13 = FIELD_U32(PlayerMgr_instance, 32);
  if ( !v13 || FIELD_F32(v13, 108) < (float)(FIELD_F32(a1, 108) + -192.0) )
  {
    v14 = FIELD_U32(PlayerMgr_instance, 36);
    if ( !v14 || FIELD_F32(v14, 108) < (float)(FIELD_F32(a1, 108) + -192.0) )
    {
      v15 = FIELD_U32(PlayerMgr_instance, 40);
      if ( !v15 || FIELD_F32(v15, 108) < (float)(FIELD_F32(a1, 108) + -192.0) )
      {
        v16 = FIELD_U32(PlayerMgr_instance, 44);
        if ( v16 )
        {
          if ( FIELD_F32(v16, 108) < (float)(FIELD_F32(a1, 108) + -192.0) )
            return 0;
          return v8;
        }
        return 0;
      }
    }
  }
  return v8;
}
