/* registerProfile_Quest_for_Demo_rokeshonTag_82F828
 * address: 0x6082F828   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_Quest_for_Demo_rokeshonTag_82F828()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  dword_60CC7038 = 0;
  dword_60CC703C = 0;
  dword_60CC7040 = 0;
  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AE4ED1;
  Profile__ctor(&stru_60CC7044, Actor_Quest_for_Demo_rokeshonTag_build, 0x1C9u, &v0, &stru_60B0E08C, 0);
}
