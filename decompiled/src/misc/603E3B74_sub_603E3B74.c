/* sub_603E3B74
 * address: 0x603E3B74   size: 244   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603E3B74(int a1)
{
  float *v2; // r1
  float *v3; // r2
  float *v4; // r0
  float v5; // s0
  float v6; // s2
  float v7; // s4
  float v8; // s4
  _DWORD *v9; // r1
  _DWORD *v10; // r2
  float v11; // s4
  _BYTE *v13; // r4

  v2 = (float *)(a1 + 8232);
  v3 = (float *)(a1 + 8200);
  v4 = (float *)(a1 + 8188);
  v5 = *v3;
  v6 = *v2;
  v7 = *v4;
  if ( *v4 < *v3 )
  {
    v8 = v6 + v7;
    v9 = (_DWORD *)(a1 + 0x2000);
    v10 = (_DWORD *)(a1 + 8196);
    *v4 = v8;
    FIELD_F32(a1, 0x2000) = v6 + FIELD_F32(a1, 0x2000);
    FIELD_F32(a1, 8196) = v6 + FIELD_F32(a1, 8196);
    if ( v8 < v5 )
      goto LABEL_7;
    goto LABEL_6;
  }
  if ( *v4 > *v3 )
  {
    v11 = v7 - v6;
    v9 = (_DWORD *)(a1 + 0x2000);
    v10 = (_DWORD *)(a1 + 8196);
    *v4 = v11;
    FIELD_F32(a1, 0x2000) = FIELD_F32(a1, 0x2000) - v6;
    FIELD_F32(a1, 8196) = FIELD_F32(a1, 8196) - v6;
    if ( v11 <= v5 )
    {
LABEL_6:
      *v4 = v5;
      *v9 = FIELD_U32(a1, 8204);
      *v10 = FIELD_U32(a1, 8208);
    }
  }
LABEL_7:
  ActorScaler_execute((ActorScaler *)(a1 + 9264));
  FIELD_U8(a1, 8239) = 0;
  v13 = (_BYTE *)(a1 + 8239);
  v13[3] = 0;
  v13[2] = 0;
  v13[1] = 0;
  return 8239;
}
