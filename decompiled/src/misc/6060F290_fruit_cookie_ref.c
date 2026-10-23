/* fruit_cookie_ref
 * address: 0x6060F290   size: 384   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *fruit_cookie_ref()
{
  sead__SafeString v1; // [sp+10h] [bp-18h] BYREF

  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AD3887;
  Profile__ctor(&stru_60CB2F88, Actor_furutsukuki_build, 0x1C4u, &v1, 0, 2);
  dword_60CB2FA4 = CurrentStateID + 1;
  dword_60CB2FA0 = (int)&off_60C0FCDC;
  dword_60CB2FA8 = (int)nullsub_4883;
  dword_60CB2FAC = 0;
  dword_60CB2FB0 = (int)nullsub_4884;
  dword_60CB2FB4 = 0;
  dword_60CB2FB8 = (int)nullsub_4885;
  dword_60CB2FBC = 0;
  stru_60CB2FC0.vtable = &off_60C0FCDC;
  stru_60CB2FC0.id = CurrentStateID + 2;
  dword_60CB2FC8 = (int)nullsub_4886;
  dword_60CB2FCC = 0;
  dword_60CB2FD0 = (int)nullsub_4887;
  dword_60CB2FD4 = 0;
  dword_60CB2FD8 = (int)nullsub_4888;
  dword_60CB2FDC = 0;
  CurrentStateID += 3;
  dword_60CB2FE4 = CurrentStateID;
  dword_60CB2FE0 = (int)&off_60C0FCDC;
  dword_60CB2FE8 = (int)sub_6060EBBC;
  dword_60CB2FEC = 0;
  dword_60CB2FF0 = (int)sub_6060EBE8;
  dword_60CB2FF4 = 0;
  dword_60CB2FF8 = (int)nullsub_4889;
  dword_60CB2FFC = 0;
  dword_60CB3010[0] = (int)&sead__SafeStringBase__vtable;
  unk_60CB3014 = "fruit_cookie";
  unk_60CB3018 = &sead__SafeStringBase__vtable;
  dword_60CB301C = (int)"fruit_cookie";
  dword_60CB3020 = (int)&sead__SafeStringBase__vtable;
  dword_60CB3024 = (int)"wait";
  dword_60CB3028 = (int)&sead__SafeStringBase__vtable;
  dword_60CB302C = (int)"get";
  return dword_60CB3010;
}
