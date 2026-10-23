/* sub_607F7930
 * address: 0x607F7930   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_607F7930(int a1)
{
  signed int result; // r0
  _BYTE *v3; // r5
  int v4; // r4
  int v5[6]; // [sp+8h] [bp-18h] BYREF

  v3 = (_BYTE *)(a1 + 10460);
  result = FIELD_U8(a1, 10460);
  if ( !result )
  {
    v4 = dword_60CC62E4;
    v5[0] = 2;
    v5[1] = (int)CourseSelectTask_create;
    result = SceneMgr_doSceneChange(dword_60CC62E4, a1, v5, 0, 0);
    *v3 = result;
    if ( result == 1 )
    {
      FIELD_U32(v4, 108) = 131074;
      return 131074;
    }
  }
  return result;
}
