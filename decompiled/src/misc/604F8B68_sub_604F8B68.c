/* sub_604F8B68
 * address: 0x604F8B68   size: 224   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_604F8B68(int a1, ...)
{
  int i; // r5
  int v3; // r0
  int v4; // r0
  int *v5; // r4
  int v6; // r0
  int v7; // r0
  int v8; // r0
  va_list va; // [sp+24h] [bp-Ch] BYREF

  va_start(va, a1);
  for ( i = 40; i != 80; i += 4 )
  {
    v3 = sub_608DE1A4(0xD0u);
    v4 = sub_6085A1FC(v3, *(_DWORD *)((char *)va + i - 40), FIELD_U32(dword_60CCF464, 36));
    *(_DWORD *)(a1 + i) = v4;
    v5 = (int *)(a1 + i);
    FIELD_U8(v4, 64) |= 1u;
    v6 = *(_DWORD *)(a1 + i);
    FIELD_U32(v6, 24) = 0;
    FIELD_U32(v6, 28) = 0;
    FIELD_U32(v6, 32) = 0;
    FIELD_U8(v6, 64) |= 0x10u;
    v7 = sub_608DE1A4(0xD0u);
    v8 = sub_6085A1FC(v7, *(_DWORD *)((char *)va + i), FIELD_U32(dword_60CCF464, 36));
    *(v5 - 10) = v8;
    FIELD_U8(v8, 64) |= 1u;
    sub_608589FC(*v5, *(v5 - 10));
  }
  return a1;
}
