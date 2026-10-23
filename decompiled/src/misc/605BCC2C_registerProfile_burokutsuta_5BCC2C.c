/* registerProfile_burokutsuta_5BCC2C
 * address: 0x605BCC2C   size: 384   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void (*registerProfile_burokutsuta_5BCC2C())()
{
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  dword_60CB073C = 0;
  dword_60CB0738 = 0;
  dword_60CB0734 = 0;
  dword_60CB0730 = 0;
  dword_60CB0740 = -1056964608;
  dword_60CB0744 = 0;
  dword_60CB0748 = 1090519040;
  dword_60CB074C = 0;
  dword_60CB0750 = 0;
  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AD2597;
  Profile__ctor(&stru_60CB0754, Actor_burokutsuta_build, 0xBDu, &v1, &stru_60B054F0, 0);
  dword_60CB0770 = CurrentStateID + 1;
  dword_60CB076C = (int)&off_60C09920;
  dword_60CB0774 = (int)SE_OBJ_TSUTA_APPEAR_ref;
  dword_60CB0778 = 0;
  dword_60CB077C = (int)sub_605BBBE8;
  dword_60CB0780 = 0;
  dword_60CB0784 = (int)nullsub_4743;
  dword_60CB0788 = 0;
  unk_60CB078C = &off_60C09920;
  unk_60CB0790 = CurrentStateID + 2;
  dword_60CB0794 = (int)sub_605BBD04;
  dword_60CB0798 = 0;
  dword_60CB079C = (int)head_root_ref;
  dword_60CB07A0 = 0;
  dword_60CB07A4 = (int)nullsub_4744;
  dword_60CB07A8 = 0;
  CurrentStateID += 3;
  dword_60CB07B0 = CurrentStateID;
  dword_60CB07AC = (int)&off_60C09920;
  dword_60CB07B4 = (int)nullsub_4745;
  dword_60CB07B8 = 0;
  dword_60CB07BC = (int)sub_605BBEC4;
  dword_60CB07C0 = 0;
  dword_60CB07C4 = (int)nullsub_4746;
  dword_60CB07C8 = 0;
  return nullsub_4746;
}
