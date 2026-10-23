/* sub_60120AF8
 * address: 0x60120AF8   size: 192   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60120AF8(int a1, float *a2)
{
  float *v3; // r0
  float v4; // s2
  float v5; // s0
  StateBase *CurrentState; // r0
  int v7; // r5
  int result; // r0

  FIELD_U32(a1, 9280) = 0;
  v3 = (float *)(a1 + 9280);
  v4 = *a2;
  v5 = *(v3 - 2293);
  if ( v5 < *a2 )
  {
    *(_DWORD *)v3 = 1;
    v4 = *a2;
  }
  FIELD_U32(a1, 9284) = sub_6000F7B8(-(float)(FIELD_F32(a1, 112) - a2[1]), v5 - v4);
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v7 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  result = (*(int (**)(void))(dword_60C86D08 + 8))();
  if ( v7 != result )
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 812))(a1);
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C86D08);
  }
  return result;
}
