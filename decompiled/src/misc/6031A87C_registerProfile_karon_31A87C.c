/* registerProfile_karon_31A87C
 * address: 0x6031A87C   size: 628   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateVirtual *registerProfile_karon_31A87C()
{
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  dword_60C9353C = 0;
  dword_60C93540 = 0;
  dword_60C93544 = 0;
  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AC464F;
  Profile__ctor(&stru_60C93548, Actor_karon_build, 0x288u, &v1, &stru_60AFF4F4, 18);
  dword_60C93564 = CurrentStateID + 1;
  dword_60C93560 = (int)&off_60BEA680;
  dword_60C93568 = (int)nullsub_3335;
  dword_60C9356C = 0;
  dword_60C93570 = (int)nullsub_3336;
  dword_60C93574 = 0;
  dword_60C93578 = (int)nullsub_3337;
  dword_60C9357C = 0;
  unk_60C93580 = &off_60BEA680;
  unk_60C93584 = CurrentStateID + 2;
  dword_60C93588 = (int)head_anim_ref;
  dword_60C9358C = 0;
  dword_60C93590 = (int)sub_603188A0;
  dword_60C93594 = 0;
  dword_60C93598 = (int)nullsub_3338;
  dword_60C9359C = 0;
  dword_60C935A0 = (int)&off_60BEA680;
  *(_DWORD *)algn_60C935A4 = CurrentStateID + 3;
  dword_60C935A8 = (int)sub_603189E4;
  dword_60C935AC = 0;
  dword_60C935B0 = (int)SE_EMY_BIG_KALON_REVIVAL_HEAD_ref;
  dword_60C935B4 = 0;
  dword_60C935B8 = (int)nullsub_3339;
  dword_60C935BC = 0;
  dword_60C935C0 = (int)&off_60BEA680;
  *(_DWORD *)algn_60C935C4 = CurrentStateID + 4;
  dword_60C935C8 = (int)sub_60318B6C;
  dword_60C935CC = 0;
  dword_60C935D0 = (int)SE_EMY_BIG_KALON_REVIVAL_HEAD_ref_2;
  dword_60C935D4 = 0;
  dword_60C935D8 = (int)nullsub_3340;
  dword_60C935DC = 0;
  dword_60C935E0 = (int)&off_60BEA680;
  *(_DWORD *)algn_60C935E4 = CurrentStateID + 5;
  dword_60C935E8 = (int)sub_603190E4;
  dword_60C935EC = 0;
  dword_60C935F0 = (int)sub_603190FC;
  dword_60C935F4 = 0;
  dword_60C935F8 = (int)nullsub_3341;
  dword_60C935FC = 0;
  unk_60C93600 = &off_60BEA680;
  unk_60C93604 = CurrentStateID + 6;
  dword_60C93608 = (int)sub_6031922C;
  dword_60C9360C = 0;
  dword_60C93610 = (int)sub_60319300;
  dword_60C93614 = 0;
  dword_60C93618 = (int)nullsub_177;
  dword_60C9361C = 0;
  CurrentStateID += 7;
  dword_60C93624 = CurrentStateID;
  dword_60C93628 = 456;
  dword_60C9362C = 1;
  dword_60C93630 = 460;
  dword_60C93634 = 1;
  dword_60C93638 = 464;
  dword_60C9363C = 1;
  dword_60C93620 = (int)&off_60BEA694;
  dword_60C93640 = (int)&stru_60C90710;
  return &stru_60C90710;
}
