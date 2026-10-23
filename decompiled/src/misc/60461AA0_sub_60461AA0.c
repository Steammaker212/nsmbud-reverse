/* sub_60461AA0
 * address: 0x60461AA0   size: 292   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60461AA0(int result)
{
  char v1; // r12
  int v2; // r4
  int v3; // r5
  StateBase *CurrentState; // r0
  int v5; // r5
  float32x2_t v6; // [sp+0h] [bp-40h] BYREF
  int v7; // [sp+Ch] [bp-34h]
  int v8; // [sp+1Ch] [bp-24h]
  int v9; // [sp+2Ch] [bp-14h]

  v2 = result;
  v3 = FIELD_U32(result, 56);
  if ( v3 )
  {
    if ( ((unsigned int)dword_60C95248 & ~(1615207112 << v1) & 1) == 0 && _cxa_guard_acquire(dword_60C95248) )
    {
      dword_60C95244 = (int)&off_60BC04AC;
      _cxa_guard_release(dword_60C95248);
    }
    result = (**(int (__fastcall ***)(int, int *))v3)(v3, &dword_60C95244);
    if ( result == 1 )
    {
      sub_6035750C(v3, &v6);
      sub_6083316C((int *)(v2 + 156), (float *)&v6);
      sub_60833200((float *)(v2 + 144), (float *)&v6);
      FIELD_U32(v2, 108) = v7;
      FIELD_U32(v2, 112) = v8;
      FIELD_U32(v2, 116) = v9;
      result = FIELD_U8(dword_60CC6D8C, 17);
      if ( FIELD_U8(dword_60CC6D8C, 17) )
      {
        CurrentState = StateMgr__getCurrentState((StateMgr *)(v3 + 6084));
        v5 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
        result = (*(int (**)(void))(dword_60C95038 + 8))();
        FIELD_U8(v2, 535) = v5 != result;
      }
    }
  }
  return result;
}
