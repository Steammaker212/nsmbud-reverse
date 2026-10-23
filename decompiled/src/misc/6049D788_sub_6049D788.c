/* sub_6049D788
 * address: 0x6049D788   size: 380   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6049D788(int a1)
{
  sub_60502548(a1 + 3636);
  FIELD_U16(a1, 4688) = 0;
  sub_6047EABC((_DWORD *)(a1 + 3676));
  *(_BYTE *)(FIELD_U32(a1, 20204) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 20208) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 20212) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 20216) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 20252) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 20256) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 20260) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 20264) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 20268) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 20272) + 64) &= ~1u;
  if ( !FIELD_U32(a1, 22480) )
  {
    FIELD_U8(a1, 12980) = 1;
    FIELD_U8(a1, 12983) = 1;
  }
  *(_BYTE *)(FIELD_U32(a1, 20212) + 64) |= 1u;
  *(_BYTE *)(FIELD_U32(a1, 20252) + 64) |= 1u;
  sub_60473DE4((_DWORD *)(a1 + 44), 0, &dword_60CA0B6C, 0);
  sub_60473DE4((_DWORD *)(a1 + 44), 1u, &dword_60CA0B8C, 0);
  FIELD_U8(a1, 20308) = 1;
  FIELD_U8(a1, 20309) = 1;
  FIELD_U8(a1, 22501) = 1;
  return 22501;
}
