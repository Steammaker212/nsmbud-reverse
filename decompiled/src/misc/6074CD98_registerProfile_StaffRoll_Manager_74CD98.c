/* registerProfile_StaffRoll_Manager_74CD98
 * address: 0x6074CD98   size: 400   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void (*registerProfile_StaffRoll_Manager_74CD98())()
{
  _DWORD *v0; // r0
  sead__SafeString v2; // [sp+10h] [bp-10h] BYREF

  dword_60CBE968 = 0;
  dword_60CBE96C = 0;
  dword_60CBE970 = 0;
  dword_60CBE960 = (int)&off_60BFC9EC;
  dword_60CBE964 = (int)&unk_60B0A5B2;
  v2.vtable = &sead__SafeStringBase__vtable;
  v2.cstr = (char *)&unk_60AD9CD0;
  Profile__ctor(&stru_60CBE8D4, Actor_StaffRoll_Manager_build, 0x22u, &v2, &stru_60B0A5B8, 2);
  *v0 = &off_60C23904;
  dword_60CBE8F0 = CurrentStateID + 1;
  dword_60CBE8EC = (int)&off_60C239A4;
  dword_60CBE8F4 = (int)sub_6074AAD8;
  dword_60CBE8F8 = 0;
  dword_60CBE8FC = (int)sub_6074AAE4;
  dword_60CBE900 = 0;
  dword_60CBE904 = (int)nullsub_5446;
  dword_60CBE908 = 0;
  stru_60CBE90C.vtable = &off_60C239A4;
  stru_60CBE90C.id = CurrentStateID + 2;
  dword_60CBE914 = (int)sub_6074AB1C;
  dword_60CBE918 = 0;
  dword_60CBE91C = (int)sub_6074AB74;
  dword_60CBE920 = 0;
  dword_60CBE924 = (int)nullsub_5447;
  dword_60CBE928 = 0;
  CurrentStateID += 3;
  dword_60CBE930 = CurrentStateID;
  dword_60CBE92C = (int)&off_60C239A4;
  dword_60CBE934 = (int)sub_6074ACD0;
  dword_60CBE938 = 0;
  dword_60CBE93C = (int)sub_6074AD24;
  dword_60CBE940 = 0;
  dword_60CBE944 = (int)nullsub_5448;
  dword_60CBE948 = 0;
  return nullsub_5448;
}
