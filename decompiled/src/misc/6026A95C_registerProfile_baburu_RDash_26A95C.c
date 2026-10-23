/* registerProfile_baburu_RDash_26A95C
 * address: 0x6026A95C   size: 200   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_baburu_RDash_26A95C()
{
  sead__SafeString v0[4]; // [sp+10h] [bp-20h] BYREF

  dword_60C8E724 = 0;
  dword_60C8E728 = 0;
  dword_60C8E72C = 0;
  v0[0].vtable = &sead__SafeStringBase__vtable;
  v0[0].cstr = (char *)&unk_60AC2AEC;
  Profile__ctor(&stru_60C8E730, Actor_baburu_RDash_build, 0x291u, v0, &stru_60AFDAD4, 18);
  v0[0].vtable = &sead__SafeStringBase__vtable;
  v0[0].cstr = (char *)&unk_60AC2AFD;
  Profile__ctor(&stru_60C8E748, Actor_baburu_RDash_build, 0x292u, v0, &stru_60AFDAF8, 18);
}
