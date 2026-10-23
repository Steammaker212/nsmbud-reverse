/* registerProfile_kosufor_akutapataburoku_571AF4
 * address: 0x60571AF4   size: 404   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *registerProfile_kosufor_akutapataburoku_571AF4()
{
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  dword_60CAE8CC = 0;
  dword_60CAE8C8 = 0;
  dword_60CAE8C4 = 0;
  dword_60CAE8C0 = 0;
  dword_60CAE8D0 = -1056964608;
  dword_60CAE8D4 = 1090519040;
  dword_60CAE8D8 = 1090519040;
  dword_60CAE8DC = -1056964608;
  dword_60CAE8E0 = 0;
  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AD1772;
  Profile__ctor(&stru_60CAE8E4, Actor_kosufor_akutapataburoku_build, 0x140u, &v1, &stru_60B0449C, 4098);
  dword_60CAE900 = CurrentStateID + 1;
  dword_60CAE8FC = (int)&off_60C03078;
  dword_60CAE904 = (int)nullsub_4631;
  dword_60CAE908 = 0;
  dword_60CAE90C = (int)sub_605706DC;
  dword_60CAE910 = 0;
  dword_60CAE914 = (int)nullsub_4632;
  dword_60CAE918 = 0;
  unk_60CAE91C = &off_60C03078;
  unk_60CAE920 = CurrentStateID + 2;
  dword_60CAE924 = (int)sub_60570730;
  dword_60CAE928 = 0;
  dword_60CAE92C = (int)sub_60570768;
  dword_60CAE930 = 0;
  dword_60CAE934 = (int)nullsub_4633;
  dword_60CAE938 = 0;
  CurrentStateID += 3;
  dword_60CAE940 = CurrentStateID;
  dword_60CAE93C = (int)&off_60C03078;
  dword_60CAE944 = (int)nullsub_4634;
  dword_60CAE948 = 0;
  dword_60CAE94C = (int)sub_6057093C;
  dword_60CAE950 = 0;
  dword_60CAE954 = (int)nullsub_4635;
  dword_60CAE958 = 0;
  dword_60CAE95C = 0x2000000;
  return &dword_60CAE95C;
}
