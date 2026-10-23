/* registerProfile_ShortPlay_result_Demo_Tag_830A28
 * address: 0x60830A28   size: 268   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void (*registerProfile_ShortPlay_result_Demo_Tag_830A28())()
{
  sead__SafeString v1; // [sp+10h] [bp-18h] BYREF

  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AE4F6F;
  Profile__ctor(&stru_60CC7110, Actor_ShortPlay_result_Demo_Tag_build, 0x24u, &v1, &stru_60B0E148, 0);
  dword_60CC712C = CurrentStateID + 1;
  dword_60CC7128 = (int)&off_60C2AF98;
  dword_60CC7130 = (int)sub_60830794;
  dword_60CC7134 = 0;
  dword_60CC7138 = (int)sub_608307B0;
  dword_60CC713C = 0;
  dword_60CC7140 = (int)nullsub_5627;
  dword_60CC7144 = 0;
  CurrentStateID += 2;
  dword_60CC714C = CurrentStateID;
  dword_60CC7148 = (int)&off_60C2AF98;
  dword_60CC7150 = (int)nullsub_5628;
  dword_60CC7154 = 0;
  dword_60CC7158 = (int)nullsub_5629;
  dword_60CC715C = 0;
  dword_60CC7160 = (int)nullsub_5630;
  dword_60CC7164 = 0;
  return nullsub_5630;
}
