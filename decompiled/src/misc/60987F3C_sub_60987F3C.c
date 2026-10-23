/* sub_60987F3C
 * address: 0x60987F3C   size: 148   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60987F3C(int result, int a2)
{
  char v2; // r12
  char v3; // lr
  char v4; // r6
  char v5; // r4
  char v6; // r5
  char v7; // r3
  int v8; // r2
  int v9; // r2

  v2 = *(_BYTE *)(*(_DWORD *)a2 + 1);
  v3 = *(_BYTE *)(*(_DWORD *)a2 + 2);
  v4 = *(_BYTE *)(*(_DWORD *)a2 + 3);
  FIELD_U8(result, 7) = **(_BYTE **)a2;
  FIELD_U8(result, 6) = v2;
  FIELD_U8(result, 5) = v3;
  FIELD_U8(result, 4) = v4;
  v5 = *(_BYTE *)(*(_DWORD *)a2 + 5);
  v6 = *(_BYTE *)(*(_DWORD *)a2 + 6);
  v7 = *(_BYTE *)(*(_DWORD *)a2 + 7);
  FIELD_U8(result, 11) = *(_BYTE *)(*(_DWORD *)a2 + 4);
  FIELD_U8(result, 10) = v5;
  FIELD_U8(result, 9) = v6;
  FIELD_U8(result, 8) = v7;
  v8 = *(_DWORD *)(*(_DWORD *)a2 + 40);
  FIELD_U32(result, 12) = v8;
  FIELD_U32(result, 16) = v8;
  FIELD_U8(result, 53) = -1;
  FIELD_U8(result, 54) = v4;
  FIELD_U8(result, 55) = v7;
  v9 = FIELD_U32(result, 40);
  if ( !v9 )
  {
    FIELD_U32(result, 32) = FIELD_U32(a2, 20);
    FIELD_U32(result, 36) = FIELD_U32(a2, 24);
  }
  FIELD_U32(result, 40) = v9 + 1;
  return result;
}
