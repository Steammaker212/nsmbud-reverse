/* sub_607ED4B4
 * address: 0x607ED4B4   size: 380   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607ED4B4(int a1)
{
  int v1; // r5
  int v2; // r6
  int v3; // r4
  int v4; // r1
  int v6; // [sp+8h] [bp-18h] BYREF
  void *v7; // [sp+Ch] [bp-14h]

  v1 = dword_60CC6D78;
  v2 = dword_60C99DEC;
  v3 = dword_60CC62E4;
  if ( *(_BYTE *)(FIELD_U32(dword_60CC6E04, 40)
                + 520 * *(unsigned __int8 *)(FIELD_U32(dword_60CC6E04, 40) + 7)
                + 16) )
  {
    FIELD_U8(dword_60CC6D78, 28) = 0;
    v6 = 2;
    v7 = CourseSelectTask_create;
    SceneMgr_doSceneChange(v3, a1, (int)&v6, 0, 0);
  }
  else
  {
    FIELD_U8(dword_60CC6D78, 28) = 1;
    FIELD_U16(v1, 109048) = 0;
    v6 = 2;
    v7 = DemoScene_create;
    SceneMgr_doSceneChange(v3, a1, (int)&v6, 0, 0);
  }
  if ( FIELD_U8(v2, 36) && FIELD_U32(v2, 48) == 5 )
    FIELD_U32(v2, 44) = 1;
  if ( FIELD_U8(v2, 108) && FIELD_U32(v2, 120) == 5 )
    FIELD_U32(v2, 116) = 1;
  if ( FIELD_U8(v2, 180) && FIELD_U32(v2, 192) == 5 )
    FIELD_U32(v2, 188) = 1;
  if ( FIELD_U8(v2, 252) && FIELD_U32(v2, 264) == 5 )
    FIELD_U32(v2, 260) = 1;
  v4 = 65537;
  if ( FIELD_U8(dword_60CC6D8C, 17) )
    v4 = 720907;
  FIELD_U32(v3, 108) = v4;
  FIELD_U32(v2, 508) = 0;
  FIELD_U8(v1, 20) = 1;
  return sub_6082B778(dword_60CC6E04);
}
