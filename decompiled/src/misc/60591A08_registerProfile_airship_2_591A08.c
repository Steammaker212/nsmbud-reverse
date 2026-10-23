/* registerProfile_airship_2_591A08
 * address: 0x60591A08   size: 272   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_airship_2_591A08()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  dword_60CAF6F8 = CurrentStateID + 1;
  dword_60CAF6F4 = (int)&off_60C07458;
  dword_60CAF6FC = (int)sub_60591278;
  dword_60CAF700 = 0;
  dword_60CAF704 = (int)sub_6059140C;
  dword_60CAF708 = 0;
  dword_60CAF70C = (int)nullsub_4686;
  dword_60CAF710 = 0;
  CurrentStateID += 2;
  dword_60CAF718 = CurrentStateID;
  dword_60CAF714 = (int)&off_60C07458;
  dword_60CAF71C = (int)sub_60591414;
  dword_60CAF720 = 0;
  dword_60CAF724 = (int)sub_60591480;
  dword_60CAF728 = 0;
  dword_60CAF72C = (int)nullsub_4687;
  dword_60CAF730 = 0;
  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AD1FFE;
  Profile__ctor(&stru_60CAF734, Actor_airship_2_build, 0x10Bu, &v0, &stru_60B04C90, 2);
}
