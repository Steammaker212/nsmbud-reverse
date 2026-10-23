/* sub_6054A284
 * address: 0x6054A284   size: 292   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int **__fastcall sub_6054A284(int a1)
{
  int *v2; // r5
  int **result; // r0
  char v4; // r12
  int **v5; // r1
  bool v6; // zf
  _DWORD *v7; // r3
  _DWORD *v8; // r4
  int v9; // r1
  int v10; // r2

  FIELD_U8(a1, 3638) = 1;
  FIELD_U8(a1, 3637) = 1;
  v2 = &ActorMgr__instance;
  result = (int **)sub_60008598(ActorMgr__instance, 459, FIELD_U32(ActorMgr__instance, 27172));
  v5 = *(int ***)(ActorMgr__instance + 27180);
  v6 = result == v5;
  if ( result != v5 )
  {
    v2 = *result;
    v6 = *result == 0;
  }
  if ( !v6 )
  {
    if ( ((unsigned int)&dword_60C7B364 & ~(1616159464 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
    {
      StageActor_RTTI = (int)&off_60BC0098;
      _cxa_guard_release(&dword_60C7B364);
    }
    result = (int **)(*(int (__fastcall **)(int *, int *))*v2)(v2, &StageActor_RTTI);
    if ( result == (int **)1 )
    {
      v7 = (_DWORD *)(a1 + 3648);
      v8 = (_DWORD *)(a1 + 44);
      v9 = v2[28];
      v10 = v2[29];
      *v7 = v2[27];
      v7[1] = v9;
      v7[2] = v10;
      sub_60473DE4(v8, 2u, &dword_60CAC804, 0);
      sub_60473DE4(v8, 0, &dword_60CAC80C, 1);
      return (int **)sub_60473DE4(v8, 1u, &dword_60CAC814, 0);
    }
  }
  return result;
}
