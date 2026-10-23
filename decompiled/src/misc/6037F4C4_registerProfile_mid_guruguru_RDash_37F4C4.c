/* registerProfile_mid_guruguru_RDash_37F4C4
 * address: 0x6037F4C4   size: 188   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_mid_guruguru_RDash_37F4C4()
{
  sead__SafeString v0[4]; // [sp+10h] [bp-20h] BYREF

  dword_60C96960 = 0;
  dword_60C96964 = 0;
  dword_60C96968 = 0;
  v0[0].vtable = &sead__SafeStringBase__vtable;
  v0[0].cstr = (char *)&unk_60AC56AB;
  Profile__ctor(&stru_60C9696C, Actor_mid_guruguru_RDash_build, 0x2Bu, v0, &stru_60AFEA04, 2);
  v0[0].vtable = &sead__SafeStringBase__vtable;
  v0[0].cstr = (char *)&unk_60AC56C7;
  Profile__ctor(&stru_60C96984, Actor_mid_guruguru_RDash_build, 0x2Cu, v0, &stru_60AFEA04, 2);
}
