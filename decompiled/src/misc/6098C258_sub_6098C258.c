/* sub_6098C258
 * address: 0x6098C258   size: 272   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6098C258(int a1)
{
  int result; // r0
  int v3; // r1
  int v4; // r5
  unsigned int v5; // r0
  int v6; // r1
  float v7; // s2
  float v8[2]; // [sp+8h] [bp-28h] BYREF
  float v9[8]; // [sp+10h] [bp-20h] BYREF

  result = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 16))(a1);
  if ( result == 1 )
  {
    v3 = FIELD_U32(a1, 48);
    if ( (FIELD_U8(v3, 16) & 1) != 0 )
    {
      v4 = FIELD_U32(a1, 20);
      v5 = (*(int (__fastcall **)(_DWORD, _DWORD))(**(_DWORD **)(v4 + 36) + 20))(
             FIELD_U32(v4, 36),
             FIELD_S8(a1, 120));
      LODWORD(v9[0]) = v5;
      if ( v5 < 2 )
        v4 += v5;
      if ( FIELD_U8(v4, 860) )
      {
        sub_608574F4(v9, FIELD_U32(a1, 24));
        v6 = FIELD_U32(a1, 48);
        v7 = (float)-FIELD_F32(v6, 280) - (float)((float)(v9[3] - v9[1]) * 0.5);
        v8[0] = FIELD_F32(v6, 276) - (float)((float)(v9[2] - v9[0]) * 0.5);
        v8[1] = v7;
        return (*(int (__fastcall **)(_DWORD, float *, int, int))(**(_DWORD **)(a1 + 28) + 8))(
                 FIELD_U32(a1, 28),
                 v8,
                 (FIELD_U32(v6, 4) >> 15) & 1,
                 (FIELD_U32(v6, 8) >> 15) & 1);
      }
      v3 = FIELD_U32(a1, 48);
    }
    return (*(int (__fastcall **)(_DWORD, _DWORD, _DWORD, int))(**(_DWORD **)(a1 + 28) + 8))(
             FIELD_U32(a1, 28),
             0,
             0,
             (FIELD_U32(v3, 8) >> 15) & 1);
  }
  return result;
}
