/* sub_60178558
 * address: 0x60178558   size: 316   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60178558(int a1, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // r3
  int v4; // lr
  int v5; // r12
  int v6; // r2
  float v7; // s2
  float v8; // s0
  float v9; // s6
  float v10; // s4
  int v11; // r1
  int v12; // r0
  _DWORD *v13; // r0

  v3 = 0;
  v4 = a1 + 20;
  if ( a2 >= 0x100 )
    a2 = 0;
  if ( a3 < 0x100 )
    v3 = a3;
  v5 = v4 + 104 * a2;
  v6 = v4 + 104 * v3;
  v7 = FIELD_F32(v5, 72) - FIELD_F32(v6, 72);
  v8 = FIELD_F32(v5, 80) - FIELD_F32(v6, 80);
  v9 = fabsf(v7);
  v10 = fabsf(v8);
  if ( v9 >= 3.0 )
  {
    if ( v10 >= 3.0 && v9 < v10 )
    {
      if ( v8 > 0.0 )
      {
        *(_DWORD *)(v4 + 104 * a2 + 36) = v6;
        v13 = (_DWORD *)(v4 + 104 * v3 + 32);
        goto LABEL_19;
      }
      v13 = (_DWORD *)(v4 + 104 * a2 + 32);
      *(_DWORD *)(v4 + 104 * v3 + 36) = v5;
    }
    else
    {
      if ( v7 > 0.0 )
      {
        *(_DWORD *)(v4 + 104 * a2 + 40) = v6;
        v13 = (_DWORD *)(v4 + 104 * v3 + 44);
        goto LABEL_19;
      }
      *(_DWORD *)(v4 + 104 * v3 + 40) = v5;
      v13 = (_DWORD *)(v4 + 104 * a2 + 44);
    }
LABEL_18:
    v5 = v4 + 104 * v3;
    goto LABEL_19;
  }
  v11 = v4 + 104 * a2;
  v12 = v4 + 104 * v3;
  if ( (float)(FIELD_F32(v11, 76) - FIELD_F32(v12, 76)) <= 0.0 )
  {
    FIELD_U32(v12, 28) = v5;
    v13 = (_DWORD *)(v11 + 24);
    goto LABEL_18;
  }
  FIELD_U32(v11, 28) = v6;
  v13 = (_DWORD *)(v12 + 24);
LABEL_19:
  *v13 = v5;
  return 1;
}
