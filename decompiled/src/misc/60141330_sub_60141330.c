/* sub_60141330
 * address: 0x60141330   size: 368   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60141330(int result, int a2)
{
  Actor *v2; // r6
  int v4; // r4
  bool v5; // zf
  StateBase *CurrentState; // r0
  int v7; // r7

  if ( (FIELD_U8(a2, 148) & 4) != 0 )
  {
    v4 = FIELD_U32(result, 64);
    v5 = v4 == 0;
    if ( v4 )
    {
      v2 = *(Actor **)(a2 + 64);
      v5 = v2 == 0;
    }
    if ( !v5 )
    {
      if ( FIELD_U32(a2, 136) != 4 )
        FIELD_U8(result, 110) |= 2u;
      result = Actor__getProfileId(v2);
      if ( result == 222 || (result = Actor__getProfileId(v2), result == 807) )
      {
        if ( FIELD_F32(v4, 124) >= 0.0 )
          return result;
        CurrentState = StateMgr__getCurrentState((StateMgr *)(v4 + 6084));
        v7 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
        if ( v7 == (*(int (**)(void))(dword_60C87D60 + 8))() )
          return (int)StateMgr__changeState((StateMgr *)(v4 + 6084), (StateBase *)&dword_60C87D84);
        SE_OBJ_PNGN_ICEBALL_DISAPP_ref(v4);
      }
      result = FIELD_U32(a2, 136);
      if ( (result | 4) == 7 )
      {
        (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 72))(v4);
        return (int)StateMgr__changeState((StateMgr *)(v4 + 6084), (StateBase *)&dword_60C87DEC);
      }
      else
      {
        if ( FIELD_U32(a2, 140) == 6 )
          return SE_OBJ_PNGN_ICEBALL_DISAPP_ref(v4);
        if ( result == 6 )
        {
          result = Actor__getProfileId(v2);
          if ( result == 477 || result == 763 )
            return SE_OBJ_PNGN_ICEBALL_DISAPP_ref(v4);
        }
      }
    }
  }
  return result;
}
