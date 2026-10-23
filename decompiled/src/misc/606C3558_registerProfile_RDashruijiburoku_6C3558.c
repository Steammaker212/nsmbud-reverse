/* registerProfile_RDashruijiburoku_6C3558
 * address: 0x606C3558   size: 428   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void (*registerProfile_RDashruijiburoku_6C3558())()
{
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  dword_60CBAA50 = 0;
  dword_60CBAA54 = 0;
  dword_60CBAA58 = 0;
  dword_60CBAA68 = 0;
  dword_60CBAA64 = 0;
  dword_60CBAA60 = 0;
  dword_60CBAA5C = 0;
  dword_60CBAA6C = -1052770304;
  dword_60CBAA70 = 1094713344;
  dword_60CBAA74 = 1094713344;
  dword_60CBAA78 = -1052770304;
  dword_60CBAA7C = 0;
  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AD78CC;
  Profile__ctor(&stru_60CBA9CC, Actor_RDashruijiburoku_build, 0xF9u, &v1, &stru_60B089E8, 4098);
  dword_60CBA9E8 = CurrentStateID + 1;
  dword_60CBA9EC = 404;
  dword_60CBA9F0 = 1;
  dword_60CBA9F4 = 408;
  dword_60CBA9F8 = 1;
  dword_60CBA9FC = 412;
  dword_60CBAA00 = 1;
  dword_60CBA9E4 = (int)&off_60C1C1E0;
  dword_60CBAA04 = (int)&dword_60CAE2F8;
  dword_60CBAA0C = CurrentStateID + 2;
  dword_60CBAA08 = (int)&off_60C1C1F4;
  dword_60CBAA10 = (int)sub_606C2840;
  dword_60CBAA14 = 0;
  dword_60CBAA18 = (int)sub_606C289C;
  dword_60CBAA1C = 0;
  dword_60CBAA20 = (int)nullsub_5218;
  dword_60CBAA24 = 0;
  CurrentStateID += 3;
  dword_60CBAA2C = CurrentStateID;
  dword_60CBAA28 = (int)&off_60C1C1F4;
  dword_60CBAA30 = (int)nullsub_5219;
  dword_60CBAA34 = 0;
  dword_60CBAA38 = (int)nullsub_5220;
  dword_60CBAA3C = 0;
  dword_60CBAA40 = (int)nullsub_5221;
  dword_60CBAA44 = 0;
  return nullsub_5221;
}
