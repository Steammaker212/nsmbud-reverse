/* registerProfile_poison_mist_283730
 * address: 0x60283730   size: 340   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned __int64 registerProfile_poison_mist_283730()
{
  sead__SafeString v1[4]; // [sp+10h] [bp-20h] BYREF

  dword_60C8F0D8 = 0;
  dword_60C8F0DC = 0;
  dword_60C8F0E0 = 0;
  v1[0].vtable = &sead__SafeStringBase__vtable;
  v1[0].cstr = (char *)&unk_60AC2DB3;
  Profile__ctor(&stru_60C8F070, Actor_poison_mist_build, 0x314u, v1, &stru_60AFDDF4, 0);
  v1[0].vtable = &sead__SafeStringBase__vtable;
  v1[0].cstr = (char *)&unk_60AC2DC6;
  Profile__ctor(&stru_60C8F088, Actor_poison_mist_2_build, 0x315u, v1, &stru_60AFDDF4, 0);
  dword_60C8F0B0 = -1;
  byte_60C8F0B4 = -1;
  byte_60C8F0B5 = 0;
  byte_60C8F0B6 = 0;
  byte_60C8F0B7 = 0;
  byte_60C8F0B8 = -1;
  byte_60C8F0B9 = -1;
  byte_60C8F0BA = -6;
  byte_60C8F0BB = -6;
  byte_60C8F0BC = -1;
  byte_60C8F0BD = -1;
  byte_60C8F0BE = 50;
  byte_60C8F0BF = 0;
  byte_60C8F0C0 = -1;
  byte_60C8F0C1 = 0;
  byte_60C8F0C2 = 0;
  byte_60C8F0C3 = 5;
  byte_60C8F0C4 = -1;
  byte_60C8F0C5 = 55;
  byte_60C8F0C6 = 0;
  byte_60C8F0C7 = -111;
  dword_60C8F0C8 = -1;
  byte_60C8F0CC = -1;
  byte_60C8F0CD = -1;
  byte_60C8F0CE = -26;
  byte_60C8F0CF = -76;
  unk_60C8F0D0 = 0xC7CFFFFFFFFFFFFFLL;
  return 0xC7CFFFFFFFFFFFFFLL;
}
