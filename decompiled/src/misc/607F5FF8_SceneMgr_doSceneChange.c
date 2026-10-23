/* SceneMgr_doSceneChange
 * address: 0x607F5FF8   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall SceneMgr_doSceneChange(int a1, int a2, int *a3, int a4, int a5)
{
  signed int v6; // r1
  signed int result; // r0

  v6 = sub_607F6028(a1, a2, (int)a3, a4);
  result = 0;
  if ( v6 == 1 )
  {
    sub_60023CB0(a3);
    return 1;
  }
  return result;
}
