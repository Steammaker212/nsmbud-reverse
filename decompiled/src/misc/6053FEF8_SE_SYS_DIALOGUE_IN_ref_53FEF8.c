/* SE_SYS_DIALOGUE_IN_ref_53FEF8
 * address: 0x6053FEF8   size: 604   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_SYS_DIALOGUE_IN_ref_53FEF8(int a1)
{
  int v2; // r7
  _DWORD *v3; // r6
  int v4; // r5

  v2 = 0;
  FIELD_U32(a1, 32832) = 4;
  sub_60473DE4((_DWORD *)(a1 + 28128), 0, &dword_60CABA84, 0);
  FIELD_U8(a1, 34724) = 1;
  *(_BYTE *)(FIELD_U32(a1, 31696) + 64) |= 1u;
  *(_BYTE *)(FIELD_U32(a1, 31708) + 64) |= 1u;
  *(_BYTE *)(FIELD_U32(a1, 31712) + 64) |= 1u;
  *(_BYTE *)(FIELD_U32(a1, 31728) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 31732) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 31736) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 31740) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 31744) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 31748) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 31752) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 31756) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 31760) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 31736) + 64) |= 1u;
  *(_BYTE *)(FIELD_U32(a1, 31740) + 64) |= 1u;
  v3 = (_DWORD *)(a1 + 34716);
  if ( FIELD_U32(a1, 34716) )
  {
    sub_60541DF8(a1, 0, 2);
    sub_605324A4(a1 + 8028, 0);
    v2 = 1;
    FIELD_U32(a1, 31792) = 0;
    if ( *v3 == 1 )
      goto LABEL_5;
  }
  v4 = dword_60AF2180[v2];
  sub_60541DF8(a1, 1, v4);
  sub_605324A4(a1 + 4012 * v4 + 4, 1u);
  *(_DWORD *)(a1 + 4 * v2 + 31792) = 1;
  if ( !v2 && *v3 != 2 )
  {
LABEL_5:
    sub_60541DF8(a1, 2, 3);
    sub_605324A4(a1 + 12040, 2u);
    FIELD_U32(a1, 31796) = 2;
  }
  FIELD_U8(a1, 34725) = 0;
  FIELD_U8(a1, 34726) = 0;
  sub_60478680((int)"SE_SYS_DIALOGUE_IN", 15);
  return sub_6081699C(dword_60CC6B68);
}
