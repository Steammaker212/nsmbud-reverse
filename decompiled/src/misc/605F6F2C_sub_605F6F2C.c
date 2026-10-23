/* sub_605F6F2C
 * address: 0x605F6F2C   size: 396   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605F6F2C(int a1)
{
  StateMgr *v2; // r5
  StateBase *CurrentState; // r0
  int v4; // r5
  char v5; // r12
  int (__fastcall ***v6)(_DWORD, int *); // r5
  unsigned int v7; // r0
  float *v8; // r2
  float v9; // s0
  float v10; // s4
  _DWORD v12[6]; // [sp+0h] [bp-18h] BYREF

  v2 = (StateMgr *)(a1 + 6084);
  StateMgr__execute((StateMgr *)(a1 + 6084));
  CurrentState = StateMgr__getCurrentState(v2);
  v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v4 == (*(int (**)(void))(dword_60CB21E0 + 8))() )
  {
    v6 = *(int (__fastcall ****)(_DWORD, int *))(a1 + 56);
    if ( ((unsigned int)&dword_60CAEAC8 & ~(1616867216 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60CAEAC8) )
    {
      dword_60CAEAC4 = (int)&off_60BC00C8;
      _cxa_guard_release(&dword_60CAEAC8);
    }
    if ( v6 && (**v6)(v6, &dword_60CAEAC4) == 1 )
    {
      sub_606D8338(v6, v12, FIELD_U8(a1, 6196));
      FIELD_U32(a1, 6188) = v12[0];
      FIELD_U32(a1, 6192) = v12[1];
    }
    v7 = FIELD_U32(a1, 164) + dword_60CB2390;
    FIELD_U32(a1, 164) = v7;
    v8 = (float *)((char *)sinLutTable + ((v7 >> 20) & 0xFF0));
    v9 = (float)(v7 & 0xFFFFFF) * 0.000000059605;
    v10 = *v8 + (float)(v8[1] * v9);
    FIELD_F32(a1, 108) = FIELD_F32(a1, 6188) + (float)((float)(v8[2] + (float)(v9 * v8[3])) * 4.0);
    FIELD_F32(a1, 112) = FIELD_F32(a1, 6192) + (float)(v10 * 4.0);
  }
  StarCoinBase_updateModel((ModelWrapper **)a1);
  return 1;
}
