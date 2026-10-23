/* sub_605E3F2C
 * address: 0x605E3F2C   size: 332   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_605E3F2C(_DWORD *a1)
{
  int v1; // r6
  int v2; // r10
  _DWORD *v3; // r4
  int *v4; // r8
  int v5; // r5
  int v6; // r0
  int v7; // r7
  char v8; // r12
  int v9; // r0

  v1 = a1[1614];
  if ( v1 )
  {
    v2 = 0;
    v3 = a1 + 1612;
    v4 = a1 + 1613;
    v5 = ActorMgr__instance + 27168;
    do
    {
      v6 = *v4;
      if ( v2 + *v4 >= *v3 )
        v6 -= *v3;
      v7 = ActorMgrRelated_getById(v5, *(_DWORD *)(a1[1611] + 20 * (v2 + v6)));
      if ( ((unsigned int)&dword_60C7B364 & ~(1616789500 << v8) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
      {
        StageActor_RTTI = (int)&off_60BC0098;
        _cxa_guard_release(&dword_60C7B364);
      }
      if ( v7 && (**(int (__fastcall ***)(int, int *))v7)(v7, &StageActor_RTTI) == 1 )
      {
        v9 = FIELD_U32(v7, 624);
        if ( v9 )
          (*(void (__fastcall **)(int, _DWORD *))(*(_DWORD *)v9 + 8))(v9, a1);
      }
      ++v2;
    }
    while ( v1 != v2 );
  }
}
