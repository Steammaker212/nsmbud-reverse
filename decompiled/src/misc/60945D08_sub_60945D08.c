/* sub_60945D08
 * address: 0x60945D08   size: 480   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60945D08(int a1, void *a2, int a3)
{
  int v4; // r5
  int v5; // r4
  int v6; // r8
  _DWORD *v7; // r9
  void *v8; // r7
  int v9; // r0
  int (**v12)(); // [sp+Ch] [bp-2Ch] BYREF
  char *v13; // [sp+10h] [bp-28h]

  v4 = operator_new_8DE25C(0x23Cu, a2, 4);
  v5 = 0;
  v12 = &sead__SafeStringBase__vtable;
  v13 = off_60C5CB34;
  *(_DWORD *)v4 = &off_60C5E40C;
  FIELD_U32(v4, 8) = 0;
  ((void (__fastcall *)(int (***)()))v12[3])(&v12);
  FIELD_U32(v4, 4) = sub_6090FEB4((int)v13);
  if ( a3 )
    sub_60947BFC(a3, v4);
  v6 = 0;
  *(_DWORD *)v4 = &off_60C5E530;
  FIELD_U32(v4, 12) = off_60C5E500;
  FIELD_U8(v4, 20) = 0;
  FIELD_U8(v4, 22) = 0;
  FIELD_U8(v4, 23) = 0;
  FIELD_U8(v4, 21) = 4;
  FIELD_U32(v4, 16) = 0;
  FIELD_U32(v4, 24) = off_60C5E500;
  FIELD_U8(v4, 32) = 0;
  FIELD_U8(v4, 34) = 0;
  FIELD_U8(v4, 35) = 0;
  FIELD_U8(v4, 33) = 4;
  FIELD_U32(v4, 28) = 0;
  FIELD_U32(v4, 36) = off_60C5E500;
  FIELD_U8(v4, 44) = 0;
  FIELD_U8(v4, 46) = 0;
  FIELD_U8(v4, 47) = 0;
  FIELD_U8(v4, 45) = 4;
  FIELD_U32(v4, 40) = 0;
  FIELD_U32(v4, 48) = off_60C5E500;
  FIELD_U8(v4, 56) = 0;
  FIELD_U8(v4, 58) = 0;
  FIELD_U8(v4, 59) = 0;
  FIELD_U8(v4, 57) = 4;
  FIELD_U32(v4, 52) = 0;
  do
  {
    v7 = (_DWORD *)(v4 + v6);
    v8 = (void *)(v4 + v6 + 68);
    qmemcpy(v8, &unk_60B46668, 0x24u);
    v6 += 128;
    v9 = v4 + v5;
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
  qmemcpy((void *)(v4 + 60), (const void *)(a1 + 60), 0x200u);
  return v4;
}
