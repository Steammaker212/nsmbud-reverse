/* sub_6076598C
 * address: 0x6076598C   size: 552   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6076598C(int a1, int a2, int a3)
{
  char v3; // r12
  int (__fastcall ***v6)(_DWORD, int *); // r7
  char v7; // r12
  int *v8; // r7
  int v9; // r8
  int v10; // r0
  bool v11; // zf
  int v12; // r7
  bool v13; // zf

  if ( (FIELD_U8(a1, 6900) & 1) != 0 || FIELD_F32(a1, 124) >= 0.0 )
    return 0;
  if ( (FIELD_U8(a1, 1210) & 0x11) == 0 )
  {
    v8 = (int *)(a3 + 64);
LABEL_20:
    v12 = *v8;
    if ( ((unsigned int)&dword_60C7B37C & ~(1618369264 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
    {
      dword_60C7B378 = (int)&off_60BC00BC;
      _cxa_guard_release(&dword_60C7B37C);
    }
    if ( v12
      && (**(int (__fastcall ***)(int, int *))v12)(v12, &dword_60C7B378) == 1
      && !(*(int (__fastcall **)(int))(*(_DWORD *)v12 + 1068))(v12)
      && !FIELD_U32(v12, 9640) )
    {
      v13 = (FIELD_U8(v12, 1214) & 8) == 0;
      if ( (FIELD_U8(v12, 1214) & 8) == 0 )
        v13 = (FIELD_U8(a1, 1234) & 0x10) == 0;
      if ( v13 && (FIELD_U8(v12, 1234) & 0x10) == 0 )
        JUMPOUT(0x60765BFC);
    }
    return 0;
  }
  v6 = *(int (__fastcall ****)(_DWORD, int *))(a2 + 64);
  if ( ((unsigned int)&dword_60C7B37C & ~(1618368988 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
  {
    dword_60C7B378 = (int)&off_60BC00BC;
    _cxa_guard_release(&dword_60C7B37C);
  }
  if ( v6 && (**v6)(v6, &dword_60C7B378) == 1 && sub_6075EDF8((int)v6) )
  {
    v8 = (int *)(a3 + 64);
    v9 = FIELD_U32(a3, 64);
    if ( ((unsigned int)&dword_60C7B37C & ~(1618369128 << v7) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
    {
      dword_60C7B378 = (int)&off_60BC00BC;
      _cxa_guard_release(&dword_60C7B37C);
    }
    if ( v9 )
    {
      v10 = (**(int (__fastcall ***)(int, int *))v9)(v9, &dword_60C7B378);
      v11 = v10 == 1;
      if ( v10 == 1 )
        v11 = FIELD_U8(v9, 533) == 2;
      if ( v11 )
        goto LABEL_20;
    }
  }
  return 0;
}
