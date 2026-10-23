/* registerProfile_koin_5BDB54
 * address: 0x605BDB54   size: 400   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void (*registerProfile_koin_5BDB54())()
{
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AD25D6;
  Profile__ctor(&stru_60CB07D4, Actor_koin_build, 0x1A9u, &v1, &stru_60B05540, 8196);
  dword_60CB07F0 = CurrentStateID + 1;
  dword_60CB07EC = (int)&off_60C09AC0;
  dword_60CB07F4 = (int)sub_605BCE90;
  dword_60CB07F8 = 0;
  dword_60CB07FC = (int)sub_605BCEA0;
  dword_60CB0800 = 0;
  dword_60CB0804 = (int)nullsub_4747;
  dword_60CB0808 = 0;
  unk_60CB080C = &off_60C09AC0;
  unk_60CB0810 = CurrentStateID + 2;
  dword_60CB0814 = (int)sub_605BCF18;
  dword_60CB0818 = 0;
  dword_60CB081C = (int)sub_605BCF40;
  dword_60CB0820 = 0;
  dword_60CB0824 = (int)sub_605BD008;
  dword_60CB0828 = 0;
  dword_60CB082C = (int)&off_60C09AC0;
  unk_60CB0830 = CurrentStateID + 3;
  dword_60CB0834 = (int)sub_605BD024;
  dword_60CB0838 = 0;
  dword_60CB083C = (int)sub_605BD07C;
  dword_60CB0840 = 0;
  dword_60CB0844 = (int)nullsub_4748;
  dword_60CB0848 = 0;
  CurrentStateID += 4;
  dword_60CB0850 = CurrentStateID;
  dword_60CB084C = (int)&off_60C09AC0;
  dword_60CB0854 = (int)sub_605BD16C;
  dword_60CB0858 = 0;
  dword_60CB085C = (int)sub_605BD17C;
  dword_60CB0860 = 0;
  dword_60CB0864 = (int)nullsub_4749;
  dword_60CB0868 = 0;
  return nullsub_4749;
}
