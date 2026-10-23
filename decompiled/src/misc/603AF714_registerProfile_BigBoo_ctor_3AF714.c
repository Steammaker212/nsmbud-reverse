/* registerProfile_BigBoo_ctor_3AF714
 * address: 0x603AF714   size: 556   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_BigBoo_ctor_3AF714()
{
  sead__SafeString v0[4]; // [sp+10h] [bp-20h] BYREF

  dword_60C97B20 = 0;
  dword_60C97B24 = 0;
  dword_60C97B28 = 0;
  dword_60C97B30 = CurrentStateID + 1;
  dword_60C97B2C = (int)&off_60BF5144;
  dword_60C97B34 = (int)sub_603AB540;
  dword_60C97B38 = 0;
  dword_60C97B3C = (int)sub_603AB63C;
  dword_60C97B40 = 0;
  dword_60C97B44 = (int)nullsub_196;
  dword_60C97B48 = 0;
  dword_60C97B4C = (int)&off_60BF5144;
  unk_60C97B50 = CurrentStateID + 2;
  dword_60C97B54 = (int)SE_EMY_TERESA_STOP_ref;
  dword_60C97B58 = 0;
  dword_60C97B5C = (int)sub_603AB8C4;
  dword_60C97B60 = 0;
  dword_60C97B64 = (int)nullsub_3539;
  dword_60C97B68 = 0;
  dword_60C97B6C = (int)&off_60BF5144;
  unk_60C97B70 = CurrentStateID + 3;
  dword_60C97B74 = (int)sub_603ABBF0;
  dword_60C97B78 = 0;
  dword_60C97B7C = (int)sub_603ABCC0;
  dword_60C97B80 = 0;
  dword_60C97B84 = (int)nullsub_3540;
  dword_60C97B88 = 0;
  dword_60C97B8C = (int)&off_60BF5144;
  unk_60C97B90 = CurrentStateID + 4;
  CurrentStateID += 5;
  dword_60C97BB0 = CurrentStateID;
  dword_60C97BAC = (int)&off_60BF5144;
  dword_60C97B94 = (int)SE_EMY_TERESA_STOP_ref_3ABEB0;
  dword_60C97B98 = 0;
  dword_60C97BB4 = (int)sub_603AC2C0;
  dword_60C97BB8 = 0;
  dword_60C97B9C = (int)sub_603AC134;
  dword_60C97BA0 = 0;
  dword_60C97BBC = (int)sub_603AC464;
  dword_60C97BC0 = 0;
  dword_60C97BA4 = (int)nullsub_3541;
  dword_60C97BA8 = 0;
  dword_60C97BC4 = (int)nullsub_3542;
  dword_60C97BC8 = 0;
  v0[0].vtable = &sead__SafeStringBase__vtable;
  v0[0].cstr = (char *)&unk_60AC5A07;
  Profile__ctor(&stru_60C97BCC, BigBoo_ctor, 0x30Du, v0, &stru_60B00AC4, 18);
  v0[0].vtable = &sead__SafeStringBase__vtable;
  v0[0].cstr = (char *)&unk_60AC5A11;
  Profile__ctor(&stru_60C97BE4, BigBoo_ctor, 0x30Eu, v0, &stru_60B00AE8, 18);
}
