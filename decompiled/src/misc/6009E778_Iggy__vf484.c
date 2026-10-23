/* Iggy__vf484
 * address: 0x6009E778   size: 224   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: KoopalingBase : 0x600AB79C
// 
// Overridden by: None
void __fastcall Iggy__vf484(int a1)
{
  char v1; // r12
  unsigned int v3; // r1
  int v4; // r5

  v3 = FIELD_U32(a1, 7136);
  if ( v3 )
    v4 = ActorMgrRelated_getById(ActorMgr__instance + 27168, v3);
  else
    v4 = 0;
  if ( ((unsigned int)dword_60C81F18 & ~(1611261892 << v1) & 1) == 0 && _cxa_guard_acquire(dword_60C81F18) )
  {
    dword_60C81F14 = (int)&off_60BC00C8;
    _cxa_guard_release(dword_60C81F18);
  }
  if ( v4 )
  {
    if ( (**(int (__fastcall ***)(int, int *))v4)(v4, &dword_60C81F14) == 1 )
    {
      FIELD_U32(v4, 80) = FIELD_U32(a1, 80);
      FIELD_F32(v4, 116) = FIELD_F32(a1, 116) + 600.0;
      (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 216))(v4);
    }
  }
}
