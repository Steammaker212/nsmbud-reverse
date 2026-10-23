/* sub_6010AB70
 * address: 0x6010AB70   size: 412   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void sub_6010AB70()
{
  char v0; // r12
  Actor **v1; // r5
  Actor **i; // r8
  Actor *v3; // r7
  int v4; // r0
  bool v5; // zf

  v1 = *(Actor ***)(ActorMgr__instance + 27172);
  for ( i = *(Actor ***)(ActorMgr__instance + 27180); i != v1; ++v1 )
  {
    v3 = *v1;
    if ( ((unsigned int)&dword_60C7B364 & ~(1611705404 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
    {
      StageActor_RTTI = (int)&off_60BC0098;
      _cxa_guard_release(&dword_60C7B364);
    }
    if ( v3
      && (*(int (__fastcall **)(Actor *, int *))FIELD_U32(v3, 0x0))(v3, &StageActor_RTTI) == 1
      && Actor__getProfileId(v3) == 708 )
    {
      if ( ((unsigned int)dword_60C866F0 & ~(1611705508 << v0) & 1) == 0 && _cxa_guard_acquire(dword_60C866F0) )
      {
        dword_60C866EC = (int)&off_60BC00BC;
        _cxa_guard_release(dword_60C866F0);
      }
      v4 = (*(int (__fastcall **)(Actor *, int *))FIELD_U32(v3, 0x0))(v3, &dword_60C866EC);
      v5 = v4 == 1;
      if ( v4 == 1 )
        v5 = FIELD_U8(v3, 0x13) == 0;
      if ( v5 )
        sub_6011013C(v3);
    }
  }
}
