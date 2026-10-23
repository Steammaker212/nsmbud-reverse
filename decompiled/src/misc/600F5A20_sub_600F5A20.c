/* sub_600F5A20
 * address: 0x600F5A20   size: 224   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float *__fastcall sub_600F5A20(int a1, int a2, int a3)
{
  float v3; // s2
  float v4; // s0
  _DWORD *v5; // r4
  int v6; // lr
  float v7; // s4
  unsigned int v8; // r3
  int v9; // r0
  int v10; // r1
  unsigned int v11; // r2
  float v12; // s0
  unsigned int v13; // r2
  float v14; // s2
  unsigned int v15; // r1
  float *result; // r0

  v3 = 172.0;
  v4 = 3.0;
  v5 = (_DWORD *)(a1 + 6320);
  v6 = FIELD_U32(a1, 6320);
  if ( (a2 & 0xFFFFFFFE) == 2 )
  {
LABEL_5:
    v7 = -768.0;
    goto LABEL_7;
  }
  v7 = -1024.0;
  if ( v6 != 1 )
  {
    if ( v6 == 2 )
    {
      v3 = 128.0;
      v4 = 2.0;
      v6 = 2;
      goto LABEL_7;
    }
    goto LABEL_5;
  }
  v3 = 206.0;
  v6 = 1;
LABEL_7:
  v8 = 0;
  v9 = a1 + 6300;
  v10 = ~a3;
  v11 = v6 + ~a3;
  if ( v11 >= 5 )
    v11 = 0;
  *(float *)(*(_DWORD *)(v9 + 4 * v11) + 6320) = v4;
  v12 = v3 / v4;
  v13 = *v5 + v10;
  if ( v13 >= 5 )
    v13 = 0;
  v14 = v7 / (float)(v12 * v12);
  *(float *)(*(_DWORD *)(v9 + 4 * v13) + 6324) = v12 * (float)(v14 * -0.5);
  v15 = *v5 + v10;
  if ( v15 < 5 )
    v8 = v15;
  result = (float *)(*(_DWORD *)(v9 + 4 * v8) + 6328);
  *result = v14;
  return result;
}
