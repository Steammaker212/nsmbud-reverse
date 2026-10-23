/* registerProfile_Tag_82DDEC
 * address: 0x6082DDEC   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_Tag_82DDEC()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AE4D28;
  Profile__ctor(&stru_60CC6EF0, Actor_Tag_build, 0x24Eu, &v0, &stru_60B0DF6C, 0);
}
