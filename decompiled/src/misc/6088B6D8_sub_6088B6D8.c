/* sub_6088B6D8
 * address: 0x6088B6D8   size: 532   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6088B6D8(_DWORD *a1, int a2)
{
  int v4; // r0
  int v5; // r1
  int v6; // r9
  int v7; // r3
  int v8; // r7
  int v9; // r6
  const char *v10; // r0
  unsigned int v12; // r10
  int v13; // r0
  int *v14; // r1
  unsigned int v15; // r12
  int v16; // r2
  unsigned int v17; // r3
  int v18; // r2
  int v19; // r0
  int v20; // r2
  unsigned int v21; // r3
  int v22; // r2
  int v23; // r0
  _DWORD *v24; // r0
  int v25; // r1

  v4 = a1[4];
  if ( v4 < 1 )
  {
LABEL_7:
    nullsub_95();
    v10 = "There is no available Stripe instance.\n";
  }
  else
  {
    v5 = a1[6];
    v6 = a1[8];
    v7 = 0;
    while ( 1 )
    {
      v8 = 9 * v5;
      v9 = v6 + 144 * v5;
      if ( !FIELD_U8(v9, 128) )
        break;
      ++v5;
      ++v7;
      if ( v5 >= v4 )
        v5 = 0;
      a1[6] = v5;
      if ( v7 >= v4 )
        goto LABEL_7;
    }
    v12 = (unsigned int)*(float *)(*(_DWORD *)(FIELD_U32(a2, 348) + 580) + 24);
    v13 = (*(int (__fastcall **)(int, unsigned int, int, float))(FIELD_U32(a2, 1464) + 8))(
            a2 + 1464,
            96 * v12,
            128,
            *(float *)&v12);
    FIELD_U32(v9, 80) = v13;
    v14 = (int *)(v9 + 80);
    if ( v13 )
    {
      v15 = v12 - 1;
      if ( v12 == 1 )
        goto LABEL_26;
      if ( (v15 & 1) != 0 )
      {
        FIELD_U32(v13, 84) = v13 + 96;
        v16 = 1;
        v13 = *v14;
        if ( v12 == 2 )
          goto LABEL_19;
      }
      else
      {
        v16 = 0;
        if ( v12 == 2 )
          goto LABEL_19;
      }
      v17 = v15 - v16;
      v18 = 96 * v16;
      do
      {
        v17 -= 2;
        *(_DWORD *)(v13 + v18 + 84) = v13 + v18 + 96;
        v19 = *v14 + v18;
        v18 += 192;
        FIELD_U32(v19, 180) = v19 + 192;
        v13 = *v14;
      }
      while ( v17 );
LABEL_19:
      if ( v12 >= 2 )
      {
        if ( (v12 & 1) == 0 )
        {
          FIELD_U32(v13, 184) = v13;
          v20 = 2;
          v13 = *v14;
          if ( v12 == 2 )
            goto LABEL_26;
LABEL_24:
          v21 = v12 - v20;
          v22 = 96 * v20 + 88;
          do
          {
            v21 -= 2;
            *(_DWORD *)(v13 + v22) = v13 + v22 - 184;
            v23 = *v14 + v22;
            v22 += 192;
            FIELD_U32(v23, 96) = v23 - 88;
            v13 = *v14;
          }
          while ( v21 );
          goto LABEL_26;
        }
        v20 = 1;
        if ( v12 != 2 )
          goto LABEL_24;
      }
LABEL_26:
      *(_DWORD *)(v13 + 96 * v15 + 84) = v13;
      *(_DWORD *)(*v14 + 88) = *v14 + 96 * v15;
      v24 = (_DWORD *)(v6 + 16 * v8);
      v25 = *v14;
      v24[21] = v25;
      v24[22] = v25;
      FIELD_U8(v9, 128) = 1;
      v24[28] = 0;
      v24[24] = 0;
      v24[26] = 0;
      v24[23] = 0;
      ++a1[7];
      return v9;
    }
    nullsub_95();
    v10 = "Buffer for stripe history is not enough\n";
  }
  debugPrintRelated3(v10);
  return 0;
}
