/* SE_SYS_SKIP_DEMO_ref
 * address: 0x6074C3EC   size: 292   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_SYS_SKIP_DEMO_ref(unsigned int a1)
{
  __int64 v1; // r4
  _DWORD v3[6]; // [sp+8h] [bp-18h] BYREF

  v1 = a1;
  if ( !sub_607F6904(dword_60CC62E4) )
  {
    if ( (_DWORD)v1 == 1 )
    {
      if ( (*(_BYTE *)(FIELD_U32(dword_60CC6E04, 40)
                     + 520 * *(unsigned __int8 *)(FIELD_U32(dword_60CC6E04, 40) + 7)
                     + 50)
          & 1) == 0
        && !FIELD_U8(dword_60CC6D78, 109051) )
      {
        return HIDWORD(v1);
      }
    }
    else
    {
      sub_603FBE40(dword_60C99DD4);
    }
    v3[0] = 2;
    v3[1] = sub_6018D250;
    HIDWORD(v1) = SceneMgr_doSceneChange(dword_60CC62E4, dword_60C99DD4, (int)v3, 0, 0);
    if ( v1 == 0x100000001LL )
    {
      v1 = 0x100000001LL;
      sub_60807EF0(SoundSystem_instance, "SE_SYS_SKIP_DEMO", 0, 1);
      FIELD_U8(dword_60CC6D78, 109050) = 1;
    }
  }
  return HIDWORD(v1);
}
