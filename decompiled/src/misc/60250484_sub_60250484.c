/* sub_60250484
 * address: 0x60250484   size: 416   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60250484(int a1)
{
  int v1; // r7
  unsigned int *v2; // r9
  int v3; // r4
  char v4; // r12
  char v5; // r12
  _DWORD *v7; // [sp+1Ch] [bp-2Ch]

  v1 = 0;
  v7 = (_DWORD *)(a1 + 6340);
  v2 = (unsigned int *)(a1 + 6348);
  while ( 1 )
  {
    v3 = ActorMgrRelated_getById(ActorMgr__instance + 27168, *v2);
    if ( ((unsigned int)&dword_60C7B364 & ~(1613038932 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
    {
      StageActor_RTTI = (int)&off_60BC0098;
      _cxa_guard_release(&dword_60C7B364);
    }
    if ( !v3 || (**(int (__fastcall ***)(int, int *))v3)(v3, &StageActor_RTTI) != 1 )
      break;
    if ( ((unsigned int)&dword_60C8DEC4 & ~(1613039016 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60C8DEC4) )
    {
      dword_60C8DEC0 = (int)&off_60BC04AC;
      _cxa_guard_release(&dword_60C8DEC4);
    }
    if ( (**(int (__fastcall ***)(int, int *))v3)(v3, &dword_60C8DEC0) == 1
      && *v7 == FIELD_U32(v3, 6340)
      && FIELD_U32(v3, 6344) )
    {
      return v3;
    }
  }
  return v1;
}
