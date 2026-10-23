/* registerProfile_level_faiyaPiranha_furawa_2FDB60
 * address: 0x602FDB60   size: 384   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int (**registerProfile_level_faiyaPiranha_furawa_2FDB60())()
{
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  dword_60C92B08 = 0;
  dword_60C92B0C = 0;
  dword_60C92B10 = 0;
  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AC424D;
  Profile__ctor(&stru_60C92B14, Actor_level_faiyaPiranha_furawa_build, 0x1EFu, &v1, &stru_60AFEF90, 18);
  flt_60C92B2C[0] = 2.1649e-15;
  flt_60C92B2C[1] = -2.0055e15;
  unk_60C92B34 = 41943040;
  unk_60C92B38 = -41943040;
  dword_60C92B40 = CurrentStateID + 1;
  dword_60C92B3C = (int)&off_60BE8554;
  dword_60C92B44 = (int)nullsub_3311;
  dword_60C92B48 = 0;
  dword_60C92B4C = (int)sub_602FCCF0;
  dword_60C92B50 = 0;
  dword_60C92B54 = (int)nullsub_3312;
  dword_60C92B58 = 0;
  unk_60C92B5C = &off_60BE8554;
  unk_60C92B60 = CurrentStateID + 2;
  dword_60C92B64 = (int)nullsub_3313;
  dword_60C92B68 = 0;
  dword_60C92B6C = (int)sub_602FCDBC;
  dword_60C92B70 = 0;
  dword_60C92B74 = (int)nullsub_3314;
  dword_60C92B78 = 0;
  CurrentStateID += 3;
  unk_60C92B7C = &off_60BE8554;
  unk_60C92B80 = CurrentStateID;
  unk_60C92B84 = 676;
  unk_60C92B88 = 1;
  unk_60C92B8C = 680;
  dword_60C92B90 = 1;
  dword_60C92B94 = 684;
  dword_60C92B98 = 1;
  return &off_60BE8554;
}
