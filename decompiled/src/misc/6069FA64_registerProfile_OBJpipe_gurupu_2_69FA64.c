/* registerProfile_OBJpipe_gurupu_2_69FA64
 * address: 0x6069FA64   size: 200   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_OBJpipe_gurupu_2_69FA64()
{
  sead__SafeString v0[4]; // [sp+10h] [bp-20h] BYREF

  dword_60CB9814 = 0;
  dword_60CB9818 = 0;
  dword_60CB981C = 0;
  v0[0].vtable = &sead__SafeStringBase__vtable;
  v0[0].cstr = (char *)&unk_60AD6E55;
  Profile__ctor(&stru_60CB9820, Actor_OBJpipe_gurupu_2_build, 0x14Eu, v0, &stru_60B081C8, 1026);
  v0[0].vtable = &sead__SafeStringBase__vtable;
  v0[0].cstr = (char *)&unk_60AD6E64;
  Profile__ctor(&stru_60CB9838, Actor_OBJpipe_gurupu_2_build, 0x152u, v0, &stru_60B081EC, 1026);
}
