/* sub_603B2090
 * address: 0x603B2090   size: 148   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603B2090(int a1)
{
  float *v2; // r1
  float *v3; // r0
  float v4; // s2
  float v5; // s0
  int v6; // r0
  _DWORD *v7; // r4
  int v8; // t1
  __int64 v9; // r2
  int v10; // r1
  int result; // r0

  v2 = (float *)((char *)&unk_60B00B80 + 4 * FIELD_U32(a1, 6456));
  v3 = (float *)(a1 + 6488);
  v4 = *v2 + *v3;
  *v3 = v4;
  v5 = FIELD_F32(a1, 6484);
  if ( v4 >= v5 )
  {
    *v3 = v5;
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C97D78);
  }
  v8 = FIELD_U32(a1, 6476);
  v7 = (_DWORD *)(a1 + 6476);
  v6 = v8;
  v9 = *(_QWORD *)(v7 - 7);
  v10 = dword_60B00B74[HIDWORD(v9)];
  if ( !(_DWORD)v9 )
    v10 = -v10;
  result = v6 + v10;
  *v7 = result;
  return result;
}
