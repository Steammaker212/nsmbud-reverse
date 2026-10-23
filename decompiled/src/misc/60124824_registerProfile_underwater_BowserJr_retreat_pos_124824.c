/* registerProfile_underwater_BowserJr_retreat_pos_124824
 * address: 0x60124824   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *registerProfile_underwater_BowserJr_retreat_pos_124824()
{
  _DWORD *result; // r0
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  dword_60C86E18 = 0;
  dword_60C86E1C = 0;
  dword_60C86E20 = 0;
  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60ABE664;
  Profile__ctor(&stru_60C86E24, Actor_underwater_BowserJr_retreat_pos_build, 0x337u, &v1, &stru_60AF6378, 0);
  *result = &off_60BD107C;
  return result;
}
