/* sub_602481EC
 * address: 0x602481EC   size: 648   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602481EC(int a1, int a2, int a3)
{
  char v3; // r12
  int (__fastcall ***v6)(_DWORD, int *); // r6
  int v7; // r7
  StateBase *CurrentState; // r0
  int v10; // r6
  _BYTE *v11; // r4

  if ( FIELD_U32(a1, 6320) != 1 && (FIELD_U8(dword_60C9CF0C, 1404) & (1 << FIELD_U8(a1, 6314))) == 0
    || !FIELD_U8(dword_60C99D88, 31) )
  {
    return 0;
  }
  if ( FIELD_S32(a1, 6480) <= 0 && !FIELD_U8(a1, 6484) )
  {
    v6 = *(int (__fastcall ****)(_DWORD, int *))(a2 + 64);
    if ( ((unsigned int)&dword_60C8DC20 & ~(1613005432 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C8DC20) )
    {
      dword_60C8DC1C = (int)&off_60BC04AC;
      _cxa_guard_release(&dword_60C8DC20);
    }
    if ( v6 )
    {
      v7 = (**v6)(v6, &dword_60C8DC1C);
      if ( v7 )
        v7 = (int)v6;
    }
    else
    {
      v7 = 0;
    }
    CurrentState = StateMgr__getCurrentState((StateMgr *)(v7 + 6084));
    v10 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    if ( v10 != (*(int (**)(void))(dword_60C8DBE4 + 8))() )
    {
      ((void (__fastcall *)(int, _DWORD, int))loc_6024778C)(a1, FIELD_U32(a3, 64), v7);
      FIELD_U8(a1, 6476) = 1;
    }
  }
  v11 = *(_BYTE **)(a3 + 64);
  if ( ((unsigned int)&dword_60C823C4 & ~(1613005660 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C823C4) )
  {
    FireballBase_RTTI = (int)&off_60BC00E0;
    _cxa_guard_release(&dword_60C823C4);
  }
  if ( v11 && (**(int (__fastcall ***)(_BYTE *, int *))v11)(v11, &FireballBase_RTTI) == 1 )
  {
    (*(void (__fastcall **)(_BYTE *))(*(_DWORD *)v11 + 240))(v11);
    sub_601362A0((int)v11);
    return 1;
  }
  else
  {
    if ( ((unsigned int)&dword_60C823D4 & ~(1613005812 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C823D4) )
    {
      dword_60C823D0 = (int)&off_60BC00E0;
      _cxa_guard_release(&dword_60C823D4);
    }
    if ( v11 )
    {
      if ( (**(int (__fastcall ***)(_BYTE *, int *))v11)(v11, &dword_60C823D0) == 1 )
      {
        SE_OBJ_PNGN_ICEBALL_DISAPP_ref((int)v11);
        v11[19] = 1;
      }
    }
    return 1;
  }
}
