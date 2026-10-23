/* registerProfile_rotate_control_rengaburoku_R99_572788
 * address: 0x60572788   size: 228   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_rotate_control_rengaburoku_R99_572788()
{
  sead__SafeString v0[4]; // [sp+10h] [bp-20h] BYREF

  v0[0].vtable = &sead__SafeStringBase__vtable;
  v0[0].cstr = (char *)&unk_60AD1825;
  Profile__ctor(&stru_60CAE9B8, Actor_rotate_control_rengaburoku_R99_build, 0x12Eu, v0, &stru_60B04508, 6);
  v0[0].vtable = &sead__SafeStringBase__vtable;
  v0[0].cstr = (char *)&unk_60AD1853;
  Profile__ctor(&stru_60CAE9D0, Actor_rotate_control_rengaburoku_R99_build, 0x12Fu, v0, &stru_60B0452C, 6);
  v0[0].vtable = &sead__SafeStringBase__vtable;
  v0[0].cstr = (char *)&unk_60AD1888;
  Profile__ctor(&stru_60CAE9E8, Actor_rotate_control_rengaburoku_R99_build, 0x130u, v0, &stru_60B04508, 6);
}
