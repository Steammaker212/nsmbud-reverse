/* registerProfile_OBJpipe_gurupu_69EE78
 * address: 0x6069EE78   size: 200   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_OBJpipe_gurupu_69EE78()
{
  sead__SafeString v0[4]; // [sp+10h] [bp-20h] BYREF

  dword_60CB97B8 = 0;
  dword_60CB97BC = 0;
  dword_60CB97C0 = 0;
  v0[0].vtable = &sead__SafeStringBase__vtable;
  v0[0].cstr = (char *)&unk_60AD6E0A;
  Profile__ctor(&stru_60CB97C4, Actor_OBJpipe_gurupu_build, 0x150u, v0, &stru_60B08130, 2);
  v0[0].vtable = &sead__SafeStringBase__vtable;
  v0[0].cstr = (char *)&unk_60AD6E19;
  Profile__ctor(&stru_60CB97DC, Actor_OBJpipe_gurupu_build, 0x154u, v0, &stru_60B08154, 2);
}
