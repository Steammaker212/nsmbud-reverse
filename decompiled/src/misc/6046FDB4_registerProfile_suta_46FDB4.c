/* registerProfile_suta_46FDB4
 * address: 0x6046FDB4   size: 224   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *registerProfile_suta_46FDB4()
{
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  dword_60C9D7F8 = 0;
  dword_60C9D7FC = 0;
  dword_60C9D800 = 0;
  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AC99D0;
  Profile__ctor(&stru_60C9D804, Actor_suta_build, 0x356u, &v1, &stru_60B028B4, 16406);
  dword_60C9D820 = ++CurrentStateID;
  dword_60C9D81C = (int)&off_60BFC69C;
  dword_60C9D824 = (int)sub_6046EE34;
  dword_60C9D828 = 0;
  dword_60C9D82C = (int)sub_6046EE44;
  dword_60C9D830 = 0;
  dword_60C9D834 = (int)nullsub_3722;
  dword_60C9D838 = 0;
  return &dword_60C9D81C;
}
