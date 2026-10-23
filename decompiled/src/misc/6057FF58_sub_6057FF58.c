/* sub_6057FF58
 * address: 0x6057FF58   size: 220   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_6057FF58(int a1)
{
  unsigned int v2; // r0

  obj_coin_ref_57DB40(a1);
  FIELD_F32(a1, 108) = FIELD_F32(a1, 108) + 8.0;
  FIELD_F32(a1, 112) = FIELD_F32(a1, 112) + -8.0;
  FIELD_U32(a1, 144) = 1065353216;
  FIELD_U32(a1, 148) = 1065353216;
  FIELD_U32(a1, 152) = 1065353216;
  FIELD_U32(a1, 6116) = FIELD_U8(a1, 29);
  v2 = FIELD_U32(a1, 20) & 0xF;
  FIELD_U32(a1, 6112) = v2;
  FIELD_U32(a1, 6108) = 28;
  FIELD_U32(a1, 132) = 1065353216;
  FIELD_U32(a1, 136) = -1056964608;
  FIELD_U32(a1, 140) = 0;
  FIELD_U32(a1, 124) = 1077936128;
  FIELD_U32(a1, 100) = -1103101952;
  SE_OBJ_GET_COIN_ref(v2, (float *)(a1 + 108));
  sub_6057D990((ModelWrapper **)a1);
  (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CAEFDC);
  return 1;
}
