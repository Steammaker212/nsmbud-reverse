/* sub_6072EFA0
 * address: 0x6072EFA0   size: 484   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6072EFA0(int a1, unsigned int a2)
{
  int v2; // r5
  unsigned int v3; // r1
  unsigned int *v4; // r5
  unsigned int v5; // t1
  int v6; // r4
  char v7; // r12
  char v8; // r12
  int (__fastcall ***v9)(_DWORD, int *); // r4
  char v10; // r12
  int result; // r0

  if ( a2 >= 2 )
    a2 = 0;
  v2 = a1 + 4 * a2;
  v5 = FIELD_U32(v2, 6356);
  v4 = (unsigned int *)(v2 + 6356);
  v3 = v5;
  if ( !v5 )
  {
    v6 = *(_DWORD *)sub_60008598(ActorMgr__instance, 829, FIELD_U32(ActorMgr__instance, 27172));
    if ( ((unsigned int)&dword_60C7B364 & ~(1618145272 << v7) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
    {
      StageActor_RTTI = (int)&off_60BC0098;
      _cxa_guard_release(&dword_60C7B364);
    }
    if ( !v6 || (**(int (__fastcall ***)(int, int *))v6)(v6, &StageActor_RTTI) != 1 )
      goto LABEL_15;
    if ( ((unsigned int)&dword_60CBD938 & ~(1618145388 << v8) & 1) == 0 && _cxa_guard_acquire(&dword_60CBD938) )
    {
      dword_60CBD934 = (int)&off_60BC04AC;
      _cxa_guard_release(&dword_60CBD938);
    }
    if ( (**(int (__fastcall ***)(int, int *))v6)(v6, &dword_60CBD934) == 1 )
    {
      v3 = FIELD_U32(v6, 8);
      *v4 = v3;
      if ( !v3 )
        return 0;
    }
    else
    {
LABEL_15:
      v3 = *v4;
      if ( !*v4 )
        return 0;
    }
  }
  v9 = (int (__fastcall ***)(_DWORD, int *))ActorMgrRelated_getById(ActorMgr__instance + 27168, v3);
  if ( ((unsigned int)&dword_60CBD938 & ~(1618145556 << v10) & 1) == 0 && _cxa_guard_acquire(&dword_60CBD938) )
  {
    dword_60CBD934 = (int)&off_60BC04AC;
    _cxa_guard_release(&dword_60CBD938);
  }
  if ( !v9 )
    return 0;
  result = (**v9)(v9, &dword_60CBD934);
  if ( result )
    return (int)v9;
  return result;
}
