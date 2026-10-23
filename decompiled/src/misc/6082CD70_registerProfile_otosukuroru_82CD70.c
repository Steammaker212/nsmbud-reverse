/* registerProfile_otosukuroru_82CD70
 * address: 0x6082CD70   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_otosukuroru_82CD70()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AE4CB6;
  Profile__ctor(&stru_60CC6E20, Actor_otosukuroru_build, 0x248u, &v0, &stru_60B0DEDC, 0);
}
