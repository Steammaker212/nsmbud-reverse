/* registerProfile_guruputopido_3605B0
 * address: 0x603605B0   size: 588   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *registerProfile_guruputopido_3605B0()
{
  _DWORD *v0; // r0
  _DWORD *v1; // r0
  sead__SafeString v3[4]; // [sp+10h] [bp-20h] BYREF

  dword_60C956D0 = 0;
  dword_60C956D4 = 0;
  dword_60C956D8 = 0;
  v3[0].vtable = &sead__SafeStringBase__vtable;
  v3[0].cstr = (char *)&unk_60AC50F7;
  Profile__ctor(&stru_60C956DC, Actor_guruputopido_build, 0x330u, v3, &stru_60B000B4, 18);
  v3[0].vtable = &sead__SafeStringBase__vtable;
  *v0 = &off_60BEF340;
  v3[0].cstr = (char *)&unk_60AC5107;
  Profile__ctor(&stru_60C956F4, Actor_guruputopido_build, 0x331u, v3, (ActorInfo *)&unk_60B000D8, 18);
  *v1 = &off_60BEF34C;
  dword_60C95710 = CurrentStateID + 1;
  dword_60C9570C = (int)&off_60BEF628;
  dword_60C95714 = (int)sub_6035DE04;
  dword_60C95718 = 0;
  dword_60C9571C = (int)sub_6035DE84;
  dword_60C95720 = 0;
  dword_60C95724 = (int)nullsub_3407;
  dword_60C95728 = 0;
  unk_60C9572C = &off_60BEF628;
  unk_60C95730 = CurrentStateID + 2;
  dword_60C95734 = (int)sub_6035DF70;
  dword_60C95738 = 0;
  dword_60C9573C = (int)&loc_6035E0E8;
  dword_60C95740 = 0;
  dword_60C95744 = (int)nullsub_3408;
  dword_60C95748 = 0;
  unk_60C9574C = &off_60BEF628;
  unk_60C95750 = CurrentStateID + 3;
  dword_60C95754 = (int)search_ref;
  dword_60C95758 = 0;
  dword_60C9575C = (int)&loc_6035E590;
  dword_60C95760 = 0;
  dword_60C95764 = (int)nullsub_3409;
  dword_60C95768 = 0;
  unk_60C9576C = &off_60BEF628;
  unk_60C95770 = CurrentStateID + 4;
  CurrentStateID += 5;
  dword_60C95790 = CurrentStateID;
  dword_60C95774 = (int)search_ref_35EA34;
  dword_60C9578C = (int)&off_60BEF628;
  dword_60C95778 = 0;
  dword_60C95794 = (int)sub_6035F074;
  dword_60C9577C = (int)&loc_6035EBB0;
  dword_60C95798 = 0;
  dword_60C95780 = 0;
  dword_60C9579C = (int)SE_EMY_TORPEDO_MOVE_ref_3;
  dword_60C95784 = (int)nullsub_3410;
  dword_60C95788 = 0;
  dword_60C957A0 = 0;
  dword_60C957A4 = (int)nullsub_3411;
  dword_60C957A8 = 0;
  return &dword_60C9578C;
}
