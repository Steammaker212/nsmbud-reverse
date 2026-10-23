/* sub_607D3FA4
 * address: 0x607D3FA4   size: 320   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607D3FA4(int a1)
{
  bool v2; // zf
  int v3; // r6
  int v4; // r1
  float v5; // s0

  sub_6076FEC8(a1);
  FIELD_U32(a1, 11496) = 0;
  FIELD_U32(a1, 1236) |= 0x1000000u;
  FIELD_U32(a1, 132) = 0;
  FIELD_U32(a1, 156) = 0;
  FIELD_U32(a1, 160) = sub_60773F3C(a1, FIELD_U32(a1, 80));
  v2 = (FIELD_U8(a1, 6900) & 1) == 0;
  if ( (FIELD_U8(a1, 6900) & 1) != 0 )
    v2 = (FIELD_U8(a1, 3552) & 1) == 0;
  if ( !v2 )
    sub_6076F03C(a1, 1);
  v3 = FIELD_U32(a1, 9932);
  if ( !v3 )
  {
    (*(void (__fastcall **)(int, int))(*(_DWORD *)a1 + 1120))(a1, 1);
LABEL_13:
    sub_6076FE18((float *)a1);
    goto LABEL_14;
  }
  v4 = FIELD_U32(v3, 4);
  if ( v4 == 2 )
  {
    v4 = sub_60786934(a1 + 688);
    if ( v4 )
      v4 = 2;
  }
  (*(void (__fastcall **)(int, int))(*(_DWORD *)a1 + 1120))(a1, v4);
  v5 = *(float *)v3;
  if ( *(float *)v3 == 0.0 )
    goto LABEL_13;
  FIELD_F32(a1, 124) = v5;
  if ( (FIELD_U8(a1, 6904) & 0x18) != 0 )
    FIELD_F32(a1, 124) = v5 * 0.8;
LABEL_14:
  (*(void (__fastcall **)(int, int))(*(_DWORD *)a1 + 1124))(a1, 1);
  FIELD_U32(a1, 6900) &= ~1u;
  ((void (__fastcall *)(int))loc_6076438C)(a1);
  sub_607712D4(a1);
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1104))(a1);
}
