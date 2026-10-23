/* registerProfile_korekushonparent_control_R6castle_5F66C4
 * address: 0x605F66C4   size: 344   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_korekushonparent_control_R6castle_5F66C4()
{
  sead__SafeString v0[4]; // [sp+10h] [bp-20h] BYREF

  v0[0].vtable = &sead__SafeStringBase__vtable;
  v0[0].cstr = (char *)&unk_60AD2EEB;
  Profile__ctor(&stru_60CB22B8, Actor_korekushonparent_control_R6castle_build, 0x1AEu, v0, &stru_60B05E58, 0x2002);
  v0[0].vtable = &sead__SafeStringBase__vtable;
  v0[0].cstr = (char *)&unk_60AD2F07;
  Profile__ctor(&stru_60CB22D0, Actor_korekushonparent_control_R6castle_build, 0x1ADu, v0, &stru_60B05E7C, 0x2002);
  v0[0].vtable = &sead__SafeStringBase__vtable;
  v0[0].cstr = (char *)&unk_60AD2F32;
  Profile__ctor(&stru_60CB22E8, Actor_korekushonparent_control_R6castle_build, 0x1AFu, v0, &stru_60B05E58, 0x2002);
  v0[0].vtable = &sead__SafeStringBase__vtable;
  v0[0].cstr = (char *)&unk_60AD2F55;
  Profile__ctor(&stru_60CB2300, Actor_korekushonparent_control_R6castle_build, 0x1B0u, v0, &stru_60B05EA0, 0x2002);
  v0[0].vtable = &sead__SafeStringBase__vtable;
  v0[0].cstr = (char *)&unk_60AD2F8D;
  Profile__ctor(&stru_60CB2318, Actor_korekushonparent_control_R6castle_build, 0x1B1u, v0, &stru_60B05E58, 0x2002);
}
