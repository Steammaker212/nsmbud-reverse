/* registerProfile_pipe_big_RDash_5C8E54
 * address: 0x605C8E54   size: 960   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float registerProfile_pipe_big_RDash_5C8E54()
{
  float result; // s0
  sead__SafeString v1[4]; // [sp+10h] [bp-20h] BYREF

  v1[0].vtable = &sead__SafeStringBase__vtable;
  v1[0].cstr = (char *)&unk_60AD2902;
  Profile__ctor(&stru_60CB0AD4, Actor_pipe_big_RDash_build, 0x91u, v1, &stru_60B05704, 2);
  v1[0].vtable = &sead__SafeStringBase__vtable;
  v1[0].cstr = (char *)&unk_60AD290F;
  Profile__ctor(&stru_60CB0AEC, Actor_pipe_big_RDash_build, 0x92u, v1, &stru_60B05704, 2);
  dword_60CB0B08 = CurrentStateID + 1;
  dword_60CB0B04 = (int)&off_60C0A4F4;
  dword_60CB0B0C = (int)sub_605C7208;
  dword_60CB0B10 = 0;
  dword_60CB0B14 = (int)sub_605C7220;
  dword_60CB0B18 = 0;
  dword_60CB0B1C = (int)nullsub_4754;
  dword_60CB0B20 = 0;
  stru_60CB0B24.vtable = &off_60C0A4F4;
  stru_60CB0B24.id = CurrentStateID + 2;
  dword_60CB0B2C = (int)nullsub_4755;
  dword_60CB0B30 = 0;
  dword_60CB0B34 = (int)sub_605C7248;
  dword_60CB0B38 = 0;
  dword_60CB0B3C = (int)nullsub_4756;
  dword_60CB0B40 = 0;
  stru_60CB0B44.vtable = &off_60C0A4F4;
  stru_60CB0B44.id = CurrentStateID + 3;
  dword_60CB0B4C = (int)sub_605C72DC;
  dword_60CB0B50 = 0;
  dword_60CB0B54 = (int)sub_605C72E8;
  dword_60CB0B58 = 0;
  dword_60CB0B5C = (int)nullsub_4757;
  dword_60CB0B60 = 0;
  stru_60CB0B64.vtable = &off_60C0A4F4;
  stru_60CB0B64.id = CurrentStateID + 4;
  dword_60CB0B6C = (int)sub_605C7314;
  dword_60CB0B70 = 0;
  dword_60CB0B74 = (int)SE_PLY_CANNON_READY_ref;
  dword_60CB0B78 = 0;
  dword_60CB0B7C = (int)nullsub_4758;
  dword_60CB0B80 = 0;
  stru_60CB0B84.vtable = &off_60C0A4F4;
  stru_60CB0B84.id = CurrentStateID + 5;
  dword_60CB0B8C = (int)nullsub_4759;
  dword_60CB0B90 = 0;
  dword_60CB0B94 = (int)sub_605C7410;
  dword_60CB0B98 = 0;
  dword_60CB0B9C = (int)nullsub_4760;
  dword_60CB0BA0 = 0;
  stru_60CB0BA4.vtable = &off_60C0A4F4;
  stru_60CB0BA4.id = CurrentStateID + 6;
  CurrentStateID += 7;
  dword_60CB0BC8 = CurrentStateID;
  dword_60CB0BC4 = (int)&off_60C0A4F4;
  dword_60CB0BAC = (int)sub_605C7428;
  dword_60CB0BB0 = 0;
  dword_60CB0BCC = (int)sub_605C74F8;
  dword_60CB0BD0 = 0;
  dword_60CB0BB4 = (int)sub_605C744C;
  dword_60CB0BB8 = 0;
  dword_60CB0BD4 = (int)sub_605C7504;
  dword_60CB0BD8 = 0;
  dword_60CB0BBC = (int)nullsub_4761;
  dword_60CB0BC0 = 0;
  dword_60CB0BDC = (int)nullsub_4762;
  dword_60CB0BE0 = 0;
  dword_60CB0BE4[0] = 1090846720;
  dword_60CB0BE8 = 637534208;
  byte_60CB0BEC = 6;
  dword_60CB0BF0 = 1090846720;
  dword_60CB0BF4 = 1509949440;
  byte_60CB0BF8 = 6;
  dword_60CB0BFC = 1088684032;
  dword_60CB0C00 = 939524096;
  byte_60CB0C04 = 8;
  dword_60CB0C08 = 1088684032;
  dword_60CB0C0C = 1207959552;
  byte_60CB0C10 = 8;
  dword_60CB0C14 = 1090519040;
  dword_60CB0C18 = 0x40000000;
  byte_60CB0C1C = 53;
  dword_60CB0C20 = 1092616192;
  dword_60CB0C24 = 0x20000000;
  byte_60CB0C28 = 18;
  dword_60CB0C2C = 1092616192;
  dword_60CB0C30 = 1610612736;
  byte_60CB0C34 = 18;
  dword_60CB0C38 = 1091895296;
  dword_60CB0C3C = 0x20000000;
  byte_60CB0C40 = 18;
  dword_60CB0C44 = 1091895296;
  dword_60CB0C48 = 1610612736;
  byte_60CB0C4C = 18;
  dword_60CB0C50 = 1088856064;
  dword_60CB0C54 = 939524096;
  byte_60CB0C58 = 25;
  dword_60CB0C5C = 1088856064;
  dword_60CB0C60 = 1207959552;
  byte_60CB0C64 = 25;
  result = (float)(16.0 + 32.0) + 16.0;
  *(float *)&dword_60CB0C6C = 32.0 * 0.75;
  *(float *)&dword_60CB0C68 = result;
  return result;
}
