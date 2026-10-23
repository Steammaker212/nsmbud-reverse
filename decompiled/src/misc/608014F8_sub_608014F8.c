/* sub_608014F8
 * address: 0x608014F8   size: 284   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608014F8(int a1, int a2, int a3, int a4)
{
  sead_IDisposer *v8; // r0
  int v9; // r0
  sead_IDisposer *v10; // r0
  int v11; // r0
  float *v12; // r5

  sead_IDisposer_ctor((sead_IDisposer *)a1);
  *(_DWORD *)a1 = &off_60C27E3C;
  sub_60800970(a1, a3);
  *(_DWORD *)a1 = &off_60C27E6C;
  v8 = (sead_IDisposer *)operator_new(0x20u);
  FIELD_U32(a1, 36) = sub_607FF5D8(v8);
  v9 = operator_new(0x40u);
  FIELD_U32(a1, 40) = sub_60804474(v9, a4, FIELD_F32(a1, 16));
  v10 = (sead_IDisposer *)operator_new(0x24u);
  FIELD_U32(a1, 44) = sub_607FED54(
                           v10,
                           FIELD_U32(a2, 4),
                           (float)(*(float *)(FIELD_U32(a2, 12) + 44) + *(float *)(FIELD_U32(a2, 12) + 48)) * 0.5,
                           FIELD_F32(a3, 36));
  v11 = operator_new(0x24u);
  FIELD_U32(a1, 48) = sub_608028AC(
                           v11,
                           FIELD_U32(a2, 4),
                           a4,
                           (float)(*(float *)(FIELD_U32(a2, 12) + 52) + *(float *)(FIELD_U32(a2, 12) + 56)) * 0.5);
  FIELD_F32(a1, 52) = FIELD_F32(a1, 28) + (float)(FIELD_F32(a1, 20) * 0.5);
  sub_607FEDB0(FIELD_U32(a1, 44), FIELD_U32(a1, 36), FIELD_U32(a2, 12));
  v12 = *(float **)a2;
  sub_60800A24(a1, v12);
  sub_60800A5C(a1, (int)v12);
  return a1;
}
