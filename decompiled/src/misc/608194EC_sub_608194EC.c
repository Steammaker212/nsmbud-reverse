/* sub_608194EC
 * address: 0x608194EC   size: 176   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_608194EC(_BYTE *a1, int a2)
{
  int v3; // r5
  int v5[6]; // [sp+8h] [bp-18h] BYREF

  if ( !a1[221] )
    return (unsigned __int8)(a1[223] | a1[222]) != 0
        || FIELD_U32(dword_60C9CFB8, 76) + FIELD_U32(dword_60C9CFB8, 72) != 0;
  v3 = 1;
  if ( a2 )
  {
    v5[0] = 2;
    v5[1] = (int)TitleScene_create;
    if ( SceneMgr_doSceneChange(dword_60CC62E4, a2, v5, 0, 0) == 1 )
    {
      v3 = 1;
      a1[223] = 1;
    }
  }
  return v3;
}
