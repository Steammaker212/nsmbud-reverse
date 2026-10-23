/* sub_602313B0
 * address: 0x602313B0   size: 560   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602313B0(int a1)
{
  FIELD_U32(a1, 16) = 1120403456;
  FIELD_U32(a1, 20) = 1201422336;
  FIELD_U32(a1, 24) = 1101004800;
  FIELD_U32(a1, 28) = 1065353216;
  memset((void *)(a1 + 32), 0, 48);
  FIELD_U32(a1, 84) = 1065353216;
  FIELD_U32(a1, 88) = 0;
  FIELD_U32(a1, 92) = 0;
  FIELD_U32(a1, 96) = 0;
  FIELD_U32(a1, 100) = 0;
  FIELD_U32(a1, 104) = 1065353216;
  FIELD_U32(a1, 108) = 0;
  FIELD_U32(a1, 112) = 0;
  FIELD_U32(a1, 116) = 0;
  FIELD_U32(a1, 120) = 0;
  FIELD_U32(a1, 124) = 1065353216;
  FIELD_U32(a1, 128) = 0;
  FIELD_U32(a1, 80) = off_60C5D014;
  FIELD_U32(a1, 132) = 0;
  FIELD_U32(a1, 136) = 0;
  FIELD_U32(a1, 140) = 1092616192;
  FIELD_U32(a1, 144) = 0;
  FIELD_U32(a1, 148) = 0;
  FIELD_U32(a1, 152) = 0;
  FIELD_U32(a1, 156) = 0;
  FIELD_U32(a1, 160) = 1065353216;
  FIELD_U32(a1, 164) = 0;
  sub_6090C344(a1 + 168);
  sub_604111E4(a1 + 352);
  FIELD_U32(a1, 420) = 0;
  nullsub_12(a1 + 424, a1);
  FIELD_U32(a1, 448) = 0;
  FIELD_U32(a1, 444) = 0;
  FIELD_U32(a1, 440) = 0;
  FIELD_U32(a1, 436) = 0;
  FIELD_U32(a1, 432) = 0;
  FIELD_U32(a1, 428) = 0;
  FIELD_U32(a1, 452) = FIELD_U32(AreaTask_intance, 1816);
  sub_6092D040(a1 + 456);
  agl_TextureData_ref(a1 + 4304);
  FIELD_U32(a1, 4576) = 0;
  FIELD_U32(a1, 4580) = 0;
  sead_IDisposer_ctor((sead_IDisposer *)(a1 + 4584));
  FIELD_U32(a1, 4600) = &sead__SafeStringBase__vtable;
  FIELD_U32(a1, 4604) = &byte_60ABC94D;
  FIELD_U32(a1, 4584) = off_60C5E9A4;
  FIELD_U32(a1, 4608) = 0;
  FIELD_U32(a1, 4612) = 0;
  FIELD_U32(a1, 4616) = 1;
  FIELD_U32(a1, 4624) = 0;
  FIELD_U32(a1, 4628) = 0;
  FIELD_U32(a1, 4632) = 0;
  FIELD_U32(a1, 4620) = off_60BD8394;
  sead_IDisposer_ctor((sead_IDisposer *)(a1 + 4652));
  FIELD_U32(a1, 4668) = &sead__SafeStringBase__vtable;
  FIELD_U32(a1, 4672) = &byte_60ABC94D;
  FIELD_U32(a1, 4652) = off_60C5E9A4;
  FIELD_U32(a1, 4676) = 0;
  FIELD_U32(a1, 4680) = 0;
  FIELD_U32(a1, 4684) = 1;
  FIELD_U32(a1, 4692) = 0;
  FIELD_U32(a1, 4696) = 0;
  FIELD_U32(a1, 4700) = 0;
  FIELD_U32(a1, 4688) = off_60BD8394;
  FIELD_U8(a1, 4720) = 0;
  FIELD_U8(a1, 4722) = 1;
  FIELD_U8(a1, 4723) = 0;
  FIELD_U32(a1, 4724) = 1052770304;
  FIELD_U32(a1, 4728) = 1052770304;
  return a1;
}
