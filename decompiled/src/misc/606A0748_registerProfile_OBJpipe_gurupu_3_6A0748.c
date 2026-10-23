/* registerProfile_OBJpipe_gurupu_3_6A0748
 * address: 0x606A0748   size: 200   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_OBJpipe_gurupu_3_6A0748()
{
  sead__SafeString v0[4]; // [sp+10h] [bp-20h] BYREF

  dword_60CB987C = 0;
  dword_60CB9880 = 0;
  dword_60CB9884 = 0;
  v0[0].vtable = &sead__SafeStringBase__vtable;
  v0[0].cstr = (char *)&unk_60AD6EA0;
  Profile__ctor(&stru_60CB9888, Actor_OBJpipe_gurupu_3_build, 0x14Du, v0, &stru_60B0826C, 1026);
  v0[0].vtable = &sead__SafeStringBase__vtable;
  v0[0].cstr = (char *)&unk_60AD6EAF;
  Profile__ctor(&stru_60CB98A0, Actor_OBJpipe_gurupu_3_build, 0x151u, v0, &stru_60B08290, 1026);
}
