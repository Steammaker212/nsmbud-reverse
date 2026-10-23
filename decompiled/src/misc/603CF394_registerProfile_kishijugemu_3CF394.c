/* registerProfile_kishijugemu_3CF394
 * address: 0x603CF394   size: 224   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *registerProfile_kishijugemu_3CF394()
{
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  dword_60C98C1C = 0;
  dword_60C98C20 = 0;
  dword_60C98C24 = 0;
  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AC5EF6;
  Profile__ctor(&stru_60C98C28, Actor_kishijugemu_build, 0x272u, &v1, &stru_60B010D4, 2);
  dword_60C98C44 = ++CurrentStateID;
  dword_60C98C40 = (int)&off_60BF79B8;
  dword_60C98C48 = (int)sub_603CEC9C;
  dword_60C98C4C = 0;
  dword_60C98C50 = (int)sub_603CECAC;
  dword_60C98C54 = 0;
  dword_60C98C58 = (int)nullsub_3581;
  dword_60C98C5C = 0;
  return &dword_60C98C40;
}
