/* sub_60888BC8
 * address: 0x60888BC8   size: 152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60888BC8(_DWORD *a1)
{
  int v2; // r5
  int v3; // r0
  int v4; // r1
  _QWORD *v5; // r0
  int v6; // r3
  _QWORD *v7; // r1
  __int64 v8; // d17

  v2 = 0;
  if ( !*(_BYTE *)(*(_DWORD *)(a1[2] + 136) + 1874) )
  {
    v3 = sub_60889268(dword_60CC801C);
    if ( v3 )
    {
      a1[1] = v3;
      v4 = *(_DWORD *)(a1[2] + 732);
      v2 = 1;
      FIELD_U32(v3, 100) = FIELD_U32(v4, 36) % FIELD_U32(v4, 32);
      v5 = (_QWORD *)(v3 + 32);
      v6 = FIELD_U32(v4, 36) + 1;
      if ( v6 >= FIELD_U32(v4, 32) )
        v6 = 0;
      FIELD_U32(v4, 36) = v6;
      v7 = (_QWORD *)(*(_DWORD *)(a1[2] + 308) + 16 * a1[5]);
      v8 = v7[1];
      *v5 = *v7;
      v5[1] = v8;
    }
  }
  return v2;
}
