/* sub_606140FC
 * address: 0x606140FC   size: 464   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_606140FC(int a1, int a2)
{
  char v2; // r12
  int v4; // r4
  char v5; // r12
  int v6; // r6
  char v7; // r12
  int v8; // r5
  int v9; // r0

  if ( FIELD_U32(a2, 140) != 15 )
  {
    v4 = FIELD_U32(a2, 64);
    if ( ((unsigned int)&dword_60C7B364 & ~(1616986404 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
    {
      StageActor_RTTI = (int)&off_60BC0098;
      _cxa_guard_release(&dword_60C7B364);
    }
    if ( v4
      && (**(int (__fastcall ***)(int, int *))v4)(v4, &StageActor_RTTI) == 1
      && (unsigned __int8)(FIELD_U8(v4, 533) - 1) <= 1u )
    {
      if ( ((unsigned int)&dword_60C7B37C & ~(1616986540 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
      {
        dword_60C7B378 = (int)&off_60BC00BC;
        _cxa_guard_release(&dword_60C7B37C);
      }
      v6 = (**(int (__fastcall ***)(int, int *))v4)(v4, &dword_60C7B378);
      if ( v6 )
        v6 = v4;
      if ( sub_6076CE2C(v6) == 1 )
      {
        FIELD_U8(v6, 9816) = 1;
        v8 = FIELD_U32(a1, 64);
        if ( ((unsigned int)dword_60CB31E0 & ~(1616986684 << v7) & 1) == 0 && _cxa_guard_acquire(dword_60CB31E0) )
        {
          dword_60CB31DC = (int)&off_60BC00C8;
          _cxa_guard_release(dword_60CB31E0);
        }
        if ( v8 && (**(int (__fastcall ***)(int, int *))v8)(v8, &dword_60CB31DC) == 1 )
        {
          v9 = FIELD_S8(v4, 84);
          if ( v9 != -1 )
            FIELD_U32(v8, 7596) |= byte_60B06544[v9];
        }
      }
    }
  }
}
