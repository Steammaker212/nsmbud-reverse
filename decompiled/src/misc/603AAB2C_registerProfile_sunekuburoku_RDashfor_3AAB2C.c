/* registerProfile_sunekuburoku_RDashfor_3AAB2C
 * address: 0x603AAB2C   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_sunekuburoku_RDashfor_3AAB2C()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  dword_60C97A28 = 0;
  dword_60C97A2C = 0;
  dword_60C97A30 = 0;
  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AC59A9;
  Profile__ctor(&stru_60C97A34, Actor_sunekuburoku_RDashfor_build, 0xC4u, &v0, &stru_60B00A7C, 0);
}
