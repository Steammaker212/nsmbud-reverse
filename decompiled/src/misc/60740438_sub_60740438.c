/* sub_60740438
 * address: 0x60740438   size: 476   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60740438(int a1)
{
  unsigned int v1; // r1
  unsigned int *v2; // r4
  int v3; // r5
  char v4; // r12
  char v5; // r12
  int (__fastcall ***v6)(_DWORD, int *); // r4
  char v7; // r12
  int result; // r0

  v2 = (unsigned int *)(a1 + 10776);
  v1 = FIELD_U32(a1, 10776);
  if ( !v1 )
  {
    v3 = *(_DWORD *)sub_60008598(ActorMgr__instance, 27, *(_DWORD *)(ActorMgr__instance + 27172));
    if ( ((unsigned int)&dword_60C7B364 & ~(1618216072 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
    {
      StageActor_RTTI = (int)&off_60BC0098;
      _cxa_guard_release(&dword_60C7B364);
    }
    if ( !v3 || (**(int (__fastcall ***)(int, int *))v3)(v3, &StageActor_RTTI) != 1 )
      goto LABEL_13;
    if ( ((unsigned int)&dword_60CBDD30 & ~(1618216188 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60CBDD30) )
    {
      dword_60CBDD2C = (int)&off_60BC00E0;
      _cxa_guard_release(&dword_60CBDD30);
    }
    if ( (**(int (__fastcall ***)(int, int *))v3)(v3, &dword_60CBDD2C) == 1 )
    {
      v1 = FIELD_U32(v3, 8);
      *v2 = v1;
      if ( !v1 )
        return 0;
    }
    else
    {
LABEL_13:
      v1 = *v2;
      if ( !*v2 )
        return 0;
    }
  }
  v6 = (int (__fastcall ***)(_DWORD, int *))ActorMgrRelated_getById(ActorMgr__instance + 27168, v1);
  if ( ((unsigned int)&dword_60CBDD30 & ~(1618216356 << v7) & 1) == 0 && _cxa_guard_acquire(&dword_60CBDD30) )
  {
    dword_60CBDD2C = (int)&off_60BC00E0;
    _cxa_guard_release(&dword_60CBDD30);
  }
  if ( !v6 )
    return 0;
  result = (**v6)(v6, &dword_60CBDD2C);
  if ( result )
    return (int)v6;
  return result;
}
