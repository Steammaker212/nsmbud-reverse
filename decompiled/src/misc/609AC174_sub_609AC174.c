/* sub_609AC174
 * address: 0x609AC174   size: 384   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_609AC174(int a1, int a2, int a3, float *a4, int *a5)
{
  int *result; // r0
  int v9; // r0
  int v10; // r6
  int v11; // r1
  _DWORD *v12; // r0
  char *v13; // r2
  int v14; // r7
  int v15; // r5
  int v16; // r8
  int v17; // r6
  __int64 v18; // r0
  _DWORD v19[4]; // [sp+8h] [bp-40h] BYREF
  _BYTE v20[48]; // [sp+18h] [bp-30h] BYREF

  result = (int *)FIELD_U8(a1, 440);
  if ( result )
  {
    sub_6090B4B0((unsigned __int8 *)(a1 + 744), a2);
    v9 = ((int (__fastcall *)(_BYTE *, float *))loc_6090E438)(v20, a4);
    sub_6090E560(v9, a2, a4);
    sub_6090B260((int)a4);
    v10 = 0;
    if ( FIELD_U32(dword_60CD0B60, 20) >= 8u )
      v10 = *(_DWORD *)(FIELD_U32(dword_60CD0B60, 28) + 28);
    sub_6091DD8C(v10, a2);
    v11 = FIELD_U32(a1, 852);
    v19[0] = FIELD_U32(a1, 848);
    v19[1] = v11;
    v19[2] = 0;
    v19[3] = 0;
    v12 = *(_DWORD **)(v10 + 612);
    if ( *v12 != -1 )
      sub_6091B890(v12, a2, 4, (int)v19);
    sub_60920FDC(a5, a2, *(char **)(v10 + 636));
    v13 = *(char **)(v10 + 636);
    if ( FIELD_U32(v10, 632) > 1u )
      v13 += 12;
    sub_60920FDC((int *)(a1 + 3944), a2, v13);
    sub_60922278(dword_60CD0A28 + 2376, a2);
    result = &dword_60CD0A0C;
    v14 = dword_60CD0A0C;
    v15 = FIELD_U32(dword_60CD0A0C, 400);
    if ( v15 )
    {
      v16 = FIELD_U32(a2, 192);
      v17 = FIELD_U32(dword_60CD0A0C, 384);
      v18 = dword_60CC746C(dword_60CD0A0C + 408);
      return (int *)dword_60CC7874(v16, v17, FIELD_U32(v14, 380), v15, v18, HIDWORD(v18));
    }
  }
  return result;
}
