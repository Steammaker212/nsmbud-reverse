/* registerProfile_akutarengaburoku_reru_572368
 * address: 0x60572368   size: 228   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_akutarengaburoku_reru_572368()
{
  sead__SafeString v0[4]; // [sp+10h] [bp-20h] BYREF

  v0[0].vtable = &sead__SafeStringBase__vtable;
  v0[0].cstr = (char *)&unk_60AD17A0;
  Profile__ctor(&stru_60CAE968, Actor_akutarengaburoku_reru_build, 0x123u, v0, &stru_60B044C0, 4098);
  v0[0].vtable = &sead__SafeStringBase__vtable;
  v0[0].cstr = (char *)&unk_60AD17C2;
  Profile__ctor(&stru_60CAE980, Actor_akutarengaburoku_reru_build, 0x124u, v0, &stru_60B044C0, 4098);
  v0[0].vtable = &sead__SafeStringBase__vtable;
  v0[0].cstr = (char *)&unk_60AD17EB;
  Profile__ctor(&stru_60CAE998, Actor_akutarengaburoku_reru_build, 0x125u, v0, &stru_60B044E4, 4098);
}
