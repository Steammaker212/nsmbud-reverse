/* sub_60486BD4
 * address: 0x60486BD4   size: 668   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60486BD4(int a1)
{
  int v2; // r5
  unsigned int v3; // r0
  unsigned int *v4; // r9
  unsigned int v5; // r1
  unsigned int v6; // r2
  int v7; // r2
  unsigned int v8; // r3
  unsigned int v9; // r1
  _DWORD *v10; // r0
  int v11; // r8
  int v12; // r1
  char v14; // [sp+0h] [bp-28h] BYREF
  char v15; // [sp+1h] [bp-27h]
  int v16; // [sp+4h] [bp-24h]

  v2 = 1;
  v4 = (unsigned int *)(a1 + 14228);
  v3 = FIELD_U32(a1, 14228);
  v5 = *v4;
  v6 = *v4;
  if ( *v4 >= 4 )
    v6 = 0;
  v7 = *(_DWORD *)(*(_DWORD *)(a1 + 4 * v6 + 47800) + 52) - *(_DWORD *)(*(_DWORD *)(a1 + 4 * v6 + 47800) + 44);
  v8 = 5;
  if ( v7 < 5 )
    v8 = v7;
  if ( v7 < 0 )
    v8 = 0;
  if ( v8 >= 6 )
    v8 = 0;
  if ( v5 >= 4 )
    v5 = 0;
  v9 = dword_60C9FF70[6 * v5 + v8];
  if ( v9 >= 0x18 )
    v9 = 0;
  if ( v3 >= 4 )
    v3 = 0;
  FIELD_U32(a1, 4796) = *(_DWORD *)(a1 + 96 * v3 + 4 * v9 + 5876);
  FIELD_U8(a1, 4811) = 0;
  FIELD_U8(a1, 4808) = 1;
  FIELD_U8(a1, 4812) = 1;
  FIELD_U8(a1, 4822) = 1;
  sub_6048E23C(a1, 1, 256);
  sub_6048E6BC(a1);
  sub_6048EB10(a1);
  v16 = 0;
  v10 = (_DWORD *)(a1 + 6276);
  *(_BYTE *)(*v10 + 64) |= 1u;
  v16 = 1;
  *(_BYTE *)(v10[1] + 64) |= 1u;
  v16 = 2;
  *(_BYTE *)(v10[2] + 64) |= 1u;
  v16 = 3;
  *(_BYTE *)(v10[3] + 64) |= 1u;
  v16 = 4;
  *(_BYTE *)(v10[4] + 64) |= 1u;
  v16 = 5;
  *(_BYTE *)(v10[5] + 64) |= 1u;
  v16 = 6;
  *(_BYTE *)(v10[6] + 64) |= 1u;
  sub_6048EE54(a1, 1);
  FIELD_U32(a1, 47764) = -1;
  v11 = FIELD_U32(a1, 5868);
  v12 = FIELD_U32(a1, 5872);
  v14 = 1;
  v15 = 1;
  if ( *v4 != 3 )
  {
    if ( *v4 )
    {
LABEL_19:
      sub_60502D0C(a1 + 3768, v12);
      goto LABEL_21;
    }
    v2 = 0;
  }
  *(_BYTE *)((unsigned int)&v14 | v2) = 0;
  if ( v14 )
    goto LABEL_19;
  sub_60502B90(a1 + 3768, v12);
LABEL_21:
  if ( v15 )
    sub_60502D0C(a1 + 3768, v11);
  else
    sub_60502B90(a1 + 3768, v11);
  return sub_604900BC(a1);
}
