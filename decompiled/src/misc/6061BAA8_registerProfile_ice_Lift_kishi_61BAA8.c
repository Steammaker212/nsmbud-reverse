/* registerProfile_ice_Lift_kishi_61BAA8
 * address: 0x6061BAA8   size: 320   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *registerProfile_ice_Lift_kishi_61BAA8()
{
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  dword_60CB34B8 = 0;
  dword_60CB34BC = 0;
  dword_60CB34C0 = 0;
  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AD3C37;
  Profile__ctor(&stru_60CB34C4, Actor_ice_Lift_kishi_build, 0x163u, &v1, &stru_60B0670C, 2);
  dword_60CB34DC = -1103101952;
  dword_60CB34E0 = -1065353216;
  unk_60CB34E4 = -1082130432;
  unk_60CB34E8 = 0;
  dword_60CB34EC = 0;
  unk_60CB34F0 = 1;
  unk_60CB34F4 = 1065353216;
  unk_60CB34F8 = 0;
  dword_60CB34FC = 0;
  dword_60CB3500 = 0;
  dword_60CB3508 = ++CurrentStateID;
  dword_60CB3504 = (int)&off_60C10AF4;
  dword_60CB350C = (int)nullsub_4906;
  dword_60CB3510 = 0;
  dword_60CB3514 = (int)sub_6061B54C;
  dword_60CB3518 = 0;
  dword_60CB351C = (int)nullsub_4907;
  dword_60CB3520 = 0;
  return &dword_60CB3504;
}
