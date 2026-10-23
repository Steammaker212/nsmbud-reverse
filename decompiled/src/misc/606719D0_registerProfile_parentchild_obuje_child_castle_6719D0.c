/* registerProfile_parentchild_obuje_child_castle_6719D0
 * address: 0x606719D0   size: 272   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void (*registerProfile_parentchild_obuje_child_castle_6719D0())()
{
  sead__SafeString v1; // [sp+10h] [bp-18h] BYREF

  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AD5F6D;
  Profile__ctor(&stru_60CB73F4, Actor_parentchild_obuje_child_castle_build, 0x49u, &v1, &stru_60B07B28, 2);
  dword_60CB7410 = CurrentStateID + 1;
  dword_60CB740C = (int)&off_60C159C4;
  dword_60CB7414 = (int)nullsub_5101;
  dword_60CB7418 = 0;
  dword_60CB741C = (int)sub_60671854;
  dword_60CB7420 = 0;
  dword_60CB7424 = (int)nullsub_5102;
  dword_60CB7428 = 0;
  CurrentStateID += 2;
  dword_60CB7430 = CurrentStateID;
  dword_60CB742C = (int)&off_60C159C4;
  dword_60CB7434 = (int)nullsub_5103;
  dword_60CB7438 = 0;
  dword_60CB743C = (int)nullsub_5104;
  dword_60CB7440 = 0;
  dword_60CB7444 = (int)nullsub_5105;
  dword_60CB7448 = 0;
  return nullsub_5105;
}
