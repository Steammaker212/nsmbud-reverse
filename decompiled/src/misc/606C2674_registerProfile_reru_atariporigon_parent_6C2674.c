/* registerProfile_reru_atariporigon_parent_6C2674
 * address: 0x606C2674   size: 292   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void (*registerProfile_reru_atariporigon_parent_6C2674())()
{
  sead__SafeString v1; // [sp+10h] [bp-18h] BYREF

  dword_60CBA9C4 = 0x400000;
  dword_60CBA9C8 = 0x10000000;
  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AD789B;
  Profile__ctor(&stru_60CBA96C, Actor_reru_atariporigon_parent_build, 0xDu, &v1, &stru_60B089C4, 2);
  dword_60CBA988 = CurrentStateID + 1;
  dword_60CBA984 = (int)&off_60C1C018;
  dword_60CBA98C = (int)nullsub_5214;
  dword_60CBA990 = 0;
  dword_60CBA994 = (int)sub_606C1F24;
  dword_60CBA998 = 0;
  dword_60CBA99C = (int)nullsub_5215;
  dword_60CBA9A0 = 0;
  CurrentStateID += 2;
  dword_60CBA9A8 = CurrentStateID;
  dword_60CBA9A4 = (int)&off_60C1C018;
  dword_60CBA9AC = (int)nullsub_5216;
  dword_60CBA9B0 = 0;
  dword_60CBA9B4 = (int)sub_606C1F84;
  dword_60CBA9B8 = 0;
  dword_60CBA9BC = (int)nullsub_5217;
  dword_60CBA9C0 = 0;
  return nullsub_5217;
}
