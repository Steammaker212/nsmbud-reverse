/* sub_6053F564
 * address: 0x6053F564   size: 496   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6053F564(int a1)
{
  int result; // r0

  *(_BYTE *)(FIELD_U32(a1, 31696) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 31700) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 31704) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 31708) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 31712) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 31716) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 31720) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 31724) + 64) &= ~1u;
  FIELD_U32(a1, 34692) = 0;
  sub_60502548(a1 + 31800);
  FIELD_U16(a1, 32852) = 0;
  sub_6047EABC((_DWORD *)(a1 + 31840));
  *(_BYTE *)(FIELD_U32(a1, 31736) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 31740) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 31744) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 31748) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 31752) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 31756) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 31760) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 31764) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 31768) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 31772) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 31776) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 31780) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 31784) + 64) &= ~1u;
  result = FIELD_U32(a1, 31788);
  FIELD_U8(result, 64) &= ~1u;
  return result;
}
