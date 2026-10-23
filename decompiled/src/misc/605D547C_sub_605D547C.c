/* sub_605D547C
 * address: 0x605D547C   size: 352   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605D547C(int a1, int a2, int a3)
{
  int v6; // r6
  StateMgr *v7; // r7
  StateBase *CurrentState; // r0
  int v9; // r5
  StateBase *v10; // r0
  int v11; // r5
  int result; // r0
  StateBase *v13; // r0
  int v14; // r5
  StateBase *v15; // r0
  int v16; // r5
  float v17; // s16
  float v18; // s18
  float v19; // s0
  float v20; // s0

  v6 = FIELD_U32(a3, 64);
  v7 = (StateMgr *)(a1 + 940);
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 940));
  v9 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v9 == (*(int (**)(void))(dword_60CB1248 + 8))()
    || (v10 = StateMgr__getCurrentState(v7),
        v11 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v10, 0x0) + 2))(v10),
        result = (*(int (**)(void))(dword_60CB1268 + 8))(),
        v11 == result) )
  {
    v13 = StateMgr__getCurrentState((StateMgr *)(v6 + 940));
    v14 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v13, 0x0) + 2))(v13);
    if ( v14 == (*(int (**)(void))(dword_60CB1248 + 8))()
      || (v15 = StateMgr__getCurrentState((StateMgr *)(v6 + 940)),
          v16 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v15, 0x0) + 2))(v15),
          result = (*(int (**)(void))(dword_60CB1268 + 8))(),
          v16 == result) )
    {
      result = a2 + 4 * FIELD_U32(a3, 136);
      v17 = FIELD_F32(result, 240);
      v18 = FIELD_F32(result, 176);
      v19 = sqrtf((float)(v17 * v17) + (float)(v18 * v18));
      if ( v19 > 0.0 )
      {
        v20 = 1.0 / v19;
        v17 = v17 * v20;
        v18 = v18 * v20;
      }
      FIELD_F32(a1, 868) = FIELD_F32(a1, 868) + (float)(v18 * 0.5);
      FIELD_F32(a1, 872) = FIELD_F32(a1, 872) + (float)(v17 * 0.5);
    }
  }
  return result;
}
