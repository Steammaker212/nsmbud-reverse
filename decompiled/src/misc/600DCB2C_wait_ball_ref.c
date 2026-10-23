/* wait_ball_ref
 * address: 0x600DCB2C   size: 340   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall wait_ball_ref(int a1)
{
  unsigned int *v2; // r5
  void (__fastcall *v3)(int, int *, int, float, float, float); // r3
  int v4; // r5
  char v5; // r12
  int a5[2]; // [sp+0h] [bp-20h] BYREF
  _DWORD v8[6]; // [sp+8h] [bp-18h] BYREF

  v2 = (unsigned int *)(a1 + 8120);
  v3 = *(void (__fastcall **)(int, int *, int, float, float, float))(*(_DWORD *)a1 + 1668);
  a5[0] = (int)&sead__SafeStringBase__vtable;
  a5[1] = (int)"wait";
  v3(a1, a5, 1, 5.0, 1.0, 0.0);
  v4 = ActorMgrRelated_getById(ActorMgr__instance + 27168, *v2);
  if ( ((unsigned int)&dword_60C84B4C & ~(1611516848 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60C84B4C) )
  {
    dword_60C84B48 = (int)&off_60BCCA60;
    _cxa_guard_release(&dword_60C84B4C);
  }
  if ( v4 && (**(int (__fastcall ***)(int, int *))v4)(v4, &dword_60C84B48) == 1 )
  {
    StateMgr__changeState((StateMgr *)(v4 + 6084), (StateBase *)&dword_60C84D2C);
    v8[0] = &sead__SafeStringBase__vtable;
    v8[1] = "wait_ball";
    sub_600E36A4(v4, v8, 1, 5.0);
  }
  FIELD_U32(a1, 132) = 0;
  FIELD_U32(a1, 7092) = 1;
  FIELD_U16(a1, 6276) = 10;
  return 6276;
}
