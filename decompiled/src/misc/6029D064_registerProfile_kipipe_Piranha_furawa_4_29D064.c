/* registerProfile_kipipe_Piranha_furawa_4_29D064
 * address: 0x6029D064   size: 144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *registerProfile_kipipe_Piranha_furawa_4_29D064()
{
  _DWORD *result; // r0
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  dword_60C9002C = 0;
  dword_60C90030 = 0;
  dword_60C90034 = 0;
  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AC33B2;
  Profile__ctor(&stru_60C90038, Actor_kipipe_Piranha_furawa_4_build, 0x1DFu, &v1, &stru_60AFE218, 18);
  *result = &off_60BE1A98;
  return result;
}
