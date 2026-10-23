/* sub_608028AC
 * address: 0x608028AC   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608028AC(int a1, _DWORD *a2, float a3)
{
  sead_IDisposer *v6; // r0
  sead_IDisposer *v7; // r0

  sead_IDisposer_ctor((sead_IDisposer *)a1);
  *(_DWORD *)a1 = off_60C27EAC;
  FIELD_U32(a1, 16) = a2[6];
  FIELD_U32(a1, 20) = a2[7];
  v6 = (sead_IDisposer *)operator_new(0x20u);
  v7 = sub_607FEB48(v6, a2[8]);
  FIELD_U32(v7, 0x0) = (int)off_60C27E8C;
  FIELD_U32(a1, 24) = v7;
  FIELD_F32(a1, 28) = a3;
  FIELD_U32(a1, 32) = 0;
  return a1;
}
