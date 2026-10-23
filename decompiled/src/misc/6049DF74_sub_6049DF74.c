/* sub_6049DF74
 * address: 0x6049DF74   size: 416   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6049DF74(int a1)
{
  int v2; // r6
  int v3; // r7
  _DWORD *v4; // r5

  *(_BYTE *)(FIELD_U32(a1, 20204) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 20208) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 20212) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 20216) + 64) &= ~1u;
  v2 = a1 + 20252;
  *(_BYTE *)(FIELD_U32(a1, 20252) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 20256) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 20260) + 64) &= ~1u;
  v3 = a1 + 20264;
  *(_BYTE *)(FIELD_U32(a1, 20264) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 20268) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 20272) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 20208) + 64) |= 1u;
  *(_BYTE *)(FIELD_U32(a1, 20260) + 64) |= 1u;
  *(_BYTE *)(FIELD_U32(a1, 20264) + 64) |= 1u;
  *(_BYTE *)(FIELD_U32(a1, 20252) + 64) |= 1u;
  v4 = (_DWORD *)(a1 + 44);
  sub_60473DE4((_DWORD *)(a1 + 44), 0, &dword_60CA0B5C, 0);
  FIELD_U8(v3, 44) = 1;
  if ( !*(_BYTE *)(*(_DWORD *)v2 + 65) )
  {
    sub_60473DE4(v4, 1u, &dword_60CA0B8C, 0);
    FIELD_U8(a1, 20309) = 1;
  }
  FIELD_U8(a1, 22501) = 1;
  sub_60502548(a1 + 3636);
  FIELD_U16(a1, 4688) = 0;
  return sub_6047EABC((_DWORD *)(a1 + 3676));
}
