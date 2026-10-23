/* sub_60613EF0
 * address: 0x60613EF0   size: 448   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60613EF0(int a1, int a2)
{
  char v2; // r12
  int v4; // r4
  char v5; // r12
  char v6; // r12
  int v7; // r5
  int v8; // r0

  if ( FIELD_U32(a2, 140) != 15 )
  {
    v4 = FIELD_U32(a2, 64);
    if ( ((unsigned int)&dword_60C7B364 & ~(1616985880 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
    {
      StageActor_RTTI = (int)&off_60BC0098;
      _cxa_guard_release(&dword_60C7B364);
    }
    if ( v4
      && (**(int (__fastcall ***)(int, int *))v4)(v4, &StageActor_RTTI) == 1
      && (unsigned __int8)(FIELD_U8(v4, 533) - 1) <= 1u )
    {
      if ( ((unsigned int)&dword_60C7B37C & ~(1616986016 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
      {
        dword_60C7B378 = (int)&off_60BC00BC;
        _cxa_guard_release(&dword_60C7B37C);
      }
      if ( (**(int (__fastcall ***)(int, int *))v4)(v4, &dword_60C7B378) == 1 && sub_6076CE2C(v4) == 1 )
      {
        v7 = FIELD_U32(a1, 64);
        if ( ((unsigned int)dword_60CB31E0 & ~(1616986144 << v6) & 1) == 0 && _cxa_guard_acquire(dword_60CB31E0) )
        {
          dword_60CB31DC = (int)&off_60BC00C8;
          _cxa_guard_release(dword_60CB31E0);
        }
        if ( v7 && (**(int (__fastcall ***)(int, int *))v7)(v7, &dword_60CB31DC) == 1 )
        {
          v8 = FIELD_S8(v4, 84);
          if ( v8 != -1 )
            FIELD_U32(v7, 7600) |= byte_60B06544[v8];
        }
      }
    }
  }
}
