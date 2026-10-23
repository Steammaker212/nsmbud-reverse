/* registerProfile_Quest_akutaTag_82F53C
 * address: 0x6082F53C   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_Quest_akutaTag_82F53C()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = "クエストアクター配置タグ";
  Profile__ctor(&stru_60CC7018, Actor_Quest_akutaTag_build, 0x1C8u, &v0, &stru_60B0E068, 0);
}
