/* registerProfile_iron_kishi_70B6D0
 * address: 0x6070B6D0   size: 316   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_iron_kishi_70B6D0()
{
  sead__SafeString v0[4]; // [sp+10h] [bp-20h] BYREF

  dword_60CBC9F8 = 0;
  dword_60CBC9F4 = 0;
  dword_60CBC9F0 = 0;
  dword_60CBC9EC = 0;
  dword_60CBC9E8 = 0;
  dword_60CBC9FC = 1115684864;
  dword_60CBCA00 = 1115684864;
  dword_60CBCA04 = 0;
  dword_60CBCA08 = 0;
  dword_60CBCA10 = ++CurrentStateID;
  dword_60CBCA0C = (int)&off_60C2133C;
  dword_60CBCA14 = (int)sub_6070B2A4;
  dword_60CBCA18 = 0;
  dword_60CBCA1C = (int)sub_6070B2B4;
  dword_60CBCA20 = 0;
  dword_60CBCA24 = (int)nullsub_5349;
  dword_60CBCA28 = 0;
  v0[0].vtable = &sead__SafeStringBase__vtable;
  v0[0].cstr = (char *)&unk_60AD88B4;
  Profile__ctor(&stru_60CBCA2C, Actor_iron_kishi_build, 0xF1u, v0, &stru_60B09C38, 2);
  v0[0].vtable = &sead__SafeStringBase__vtable;
  v0[0].cstr = (char *)&unk_60AD88C9;
  Profile__ctor(&stru_60CBCA44, Actor_iron_kishi_build, 0xF2u, v0, &stru_60B09C38, 2);
}
