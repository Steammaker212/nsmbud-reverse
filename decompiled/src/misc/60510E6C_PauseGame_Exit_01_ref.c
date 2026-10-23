/* PauseGame_Exit_01_ref
 * address: 0x60510E6C   size: 348   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall PauseGame_Exit_01_ref(int a1)
{
  int v2; // r0
  int v3; // r0
  int v5; // r1
  int v6; // r1
  int (**v7)(); // [sp+8h] [bp-18h] BYREF
  const char *v8; // [sp+Ch] [bp-14h]

  Pa_CharacterIcon_00_ref_2();
  sub_6051113C(a1);
  FIELD_U8(a1, 9574) = 1;
  FIELD_U32(a1, 9552) = 14;
  if ( sub_6047467C((_DWORD *)(a1 + 56), 0, &dword_60CA84A0, (int)&dword_60CA8468, 1.0, 0) == 1 )
  {
    v2 = sub_6047482C(a1 + 56, 0);
    if ( v2 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 104))(v2);
  }
  v3 = T_Btn_00_ref_511208(a1);
  if ( !*(_DWORD *)(sub_60834614(v3) + 492) && dword_60CC6D78 && FIELD_U8(dword_60CC6D78, 109032) )
  {
    v5 = FIELD_U32(a1, 9544);
    if ( v5 )
    {
      v7 = &sead__SafeStringBase__vtable;
      v8 = "PauseGame_Exit_01";
      sub_6047E0EC(&v7, v5, 0);
    }
    v6 = FIELD_U32(a1, 9548);
    if ( v6 )
    {
      v7 = &sead__SafeStringBase__vtable;
      v8 = "PauseGame_Exit_01";
      sub_6047E0EC(&v7, v6, 0);
    }
  }
  FIELD_U8(a1, 9572) = 0;
  return sub_6047F3B4((_DWORD *)(a1 + 9580));
}
