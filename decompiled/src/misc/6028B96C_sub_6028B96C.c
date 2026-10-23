/* sub_6028B96C
 * address: 0x6028B96C   size: 252   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6028B96C(int a1)
{
  _DWORD *v2; // r0
  int *v3; // r1
  unsigned int v4; // r2
  unsigned int v5; // r0
  float v6; // s0
  int v7; // r1
  float v8; // s0
  int result; // r0
  float v10; // s2

  v2 = *(_DWORD **)(a1 + 6300);
  v3 = (int *)v2[3];
  v4 = v2[2];
  v5 = v2[17];
  if ( v4 > v5 )
    v3 += v5;
  Animation_update(*v3);
  v6 = FIELD_F32(a1, 108) + FIELD_F32(a1, 120);
  FIELD_F32(a1, 108) = v6;
  FIELD_F32(a1, 112) = FIELD_F32(a1, 112) + FIELD_F32(a1, 124);
  FIELD_F32(a1, 116) = FIELD_F32(a1, 116) + FIELD_F32(a1, 128);
  v7 = dword_60CC6484;
  v8 = v6 + (float)(FIELD_F32(dword_60CC6484, 112) - FIELD_F32(dword_60CC6484, 56));
  FIELD_F32(a1, 108) = v8;
  result = FIELD_U32(a1, 80);
  v10 = FIELD_F32(v7, 116);
  if ( result == 1 )
  {
    if ( v8 >= (float)(v10 + -32.0) )
      return result;
    goto LABEL_8;
  }
  if ( !result && v8 > (float)(v10 + 32.0) )
  {
LABEL_8:
    result = ((int (__fastcall *)(int))loc_6028D5D4)(a1);
    if ( result )
    {
      FIELD_U8(a1, 6348) = FIELD_U8(result, 84);
      return (*(int (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60C8F3D0);
    }
  }
  return result;
}
