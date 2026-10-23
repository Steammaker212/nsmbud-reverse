/* sub_607F78AC
 * address: 0x607F78AC   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_607F78AC(int a1)
{
  int v2; // r4
  signed int result; // r0
  int v4[6]; // [sp+8h] [bp-18h] BYREF

  sub_601FF984();
  v2 = dword_60CC62E4;
  v4[0] = 2;
  v4[1] = (int)CourseSelectTask_create;
  result = SceneMgr_doSceneChange(dword_60CC62E4, a1, v4, 0, 0);
  FIELD_U8(a1, 10460) = result;
  if ( result == 1 )
  {
    FIELD_U32(v2, 108) = 131074;
    return 131074;
  }
  return result;
}
