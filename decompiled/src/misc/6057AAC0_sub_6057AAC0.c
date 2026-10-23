/* sub_6057AAC0
 * address: 0x6057AAC0   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6057AAC0(int a1, _DWORD *a2)
{
  int v3; // r4
  int v4; // r2
  int v5; // r3
  int v7; // [sp+0h] [bp-20h] BYREF
  _DWORD v8[7]; // [sp+4h] [bp-1Ch] BYREF

  v3 = 0;
  *a2 = 0;
  v4 = FIELD_U32(a1, 112);
  v5 = FIELD_U32(a1, 116);
  v8[0] = FIELD_U32(a1, 108);
  v8[1] = v4;
  v8[2] = v5;
  ((void (__fastcall *)(int *, _DWORD *, _DWORD *, _DWORD))checkLiquidCollisions)(
    &v7,
    a2,
    v8,
    FIELD_U8(a1, 86));
  if ( v7 )
  {
    v3 = 1;
    FIELD_U8(a1, 6056) = 1;
  }
  return v3;
}
