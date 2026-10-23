/* sub_603B8544
 * address: 0x603B8544   size: 328   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_603B8544(int a1, int a2)
{
  StateMgr *v4; // r6
  StateBase *CurrentState; // r0
  int v6; // r7
  unsigned int result; // r0
  StateBase *v8; // r0
  int v9; // r6
  float v10; // s2
  float v11; // s0
  float v12; // s2
  float v13; // s0

  v4 = (StateMgr *)(a1 + 6084);
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  result = (*(int (**)(void))(dword_60C981AC + 8))();
  if ( v6 != result )
  {
    v8 = StateMgr__getCurrentState(v4);
    v9 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v8, 0x0) + 2))(v8);
    result = (*(int (**)(void))(dword_60C9824C + 8))();
    if ( v9 != result )
    {
      result = (FIELD_U32(a1, 156) & 0x7FFFFFFF) - 0x20000000;
      if ( result >> 30 )
      {
        v12 = FIELD_F32(a1, 108) - FIELD_F32(a1, 584);
        v13 = FIELD_F32(a2, 188);
        if ( v12 < 0.0 && v13 > 0.0 || v12 > 0.0 && v13 < 0.0 )
          return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C981AC);
      }
      else
      {
        v10 = FIELD_F32(a1, 112) - FIELD_F32(a1, 588);
        v11 = FIELD_F32(a2, 252);
        if ( v10 < 0.0 && v11 > 0.0 || v10 > 0.0 && v11 < 0.0 )
          return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C981AC);
      }
    }
  }
  return result;
}
