/* sub_605F4FD4
 * address: 0x605F4FD4   size: 704   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_605F4FD4(int a1, int a2)
{
  char v2; // r12
  int (__fastcall ***v5)(_DWORD, int *); // r7
  int v6; // r5
  int (__fastcall ***v7)(_DWORD, int *); // r7
  int v8; // r1
  unsigned int v9; // r2
  int v10; // r6
  char v11; // r12
  bool v12; // zf
  int v13; // r0
  int v14; // r7
  bool v15; // zf

  v5 = *(int (__fastcall ****)(_DWORD, int *))(a2 + 64);
  if ( ((unsigned int)&dword_60C7B364 & ~(1616859124 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
  {
    StageActor_RTTI = (int)&off_60BC0098;
    _cxa_guard_release(&dword_60C7B364);
  }
  if ( v5 )
  {
    v6 = (**v5)(v5, &StageActor_RTTI);
    if ( v6 )
      v6 = (int)v5;
  }
  else
  {
    v6 = 0;
  }
  v7 = *(int (__fastcall ****)(_DWORD, int *))(a1 + 64);
  if ( ((unsigned int)dword_60CAF8F4 & ~(1616859256 << v2) & 1) == 0 && _cxa_guard_acquire(dword_60CAF8F4) )
  {
    dword_60CAF8F0 = (int)&off_60BC00C8;
    _cxa_guard_release(dword_60CAF8F4);
  }
  if ( v7 )
  {
    v10 = (**v7)(v7, &dword_60CAF8F0);
    if ( v10 )
      v10 = (int)v7;
    if ( v6 )
    {
      v12 = v10 == 0;
      if ( v10 )
      {
        v8 = FIELD_S8(v6, 84);
        v9 = (unsigned __int8)v8;
        v12 = (unsigned __int8)v8 == 255;
      }
      if ( !v12 )
      {
        v13 = FIELD_U8(v6, 533);
        if ( (unsigned __int8)(v13 - 1) <= 1u )
        {
          if ( v9 >= 4 )
            v8 = 0;
          v14 = *(_DWORD *)(PlayerMgr_instance + 4 * v8 + 48);
          if ( ((unsigned int)&dword_60C7B37C & ~(1616859452 << v11) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
          {
            dword_60C7B378 = (int)&off_60BC00BC;
            _cxa_guard_release(&dword_60C7B37C);
          }
          if ( v14 && (**(int (__fastcall ***)(int, int *))v14)(v14, &dword_60C7B378) == 1 && !FIELD_U32(v14, 9584) )
          {
            sub_6040A4E4((unsigned __int8 *)dword_60C9A1F0, *(unsigned __int8 **)(v10 + 6136));
            FIELD_U8(v10, 6164) = FIELD_U8(v6, 84);
          }
          v13 = FIELD_U8(v6, 533);
        }
        if ( v13 == 4 )
        {
          if ( ((unsigned int)&dword_60C7B410 & ~(1616859632 << v11) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B410) )
          {
            dword_60C7B40C = (int)&off_60BC00D4;
            _cxa_guard_release(&dword_60C7B410);
          }
          if ( (**(int (__fastcall ***)(int, int *))v6)(v6, &dword_60C7B40C) == 1 && sub_605D8844(v6) == 1 )
            FIELD_U8(v10, 6164) = FIELD_U8(v6, 84);
          v13 = FIELD_U8(v6, 533);
        }
        v15 = v13 == 3;
        if ( v13 != 3 )
          v15 = v13 == 0;
        if ( v15 && FIELD_U32(a2, 140) == 9 )
          FIELD_U8(v10, 6164) = FIELD_U8(v6, 84);
      }
    }
  }
}
