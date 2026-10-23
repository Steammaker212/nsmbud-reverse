/* sub_60220244
 * address: 0x60220244   size: 264   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_60220244()
{
  char v0; // r12
  Actor **v1; // r5
  Actor **v2; // r4
  int v3; // r10
  Actor *v4; // r6

  v1 = *(Actor ***)(ActorMgr__instance + 27180);
  v2 = *(Actor ***)(ActorMgr__instance + 27172);
  if ( v2 == v1 )
    return 0;
  v3 = 0;
  do
  {
    v4 = *v2;
    if ( ((unsigned int)&dword_60C88AA8 & ~(1612841676 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C88AA8) )
    {
      dword_60C88AA4 = (int)&off_60BD4BA4;
      _cxa_guard_release(&dword_60C88AA8);
    }
    if ( v4
      && (*(int (__fastcall **)(Actor *, int *))FIELD_U32(v4, 0x0))(v4, &dword_60C88AA4) == 1
      && Actor__getProfileId(v4) == 891 )
    {
      ++v3;
    }
    ++v2;
  }
  while ( v1 != v2 );
  return v3;
}
