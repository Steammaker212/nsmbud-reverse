/* sub_605E3BD4
 * address: 0x605E3BD4   size: 332   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605E3BD4(_DWORD *a1)
{
  _DWORD *v1; // r2
  int v2; // r4
  int v3; // r9
  _DWORD *v4; // r6
  int *v5; // r5
  _DWORD *v6; // r8
  int v7; // r0
  int v8; // r7
  char v9; // r12
  _DWORD *v11; // [sp+4h] [bp-3Ch]

  v1 = a1 + 1614;
  v2 = a1[1614];
  if ( v2 )
  {
    v3 = 0;
    v11 = a1 + 1614;
    v4 = a1 + 1612;
    v5 = a1 + 1613;
    v6 = a1 + 1611;
    do
    {
      v7 = *v5;
      if ( v3 + *v5 >= *v4 )
        v7 -= *v4;
      v8 = ActorMgrRelated_getById(ActorMgr__instance + 27168, *(_DWORD *)(*v6 + 20 * (v3 + v7)));
      if ( ((unsigned int)&dword_60C7B364 & ~(1616788640 << v9) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
      {
        StageActor_RTTI = (int)&off_60BC0098;
        _cxa_guard_release(&dword_60C7B364);
      }
      if ( v8 && (**(int (__fastcall ***)(int, int *))v8)(v8, &StageActor_RTTI) == 1 )
        FIELD_U8(v8, 19) = 1;
      ++v3;
    }
    while ( v2 != v3 );
    v1 = v11;
  }
  else
  {
    v5 = a1 + 1613;
  }
  *v1 = 0;
  *v5 = 0;
  return 0;
}
