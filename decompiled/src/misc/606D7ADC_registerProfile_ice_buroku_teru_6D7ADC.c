/* registerProfile_ice_buroku_teru_6D7ADC
 * address: 0x606D7ADC   size: 496   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void (*registerProfile_ice_buroku_teru_6D7ADC())()
{
  sead__SafeString v1; // [sp+10h] [bp-20h] BYREF

  dword_60CBB6A8 = 0;
  dword_60CBB6AC = 0;
  dword_60CBB6B0 = 0;
  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AD7E5C;
  Profile__ctor(&stru_60CBB6B4, Actor_ice_buroku_teru_build, 0x186u, &v1, &stru_60B08E34, 2066);
  dword_60CBB6D0 = CurrentStateID + 1;
  dword_60CBB6D4 = 196;
  dword_60CBB6D8 = 1;
  dword_60CBB6DC = 200;
  dword_60CBB6E0 = 1;
  dword_60CBB6E4 = 204;
  dword_60CBB6E8 = 1;
  dword_60CBB6CC = (int)&off_60C1E318;
  dword_60CBB6EC = (int)&stru_60CB0ECC;
  dword_60CBB6FC = 1;
  dword_60CBB700 = 224;
  dword_60CBB704 = 1;
  dword_60CBB708 = 228;
  dword_60CBB70C = 1;
  unk_60CBB6F0 = &off_60C1E318;
  unk_60CBB6F4 = CurrentStateID + 2;
  unk_60CBB6F8 = 220;
  dword_60CBB710 = (int)&dword_60CB0C80;
  dword_60CBB71C = 208;
  dword_60CBB720 = 1;
  dword_60CBB724 = 212;
  dword_60CBB728 = 1;
  dword_60CBB72C = 216;
  dword_60CBB730 = 1;
  unk_60CBB714 = &off_60C1E318;
  unk_60CBB718 = CurrentStateID + 3;
  dword_60CBB734 = (int)&dword_60CB0CA4;
  dword_60CBB740 = 232;
  dword_60CBB744 = 1;
  dword_60CBB748 = 236;
  dword_60CBB74C = 1;
  dword_60CBB750 = 240;
  dword_60CBB754 = 1;
  stru_60CBB738.vtable = &off_60C1E318;
  stru_60CBB738.id = CurrentStateID + 4;
  dword_60CBB758 = (int)&dword_60CB0CC8;
  CurrentStateID += 5;
  dword_60CBB760 = CurrentStateID;
  dword_60CBB75C = (int)&off_60C1E32C;
  dword_60CBB764 = (int)SE_OBJ_PNGN_ICE_BREAK_ref_6D5C84;
  dword_60CBB768 = 0;
  dword_60CBB76C = (int)sub_606D5DA8;
  dword_60CBB770 = 0;
  dword_60CBB774 = (int)nullsub_5253;
  dword_60CBB778 = 0;
  return nullsub_5253;
}
