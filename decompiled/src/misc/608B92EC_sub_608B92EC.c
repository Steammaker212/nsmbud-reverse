/* sub_608B92EC
 * address: 0x608B92EC   size: 424   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608B92EC(int a1, int a2)
{
  int v4; // r0
  int v5; // r0
  int v6; // r6
  int v7; // r5
  int v8; // r6
  int v9; // r0
  int v10; // r0
  unsigned int v11; // r0
  int v12; // r0
  int v13; // r0
  int v14; // r0
  int result; // r0
  char v16; // [sp+4h] [bp-24h] BYREF

  if ( FIELD_U8(a1, 36) )
  {
    v4 = FIELD_U8(a1, 458);
    if ( FIELD_U8(a1, 458) )
    {
      v5 = sub_608C3C60(v4);
      sub_608C411C(v5, a1 + 176);
      FIELD_U8(a1, 458) = 0;
    }
    v6 = a1 + 244;
    v7 = 0;
    if ( FIELD_U8(a1, 37) )
      FIELD_U8(a1, 37) = 0;
    do
    {
      if ( *(_DWORD *)(v6 + 4 * v7) )
      {
        sub_608BB040();
        (*(void (__fastcall **)(_DWORD, _DWORD))(**(_DWORD **)(a1 + 232) + 12))(
          FIELD_U32(a1, 232),
          *(_DWORD *)(v6 + 4 * v7));
        *(_DWORD *)(v6 + 4 * v7) = 0;
      }
      ++v7;
    }
    while ( v7 != 16 );
  }
  v8 = FIELD_U32(a1, 244);
  if ( !v8 )
    return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 12))(a1);
  v9 = sub_608D6DDC(&v16, *(_DWORD *)a2);
  v10 = sub_608D6E7C(v9);
  sub_608BB124(v8, v10, FIELD_U32(a2, 40));
  sub_608BB134(v8);
  sub_608B6C28(a1 + 408, FIELD_U32(a2, 4));
  sub_608B4950(a1 + 344, FIELD_U32(a2, 20), FIELD_U8(a2, 36));
  sub_608B6C28(a1 + 420, FIELD_U32(a2, 8));
  sub_608B4950(a1 + 360, FIELD_U32(a2, 24), FIELD_U8(a2, 37));
  sub_608B6C28(a1 + 432, FIELD_U32(a2, 12));
  sub_608B4950(a1 + 376, FIELD_U32(a2, 28), FIELD_U8(a2, 38));
  sub_608B6C28(a1 + 444, FIELD_U32(a2, 16));
  sub_608B4950(a1 + 392, FIELD_U32(a2, 32), FIELD_U8(a2, 39));
  FIELD_U8(a1, 456) = 3;
  v11 = FIELD_U32(a2, 48);
  if ( !v11 )
    v11 = FIELD_U32(a2, 44) / 5u;
  FIELD_U32(a1, 212) = v11;
  FIELD_U8(a1, 36) = 1;
  v12 = sub_608D3D58();
  v13 = sub_608D3DBC(v12, a1 + 164);
  v14 = sub_608C3C60(v13);
  sub_608C40FC(v14, a1 + 176);
  FIELD_U8(a1, 458) = 1;
  result = FIELD_U32(a2, 52);
  FIELD_U32(a1, 544) = result;
  return result;
}
