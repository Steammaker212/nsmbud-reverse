/* sub_606C8C0C
 * address: 0x606C8C0C   size: 552   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606C8C0C(int a1)
{
  char v1; // r12
  int *v2; // r6
  char v3; // r12
  int result; // r0
  int v5; // r7
  char v6; // r12
  int v7; // r4

  if ( ((unsigned int)&unk_60CBAD00 & ~(1617726504 << v1) & 1) == 0 && _cxa_guard_acquire((__guard *)&unk_60CBAD00) )
  {
    dword_60CBAD0C = 751;
    dword_60CBAD10 = 752;
    _cxa_guard_release((__guard *)&unk_60CBAD00);
  }
  v2 = (int *)sub_60008598(
                ActorMgr__instance,
                *((_DWORD *)&unk_60CBAD00 + FIELD_U32(a1, 7076) + 3),
                *(_DWORD *)(ActorMgr__instance + 27172));
  result = 0;
  if ( v2 != *(int **)(ActorMgr__instance + 27180) )
  {
    while ( 1 )
    {
      v5 = *v2;
      if ( ((unsigned int)&dword_60C7B364 & ~(1617726744 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
      {
        StageActor_RTTI = (int)&off_60BC0098;
        _cxa_guard_release(&dword_60C7B364);
      }
      if ( v5
        && (**(int (__fastcall ***)(int, int *))v5)(v5, &StageActor_RTTI) == 1
        && FIELD_U8(v5, 539) == FIELD_U8(a1, 539) )
      {
        break;
      }
      v2 = (int *)sub_60008598(
                    ActorMgr__instance,
                    *((_DWORD *)&unk_60CBAD00 + FIELD_U32(a1, 7076) + 3),
                    (int)(v2 + 1));
      if ( v2 == *(int **)(ActorMgr__instance + 27180) )
        return 0;
    }
    if ( ((unsigned int)dword_60CB0898 & ~(1617726916 << v6) & 1) == 0 && _cxa_guard_acquire(dword_60CB0898) )
    {
      dword_60CB0894 = (int)&off_60BC00C8;
      _cxa_guard_release(dword_60CB0898);
    }
    v7 = v5 + 20;
    if ( !(**(int (__fastcall ***)(int, int *))v5)(v5, &dword_60CB0894) )
      v7 = 20;
    return (*(_DWORD *)v7 >> 4) & 7;
  }
  return result;
}
