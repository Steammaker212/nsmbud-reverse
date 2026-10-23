/* sub_605B4548
 * address: 0x605B4548   size: 900   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605B4548(int a1, int a2, int a3, int a4, int a5)
{
  char v5; // r12
  int v10; // r5
  char v11; // r12
  StateBase *CurrentState; // r0
  int v13; // r9
  bool v14; // zf
  int v15; // r1
  char v16; // r0
  int v18; // r0
  bool v19; // zf
  bool v20; // zf
  int v21; // r1
  int v22; // r1
  char v23; // r0

  v10 = 0;
  if ( !FIELD_U8(a2, 533) )
  {
    v18 = FIELD_U32(a4, 2528);
    v19 = (v18 & 0x20) == 0;
    if ( (v18 & 0x20) != 0 )
      v19 = (FIELD_U8(a4, 2536) & 0x20) == 0;
    if ( !v19 )
      goto LABEL_34;
    v20 = (v18 & 0x100) == 0;
    v21 = 0;
    if ( (v18 & 0x100) != 0 )
      v20 = (FIELD_U8(a4, 2537) & 1) == 0;
    if ( !v20 )
LABEL_34:
      v21 = 1;
    if ( (v18 & 0x40) != 0 )
    {
      if ( !(v21 | ((unsigned __int8)(FIELD_U8(a4, 2536) & 0x40) >> 6)) )
        return v10;
    }
    else if ( !v21 )
    {
      return v10;
    }
LABEL_39:
    if ( ((unsigned int)&dword_60C7B384 & ~(1616594924 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B384) )
    {
      dword_60C7B380 = (int)&off_60BC00C8;
      _cxa_guard_release(&dword_60C7B384);
    }
    if ( a1 && (**(int (__fastcall ***)(int, int *))a1)(a1, &dword_60C7B380) == 1 )
    {
      FIELD_U8(a1, 552) = 3;
      FIELD_U32(a1, 6904) = 1;
      FIELD_U8(a1, 6845) = 3;
      v22 = FIELD_S8(a2, 84);
      v23 = v22;
      if ( (unsigned __int8)v22 != 255 )
      {
        if ( (unsigned __int8)v22 >= 4u )
          v22 = 0;
        *(_BYTE *)(a1 + 12 * v22 + 6918) = v23;
        FIELD_U8(a1, 6840) = v23;
      }
      v10 = 1;
      if ( FIELD_U8(a1, 6876) )
        FIELD_U32(a1, 6824) = a5;
      FIELD_U8(a1, 6849) = a5;
      FIELD_U8(a1, 6844) = 1;
    }
    return v10;
  }
  if ( FIELD_U8(a2, 533) != 3 )
    return v10;
  if ( ((unsigned int)dword_60C7B430 & ~(1616594312 << v5) & 1) == 0 && _cxa_guard_acquire(dword_60C7B430) )
  {
    Enemy_RTTI = (int)&off_60BC00C8;
    _cxa_guard_release(dword_60C7B430);
  }
  if ( (**(int (__fastcall ***)(int, int *))a2)(a2, &Enemy_RTTI) != 1 || (FIELD_U8(a2, 6148) & 1) == 0 )
    return v10;
  if ( ((unsigned int)&dword_60C830F8 & ~(1616594436 << v11) & 1) == 0 && _cxa_guard_acquire(&dword_60C830F8) )
  {
    dword_60C830F4 = (int)&off_60BC321C;
    _cxa_guard_release(&dword_60C830F8);
  }
  if ( (**(int (__fastcall ***)(int, int *))a2)(a2, &dword_60C830F4) != 1 )
    return v10;
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a2 + 6084));
  v13 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v13 != (*((int (**)(void))ShellEnemy_StateID_slide._._.vtable + 2))() )
    return v10;
  if ( (unsigned int)(FIELD_U32(a3, 300) - 9) < 2 )
    goto LABEL_39;
  v14 = (FIELD_U8(a4, 2528) & 0x80) == 0;
  if ( (FIELD_U8(a4, 2528) & 0x80) != 0 )
    v14 = (FIELD_U8(a4, 2536) & 0x80) == 0;
  if ( v14 )
    goto LABEL_39;
  if ( ((unsigned int)&dword_60C7B384 & ~(1616594636 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B384) )
  {
    dword_60C7B380 = (int)&off_60BC00C8;
    _cxa_guard_release(&dword_60C7B384);
  }
  if ( !a1 || (**(int (__fastcall ***)(int, int *))a1)(a1, &dword_60C7B380) != 1 )
    return v10;
  v15 = FIELD_S8(a2, 84);
  v16 = v15;
  if ( (unsigned __int8)v15 != 255 )
  {
    if ( (unsigned __int8)v15 >= 4u )
      v15 = 0;
    *(_BYTE *)(a1 + 12 * v15 + 6918) = v16;
    FIELD_U8(a1, 6840) = v16;
  }
  FIELD_U32(a1, 6824) = 2;
  FIELD_U8(a1, 6849) = a5;
  FIELD_U8(a1, 6844) = 1;
  return 0;
}
