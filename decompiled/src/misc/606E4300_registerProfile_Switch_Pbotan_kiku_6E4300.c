/* registerProfile_Switch_Pbotan_kiku_6E4300
 * address: 0x606E4300   size: 216   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_Switch_Pbotan_kiku_6E4300()
{
  sead__SafeString v0[4]; // [sp+10h] [bp-20h] BYREF

  v0[0].vtable = &sead__SafeStringBase__vtable;
  v0[0].cstr = (char *)&unk_60AD80EC;
  Profile__ctor(&stru_60CBBED0, Actor_Switch_Pbotan_kiku_build, 0x159u, v0, &stru_60B09100, 4100);
  v0[0].vtable = &sead__SafeStringBase__vtable;
  v0[0].cstr = (char *)&unk_60AD8105;
  Profile__ctor(&stru_60CBBEE8, Actor_Switch_Pbotan_kiku_build, 0x15Au, v0, &stru_60B09100, 4100);
  v0[0].vtable = &sead__SafeStringBase__vtable;
  v0[0].cstr = (char *)&unk_60AD8125;
  Profile__ctor(&stru_60CBBF00, Actor_Switch_Pbotan_kiku_build, 0x15Bu, v0, &stru_60B09100, 4100);
}
