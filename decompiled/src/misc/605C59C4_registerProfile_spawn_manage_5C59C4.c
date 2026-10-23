/* registerProfile_spawn_manage_5C59C4
 * address: 0x605C59C4   size: 200   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_spawn_manage_5C59C4()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  dword_60CB0A30 = 0;
  dword_60CB0A34 = 0;
  dword_60CB0A38 = 0;
  dword_60CB0A3C = 1085276160;
  dword_60CB0A40 = -1073741824;
  dword_60CB0A44 = 0;
  dword_60CB0A48 = 1088421888;
  dword_60CB0A4C = -1082130432;
  unk_60CB0A50 = 0;
  unk_60CB0A54 = -1073741824;
  unk_60CB0A58 = 1092616192;
  dword_60CB0A5C = 0;
  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AD287F;
  Profile__ctor(&stru_60CB0A0C, Actor_spawn_manage_build, 0x317u, &v0, &stru_60B056AC, 0);
}
