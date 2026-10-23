/* registerProfile_condition_Flag_with_rotate_control_6C9F34
 * address: 0x606C9F34   size: 168   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_condition_Flag_with_rotate_control_6C9F34()
{
  sead__SafeString v0[3]; // [sp+10h] [bp-18h] BYREF

  v0[0].vtable = &sead__SafeStringBase__vtable;
  v0[0].cstr = (char *)&unk_60AD7A04;
  Profile__ctor(&stru_60CBAD7C, Actor_condition_Flag_with_rotate_control_build, 0x2Fu, v0, &stru_60B08AC4, 0);
  v0[0].vtable = &sead__SafeStringBase__vtable;
  v0[0].cstr = (char *)&unk_60AD7A14;
  Profile__ctor(&stru_60CBAD94, Actor_condition_Flag_with_rotate_control_2_build, 0x30u, v0, &stru_60B08AC4, 0);
}
