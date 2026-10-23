/* registerProfile_fort_doa_5FB668
 * address: 0x605FB668   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_fort_doa_5FB668()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  dword_60CB2568 = 0;
  dword_60CB256C = 0;
  dword_60CB2570 = 0;
  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AD31C9;
  Profile__ctor(&stru_60CB2574, Actor_fort_doa_build, 0x25Du, &v0, &stru_60B06038, 2);
}
