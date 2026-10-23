/* sub_6093F6B4
 * address: 0x6093F6B4   size: 380   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_6093F6B4(int a1, int a2, int a3)
{
  unsigned int v4; // r5
  unsigned int v6; // r6
  int v7; // r7
  int v8; // r0
  signed int v9; // r4
  unsigned int v10; // r8
  int v11; // r11
  int v12; // r0
  signed int v13; // r1
  _DWORD *v14; // r0
  int *result; // r0
  int v16; // r7
  int v17; // r5
  int v18; // r8
  int v19; // r6
  __int64 v20; // r0
  float v22[16]; // [sp+10h] [bp-40h] BYREF

  v4 = 1;
  v6 = FIELD_U16(a3, 40);
  v7 = a3 + 16;
  if ( v6 <= 1 )
    v6 = 1;
  v8 = sub_609200A0(a3 + 16);
  v9 = FIELD_U16(a3, 42);
  v10 = FIELD_U16(a3, 40);
  v11 = v8;
  v12 = sub_609200A0(v7);
  v13 = FIELD_U16(a3, 42);
  v22[0] = (float)v6;
  if ( v10 > 1 )
    v4 = v10;
  if ( v11 > v9 )
    v9 = v11;
  if ( v12 > v13 )
    v13 = v12;
  v22[1] = (float)(unsigned int)v9;
  v22[2] = 1.0 / (float)v4;
  v22[3] = 1.0 / (float)(unsigned int)v13;
  v14 = *(_DWORD **)(a2 + 612);
  if ( FIELD_U32(a2, 608) > 1u )
    v14 += 3;
  if ( *v14 != -1 )
    sub_6091B890(v14, a1, 4, (int)v22);
  sub_6091D95C(a2);
  sub_60920FDC((int *)a3, a1, *(char **)(a2 + 636));
  sub_60922278(dword_60CD0A28 + 2712, a1);
  result = &dword_60CD0A0C;
  v16 = dword_60CD0A0C;
  v17 = FIELD_U32(dword_60CD0A0C, 920);
  if ( v17 )
  {
    v18 = FIELD_U32(a1, 192);
    v19 = FIELD_U32(dword_60CD0A0C, 904);
    v20 = dword_60CC746C(dword_60CD0A0C + 928);
    return (int *)dword_60CC7874(v18, v19, FIELD_U32(v16, 900), v17, v20, HIDWORD(v20));
  }
  return result;
}
