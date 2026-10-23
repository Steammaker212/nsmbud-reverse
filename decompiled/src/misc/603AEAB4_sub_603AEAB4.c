/* sub_603AEAB4
 * address: 0x603AEAB4   size: 440   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_603AEAB4(int a1, int a2)
{
  char v2; // r12
  int (__fastcall ***v5)(_DWORD, int *); // r7
  int v6; // r6
  int (__fastcall ***v7)(_DWORD, int *); // r7
  int v8; // r0
  char v9; // r12
  int v10; // r0
  bool v11; // zf
  float v12; // s4

  v5 = *(int (__fastcall ****)(_DWORD, int *))(a1 + 64);
  if ( ((unsigned int)&dword_60C97C00 & ~(1614473940 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C97C00) )
  {
    dword_60C97BFC = (int)&off_60BC04AC;
    _cxa_guard_release(&dword_60C97C00);
  }
  if ( v5 )
  {
    v6 = (**v5)(v5, &dword_60C97BFC);
    if ( v6 )
      v6 = (int)v5;
  }
  else
  {
    v6 = 0;
  }
  v7 = *(int (__fastcall ****)(_DWORD, int *))(a2 + 64);
  if ( ((unsigned int)&dword_60C7B364 & ~(1614474072 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
  {
    StageActor_RTTI = (int)&off_60BC0098;
    _cxa_guard_release(&dword_60C7B364);
  }
  if ( v7 )
  {
    v8 = (**v7)(v7, &StageActor_RTTI);
    if ( v6 )
    {
      if ( v8 == 1 )
      {
        v10 = FIELD_U32(a2, 64);
        v11 = v10 == 0;
        if ( v10 )
        {
          a2 = FIELD_U32(a1, 64);
          v11 = a2 == 0;
        }
        if ( !v11 )
        {
          if ( ((unsigned int)&dword_60C97C00 & ~(1614474216 << v9) & 1) == 0 && _cxa_guard_acquire(&dword_60C97C00) )
          {
            dword_60C97BFC = (int)&off_60BC04AC;
            _cxa_guard_release(&dword_60C97C00);
          }
          if ( (**(int (__fastcall ***)(int, int *))a2)(a2, &dword_60C97BFC) == 1 )
          {
            v12 = FIELD_F32(a1, 296);
            FIELD_F32(a2, 108) = FIELD_F32(a2, 108) + (float)(FIELD_F32(a1, 232) * 0.3);
            FIELD_F32(a2, 112) = FIELD_F32(a2, 112) + (float)(v12 * 0.3);
          }
        }
      }
    }
  }
}
