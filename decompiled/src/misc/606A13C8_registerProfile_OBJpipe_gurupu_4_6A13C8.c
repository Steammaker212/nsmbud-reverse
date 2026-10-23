/* registerProfile_OBJpipe_gurupu_4_6A13C8
 * address: 0x606A13C8   size: 200   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_OBJpipe_gurupu_4_6A13C8()
{
  sead__SafeString v0[4]; // [sp+10h] [bp-20h] BYREF

  dword_60CB98E4 = 0;
  dword_60CB98E8 = 0;
  dword_60CB98EC = 0;
  v0[0].vtable = &sead__SafeStringBase__vtable;
  v0[0].cstr = (char *)&unk_60AD6EEB;
  Profile__ctor(&stru_60CB98F0, Actor_OBJpipe_gurupu_4_build, 0x14Fu, v0, &stru_60B0831C, 2);
  v0[0].vtable = &sead__SafeStringBase__vtable;
  v0[0].cstr = (char *)&unk_60AD6EFA;
  Profile__ctor(&stru_60CB9908, Actor_OBJpipe_gurupu_4_build, 0x153u, v0, &stru_60B08340, 2);
}
