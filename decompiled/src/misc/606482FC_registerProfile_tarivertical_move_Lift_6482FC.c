/* registerProfile_tarivertical_move_Lift_6482FC
 * address: 0x606482FC   size: 420   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void (*registerProfile_tarivertical_move_Lift_6482FC())()
{
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  dword_60CB5EF4 = 0;
  dword_60CB5EF8 = 0;
  dword_60CB5EFC = 0;
  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AD5500;
  Profile__ctor(&stru_60CB5F00, Actor_tarivertical_move_Lift_build, 0xFBu, &v1, &stru_60B074D4, 2);
  dword_60CB5F1C = CurrentStateID + 1;
  dword_60CB5F18 = (int)&off_60C13A18;
  dword_60CB5F20 = (int)sub_6064750C;
  dword_60CB5F24 = 0;
  dword_60CB5F28 = (int)sub_60647568;
  dword_60CB5F2C = 0;
  dword_60CB5F30 = (int)nullsub_5012;
  dword_60CB5F34 = 0;
  stru_60CB5F38.vtable = &off_60C13A18;
  stru_60CB5F38.id = CurrentStateID + 2;
  dword_60CB5F40 = (int)sub_606475C4;
  dword_60CB5F44 = 0;
  dword_60CB5F48 = (int)sub_60647604;
  dword_60CB5F4C = 0;
  dword_60CB5F50 = (int)sub_60647778;
  dword_60CB5F54 = 0;
  dword_60CB5F58 = (int)&off_60C13A18;
  *(_DWORD *)algn_60CB5F5C = CurrentStateID + 3;
  dword_60CB5F60 = (int)sub_6064778C;
  dword_60CB5F64 = 0;
  dword_60CB5F68 = (int)&loc_606477F8;
  dword_60CB5F6C = 0;
  dword_60CB5F70 = (int)nullsub_5013;
  dword_60CB5F74 = 0;
  CurrentStateID += 4;
  dword_60CB5F7C = CurrentStateID;
  dword_60CB5F78 = (int)&off_60C13A18;
  dword_60CB5F80 = (int)sub_60647A78;
  dword_60CB5F84 = 0;
  dword_60CB5F88 = (int)&loc_60647A84;
  dword_60CB5F8C = 0;
  dword_60CB5F90 = (int)nullsub_5014;
  dword_60CB5F94 = 0;
  return nullsub_5014;
}
