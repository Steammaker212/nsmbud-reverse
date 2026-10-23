/* sub_60944CF4
 * address: 0x60944CF4   size: 300   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60944CF4(int a1, int *a2, int a3, int a4)
{
  *(_DWORD *)a1 = &off_60C5E40C;
  FIELD_U32(a1, 8) = 0;
  (*(void (__fastcall **)(int *))(*a2 + 12))(a2);
  FIELD_U32(a1, 4) = sub_6090FEB4(a2[1]);
  if ( a4 )
    sub_60947BFC(a4, a1);
  *(_DWORD *)a1 = &off_60C5E4B0;
  FIELD_U32(a1, 12) = off_60C5E500;
  FIELD_U8(a1, 20) = 0;
  FIELD_U8(a1, 22) = 0;
  FIELD_U8(a1, 23) = 0;
  FIELD_U8(a1, 21) = 4;
  FIELD_U32(a1, 16) = 0;
  qmemcpy((void *)(a1 + 32), &unk_60B46644, 0x24u);
  FIELD_U32(a1, 68) = 1065353216;
  FIELD_U32(a1, 72) = 1065353216;
  FIELD_U32(a1, 76) = 1065353216;
  FIELD_U32(a1, 80) = 1065353216;
  FIELD_U32(a1, 84) = 1065353216;
  FIELD_U32(a1, 88) = 1065353216;
  FIELD_U32(a1, 92) = 1065353216;
  FIELD_U32(a1, 96) = 1065353216;
  FIELD_U32(a1, 100) = 1065353216;
  FIELD_U32(a1, 104) = 1065353216;
  FIELD_U32(a1, 108) = 1065353216;
  FIELD_U32(a1, 112) = 1065353216;
  FIELD_U32(a1, 116) = 1065353216;
  FIELD_U32(a1, 120) = 1065353216;
  FIELD_U32(a1, 124) = 1065353216;
  FIELD_U32(a1, 128) = 1065353216;
  FIELD_U32(a1, 132) = 1065353216;
  FIELD_U32(a1, 136) = 1065353216;
  FIELD_U32(a1, 140) = 1065353216;
  FIELD_U32(a1, 144) = 1065353216;
  FIELD_U32(a1, 148) = 1065353216;
  FIELD_U32(a1, 28) = 7;
  FIELD_U32(a1, 24) = 9;
  FIELD_U8(a1, 20) = 7;
  FIELD_U8(a1, 22) = 30;
  FIELD_U32(a1, 16) = a1 + 32;
  FIELD_U8(a1, 23) = 9;
  return a1;
}
