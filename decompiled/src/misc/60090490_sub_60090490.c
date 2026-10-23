/* sub_60090490
 * address: 0x60090490   size: 460   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60090490(int a1, int a2, float *a3)
{
  char v3; // r12
  int v4; // r4
  int v6; // r6
  StateBase *CurrentState; // r0
  int v8; // r6
  _BYTE *v9; // r5
  char v10; // r12

  v4 = FIELD_U32(a2, 64);
  if ( ((unsigned int)&dword_60C81104 & ~(1611203756 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C81104) )
  {
    dword_60C81100 = (int)&off_60BC66E8;
    _cxa_guard_release(&dword_60C81104);
  }
  v6 = 0;
  if ( v4 && (**(int (__fastcall ***)(int, int *))v4)(v4, &dword_60C81100) == 1 )
  {
    CurrentState = StateMgr__getCurrentState((StateMgr *)(v4 + 6084));
    v8 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    if ( v8 == (*(int (**)(void))(dword_60C82220 + 8))() && FIELD_U8(v4, 15261) )
    {
      FIELD_U8(v4, 15261) = 0;
      FIELD_U32(v4, 80) = *a3 >= FIELD_F32(v4, 108);
      (*(void (__fastcall **)(int, void *))(*(_DWORD *)v4 + 192))(v4, &unk_60C82240);
    }
    v9 = (_BYTE *)(*(int (__fastcall **)(int))(*(_DWORD *)v4 + 624))(v4);
    if ( ((unsigned int)&dword_60C81760 & ~(1611204028 << v10) & 1) == 0 && _cxa_guard_acquire(&dword_60C81760) )
    {
      dword_60C8175C = (int)&off_60BC6E94;
      _cxa_guard_release(&dword_60C81760);
    }
    if ( v9 && (**(int (__fastcall ***)(_BYTE *, int *))v9)(v9, &dword_60C8175C) == 1 && v9[7248] )
      (*(void (__fastcall **)(_BYTE *))(*(_DWORD *)v9 + 1044))(v9);
    (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 876))(v4);
    return 1;
  }
  return v6;
}
