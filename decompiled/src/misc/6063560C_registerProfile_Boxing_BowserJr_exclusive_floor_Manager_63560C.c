/* registerProfile_Boxing_BowserJr_exclusive_floor_Manager_63560C
 * address: 0x6063560C   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_Boxing_BowserJr_exclusive_floor_Manager_63560C()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AD4325;
  Profile__ctor(&stru_60CB448C, Actor_Boxing_BowserJr_exclusive_floor_Manager_build, 0x25u, &v0, &stru_60B07254, 0);
}
