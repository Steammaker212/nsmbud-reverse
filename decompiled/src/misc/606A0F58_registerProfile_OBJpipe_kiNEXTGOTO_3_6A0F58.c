/* registerProfile_OBJpipe_kiNEXTGOTO_3_6A0F58
 * address: 0x606A0F58   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_OBJpipe_kiNEXTGOTO_3_6A0F58()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  dword_60CB98B8 = 0;
  dword_60CB98BC = 0;
  dword_60CB98C0 = 0;
  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AD6ECD;
  Profile__ctor(&stru_60CB98C4, Actor_OBJpipe_kiNEXTGOTO_3_build, 0x155u, &v0, &stru_60B082EC, 1026);
}
