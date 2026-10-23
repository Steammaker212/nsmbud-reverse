/* jcb_attack_st_wait_ref_3CCD4
 * address: 0x6003CCD4   size: 360   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall jcb_attack_st_wait_ref_3CCD4(int a1)
{
  unsigned int v2; // r6
  int v3; // r5
  _DWORD *v4; // r0
  int v5; // r1
  _DWORD *v6; // r0
  int v7; // r0
  int v8; // r0
  int v9; // r1
  int v10; // r0
  int (**v12)(); // [sp+0h] [bp-18h] BYREF
  const char *v13; // [sp+4h] [bp-14h]

  sub_6040EB10(a1 + 11712);
  FIELD_U32(a1, 11612) = 0;
  v12 = &sead__SafeStringBase__vtable;
  v13 = "jcb_attack_st_wait";
  sub_60047464(a1, 1, &v12, 1, 0.0, 0.0);
  v2 = -2;
  v3 = a1 + 6304;
  do
  {
    v4 = *(_DWORD **)(*(_DWORD *)v3 + 12);
    if ( v2 >= 0xF && *(_DWORD *)(*(_DWORD *)v3 + 8) > 1u )
      ++v4;
    sub_60448AF4(*v4, v2 + 2);
    ++v2;
  }
  while ( v2 != 15 );
  v5 = FIELD_U32(a1, 6300);
  v6 = *(_DWORD **)(a1 + 6312);
  v12 = &sead__SafeStringBase__vtable;
  v13 = "jcb_attack_st_wait";
  ShuAnim_play(v6, v5, (int)&v12);
  AnimationCtrl_setRepeat((ModelAnimation *)(FIELD_U32(a1, 6312) + 4), 0);
  v7 = FIELD_U32(a1, 6312);
  FIELD_U32(v7, 20) = 0;
  FIELD_U32(v7, 28) |= 2u;
  *(_DWORD *)(FIELD_U32(a1, 6312) + 24) = 0;
  v8 = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 11456) + 716))(FIELD_U32(a1, 11456));
  v9 = 80;
  if ( !v8 )
  {
    v10 = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 11456) + 720))(FIELD_U32(a1, 11456));
    v9 = 50;
    if ( v10 )
      v9 = 80;
  }
  FIELD_U32(a1, 11488) = v9;
  FIELD_U16(a1, 6278) = v9;
  FIELD_U32(a1, 11492) = 1;
  return 11492;
}
