/* SE_SYS_CH_TARGET_MEDAL_ref
 * address: 0x604EB0E4   size: 476   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_SYS_CH_TARGET_MEDAL_ref(int a1, int a2)
{
  char v2; // r12
  unsigned int v5; // r6
  int v6; // r1
  int v7; // r2
  int v8; // r0
  int result; // r0
  unsigned int *v10; // r5
  _DWORD *v11; // r0
  StateBase *CurrentState; // r0
  int v13; // r4
  const char *v14; // r1

  if ( ((unsigned int)&dword_60CA5E9C[2] & ~(1615769860 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CA5E9C[2]) )
  {
    dword_60CA5EA8 = (int)&sead__SafeStringBase__vtable;
    dword_60CA5EAC = dword_60CA5CD8;
    dword_60CA5EB0 = (int)&sead__SafeStringBase__vtable;
    dword_60CA5EB4 = dword_60CA5CD0;
    dword_60CA5EB8 = (int)&sead__SafeStringBase__vtable;
    dword_60CA5EBC = dword_60CA5CC8;
    sub_60000288();
    _cxa_guard_release(&dword_60CA5E9C[2]);
  }
  v5 = 0;
  v6 = FIELD_U32(a1, 4584);
  v7 = FIELD_U32(a1, 4580);
  v8 = FIELD_U32(a1, 4588);
  if ( v7 >= v8 )
  {
    if ( v7 < a2 )
      v5 = 3;
    if ( v6 >= a2 )
      v5 = 1;
    if ( v8 >= a2 )
      v5 = 2;
  }
  else
  {
    if ( v7 > a2 )
      v5 = 3;
    if ( v6 <= a2 )
      v5 = 1;
    if ( v8 <= a2 )
      v5 = 2;
  }
  v10 = (unsigned int *)(a1 + 4592);
  result = FIELD_U32(a1, 4592);
  if ( result != v5 )
  {
    v11 = *(_DWORD **)(a1 + 4);
    if ( v5 == 3 )
    {
      result = sub_60473DE4(v11, 0, &dword_60CA5CDC, 0);
      *v10 = 3;
    }
    else
    {
      sub_60473DE4(v11, 0, &dword_60CA5E90[2 * v5 + 6], 0);
      CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 4536));
      v13 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
      result = (*(int (**)(void))(dword_60CA5D24 + 8))();
      if ( v13 != result )
      {
        if ( *v10 < v5 || *v10 == 3 )
          v14 = "SE_SYS_CH_TARGET_MEDAL_UP";
        else
          v14 = "SE_SYS_CH_TARGET_MEDAL_DOWN";
        result = sub_60807EF0(SoundSystem_instance, v14, 0, 1);
      }
      *v10 = v5;
    }
  }
  return result;
}
