/* sub_6018EA74
 * address: 0x6018EA74   size: 284   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_6018EA74()
{
  int v0; // r4
  _DWORD **v1; // r6
  char v2; // r12
  char v3; // r8
  _DWORD **i; // r5
  _DWORD *v5; // r7

  v0 = ActorMgr__instance;
  v1 = (_DWORD **)sub_60008598(ActorMgr__instance, 866, FIELD_U32(ActorMgr__instance, 27172));
  v3 = 1;
  for ( i = *(_DWORD ***)(v0 + 27180); v1 != i; v1 = (_DWORD **)sub_60008598(v0, 866, (int)(v1 + 1)) )
  {
    v5 = *v1;
    if ( ((unsigned int)dword_60C88E88 & ~(1612245776 << v2) & 1) == 0 && _cxa_guard_acquire(dword_60C88E88) )
    {
      dword_60C88E84 = (int)&off_60BD4E08;
      _cxa_guard_release(dword_60C88E88);
    }
    if ( v5 && (*(int (__fastcall **)(_DWORD *, int *))*v5)(v5, &dword_60C88E84) == 1 )
      v3 &= cobCourse_ref(v5);
  }
  return v3 & 1;
}
