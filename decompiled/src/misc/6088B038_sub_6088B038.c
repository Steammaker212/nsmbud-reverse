/* sub_6088B038
 * address: 0x6088B038   size: 168   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6088B038(_DWORD *a1)
{
  int v2; // r5
  _DWORD *v3; // r0
  int v4; // r1
  int v5; // r2
  _QWORD *v6; // r0
  _QWORD *v7; // r1
  __int64 v8; // d17

  v2 = 0;
  if ( !*(_BYTE *)(*(_DWORD *)(a1[2] + 136) + 1874) )
  {
    v3 = (_DWORD *)sub_6088B6D8(SuperStripe_instance);
    if ( v3 )
    {
      v4 = 0;
      v3[30] = 0;
      v3[31] = 0;
      v3[25] = 0;
      a1[1] = v3;
      v5 = *(_DWORD *)(a1[2] + 732);
      v3[27] = FIELD_U32(v5, 36) % FIELD_U32(v5, 32);
      v6 = v3 + 8;
      if ( FIELD_U32(v5, 36) + 1 < FIELD_U32(v5, 32) )
        v4 = FIELD_U32(v5, 36) + 1;
      v2 = 1;
      FIELD_U32(v5, 36) = v4;
      v7 = (_QWORD *)(*(_DWORD *)(a1[2] + 308) + 16 * a1[5]);
      v8 = v7[1];
      *v6 = *v7;
      v6[1] = v8;
    }
  }
  return v2;
}
