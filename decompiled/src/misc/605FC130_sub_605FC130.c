/* sub_605FC130
 * address: 0x605FC130   size: 220   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605FC130(int a1)
{
  int result; // r0
  int v3; // r5
  float *v4; // r5
  unsigned int v5; // t1
  float v6; // s0

  result = sub_605FE180(FIELD_S8(a1, 6870));
  v3 = result;
  if ( result )
  {
    ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 6168));
    FIELD_U32(a1, 6164) = FIELD_U32(v3, 8);
    v5 = FIELD_U16(v3, 6116);
    v4 = (float *)(v3 + 6116);
    FIELD_F32(a1, 6860) = fabsf(FIELD_F32(a1, 6828) - FIELD_F32(a1, 6832)) / (float)v5;
    v6 = *(v4 - 3);
    FIELD_F32(a1, 6864) = v6;
    FIELD_F32(a1, 6896) = v6 / (float)*(unsigned __int16 *)v4;
    sub_605FD008(a1);
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CB2634);
    JUMPOUT(0x605FD28C);
  }
  return result;
}
