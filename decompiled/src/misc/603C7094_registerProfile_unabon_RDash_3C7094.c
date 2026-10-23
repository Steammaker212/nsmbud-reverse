/* registerProfile_unabon_RDash_3C7094
 * address: 0x603C7094   size: 436   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_unabon_RDash_3C7094()
{
  sead__SafeString v0; // [sp+10h] [bp-20h] BYREF

  dword_60C98804 = 0;
  dword_60C98808 = 0;
  dword_60C9880C = 0;
  dword_60C98814 = CurrentStateID + 1;
  dword_60C98818 = 636;
  dword_60C9881C = 1;
  dword_60C98820 = 640;
  dword_60C98824 = 1;
  dword_60C98828 = 644;
  dword_60C9882C = 1;
  dword_60C98810 = (int)&off_60BF70C4;
  dword_60C98830 = (int)&dword_60C98774;
  dword_60C98840 = 1;
  dword_60C98844 = 652;
  dword_60C98848 = 1;
  dword_60C9884C = 656;
  dword_60C98850 = 1;
  unk_60C98834 = &off_60BF70C4;
  unk_60C98838 = CurrentStateID + 2;
  unk_60C9883C = 648;
  dword_60C98854 = (int)&unk_60C98798;
  dword_60C9885C = CurrentStateID + 3;
  dword_60C98858 = (int)&off_60BF70D8;
  dword_60C98860 = (int)nullsub_3567;
  dword_60C98864 = 0;
  dword_60C98868 = (int)sub_603C6C9C;
  dword_60C9886C = 0;
  dword_60C98870 = (int)nullsub_3568;
  dword_60C98874 = 0;
  CurrentStateID += 4;
  dword_60C9887C = CurrentStateID;
  dword_60C98878 = (int)&off_60BF70D8;
  dword_60C98880 = (int)sub_603C6CB8;
  dword_60C98884 = 0;
  dword_60C98888 = (int)sub_603C6CD4;
  dword_60C9888C = 0;
  dword_60C98890 = (int)nullsub_3569;
  dword_60C98894 = 0;
  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AC5E29;
  Profile__ctor(&stru_60C98898, Actor_unabon_RDash_build, 0x299u, &v0, &stru_60B00EE0, 16);
}
