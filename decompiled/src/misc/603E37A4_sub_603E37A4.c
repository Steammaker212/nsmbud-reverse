/* sub_603E37A4
 * address: 0x603E37A4   size: 284   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603E37A4(int a1, int a2, int a3)
{
  int v3; // r0
  float v4; // s2
  float v5; // s6
  float v6; // s4
  float v7; // r1
  float v8; // s2
  float v9; // s6
  float v10; // s0
  int v11; // r3
  int v12; // r3
  char *v13; // r0
  char v14; // t1
  char v15; // r1
  int v16; // r3
  void (__fastcall *v17)(int, const char *, int, int, float, _DWORD); // r12

  v3 = FIELD_U32(a2, 64);
  if ( !FIELD_U8(v3, 8242) )
  {
    FIELD_U8(v3, 8242) = 1;
    v4 = FIELD_F32(v3, 8200);
    v5 = FIELD_F32(v3, 8204);
    v6 = FIELD_F32(v3, 8208);
    FIELD_U32(v3, 8232) = 1008981770;
    v7 = 0.8;
    v8 = v4 + -0.05;
    v9 = v5 + -0.05;
    v10 = v6 + -0.05;
    v11 = 1061997773;
    if ( v8 > 0.8 )
      v11 = LODWORD(v8);
    FIELD_U32(v3, 8200) = v11;
    v12 = 1061997773;
    if ( v8 > 0.8 )
    {
      v12 = LODWORD(v9);
      v7 = v6 + -0.05;
    }
    FIELD_U32(v3, 8204) = v12;
    FIELD_F32(v3, 8208) = v7;
    v14 = FIELD_U8(v3, 8243);
    v13 = (char *)(v3 + 8243);
    v15 = v14 - 1;
    v16 = (char)(v14 - 1);
    if ( v16 <= -5 )
      v15 = -5;
    *v13 = v15;
    v17 = *(void (__fastcall **)(int, const char *, int, int, float, _DWORD))(*(_DWORD *)Global_BasicSoundActor1 + 40);
    if ( v16 < -4 )
      v17(Global_BasicSoundActor1, "SE_BOSS_WOOGAN_THAW_NO_DAMAGE", a3, 1, v10, 0);
    else
      v17(Global_BasicSoundActor1, "SE_BOSS_WOOGAN_THAW", a3, 1, v10, 0);
  }
  return 1;
}
