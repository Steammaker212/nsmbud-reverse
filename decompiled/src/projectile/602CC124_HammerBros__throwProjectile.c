/* HammerBros__throwProjectile
 * address: 0x602CC124   size: 200   group: projectile
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: BrosBase : 0x60267594
// 
// Overridden by: None
void __fastcall HammerBros__throwProjectile(int a1)
{
  unsigned int v1; // r1
  _DWORD *v2; // r4
  int v3; // r5
  char v4; // r12
  _BYTE *v5; // r5
  int v6; // t1

  v2 = (_DWORD *)(a1 + 6608);
  v1 = FIELD_U32(a1, 6608);
  if ( v1 )
  {
    v3 = ActorMgrRelated_getById(ActorMgr__instance + 27168, v1);
    if ( ((unsigned int)dword_60C87D28 & ~(1613545832 << v4) & 1) == 0 && _cxa_guard_acquire(dword_60C87D28) )
    {
      dword_60C87D24 = (int)&off_60BD20C4;
      _cxa_guard_release(dword_60C87D28);
    }
    if ( v3 && (**(int (__fastcall ***)(int, int *))v3)(v3, &dword_60C87D24) == 1 )
    {
      v6 = FIELD_U8(v3, 11844);
      v5 = (_BYTE *)(v3 + 11844);
      if ( !v6 )
      {
        *v5 = 1;
        *v2 = 0;
      }
    }
  }
}
