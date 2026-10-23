/* sub_60582544
 * address: 0x60582544   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60582544(int a1)
{
  int v1; // r1
  int result; // r0
  int v3; // r2

  v1 = a1 + 27688;
  result = a1 + 20524;
  v3 = 256;
  do
  {
    *(_BYTE *)(result - 4) = 0;
    *(_DWORD *)(result - 8) = 0;
    *(_DWORD *)(result - 12) = 0;
    *(_DWORD *)(result - 16) = 0;
    *(_DWORD *)(result - 20) = 0;
    *(_DWORD *)(result - 24) = 0;
    *(_DWORD *)(result - 28) = 0;
    *(_BYTE *)(v1 - 2) = 0;
    *(_WORD *)(v1 - 4) = 0;
    *(_DWORD *)(v1 - 8) = 0;
    *(_DWORD *)(v1 - 12) = 0;
    *(_DWORD *)(v1 - 16) = 0;
    *(_DWORD *)(v1 - 20) = 0;
    *(_DWORD *)(v1 - 24) = 0;
    FIELD_U8(result, 24) = 0;
    *(_DWORD *)result = 0;
    FIELD_U32(result, 4) = 0;
    FIELD_U32(result, 8) = 0;
    FIELD_U32(result, 12) = 0;
    FIELD_U32(result, 16) = 0;
    FIELD_U32(result, 20) = 0;
    FIELD_U8(v1, 22) = 0;
    FIELD_U16(v1, 20) = 0;
    *(_DWORD *)v1 = 0;
    FIELD_U32(v1, 4) = 0;
    FIELD_U32(v1, 8) = 0;
    FIELD_U32(v1, 12) = 0;
    FIELD_U32(v1, 16) = 0;
    v3 -= 2;
    v1 += 48;
    result += 56;
  }
  while ( v3 );
  return result;
}
