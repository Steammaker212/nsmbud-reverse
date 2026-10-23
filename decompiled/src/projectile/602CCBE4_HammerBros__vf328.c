/* HammerBros__vf328
 * address: 0x602CCBE4   size: 340   group: projectile
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: BrosBase : 0x602675A0
// 
// Overridden by: None
void __fastcall HammerBros__vf328(int a1)
{
  unsigned int v1; // r1
  unsigned int *v2; // r4
  int v3; // r5
  char v4; // r12
  int v5; // r4
  char v6; // r12

  FIELD_U32(a1, 12468) = 0;
  v2 = (unsigned int *)(a1 + 6608);
  v1 = FIELD_U32(a1, 6608);
  if ( v1 )
  {
    v3 = ActorMgrRelated_getById(ActorMgr__instance + 27168, v1);
    if ( ((unsigned int)dword_60C87D28 & ~(1613548596 << v4) & 1) == 0 && _cxa_guard_acquire(dword_60C87D28) )
    {
      dword_60C87D24 = (int)&off_60BD20C4;
      _cxa_guard_release(dword_60C87D28);
    }
    if ( v3 && (**(int (__fastcall ***)(int, int *))v3)(v3, &dword_60C87D24) == 1 && !FIELD_U8(v3, 11844) )
    {
      v5 = ActorMgrRelated_getById(ActorMgr__instance + 27168, *v2);
      if ( ((unsigned int)dword_60C87D28 & ~(1613548760 << v6) & 1) == 0 )
      {
        if ( _cxa_guard_acquire(dword_60C87D28) )
        {
          dword_60C87D24 = (int)&off_60BD20C4;
          _cxa_guard_release(dword_60C87D28);
        }
      }
      (**(void (__fastcall ***)(int, int *))v5)(v5, &dword_60C87D24);
      FIELD_U8(v5, 19) = 1;
    }
  }
}
