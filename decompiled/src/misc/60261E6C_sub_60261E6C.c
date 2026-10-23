/* sub_60261E6C
 * address: 0x60261E6C   size: 328   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_60261E6C(int a1)
{
  int *result; // r0
  int v3; // r1
  int v4; // t1
  int v5; // r2
  int v6; // r1
  int v7; // r2

  v4 = FIELD_U32(a1, 7120);
  result = (int *)(a1 + 7120);
  v3 = v4;
  if ( v4 == 1 )
  {
    v5 = FIELD_U32(a1, 2872);
    v6 = 2;
    if ( (v5 & 1) == 0 && (v5 & 0x10400) != 0x400 )
    {
      FIELD_U32(a1, 3200) &= ~0x40000000u;
      FIELD_U32(a1, 3192) &= ~0x40000000u;
      FIELD_U32(a1, 3176) &= ~0x40000000u;
      FIELD_U32(a1, 3184) &= ~0x40000000u;
      v6 = 3;
    }
    *result = v6;
  }
  else if ( v3 )
  {
    v7 = FIELD_U32(a1, 2872);
    if ( v3 == 2 )
    {
      if ( (v7 & 1) == 0 && (v7 & 0x10400) != 0x400 )
      {
        *result = 3;
        FIELD_U32(a1, 3200) &= ~0x40000000u;
        FIELD_U32(a1, 3192) &= ~0x40000000u;
        FIELD_U32(a1, 3176) &= ~0x40000000u;
        result = (int *)(FIELD_U32(a1, 3184) & 0xBFFFFFFF);
        FIELD_U32(a1, 3184) = result;
      }
    }
    else if ( (v7 & 1) != 0 )
    {
      ((void (__fastcall *)(int))loc_602600B0)(a1);
      sub_6025FFE4(a1, 0);
      return (int *)(*(int (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60C8E46C);
    }
  }
  else if ( (float)(FIELD_F32(a1, 112) + -8.0) <= FIELD_F32(dword_60CC6484, 124) )
  {
    *result = 1;
  }
  return result;
}
