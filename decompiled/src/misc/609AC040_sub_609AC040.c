/* sub_609AC040
 * address: 0x609AC040   size: 304   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int *__fastcall sub_609AC040(int a1)
{
  int v1; // r12
  int *v2; // lr
  unsigned int *result; // r0
  int v4; // r2
  int v5; // t1
  int v6; // r3
  int v7; // r1
  unsigned int v8; // r4
  int v9; // r1
  int v10; // r1
  unsigned int v11; // r4
  int v12; // r1
  int v13; // r1
  unsigned int v14; // r4
  int v15; // r1
  int v16; // r1
  unsigned int v17; // r4
  int v18; // r1

  v1 = 0;
  if ( FIELD_U32(dword_60CD0B60, 20) >= 9u )
    v1 = *(_DWORD *)(FIELD_U32(dword_60CD0B60, 28) + 32);
  FIELD_U32(a1, 4308) = 0;
  v2 = (int *)(a1 + 4308);
  v5 = FIELD_U32(a1, 5040);
  result = (unsigned int *)(a1 + 5040);
  v4 = v5;
  if ( (v5 & 4) != 0 )
  {
    v6 = 2 * *(unsigned __int16 *)(*(_DWORD *)(FIELD_U32(v1, 4) + 28) + 24);
LABEL_7:
    *v2 = v6;
    if ( (v4 & 0x40) == 0 )
      goto LABEL_13;
    goto LABEL_10;
  }
  if ( (v4 & 0x18) != 0 )
  {
    v6 = *(unsigned __int16 *)(*(_DWORD *)(FIELD_U32(v1, 4) + 28) + 24);
    goto LABEL_7;
  }
  v6 = 0;
  if ( (v4 & 0x40) == 0 )
    goto LABEL_13;
LABEL_10:
  v7 = FIELD_U32(v1, 4);
  v8 = FIELD_U32(v7, 24);
  v9 = FIELD_U32(v7, 28);
  if ( v8 > 1 )
    v9 += 28;
  v6 += FIELD_U16(v9, 24);
  *v2 = v6;
LABEL_13:
  if ( (v4 & 0x20) != 0 )
  {
    v10 = FIELD_U32(v1, 4);
    v11 = FIELD_U32(v10, 24);
    v12 = FIELD_U32(v10, 28);
    if ( v11 > 2 )
      v12 += 56;
    v6 += FIELD_U16(v12, 24);
    *v2 = v6;
  }
  if ( (v4 & 0x80) != 0 )
  {
    v13 = FIELD_U32(v1, 4);
    v14 = FIELD_U32(v13, 24);
    v15 = FIELD_U32(v13, 28);
    if ( v14 > 3 )
      v15 += 84;
    v6 += FIELD_U16(v15, 24);
    *v2 = v6;
  }
  if ( (v4 & 0x100) != 0 )
  {
    v16 = FIELD_U32(v1, 4);
    v17 = FIELD_U32(v16, 24);
    v18 = FIELD_U32(v16, 28);
    if ( v17 > 4 )
      v18 += 112;
    *v2 = v6 + FIELD_U16(v18, 24);
  }
  *result = v4 & 0xFFFFFFFD;
  return result;
}
