/* sead__ControllerMgr__prepare
 * address: 0x609096C0   size: 260   group: sdklib
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int (***__fastcall sead__ControllerMgr__prepare(int a1))(void)
{
  char v1; // r12
  int v3; // r5
  int (***result)(void); // r0
  _DWORD *v5; // r0
  _DWORD *v6; // r0

  v3 = FIELD_U32(a1, 44);
  if ( ((unsigned int)&dword_60CC6BC0 & ~(1620088540 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CC6BC0) )
  {
    dword_60CC6BBC = (int)&off_60C2A1D8;
    _cxa_guard_release(&dword_60CC6BC0);
  }
  if ( v3 && (**(int (__fastcall ***)(int, int *))v3)(v3, &dword_60CC6BBC) == 1 )
  {
    sead__PtrArrayImpl__allocBuffer(a1 + 212, FIELD_U32(v3, 4), 0, 4);
    result = *(int (****)(void))(v3 + 8);
    if ( result )
      return ((int (***(__fastcall *)(int (***)(void), int))(void))**result)(result, a1);
  }
  else
  {
    sead__PtrArrayImpl__allocBuffer(a1 + 212, 16, 0, 4);
    v5 = (_DWORD *)operator_new_8DE25C(0x85A0u, 0, 4);
    v6 = sead__NinJoyNpadDevice__ctor(v5, a1, 0);
    sead__ListNode__insertFront((sead_ListNode *)(a1 + 196), (sead_ListNode *)((char *)v6 + FIELD_U32(a1, 208)));
    result = (int (***)(void))(FIELD_U32(a1, 204) + 1);
    FIELD_U32(a1, 204) = result;
  }
  return result;
}
