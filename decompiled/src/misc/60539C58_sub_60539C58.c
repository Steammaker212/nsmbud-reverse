/* sub_60539C58
 * address: 0x60539C58   size: 328   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60539C58(int a1)
{
  int v2; // r6
  int result; // r0

  sub_60502C04(a1 + 15680, dword_60B03AA0, 3);
  v2 = 0;
  *(_BYTE *)(FIELD_U32(a1, 52560) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 52564) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 52568) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 52572) + 64) |= 1u;
  *(_BYTE *)(FIELD_U32(a1, 52592) + 64) |= 1u;
  FIELD_U8(a1, 16723) = 0;
  FIELD_U8(a1, 16720) = 1;
  FIELD_U32(a1, 83516) = 0;
  result = FIELD_U32(a1, 83520);
  if ( (unsigned int)(FIELD_U32(a1, 16708) - 1) > 2 )
  {
    if ( result == 1 )
    {
      v2 = 0;
      result = sub_60474420((_DWORD *)(a1 + 12092), 2u, &dword_60CAB444, FIELD_U32(a1, 54636), 0);
    }
  }
  else
  {
    if ( result == 1 )
      return result;
    result = sub_604742D0((_DWORD *)(a1 + 12092), 2u, &dword_60CAB444, FIELD_U32(a1, 54636), 1.0, 0);
    v2 = 1;
  }
  FIELD_U32(a1, 83520) = v2;
  return result;
}
