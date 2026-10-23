/* registerProfile_charenjimodoexclusive_buroku_5B75E4
 * address: 0x605B75E4   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_charenjimodoexclusive_buroku_5B75E4()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  dword_60CB05A0 = 0;
  dword_60CB05A4 = 0;
  dword_60CB05A8 = 0;
  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AD24A4;
  Profile__ctor(&stru_60CB05AC, Actor_charenjimodoexclusive_buroku_build, 0xB5u, &v0, &stru_60B053E8, 2);
}
