/* sub_6049C878
 * address: 0x6049C878   size: 560   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6049C878(int a1)
{
  int v2; // r0
  int v3; // t1
  int v4; // r12
  char v5; // r1
  int v6; // r0
  int v7; // r7
  int v8; // t1

  v3 = FIELD_U32(a1, 20204);
  v2 = a1 + 20204;
  v4 = dword_60C99DEC;
  FIELD_U8(v3, 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 20208) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 20212) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 20216) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 20252) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 20256) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 20260) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 20264) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 20268) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 20272) + 64) &= ~1u;
  if ( FIELD_U8(v4, 522) )
  {
    *(_BYTE *)(FIELD_U32(a1, 20208) + 64) |= 1u;
    *(_BYTE *)(FIELD_U32(a1, 20260) + 64) |= 1u;
    *(_BYTE *)(FIELD_U32(a1, 20264) + 64) |= 1u;
    v5 = 1;
    FIELD_U8(a1, 12980) = 1;
    v6 = 12983;
LABEL_5:
    *(_BYTE *)(a1 + v6) = v5;
    goto LABEL_6;
  }
  *(_BYTE *)(*(_DWORD *)v2 + 64) |= 1u;
  *(_BYTE *)(FIELD_U32(a1, 20256) + 64) |= 1u;
  if ( FIELD_S32(a1, 22496) <= 2 )
  {
    sub_6047EE74(a1 + 3676, 1);
    v6 = 4137;
    v5 = 0;
    goto LABEL_5;
  }
LABEL_6:
  FIELD_U8(dword_60C99E2C, 820548) = 1;
  *(_BYTE *)(FIELD_U32(a1, 20252) + 64) |= 1u;
  sub_60473DE4((_DWORD *)(a1 + 44), 0, &dword_60CA0B5C, 0);
  sub_60473DE4((_DWORD *)(a1 + 44), 1u, &dword_60CA0B8C, 0);
  sub_60473DE4((_DWORD *)(a1 + 44), 2u, &dword_60CA0B94, 0);
  v8 = FIELD_U32(a1, 5752);
  v7 = a1 + 5752;
  *(_DWORD *)v7 = v8 | 2;
  FIELD_U8(v7, 14556) = 1;
  FIELD_U8(v7, 14557) = 1;
  FIELD_U8(v7, 16749) = 1;
  FIELD_U8(v7, 16751) = 1;
  return 16751;
}
