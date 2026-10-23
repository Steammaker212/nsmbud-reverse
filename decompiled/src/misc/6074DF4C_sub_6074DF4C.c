/* sub_6074DF4C
 * address: 0x6074DF4C   size: 336   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6074DF4C(int a1, float *a2)
{
  char v2; // r12
  int v5; // r6
  StateBase *CurrentState; // r0
  int v7; // r7
  int v8; // r2
  float v10; // [sp+Ch] [bp-24h] BYREF
  float v11; // [sp+10h] [bp-20h]

  if ( ((unsigned int)algn_60CBEA24 & ~(1618272112 << v2) & 1) == 0 && _cxa_guard_acquire((__guard *)algn_60CBEA24) )
  {
    dword_60CBEA20 = 1125122048;
    _cxa_guard_release((__guard *)algn_60CBEA24);
  }
  sub_6023349C(dword_60C8D904, (int)&v10);
  v5 = 0;
  if ( (float)((float)((float)(v11 - a2[1]) * (float)(v11 - a2[1])) + (float)((float)(v10 - *a2) * (float)(v10 - *a2))) <= *(float *)&dword_60CBEA20 )
  {
    CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 736));
    v7 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    if ( v7 == (*((int (__fastcall **)(StateBase *, _DWORD, int))stru_60CBE9CC.vtable + 2))(
                 &stru_60CBE9CC,
                 *((_DWORD *)stru_60CBE9CC.vtable + 2),
                 v8) )
    {
      if ( FIELD_F32(a1, 712) == 0.0 )
        FIELD_U32(a1, 124) = 1106247680;
      SE_SYS_ref_2(SoundSystem_instance, a2, 3);
      return 1;
    }
  }
  return v5;
}
