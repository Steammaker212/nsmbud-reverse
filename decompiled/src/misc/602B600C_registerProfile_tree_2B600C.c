/* registerProfile_tree_2B600C
 * address: 0x602B600C   size: 232   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *registerProfile_tree_2B600C()
{
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  dword_60C90E60 = 0;
  dword_60C90E64 = 0;
  dword_60C90E68 = 0;
  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AC3937;
  Profile__ctor(&stru_60C90E6C, Actor_tree_build, 0x2F4u, &v1, &stru_60AFE610, 2);
  dword_60C90E88 = ++CurrentStateID;
  dword_60C90E84 = (int)&off_60BE3E48;
  dword_60C90E8C = (int)nullsub_3234;
  dword_60C90E90 = 0;
  dword_60C90E94 = (int)&loc_602B551C;
  dword_60C90E98 = 0;
  dword_60C90E9C = (int)nullsub_3235;
  dword_60C90EA0 = 0;
  return &dword_60C90E84;
}
