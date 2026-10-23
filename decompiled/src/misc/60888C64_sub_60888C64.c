/* sub_60888C64
 * address: 0x60888C64   size: 256   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60888C64(int a1)
{
  int v2; // r4
  _DWORD *v3; // r1
  int v4; // r5
  _QWORD *v5; // r0
  __int64 v6; // d17
  __int64 v7; // d1
  float v8; // s4
  __int64 v9; // d0
  __int64 v10; // d1
  int v11; // r0
  _DWORD *v12; // r0
  int i; // r1
  int v14; // t1
  _QWORD v16[5]; // [sp+0h] [bp-28h] BYREF

  v2 = 0;
  v3 = *(_DWORD **)(a1 + 8);
  if ( !*(_BYTE *)(v3[34] + 1874) )
  {
    v4 = FIELD_U32(a1, 4);
    v2 = 1;
    if ( v4 )
    {
      v5 = (_QWORD *)(v3[77] + 16 * FIELD_U32(a1, 20));
      v6 = v5[1];
      v16[0] = *v5;
      v16[1] = v6;
      ((void (__fastcall *)(_DWORD, int, _DWORD, _QWORD *, float, float))loc_60884A14)(
        v3[33],
        v4,
        v3[87],
        v16,
        FIELD_F32(a1, 16),
        FIELD_F32(a1, 12));
      ((void (__fastcall *)(_DWORD, int, _DWORD, _QWORD *, float, float))loc_6088526C)(
        *(_DWORD *)(FIELD_U32(a1, 8) + 132),
        v4 + 16,
        *(_DWORD *)(FIELD_U32(a1, 8) + 348),
        v16,
        FIELD_F32(a1, 16),
        FIELD_F32(a1, 12));
      v7 = FIELD_U64(v4, 8);
      v8 = *(float *)(*(_DWORD *)(*(_DWORD *)(FIELD_U32(a1, 8) + 348) + 16) + 864);
      *(float *)&v9 = v8 * *(float *)v4;
      *((float *)&v9 + 1) = v8 * FIELD_F32(v4, 4);
      *(float *)&v7 = v8 * *(float *)&v7;
      *(_QWORD *)v4 = v9;
      FIELD_U64(v4, 8) = v7;
      v10 = FIELD_U64(v4, 24);
      *(float *)&v9 = v8 * FIELD_F32(v4, 16);
      *((float *)&v9 + 1) = v8 * FIELD_F32(v4, 20);
      *(float *)&v10 = v8 * *(float *)&v10;
      FIELD_U64(v4, 16) = v9;
      FIELD_U64(v4, 24) = v10;
      v11 = *(_DWORD *)(FIELD_U32(a1, 8) + 732);
      v14 = FIELD_U32(v11, 20);
      v12 = (_DWORD *)(v11 + 20);
      for ( i = v14; i; i = FIELD_U32(i, 92) )
        v12 = (_DWORD *)(i + 92);
      *v12 = v4;
    }
  }
  return v2;
}
