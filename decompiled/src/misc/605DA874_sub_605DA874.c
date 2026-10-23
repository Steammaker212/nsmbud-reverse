/* sub_605DA874
 * address: 0x605DA874   size: 456   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605DA874(int a1)
{
  int *v2; // r5
  int result; // r0
  int *v4; // r1
  int v5; // r6
  int v6; // r8
  int v7; // r2
  int v8; // r12
  int v9; // r9
  int v10; // lr
  int v11; // r10
  int v12; // r3
  int v13; // r11
  int v14; // r5
  int v15; // r7
  int v16; // r6
  int v17; // r3
  int v18; // [sp+0h] [bp-28h]

  v2 = (int *)(a1 + 6264);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 396))(a1);
  result = *v2;
  if ( (*v2 & 0x100) != 0 )
  {
    FIELD_U32(a1, 3200) |= 0x8000u;
    FIELD_U32(a1, 3192) |= 0x8000u;
    FIELD_U32(a1, 3176) |= 0x8000u;
    FIELD_U32(a1, 3184) |= 0x8000u;
  }
  if ( (result & 0x20) != 0 )
  {
    v17 = 0x40000000;
    FIELD_U32(a1, 3200) |= 0x40000000u;
    FIELD_U32(a1, 3192) |= 0x40000000u;
    FIELD_U32(a1, 3176) |= 0x40000000u;
    v7 = FIELD_U32(a1, 3184);
    v4 = (int *)(a1 + 3184);
LABEL_16:
    *v4 = v7 | v17;
    return v7 | v17;
  }
  v4 = (int *)(a1 + 3200);
  v5 = FIELD_U32(a1, 3200);
  if ( (result & 0x10) != 0 )
  {
    v5 |= 0x80000000;
    FIELD_U32(a1, 3200) = v5;
    FIELD_U32(a1, 3192) |= 0x80000000;
    FIELD_U32(a1, 3176) |= 0x80000000;
    FIELD_U32(a1, 3184) |= 0x80000000;
  }
  v6 = FIELD_U32(a1, 3204);
  v7 = v5 | 0x20000;
  v8 = v6 | 0x80;
  FIELD_U32(a1, 3204) = v6 | 0x80;
  v9 = FIELD_U32(a1, 3196);
  v10 = v9 | 0x80;
  FIELD_U32(a1, 3196) = v9 | 0x80;
  v11 = FIELD_U32(a1, 3180);
  v12 = v11 | 0x80;
  FIELD_U32(a1, 3180) = v11 | 0x80;
  v13 = FIELD_U32(a1, 3188);
  v14 = v13 | 0x80;
  FIELD_U32(a1, 3188) = v13 | 0x80;
  FIELD_U32(a1, 3200) = v5 | 0x20000;
  if ( (result & 2) != 0 && FIELD_U8(a1, 84) <= 3u )
  {
    v15 = FIELD_U32(a1, 3176);
    v7 = v5 | 0x20018;
    v18 = FIELD_U32(a1, 3184);
    v16 = FIELD_U32(a1, 3192);
    FIELD_U32(a1, 3200) = v7;
    FIELD_U32(a1, 3192) = v16 | 0x18;
    FIELD_U32(a1, 3176) = v15 | 0x18;
    FIELD_U32(a1, 3184) = v18 | 0x18;
  }
  if ( (result & 4) != 0 )
  {
    v8 = v6 | 0x81;
    v10 = v9 | 0x81;
    v12 = v11 | 0x81;
    v14 = v13 | 0x81;
    FIELD_U32(a1, 3204) = v6 | 0x81;
    FIELD_U32(a1, 3196) = v9 | 0x81;
    FIELD_U32(a1, 3180) = v11 | 0x81;
    FIELD_U32(a1, 3188) = v13 | 0x81;
  }
  if ( (result & 8) != 0 )
  {
    FIELD_U32(a1, 3204) = v8 | 2;
    FIELD_U32(a1, 3196) = v10 | 2;
    FIELD_U32(a1, 3180) = v12 | 2;
    FIELD_U32(a1, 3188) = v14 | 2;
  }
  v17 = 1;
  if ( (result & 0x80) != 0 )
    goto LABEL_16;
  return result;
}
