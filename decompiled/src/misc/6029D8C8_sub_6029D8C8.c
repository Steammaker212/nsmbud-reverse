/* sub_6029D8C8
 * address: 0x6029D8C8   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6029D8C8(int a1)
{
  float v2; // s0
  float v3; // s0
  int result; // r0

  FIELD_F32(a1, 108) = FIELD_F32(a1, 108) + FIELD_F32(a1, 120);
  FIELD_F32(a1, 112) = FIELD_F32(a1, 112) + FIELD_F32(a1, 124);
  v2 = FIELD_F32(a1, 116) + FIELD_F32(a1, 128);
  FIELD_F32(a1, 116) = v2;
  v3 = CollisionMgr_process((_BYTE *)(a1 + 648), v2);
  result = FIELD_U32(a1, 2872) & 0x10400;
  if ( result == 1024 )
  {
    (*(void (__fastcall **)(int, State *, float))(*(_DWORD *)a1 + 192))(a1, &stru_60C90088, v3);
    FIELD_U32(a1, 6312) = 12;
    return 12;
  }
  return result;
}
