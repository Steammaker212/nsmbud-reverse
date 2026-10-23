/* BobOmb_vf158
 * address: 0x6025E874   size: 164   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall BobOmb_vf158(int a1, int a2)
{
  __int16 v3; // r2
  int v4; // r6

  sub_60272570(a1, a2);
  if ( FIELD_S32(a1, 6456) <= 0 )
  {
    v3 = FIELD_U16(a1, 6364);
    if ( (v3 & 4) == 0 )
    {
      FIELD_U16(a1, 6364) = v3 | 4;
      FIELD_U32(a1, 6456) = 240;
      v4 = **(_DWORD **)(FIELD_U32(a1, 6352) + 28);
      sub_6041838C((ModelAnimation *)(v4 + 4));
      AnimationCtrl_setRepeat((ModelAnimation *)(v4 + 4), 0);
      FIELD_U32(v4, 20) = 0;
      FIELD_U32(v4, 28) |= 2u;
      FIELD_U32(v4, 24) = 1065353216;
    }
  }
  return (*(int (__fastcall **)(int, StateVirtual *))(*(_DWORD *)a1 + 192))(a1, &BobOmb_StateID_Kicked);
}
