/* registerProfile_neshikutariOBJ_child_piramido_6A6D08
 * address: 0x606A6D08   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_neshikutariOBJ_child_piramido_6A6D08()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AD70DB;
  Profile__ctor(&stru_60CB9B54, Actor_neshikutariOBJ_child_piramido_build, 0xAEu, &v0, &stru_60B084B0, 2);
}
