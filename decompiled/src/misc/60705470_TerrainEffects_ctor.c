/* TerrainEffects_ctor
 * address: 0x60705470   size: 216   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall TerrainEffects_ctor(int a1)
{
  int v2; // r2
  _DWORD *v3; // r1

  *(_DWORD *)a1 = TerrainEffects_vtable;
  FIELD_U32(a1, 4) = 0;
  FIELD_U32(a1, 0xC) = 0;
  FIELD_U32(a1, 0x10) = 0;
  FIELD_U32(a1, 0x14) = 0;
  FIELD_U32(a1, 0x24) = 0;
  FIELD_U32(a1, 0x28) = 0;
  FIELD_U32(a1, 0x2C) = 0;
  FIELD_U32(a1, 0x94) = 0;
  FIELD_U32(a1, 0x98) = 0;
  FIELD_U32(a1, 0x9C) = 0;
  FIELD_U32(a1, 0xA0) = 0x3F800000;
  memset((void *)(a1 + 0xA4), 0, 0x45);
  v2 = 46;
  FIELD_U8(a1, 0xE9) = 1;
  FIELD_U32(a1, 0xEC) = a1 + 0xEC;
  FIELD_U32(a1, 0xF0) = a1 + 0xEC;
  FIELD_U32(a1, 244) = 0;
  FIELD_U32(a1, 248) = a1 + 260;
  v3 = (_DWORD *)(a1 + 1616);
  FIELD_U32(a1, 0xFC) = 0;
  FIELD_U32(a1, 0x100) = 0;
  while ( 1 )
  {
    *(v3 - 339) = v3;
    if ( !v2 )
      break;
    v2 -= 2;
    *v3 = v3 + 339;
    v3 += 0x2A6;
  }
  FIELD_U32(a1, 0xF9F8) = 0;
  FIELD_U32(a1, 0xFC) = a1 + 260;
  FIELD_U32(a1, 0x100) = 48;
  FIELD_U32(a1, 0xFF44) = 0;
}
