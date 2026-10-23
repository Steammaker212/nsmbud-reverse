/* sub_601EAE10
 * address: 0x601EAE10   size: 208   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_601EAE10()
{
  dword_60C8B1C4 = 0;
  dword_60C8B1C8 = 0;
  dword_60C8B1CC = 0;
  dword_60C8B1AC = (int)&sead__SafeStringBase__vtable;
  dword_60C8B1B0 = (int)"W101";
  stru_60C8B148.id = CurrentStateID + 1;
  unk_60C8B150 = 0;
  dword_60C8B154 = 1;
  dword_60C8B158 = 4;
  dword_60C8B15C = 1;
  dword_60C8B160 = 8;
  dword_60C8B164 = 1;
  stru_60C8B148.vtable = &off_60BD6E78;
  dword_60C8B168 = (int)&NullState;
  CurrentStateID += 2;
  stru_60C8B16C.id = CurrentStateID;
  unk_60C8B174 = 12;
  dword_60C8B178 = 1;
  dword_60C8B17C = 16;
  dword_60C8B180 = 1;
  dword_60C8B184 = 20;
  dword_60C8B188 = 1;
  stru_60C8B16C.vtable = &off_60BD6E78;
  dword_60C8B18C = (int)&NullState;
  return CurrentStateID;
}
