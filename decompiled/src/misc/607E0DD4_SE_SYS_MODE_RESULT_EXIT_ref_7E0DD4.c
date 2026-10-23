/* SE_SYS_MODE_RESULT_EXIT_ref_7E0DD4
 * address: 0x607E0DD4   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall SE_SYS_MODE_RESULT_EXIT_ref_7E0DD4(int a1)
{
  signed int result; // r0
  _DWORD v3[6]; // [sp+8h] [bp-18h] BYREF

  sub_60807EF0(SoundSystem_instance, "SE_SYS_MODE_RESULT_EXIT", 0, 1);
  sub_6040B33C(dword_60C9A1F0);
  FIELD_U8(a1, 10848) = 0;
  v3[0] = 2;
  v3[1] = sub_603FADF4;
  result = SceneMgr_doSceneChange(dword_60CC62E4, a1, (int)v3, 0, 0);
  FIELD_U8(a1, 10848) = result;
  return result;
}
