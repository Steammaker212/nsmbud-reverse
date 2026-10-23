/* registerProfile_neshikutariOBJ_child_piramido_resident_6A736C
 * address: 0x606A736C   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_neshikutariOBJ_child_piramido_resident_6A736C()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AD71D1;
  Profile__ctor(&stru_60CB9CE0, Actor_neshikutariOBJ_child_piramido_resident_build, 0xAFu, &v0, &stru_60B084D4, 2);
}
