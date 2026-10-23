/* sub_6098EDFC
 * address: 0x6098EDFC   size: 652   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6098EDFC(int a1, int a2)
{
  char v2; // r12
  int v5; // r4
  int *v6; // r0
  int v7; // r6
  int *v8; // r0
  bool v9; // zf
  const char **v10; // r5
  const char **v11; // r7
  int v12; // r5
  char v13; // r12
  char v14; // r12
  int *v15; // r0

  if ( ((unsigned int)&dword_60CD0BCC & ~(1620635160 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CD0BCC) )
  {
    dword_60CD0BC8 = sub_60990CDC(0x2EB078u);
    _cxa_guard_release(&dword_60CD0BCC);
  }
  v5 = 0;
  if ( a1 )
  {
    v6 = (int *)(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 8))(a1);
    if ( v6 )
    {
      while ( v6 != &dword_60CD0BC8 )
      {
        v6 = (int *)*v6;
        if ( !v6 )
          goto LABEL_10;
      }
      v5 = a1;
    }
  }
LABEL_10:
  if ( ((unsigned int)&dword_60CD0BD4 & ~(1620635300 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CD0BD4) )
  {
    dword_60CD0BD0 = sub_60990A9C(0x2EAFF8u);
    _cxa_guard_release(&dword_60CD0BD4);
  }
  v7 = 0;
  if ( a1 )
  {
    v8 = (int *)(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 8))(a1);
    if ( v8 )
    {
      while ( v8 != &dword_60CD0BD0 )
      {
        v8 = (int *)*v8;
        if ( !v8 )
          goto LABEL_19;
      }
      v7 = a1;
    }
  }
LABEL_19:
  v9 = v5 == 0;
  if ( !v5 )
    v9 = v7 == 0;
  if ( !v9 )
  {
    v10 = sub_6085982C(a1, "DynamicCaptureUseName");
    if ( v10 )
    {
      v11 = sub_6085982C(a1, "DynamicCaptureUseIndex");
      if ( v11 )
      {
        v12 = sub_6098EA0C(&v10[1][(_DWORD)v10], a2, 0);
        if ( ((unsigned int)&dword_60CD0BC4 & ~(1620635532 << v13) & 1) == 0 && _cxa_guard_acquire(&dword_60CD0BC4) )
        {
          if ( ((unsigned int)&dword_60C9D9D4 & ~(1620635572 << v14) & 1) == 0 && _cxa_guard_acquire(&dword_60C9D9D4) )
          {
            dword_60C9D9D0 = 0;
            _cxa_guard_release(&dword_60C9D9D4);
          }
          dword_60CD0BC0 = (int)&dword_60C9D9D0;
          _cxa_guard_release(&dword_60CD0BC4);
        }
        if ( v12 )
        {
          v15 = (int *)(*(int (__fastcall **)(int))(*(_DWORD *)v12 + 8))(v12);
          if ( v15 )
          {
            while ( v15 != &dword_60CD0BC0 )
            {
              v15 = (int *)*v15;
              if ( !v15 )
                return;
            }
            if ( v5 )
            {
              sub_6097FFF4(v5, v12, v11[1][(_DWORD)v11]);
            }
            else if ( v7 )
            {
              sub_60980288(v7, v12, v11[1][(_DWORD)v11]);
            }
          }
        }
      }
    }
  }
}
