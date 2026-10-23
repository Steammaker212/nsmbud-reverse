/* sub_607DEE38
 * address: 0x607DEE38   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_607DEE38(int a1)
{
  signed int result; // r0
  _DWORD v3[6]; // [sp+8h] [bp-18h] BYREF

  result = FIELD_U8(a1, 3952);
  if ( result )
  {
    result = sub_607F6904(dword_60CC62E4);
    if ( !result )
    {
      v3[0] = 2;
      v3[1] = TitleScene_create;
      result = SceneMgr_doSceneChange(dword_60CC62E4, a1, (int)v3, 0, 0);
      FIELD_U32(dword_60CC62E4, 108) = 655362;
      if ( result == 1 )
        FIELD_U8(a1, 3952) = 0;
    }
  }
  return result;
}
