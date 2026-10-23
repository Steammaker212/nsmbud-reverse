/* registerProfile_hebikoinfor_buroku_574610
 * address: 0x60574610   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *registerProfile_hebikoinfor_buroku_574610()
{
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = "ヘビコイン用ブロック";
  Profile__ctor(&stru_60CAEAA0, Actor_hebikoinfor_buroku_build, 0x139u, &v1, &stru_60B045E0, 4098);
  dword_60CAEAB8 = 0x4000000;
  return &dword_60CAEAB8;
}
