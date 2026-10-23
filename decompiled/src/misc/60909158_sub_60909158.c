/* sub_60909158
 * address: 0x60909158   size: 496   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_60909158(int a1, int a2, int a3)
{
  int v6; // r7
  int v7; // r1
  int v8; // r1
  int v9; // r2
  int v10; // r3
  int v11; // r2
  int v12; // r3
  unsigned int v13; // r5
  unsigned int v14; // r0
  int v15; // r1
  bool v16; // zf
  unsigned int v17; // r1
  unsigned int v18; // r0
  unsigned int v19; // r0
  float result; // s0

  if ( FIELD_S32(a1, 256) < 0 )
    v6 = 0;
  else
    v6 = sub_60909348(FIELD_F32(a1, 236), FIELD_F32(a1, 244));
  if ( FIELD_S32(a1, 260) >= 0 )
    v6 |= sub_60909348(FIELD_F32(a1, 240), FIELD_F32(a1, 248));
  v7 = FIELD_U32(a1, 256);
  if ( v7 < 0 )
    v8 = 0;
  else
    v8 = (1 << (v7 + 1)) | (1 << v7) | (1 << (v7 + 2)) | (1 << (v7 + 3));
  v9 = FIELD_U32(a1, 260);
  if ( v9 >= 0 )
    v8 |= (1 << v9) | (1 << (v9 + 1)) | (1 << (v9 + 2)) | (1 << (v9 + 3));
  v10 = FIELD_U32(a1, 272) & ~v8 | v6;
  FIELD_U32(a1, 272) = v10;
  FIELD_U32(a1, 4) = v10 & ~a2;
  FIELD_U32(a1, 8) = a2 & ~v10;
  FIELD_U32(a1, 12) = 0;
  if ( FIELD_S32(a1, 252) >= 1 )
  {
    v11 = 0;
    if ( (v10 & 1) != 0 )
      goto LABEL_15;
LABEL_18:
    *(_DWORD *)(a1 + 4 * v11 + 44) = 0;
    while ( ++v11 < FIELD_U32(a1, 252) )
    {
      if ( (FIELD_U32(a1, 272) & (1 << v11)) == 0 )
        goto LABEL_18;
LABEL_15:
      v12 = a1 + 4 * v11;
      if ( *(_BYTE *)(a1 + v11 + 204) )
      {
        v13 = *(unsigned __int8 *)(a1 + v11 + 172);
        v14 = FIELD_U32(v12, 44);
        if ( v14 == v13 || v14 > v13 && !((v14 - v13) % *(unsigned __int8 *)(a1 + v11 + 204)) )
          FIELD_U32(a1, 12) |= 1 << v11;
      }
      ++FIELD_U32(v12, 44);
    }
  }
  v15 = FIELD_U32(a1, 16);
  if ( !a3 )
  {
    v19 = v15 & 0xFFFFFFFD;
    if ( (v15 & 1) != 0 )
      v19 = v15 | 2;
    FIELD_U32(a1, 16) = v19;
    goto LABEL_30;
  }
  v16 = (FIELD_U32(a1, 16) & 1) == 0;
  v17 = v15 & 0xFFFFFFFD;
  FIELD_U32(a1, 16) = v17;
  if ( !v16 )
  {
    v19 = v17;
LABEL_30:
    v18 = v19 & 0xFFFFFFFB;
    goto LABEL_31;
  }
  v18 = v17 | 4;
LABEL_31:
  FIELD_U32(a1, 16) = v18;
  FIELD_U32(a1, 20) = (int)FIELD_F32(a1, 276);
  LODWORD(result) = (int)FIELD_F32(a1, 280);
  FIELD_F32(a1, 24) = result;
  return result;
}
