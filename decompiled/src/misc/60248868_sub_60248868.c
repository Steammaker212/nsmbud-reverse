/* sub_60248868
 * address: 0x60248868   size: 388   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60248868(int a1, int a2, int a3)
{
  StateBase *CurrentState; // r0
  int v7; // r7
  int v8; // r1
  char v9; // r12
  int result; // r0
  int v11; // r2
  float v12; // s0
  float v13; // s2
  int (__fastcall ***v14)(_DWORD, int *); // r6
  bool v15; // zf

  if ( FIELD_U32(a1, 6320) != 1 && (FIELD_U8(dword_60C9CF0C, 1404) & (1 << FIELD_U8(a1, 6314))) == 0
    || !FIELD_U8(dword_60C99D88, 31) )
  {
    return 0;
  }
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v7 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  v8 = (*(int (**)(void))(dword_60C8DBE4 + 8))();
  result = 1;
  if ( v7 != v8 )
  {
    v11 = FIELD_U32(a3, 64);
    v12 = FIELD_F32(a1, 6428) - FIELD_F32(v11, 112);
    v13 = FIELD_F32(a1, 6424) - FIELD_F32(v11, 108);
    if ( (float)((float)(v12 * v12) + (float)(v13 * v13)) >= 1.44 )
    {
      v14 = *(int (__fastcall ****)(_DWORD, int *))(a2 + 64);
      if ( ((unsigned int)&dword_60C8DC20 & ~(1613007196 << v9) & 1) == 0 && _cxa_guard_acquire(&dword_60C8DC20) )
      {
        dword_60C8DC1C = (int)&off_60BC04AC;
        _cxa_guard_release(&dword_60C8DC20);
      }
      if ( v14 )
      {
        v15 = (**v14)(v14, &dword_60C8DC1C) == 1;
        result = 0;
        if ( v15 )
        {
          ((void (__fastcall *)(int, _DWORD, int (__fastcall ***)(_DWORD, int *)))loc_6024778C)(
            a1,
            FIELD_U32(a3, 64),
            v14);
          result = 1;
          FIELD_U8(a1, 6476) = 1;
        }
        return result;
      }
      return 0;
    }
  }
  return result;
}
