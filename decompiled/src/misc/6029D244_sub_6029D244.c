/* sub_6029D244
 * address: 0x6029D244   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6029D244(int a1)
{
  _DWORD *v2; // r0
  int v3; // r1
  int v4; // t1
  int result; // r0
  float v6; // s0
  float v7; // s0

  v4 = FIELD_U32(a1, 6312);
  v2 = (_DWORD *)(a1 + 6312);
  v3 = v4;
  if ( v4 )
  {
    *v2 = v3 - 1;
  }
  else if ( ((int (__fastcall *)(int, float))loc_6029E430)(a1, *(float *)&dword_60AF1FE8[FIELD_U32(a1, 6304)]) == 1 )
  {
    (*(void (__fastcall **)(int, State *))(*(_DWORD *)a1 + 192))(a1, &stru_60C900A8);
    FIELD_U32(a1, 124) = 0;
    return 0;
  }
  FIELD_F32(a1, 108) = FIELD_F32(a1, 108) + FIELD_F32(a1, 120);
  FIELD_F32(a1, 112) = FIELD_F32(a1, 112) + FIELD_F32(a1, 124);
  v6 = FIELD_F32(a1, 116) + FIELD_F32(a1, 128);
  FIELD_F32(a1, 116) = v6;
  v7 = CollisionMgr_process((_BYTE *)(a1 + 648), v6);
  result = FIELD_U32(a1, 2872) & 0x10400;
  if ( result != 1024 )
    return (*(int (__fastcall **)(int, void *, float))(*(_DWORD *)a1 + 192))(a1, &unk_60C90148, v7);
  return result;
}
