/* Bowser__vfA8
 * address: 0x600C687C   size: 328   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: BossBase : 0x600249C4
// 
// Overridden by: None
int __fastcall Bowser__vfA8(int a1, int *a2)
{
  int v4; // r4
  _BYTE *v5; // r0
  int v6; // t1
  void (__fastcall *v7)(int, int); // r7
  int v8; // r0
  int v9; // r8
  float v10; // r1
  int v11; // r6
  float v13[9]; // [sp+4h] [bp-24h] BYREF

  v4 = 0;
  v6 = FIELD_U8(a1, 7154);
  v5 = (_BYTE *)(a1 + 7154);
  if ( !v6 )
  {
    v4 = 1;
    *v5 = 1;
    v7 = *(void (__fastcall **)(int, int))(*(_DWORD *)a1 + 732);
    v8 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 736))(a1);
    v7(a1, v8);
    if ( FIELD_S32(a1, 6300) <= 0 )
    {
      FIELD_U32(a1, 6300) = 0;
      sub_600C5A70((StateActor *)a1, 0, 5u, a2);
      (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 880))(a1);
    }
    else
    {
      sub_600C5D7C(a1, 4);
      v9 = 24;
      sub_602A3EFC(a1 + 7764, 24);
      v10 = *((float *)a2 + 1);
      LODWORD(v13[0]) = *a2;
      v13[1] = v10;
      v13[2] = 0.0;
      koopa_damage_ice_ref_2(a1, v13, 0, 24);
      v11 = **(_DWORD **)(FIELD_U32(a1, 7100) + 20);
      TexAnim_play(v11, FIELD_U32(a1, 7092), &dword_60C83DA0);
      AnimationCtrl_setRepeat((ModelAnimation *)(v11 + 4), dword_60C83DA8);
      FIELD_U32(a1, 7116) = 3;
      if ( FIELD_S32(a1, 7120) > 24 )
        v9 = FIELD_U32(a1, 7120);
      FIELD_U32(a1, 7120) = v9;
      (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 876))(a1);
    }
  }
  return v4;
}
