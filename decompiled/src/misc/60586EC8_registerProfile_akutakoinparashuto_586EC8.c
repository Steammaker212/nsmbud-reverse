/* registerProfile_akutakoinparashuto_586EC8
 * address: 0x60586EC8   size: 292   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void (*registerProfile_akutakoinparashuto_586EC8())()
{
  sead__SafeString v1; // [sp+10h] [bp-18h] BYREF

  dword_60CAF1A8 = 0;
  dword_60CAF1AC = 0;
  dword_60CAF1B0 = 0;
  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = "アクターコインパラシュート";
  Profile__ctor(&stru_60CAF1B4, Actor_akutakoinparashuto_build, 0x1A1u, &v1, &stru_60B04A44, 8198);
  dword_60CAF1D0 = CurrentStateID + 1;
  dword_60CAF1CC = (int)&off_60C05FF4;
  dword_60CAF1D4 = (int)sub_60586314;
  dword_60CAF1D8 = 0;
  dword_60CAF1DC = (int)sub_6058640C;
  dword_60CAF1E0 = 0;
  dword_60CAF1E4 = (int)nullsub_4659;
  dword_60CAF1E8 = 0;
  CurrentStateID += 2;
  dword_60CAF1F0 = CurrentStateID;
  dword_60CAF1EC = (int)&off_60C05FF4;
  dword_60CAF1F4 = (int)sub_60586500;
  dword_60CAF1F8 = 0;
  dword_60CAF1FC = (int)sub_605865F8;
  dword_60CAF200 = 0;
  dword_60CAF204 = (int)nullsub_236;
  dword_60CAF208 = 0;
  return nullsub_236;
}
