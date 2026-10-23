/* registerProfile_kingukira_RDash_32A6A4
 * address: 0x6032A6A4   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_kingukira_RDash_32A6A4()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  dword_60C93C3C = 0;
  dword_60C93C40 = 0;
  dword_60C93C44 = 0;
  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AC49F3;
  Profile__ctor(&stru_60C93C48, Actor_kingukira_RDash_build, 0x27Au, &v0, &stru_60AFF7EC, 18);
}
