/* sub_6088B0E4
 * address: 0x6088B0E4   size: 260   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6088B0E4(int a1)
{
  int v2; // r4
  _DWORD *v3; // r1
  _QWORD *v4; // r0
  __int64 v5; // d17
  __int64 v6; // d1
  float v7; // s4
  __int64 v8; // d0
  __int64 v9; // d1
  int v10; // r0
  _DWORD *v11; // r0
  int i; // r1
  int v13; // t1
  _QWORD v15[5]; // [sp+0h] [bp-28h] BYREF

  if ( !*(_BYTE *)(*(_DWORD *)(FIELD_U32(a1, 8) + 136) + 1874) )
  {
    v2 = FIELD_U32(a1, 4);
    if ( v2 )
    {
      FIELD_U32(v2, 100) = FIELD_U32(v2, 96);
      v3 = *(_DWORD **)(a1 + 8);
      v4 = (_QWORD *)(v3[77] + 16 * FIELD_U32(a1, 20));
      v5 = v4[1];
      v15[0] = *v4;
      v15[1] = v5;
      ((void (__fastcall *)(_DWORD, int, _DWORD, _QWORD *, float, float))loc_60884A14)(
        v3[33],
        v2,
        v3[87],
        v15,
        FIELD_F32(a1, 16),
        FIELD_F32(a1, 12));
      ((void (__fastcall *)(_DWORD, int, _DWORD, _QWORD *, float, float))loc_6088526C)(
        *(_DWORD *)(FIELD_U32(a1, 8) + 132),
        v2 + 16,
        *(_DWORD *)(FIELD_U32(a1, 8) + 348),
        v15,
        FIELD_F32(a1, 16),
        FIELD_F32(a1, 12));
      v6 = FIELD_U64(v2, 8);
      v7 = *(float *)(*(_DWORD *)(*(_DWORD *)(FIELD_U32(a1, 8) + 348) + 16) + 864);
      *(float *)&v8 = v7 * *(float *)v2;
      *((float *)&v8 + 1) = v7 * FIELD_F32(v2, 4);
      *(float *)&v6 = v7 * *(float *)&v6;
      *(_QWORD *)v2 = v8;
      FIELD_U64(v2, 8) = v6;
      v9 = FIELD_U64(v2, 24);
      *(float *)&v8 = v7 * FIELD_F32(v2, 16);
      *((float *)&v8 + 1) = v7 * FIELD_F32(v2, 20);
      *(float *)&v9 = v7 * *(float *)&v9;
      FIELD_U64(v2, 16) = v8;
      FIELD_U64(v2, 24) = v9;
      v10 = *(_DWORD *)(FIELD_U32(a1, 8) + 732);
      v13 = FIELD_U32(v10, 20);
      v11 = (_DWORD *)(v10 + 20);
      for ( i = v13; i; i = FIELD_U32(i, 92) )
        v11 = (_DWORD *)(i + 92);
      *v11 = v2;
    }
  }
  return 0;
}
