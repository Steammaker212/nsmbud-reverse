/* sub_609ACFA8
 * address: 0x609ACFA8   size: 344   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609ACFA8(int a1, int *a2, int a3, int a4)
{
  int v5; // r7
  int v6; // r11
  _DWORD *v7; // r8
  void *v8; // r6
  int v9; // r0

  sub_60941A50((_DWORD *)a1, a2, a3, a4);
  v5 = 0;
  v6 = 0;
  *(_DWORD *)a1 = &off_60C5E530;
  FIELD_U32(a1, 12) = off_60C5E500;
  FIELD_U8(a1, 20) = 0;
  FIELD_U8(a1, 22) = 0;
  FIELD_U8(a1, 23) = 0;
  FIELD_U8(a1, 21) = 4;
  FIELD_U32(a1, 16) = 0;
  FIELD_U32(a1, 24) = off_60C5E500;
  FIELD_U8(a1, 32) = 0;
  FIELD_U8(a1, 34) = 0;
  FIELD_U8(a1, 35) = 0;
  FIELD_U8(a1, 33) = 4;
  FIELD_U32(a1, 28) = 0;
  FIELD_U32(a1, 36) = off_60C5E500;
  FIELD_U8(a1, 44) = 0;
  FIELD_U8(a1, 46) = 0;
  FIELD_U8(a1, 47) = 0;
  FIELD_U8(a1, 45) = 4;
  FIELD_U32(a1, 40) = 0;
  FIELD_U32(a1, 48) = off_60C5E500;
  FIELD_U8(a1, 56) = 0;
  FIELD_U8(a1, 58) = 0;
  FIELD_U8(a1, 59) = 0;
  FIELD_U8(a1, 57) = 4;
  FIELD_U32(a1, 52) = 0;
  do
  {
    v7 = (_DWORD *)(a1 + v6);
    v8 = (void *)(a1 + v6 + 68);
    qmemcpy(v8, &unk_60B46668, 0x24u);
    v6 += 128;
    v9 = a1 + v5;
    v5 += 12;
    v7[26] = 1065353216;
    v7[27] = 1065353216;
    v7[28] = 1065353216;
    v7[29] = 1065353216;
    v7[30] = 1065353216;
    v7[31] = 1065353216;
    v7[32] = 1065353216;
    v7[33] = 1065353216;
    v7[34] = 1065353216;
    v7[35] = 1065353216;
    v7[36] = 1065353216;
    v7[37] = 1065353216;
    v7[38] = 1065353216;
    v7[39] = 1065353216;
    v7[40] = 1065353216;
    v7[41] = 1065353216;
    v7[42] = 1065353216;
    v7[43] = 1065353216;
    v7[44] = 1065353216;
    v7[45] = 1065353216;
    v7[46] = 1065353216;
    v7[16] = 7;
    v7[15] = 9;
    FIELD_U8(v9, 20) = 7;
    FIELD_U8(v9, 22) = 30;
    FIELD_U32(v9, 16) = v8;
    FIELD_U8(v9, 23) = 9;
  }
  while ( v6 != 512 );
  return a1;
}
