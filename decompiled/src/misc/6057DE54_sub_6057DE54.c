/* sub_6057DE54
 * address: 0x6057DE54   size: 360   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6057DE54(int a1)
{
  int v2; // r1
  unsigned int v3; // r0
  float v4; // s0
  int v5; // r0
  int *v6; // r1

  obj_coin_ref_57DB40(a1);
  FIELD_F32(a1, 112) = FIELD_F32(a1, 112) + 16.0;
  FIELD_U32(a1, 144) = 1065353216;
  FIELD_U32(a1, 148) = 1065353216;
  FIELD_U32(a1, 152) = 1065353216;
  v2 = (unsigned __int8)FIELD_U32(a1, 20) >> 4;
  v3 = FIELD_U32(a1, 20) & 0xF;
  FIELD_U32(a1, 6120) = v2;
  FIELD_U32(a1, 6112) = v3;
  if ( v3 != 15 )
  {
    SE_OBJ_GET_COIN_ref(v3, (float *)(a1 + 108));
    v2 = FIELD_U32(a1, 6120);
  }
  if ( v2 == 3 )
  {
    FIELD_F32(a1, 112) = FIELD_F32(a1, 112) + -32.0;
    FIELD_U32(a1, 492) = 0;
    FIELD_U32(a1, 496) = 1098907648;
    v4 = -2.0;
    FIELD_U32(a1, 500) = 1107296256;
    FIELD_U32(a1, 504) = 1107296256;
    FIELD_U32(a1, 508) = 1107296256;
    FIELD_U32(a1, 512) = 1107296256;
    FIELD_U32(a1, 516) = 1132986368;
    FIELD_U32(a1, 520) = 1132986368;
    FIELD_U32(a1, 524) = 1119879168;
    FIELD_U32(a1, 528) = 1119879168;
    FIELD_U32(a1, 124) = 0;
    v5 = -1115684864;
  }
  else
  {
    v4 = -8.0;
    v5 = -1103101952;
    FIELD_U32(a1, 124) = 1077936128;
  }
  FIELD_U32(a1, 100) = v5;
  FIELD_U32(a1, 132) = 1065353216;
  FIELD_F32(a1, 136) = v4;
  FIELD_U32(a1, 140) = 0;
  FIELD_U32(a1, 6108) = 28;
  v6 = dword_6057DFD0;
  if ( FIELD_U8(a1, 86) )
    v6 = &dword_6057DFD0[1];
  FIELD_U32(a1, 116) = *v6;
  sub_6057D990((ModelWrapper **)a1);
  (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CAEEE0);
  return 1;
}
