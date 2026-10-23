/* registerProfile_KamekBlock_62B540
 * address: 0x6062B540   size: 324   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void (*registerProfile_KamekBlock_62B540())()
{
  sead__SafeString v1; // [sp+10h] [bp-18h] BYREF

  dword_60CB3DC4 = 0;
  dword_60CB3DC0 = 0;
  dword_60CB3DBC = 0;
  dword_60CB3DB8 = 0;
  dword_60CB3DC8 = -1056964608;
  dword_60CB3DCC = 1090519040;
  dword_60CB3DD0 = 1090519040;
  dword_60CB3DD4 = -1056964608;
  dword_60CB3DD8 = 0;
  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AD3FDC;
  Profile__ctor(&stru_60CB3DDC, Actor_KamekBlock_build, 0x143u, &v1, &stru_60B06A18, 2);
  dword_60CB3DF8 = CurrentStateID + 1;
  dword_60CB3DF4 = (int)&off_60C12274;
  dword_60CB3DFC = (int)nullsub_4944;
  dword_60CB3E00 = 0;
  dword_60CB3E04 = (int)SE_BOSS_CMN_MAGIC_DISAPP_ref_2;
  dword_60CB3E08 = 0;
  dword_60CB3E0C = (int)nullsub_4945;
  dword_60CB3E10 = 0;
  CurrentStateID += 2;
  dword_60CB3E18 = CurrentStateID;
  dword_60CB3E14 = (int)&off_60C12274;
  dword_60CB3E1C = (int)sub_6062A908;
  dword_60CB3E20 = 0;
  dword_60CB3E24 = (int)sub_6062A940;
  dword_60CB3E28 = 0;
  dword_60CB3E2C = (int)nullsub_4946;
  dword_60CB3E30 = 0;
  return nullsub_4946;
}
