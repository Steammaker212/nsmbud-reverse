/* sub_601C7FD4
 * address: 0x601C7FD4   size: 324   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601C7FD4(int a1)
{
  int v2; // r0
  float v3; // s16
  int v4; // r5
  __int16 v5; // r1
  int v6; // r5

  v2 = FIELD_U32(a1, 236);
  if ( v2 == 1 )
  {
    sub_6019B874(2, 0);
  }
  else if ( !v2 )
  {
    FIELD_U8(a1, 216) &= ~2u;
    FIELD_U8(a1, 553) = 0;
  }
  v3 = FIELD_F32(a1, 332);
  v4 = ((int (__fastcall *)(int))loc_601C4CFC)(a1);
  ((void (__fastcall *)(int))loc_601D956C)(a1);
  if ( v4 == 1 )
  {
    sub_60169018((_DWORD *)a1);
    FIELD_U32(a1, 92) = FIELD_U32(a1, 80);
    FIELD_U32(a1, 96) = FIELD_U32(a1, 84);
    FIELD_U32(a1, 100) = FIELD_U32(a1, 88);
    FIELD_U32(a1, 1092) = 6;
    v5 = FIELD_U16(a1, 440);
    if ( (v5 & 2) != 0 )
    {
      FIELD_U16(a1, 440) = v5 & 0xFFFD;
    }
    else
    {
      sub_601C503C((_DWORD *)a1);
      sub_601C6044(a1, (_DWORD *)(a1 + 1032));
      sub_60816CB0(dword_60CC6B68);
    }
    (*(void (__fastcall **)(int, int, int, float))(*(_DWORD *)a1 + 336))(a1, 9, -1, 0.0);
    return 1;
  }
  else
  {
    v6 = 0;
    if ( v3 < 0.0 && FIELD_F32(a1, 332) >= 0.0 )
      (*(void (__fastcall **)(int, int, int, float))(*(_DWORD *)a1 + 336))(a1, 35, -1, 0.0);
  }
  return v6;
}
