/* registerProfile_BooCircle_ctor_3B2BD0
 * address: 0x603B2BD0   size: 404   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_BooCircle_ctor_3B2BD0()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  dword_60C97D3C = CurrentStateID + 1;
  dword_60C97D38 = (int)&off_60BF5514;
  dword_60C97D40 = (int)nullsub_3544;
  dword_60C97D44 = 0;
  dword_60C97D48 = (int)sub_603B2024;
  dword_60C97D4C = 0;
  dword_60C97D50 = (int)nullsub_3545;
  dword_60C97D54 = 0;
  dword_60C97D5C = CurrentStateID + 2;
  dword_60C97D58 = (int)&off_60BF5514;
  dword_60C97D60 = (int)nullsub_3546;
  dword_60C97D64 = 0;
  dword_60C97D68 = (int)sub_603B2090;
  dword_60C97D6C = 0;
  dword_60C97D70 = (int)sub_603B2130;
  dword_60C97D74 = 0;
  dword_60C97D7C = CurrentStateID + 3;
  dword_60C97D78 = (int)&off_60BF5514;
  dword_60C97D80 = (int)nullsub_3547;
  dword_60C97D84 = 0;
  dword_60C97D88 = (int)sub_603B2148;
  dword_60C97D8C = 0;
  dword_60C97D90 = (int)nullsub_3548;
  dword_60C97D94 = 0;
  CurrentStateID += 4;
  dword_60C97D9C = CurrentStateID;
  dword_60C97D98 = (int)&off_60BF5514;
  dword_60C97DA0 = (int)nullsub_3549;
  dword_60C97DA4 = 0;
  dword_60C97DA8 = (int)sub_603B21B4;
  dword_60C97DAC = 0;
  dword_60C97DB0 = (int)sub_603B2254;
  dword_60C97DB4 = 0;
  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AC5AF2;
  Profile__ctor(&stru_60C97DB8, BooCircle_ctor, 0x310u, &v0, &stru_60B00B50, 0);
}
