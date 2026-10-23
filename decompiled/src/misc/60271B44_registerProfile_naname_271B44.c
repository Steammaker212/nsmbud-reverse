/* registerProfile_naname_271B44
 * address: 0x60271B44   size: 476   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_naname_271B44()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  dword_60C8EA40 = 0;
  dword_60C8EA44 = 0;
  dword_60C8EA48 = 0;
  dword_60C8EA58 = 0;
  dword_60C8EA54 = 0;
  dword_60C8EA50 = 0;
  dword_60C8EA4C = 0;
  dword_60C8EA5C = -1040187392;
  dword_60C8EA60 = 1117519872;
  dword_60C8EA64 = 1107296256;
  dword_60C8EA68 = 0;
  dword_60C8EA6C = 0;
  dword_60C8E99C = CurrentStateID + 1;
  dword_60C8E998 = (int)&off_60BDC8F0;
  dword_60C8E9A0 = (int)sub_602707F8;
  dword_60C8E9A4 = 0;
  dword_60C8E9A8 = (int)sub_60270808;
  dword_60C8E9AC = 0;
  dword_60C8E9B0 = (int)nullsub_3120;
  dword_60C8E9B4 = 0;
  dword_60C8E9BC = CurrentStateID + 2;
  dword_60C8E9B8 = (int)&off_60BDC8F0;
  dword_60C8E9C0 = (int)sub_602708E8;
  dword_60C8E9C4 = 0;
  dword_60C8E9C8 = (int)sub_602708F8;
  dword_60C8E9CC = 0;
  dword_60C8E9D0 = (int)nullsub_3121;
  dword_60C8E9D4 = 0;
  dword_60C8E9DC = CurrentStateID + 3;
  dword_60C8E9D8 = (int)&off_60BDC8F0;
  dword_60C8E9E0 = (int)sub_602709D4;
  dword_60C8E9E4 = 0;
  dword_60C8E9E8 = (int)sub_602709F0;
  dword_60C8E9EC = 0;
  dword_60C8E9F0 = (int)nullsub_3122;
  dword_60C8E9F4 = 0;
  CurrentStateID += 4;
  dword_60C8E9FC = CurrentStateID;
  dword_60C8E9F8 = (int)&off_60BDC8F0;
  dword_60C8EA00 = (int)nullsub_3123;
  dword_60C8EA04 = 0;
  dword_60C8EA08 = (int)sub_60270AB8;
  dword_60C8EA0C = 0;
  dword_60C8EA10 = (int)nullsub_3124;
  dword_60C8EA14 = 0;
  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AC2C4D;
  Profile__ctor(&stru_60C8EA18, Actor_naname_build, 0x72u, &v0, &stru_60AFDBF4, 0);
}
