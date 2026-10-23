/* sub_6040BB08
 * address: 0x6040BB08   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int sub_6040BB08()
{
  signed int result; // r0
  int v1; // r1
  bool v2; // zf
  int v3; // r3
  int v4; // r1
  _DWORD v5[4]; // [sp+8h] [bp-10h] BYREF

  result = dword_60C99DD4;
  v1 = FIELD_U32(dword_60C99DD4, 260);
  if ( v1 )
  {
    v2 = FIELD_U8(v1, 4042) == 0;
    if ( FIELD_U8(v1, 4042) )
      v2 = FIELD_U8(v1, 4043) == 0;
    if ( v2 )
    {
      v3 = FIELD_U32(dword_60C99DD4, 16);
      v4 = 0;
      if ( v3 )
        v4 = FIELD_U32(v3, 16);
      v5[0] = 2;
      v5[1] = GameSetupScene_create;
      return SceneMgr_doSceneChange(dword_60CC62E4, v4, (int)v5, 0, 0);
    }
  }
  return result;
}
