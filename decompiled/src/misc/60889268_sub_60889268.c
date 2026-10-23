/* sub_60889268
 * address: 0x60889268   size: 508   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60889268(_DWORD *a1, int a2)
{
  int v3; // r0
  int v4; // r7
  int v5; // r9
  int v6; // r2
  int v7; // r6
  const char *v8; // r0
  _DWORD *result; // r0
  unsigned int v10; // r10
  int v11; // r0
  int *v12; // lr
  unsigned int v13; // r12
  int v14; // r2
  unsigned int v15; // r3
  int v16; // r2
  int v17; // r0
  int v18; // r2
  int v19; // r3
  unsigned int v20; // r2
  int v21; // r0
  int v22; // r1

  v3 = a1[4];
  if ( v3 < 1 )
  {
LABEL_7:
    nullsub_95();
    v8 = "There is no available Stripe instance.\n";
LABEL_8:
    debugPrintRelated3(v8);
    return 0;
  }
  v4 = a1[6];
  v5 = a1[8];
  v6 = 0;
  while ( 1 )
  {
    v7 = v5 + (v4 << 7);
    if ( !FIELD_U8(v7, 116) )
      break;
    ++v4;
    ++v6;
    if ( v4 >= v3 )
      v4 = 0;
    a1[6] = v4;
    if ( v6 >= v3 )
      goto LABEL_7;
  }
  v10 = (unsigned int)*(float *)(*(_DWORD *)(FIELD_U32(a2, 348) + 580) + 20);
  v11 = (*(int (__fastcall **)(int, unsigned int, int, float))(FIELD_U32(a2, 1464) + 8))(
          a2 + 1464,
          v10 << 6,
          128,
          *(float *)&v10);
  FIELD_U32(v7, 80) = v11;
  v12 = (int *)(v7 + 80);
  if ( !v11 )
  {
    nullsub_95();
    v8 = "Buffer for stripe history is not enough\n";
    goto LABEL_8;
  }
  v13 = v10 - 1;
  if ( v10 == 1 )
    goto LABEL_25;
  if ( (v13 & 1) != 0 )
  {
    FIELD_U32(v11, 48) = v11 + 64;
    v14 = 1;
    v11 = *v12;
    if ( v10 == 2 )
      goto LABEL_18;
  }
  else
  {
    v14 = 0;
    if ( v10 == 2 )
      goto LABEL_18;
  }
  v15 = v13 - v14;
  v16 = v14 << 6;
  do
  {
    v15 -= 2;
    *(_DWORD *)(v11 + v16 + 48) = v11 + v16 + 64;
    v17 = *v12 + v16;
    v16 += 128;
    FIELD_U32(v17, 112) = v17 + 128;
    v11 = *v12;
  }
  while ( v15 );
LABEL_18:
  if ( v10 >= 2 )
  {
    if ( (v10 & 1) == 0 )
    {
      FIELD_U32(v11, 116) = v11;
      v18 = 2;
      v11 = *v12;
      if ( v10 == 2 )
        goto LABEL_25;
LABEL_23:
      v19 = (v18 << 6) | 0x34;
      v20 = v10 - v18;
      do
      {
        v20 -= 2;
        *(_DWORD *)(v11 + v19) = v11 + v19 - 116;
        v21 = *v12 + v19;
        v19 += 128;
        FIELD_U32(v21, 64) = v21 - 52;
        v11 = *v12;
      }
      while ( v20 );
      goto LABEL_25;
    }
    v18 = 1;
    if ( v10 != 2 )
      goto LABEL_23;
  }
LABEL_25:
  *(_DWORD *)(v11 + (v13 << 6) + 48) = v11;
  *(_DWORD *)(*v12 + 52) = *v12 + (v13 << 6);
  result = (_DWORD *)(v5 + (v4 << 7));
  v22 = *v12;
  result[21] = *v12;
  result[22] = v22;
  FIELD_U8(v7, 116) = 1;
  result[27] = 0;
  result[24] = 0;
  result[26] = 0;
  result[23] = 0;
  ++a1[7];
  return result;
}
