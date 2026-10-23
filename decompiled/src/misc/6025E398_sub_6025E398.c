/* sub_6025E398
 * address: 0x6025E398   size: 168   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6025E398(int a1, int a2)
{
  Actor *v2; // r4
  char v3; // r12

  v2 = *(Actor **)(a2 + 64);
  if ( Actor__getProfileId(v2) == 372 )
  {
    if ( ((unsigned int)dword_60C80420 & ~(1613095884 << v3) & 1) == 0 && _cxa_guard_acquire(dword_60C80420) )
    {
      dword_60C8041C = (int)&off_60BC00E0;
      _cxa_guard_release(dword_60C80420);
    }
    if ( v2 )
    {
      if ( (*(int (__fastcall **)(Actor *, int *))FIELD_U32(v2, 0x0))(v2, &dword_60C8041C) == 1 )
        SE_BOSS_JR_BLOCK_ref(v2);
    }
  }
}
