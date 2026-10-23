/* sub_60835934
 * address: 0x60835934   size: 232   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60835934(int a1, int a2)
{
  unsigned int v4; // r0
  int result; // r0

  dword_60CC7808(FIELD_U32(a1, 184), a2);
  dword_60CC78FC(FIELD_U32(a1, 184), FIELD_F32(a2, 40), FIELD_F32(a2, 32), FIELD_F32(a2, 36));
  dword_60CC7804(FIELD_U32(a1, 184), a2 + 4);
  v4 = FIELD_U8(a2, 45);
  if ( (v4 & 1) != 0 )
  {
    dword_60CC7904(FIELD_U32(a1, 184), FIELD_U32(a2, 28));
    v4 = FIELD_U8(a2, 45);
  }
  dword_60CC790C(FIELD_U32(a1, 184), ((v4 >> 1) & 1) == 0);
  dword_60CC7908(FIELD_U32(a1, 184), ((FIELD_U8(a2, 45) >> 2) & 1) == 0);
  result = FIELD_U8(a1, 1);
  if ( (result & 2) != 0 )
    return dword_60CC7910(FIELD_U32(a1, 184), (FIELD_U8(a2, 45) >> 3) & 1);
  return result;
}
