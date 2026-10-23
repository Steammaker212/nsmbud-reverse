/* registerProfile_Bowser_doa_RDashfor_5FA440
 * address: 0x605FA440   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_Bowser_doa_RDashfor_5FA440()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  dword_60CB24FC = 0;
  dword_60CB2500 = 0;
  dword_60CB2504 = 0;
  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AD316D;
  Profile__ctor(&stru_60CB2508, Actor_Bowser_doa_RDashfor_build, 0x262u, &v0, &stru_60B05FCC, 2);
}
