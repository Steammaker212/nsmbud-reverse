/* baloon_hey_ref
 * address: 0x6074FFBC   size: 312   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *baloon_hey_ref()
{
  sead__SafeString v1; // [sp+10h] [bp-18h] BYREF

  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AD9E27;
  Profile__ctor(&stru_60CBEA48, Actor_goruDemo_Toad_build, 0x1BDu, &v1, 0, 0);
  dword_60CBEA64 = CurrentStateID + 1;
  dword_60CBEA60 = (int)&off_60C23CC4;
  dword_60CBEA68 = (int)sub_6074F344;
  dword_60CBEA6C = 0;
  dword_60CBEA70 = (int)sub_6074F358;
  dword_60CBEA74 = 0;
  dword_60CBEA78 = (int)nullsub_5451;
  dword_60CBEA7C = 0;
  CurrentStateID += 2;
  dword_60CBEA84 = CurrentStateID;
  dword_60CBEA80 = (int)&off_60C23CC4;
  dword_60CBEA88 = (int)sub_6074F3D4;
  dword_60CBEA8C = 0;
  dword_60CBEA90 = (int)&loc_6074F3FC;
  dword_60CBEA94 = 0;
  dword_60CBEA98 = (int)nullsub_5452;
  dword_60CBEA9C = 0;
  dword_60CBEAB8 = (int)&sead__SafeStringBase__vtable;
  dword_60CBEABC = (int)"baloon_hey";
  dword_60CBEAC0 = (int)&sead__SafeStringBase__vtable;
  dword_60CBEAC4 = (int)"baloon_hey";
  dword_60CBEAB0 = 811271600;
  dword_60CBEAB4 = 0x20000000;
  return &dword_60CBEAB0;
}
