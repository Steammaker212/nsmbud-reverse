/* sub_607E0E74
 * address: 0x607E0E74   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_607E0E74(int a1)
{
  signed int result; // r0
  _BYTE *v3; // r4
  _DWORD v4[4]; // [sp+8h] [bp-10h] BYREF

  v3 = (_BYTE *)(a1 + 10848);
  result = FIELD_U8(a1, 10848);
  if ( !result )
  {
    v4[0] = 2;
    v4[1] = sub_603FADF4;
    result = SceneMgr_doSceneChange(dword_60CC62E4, a1, (int)v4, 0, 0);
    *v3 = result;
  }
  return result;
}
