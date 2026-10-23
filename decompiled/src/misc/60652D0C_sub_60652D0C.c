/* sub_60652D0C
 * address: 0x60652D0C   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60652D0C(int a1)
{
  float *v2; // r5
  float v3; // s0

  v2 = (float *)(a1 + 6568);
  v3 = FIELD_F32(a1, 6568) + 0.05;
  FIELD_F32(a1, 6568) = v3;
  if ( v3 >= 1.0 )
  {
    *v2 = 1.0;
    FIELD_U32(a1, 6240) &= ~1u;
    StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60CB62BC);
    v3 = *v2;
  }
  (*(void (__fastcall **)(int, float))(*(_DWORD *)a1 + 216))(a1, v3);
  return (*(int (__fastcall **)(int, float))(*(_DWORD *)a1 + 220))(a1, *v2);
}
