/* registerProfile_bosuBowser_Switch_botan_6DF8C8
 * address: 0x606DF8C8   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_bosuBowser_Switch_botan_6DF8C8()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AD7FC0;
  Profile__ctor(&stru_60CBBCB4, Actor_bosuBowser_Switch_botan_build, 0x15Cu, &v0, &stru_60B09074, 4100);
}
