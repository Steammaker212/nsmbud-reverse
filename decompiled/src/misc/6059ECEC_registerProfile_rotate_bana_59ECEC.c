/* registerProfile_rotate_bana_59ECEC
 * address: 0x6059ECEC   size: 272   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void (*registerProfile_rotate_bana_59ECEC())()
{
  sead__SafeString v1; // [sp+10h] [bp-18h] BYREF

  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AD2112;
  Profile__ctor(&stru_60CAFBE4, Actor_rotate_bana_build, 0xE3u, &v1, &stru_60B04DDC, 2);
  dword_60CAFC00 = CurrentStateID + 1;
  dword_60CAFBFC = (int)&off_60C07BDC;
  dword_60CAFC04 = (int)sub_6059DB80;
  dword_60CAFC08 = 0;
  dword_60CAFC0C = (int)sub_6059DB90;
  dword_60CAFC10 = 0;
  dword_60CAFC14 = (int)nullsub_4700;
  dword_60CAFC18 = 0;
  CurrentStateID += 2;
  dword_60CAFC20 = CurrentStateID;
  dword_60CAFC1C = (int)&off_60C07BDC;
  dword_60CAFC24 = (int)nullsub_4701;
  dword_60CAFC28 = 0;
  dword_60CAFC2C = (int)sub_6059DBDC;
  dword_60CAFC30 = 0;
  dword_60CAFC34 = (int)nullsub_4702;
  dword_60CAFC38 = 0;
  return nullsub_4702;
}
