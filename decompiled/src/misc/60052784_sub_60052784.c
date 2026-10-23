/* sub_60052784
 * address: 0x60052784   size: 304   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int (__fastcall ***sub_60052784())(_DWORD, int *)
{
  char v0; // r12
  int v1; // r5
  int v2; // r4
  int (__fastcall ***v3)(_DWORD, int *); // r5
  char v4; // r12

  v1 = FIELD_U32(EnemyCounterMaybe_instance, 24);
  if ( ((unsigned int)&dword_60C807EC & ~(1610950568 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C807EC) )
  {
    dword_60C807E8 = (int)&off_60BC210C;
    _cxa_guard_release(&dword_60C807EC);
  }
  v2 = 0;
  if ( v1 && (**(int (__fastcall ***)(int, int *))v1)(v1, &dword_60C807E8) == 1 )
  {
    v3 = (int (__fastcall ***)(_DWORD, int *))ActorMgrRelated_getById(
                                                ActorMgr__instance + 27168,
                                                FIELD_U32(v1, 6128));
    if ( ((unsigned int)&dword_60C7FBFC & ~(1610950724 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C7FBFC) )
    {
      dword_60C7FBF8 = (int)&off_60BC04AC;
      _cxa_guard_release(&dword_60C7FBFC);
    }
    if ( v3 )
    {
      v2 = (**v3)(v3, &dword_60C7FBF8);
      if ( v2 )
        return v3;
    }
  }
  return (int (__fastcall ***)(_DWORD, int *))v2;
}
