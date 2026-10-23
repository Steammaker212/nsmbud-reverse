/* sub_604C421C
 * address: 0x604C421C   size: 228   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604C421C(int a1)
{
  int result; // r0

  *(_BYTE *)(FIELD_U32(a1, 13868) + 64) |= 1u;
  *(_BYTE *)(FIELD_U32(a1, 13872) + 64) |= 1u;
  *(_BYTE *)(FIELD_U32(a1, 13876) + 64) |= 1u;
  *(_BYTE *)(FIELD_U32(a1, 13880) + 64) |= 1u;
  *(_BYTE *)(FIELD_U32(a1, 13884) + 64) |= 1u;
  *(_BYTE *)(FIELD_U32(a1, 13888) + 64) |= 1u;
  sub_60502548(a1 + 4056);
  FIELD_U16(a1, 5108) = 0;
  sub_6047EABC((_DWORD *)(a1 + 4096));
  FIELD_U8(a1, 5099) = 0;
  FIELD_U8(a1, 5096) = 1;
  FIELD_U8(a1, 14174) = 0;
  FIELD_U8(a1, 14189) = 0;
  result = *(unsigned __int8 *)(sub_601FEE28(dword_60C8C188) + 1375);
  FIELD_U8(a1, 14183) = result;
  return result;
}
