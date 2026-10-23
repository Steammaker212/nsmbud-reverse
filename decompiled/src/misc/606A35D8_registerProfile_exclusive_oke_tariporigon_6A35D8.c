/* registerProfile_exclusive_oke_tariporigon_6A35D8
 * address: 0x606A35D8   size: 208   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *registerProfile_exclusive_oke_tariporigon_6A35D8()
{
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AD6FBB;
  Profile__ctor(&stru_60CB9A40, Actor_exclusive_oke_tariporigon_build, 0xA0u, &v1, &stru_60B083F0, 0);
  dword_60CB9A5C = ++CurrentStateID;
  dword_60CB9A58 = (int)&off_60C192E0;
  dword_60CB9A60 = (int)nullsub_5173;
  dword_60CB9A64 = 0;
  dword_60CB9A68 = (int)nullsub_5174;
  dword_60CB9A6C = 0;
  dword_60CB9A70 = (int)nullsub_5175;
  dword_60CB9A74 = 0;
  return &dword_60CB9A58;
}
