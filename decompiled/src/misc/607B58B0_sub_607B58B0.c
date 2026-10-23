/* sub_607B58B0
 * address: 0x607B58B0   size: 348   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_607B58B0(int a1)
{
  int v2; // r5
  int v3; // r0
  unsigned int *v4; // r1
  unsigned int result; // r0
  int v6; // [sp+4h] [bp-14h] BYREF

  v2 = a1 + 688;
  if ( sub_6078663C(a1 + 688) == 1 )
    FIELD_U32(a1, 9948) = 1;
  if ( sub_60793184(FIELD_U32(a1, 11360)) >= 5.0 && FIELD_U32(a1, 9948) )
  {
    if ( sub_607868D4(v2, &v6) )
      FIELD_U32(a1, 80) = v6;
    sub_60773630(a1, 29, 0);
    FIELD_U32(a1, 12380) = 5;
    Player_changeState(a1, (StateBase *)&dword_60CC4BE0, 0);
    FIELD_U32(a1, 160) = sub_60773F3C(a1, FIELD_U32(a1, 80) ^ 1);
    v3 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1204))(a1);
    v4 = (unsigned int *)(a1 + 1276);
    if ( v3 )
      v4 = (unsigned int *)(a1 + 1280);
    result = *v4;
    FIELD_F32(a1, 88) = *(float *)*v4 * flt_60B0A898[FIELD_U32(a1, 80)];
  }
  else if ( sub_60793CA8(FIELD_U32(a1, 11360)) || (result = sub_6075EDF8(a1), result == 1) )
  {
    FIELD_U32(a1, 9940) = 1;
    PlayerBase_dispatchVirtual3(a1 + 11356, 46, 0.0);
    FIELD_U32(a1, 80) ^= 1u;
    result = FIELD_U32(a1, 1228) & 0xFFFFFBFF;
    FIELD_U32(a1, 1228) = result;
  }
  return result;
}
