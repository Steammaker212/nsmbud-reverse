/* registerProfile_OBJpipe_kiNEXTGOTO_4_6A1BE0
 * address: 0x606A1BE0   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_OBJpipe_kiNEXTGOTO_4_6A1BE0()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  dword_60CB9920 = 0;
  dword_60CB9924 = 0;
  dword_60CB9928 = 0;
  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AD6F18;
  Profile__ctor(&stru_60CB992C, Actor_OBJpipe_kiNEXTGOTO_4_build, 0x157u, &v0, &stru_60B0839C, 2);
}
