/* registerProfile_underwater_BowserJr_for_topidospawn_Tag_3C1A28
 * address: 0x603C1A28   size: 288   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void (*registerProfile_underwater_BowserJr_for_topidospawn_Tag_3C1A28())()
{
  sead__SafeString v1; // [sp+10h] [bp-18h] BYREF

  dword_60C985E0 = 0;
  dword_60C985E4 = 0;
  dword_60C985E8 = 0;
  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AC5CAE;
  Profile__ctor(&stru_60C985EC, Actor_underwater_BowserJr_for_topidospawn_Tag_build, 0x32Fu, &v1, &stru_60B00DF8, 0);
  dword_60C98608 = CurrentStateID + 1;
  dword_60C98604 = (int)&off_60BF6AD0;
  dword_60C9860C = (int)sub_603C168C;
  dword_60C98610 = 0;
  dword_60C98614 = (int)nullsub_3564;
  dword_60C98618 = 0;
  dword_60C9861C = (int)nullsub_3565;
  dword_60C98620 = 0;
  CurrentStateID += 2;
  dword_60C98628 = CurrentStateID;
  dword_60C98624 = (int)&off_60BF6AD0;
  dword_60C9862C = (int)sub_603C16B0;
  dword_60C98630 = 0;
  dword_60C98634 = (int)sub_603C16C0;
  dword_60C98638 = 0;
  dword_60C9863C = (int)nullsub_3566;
  dword_60C98640 = 0;
  return nullsub_3566;
}
