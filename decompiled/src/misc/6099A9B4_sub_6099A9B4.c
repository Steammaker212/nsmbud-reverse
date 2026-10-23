/* sub_6099A9B4
 * address: 0x6099A9B4   size: 164   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6099A9B4(int a1)
{
  int result; // r0
  int v3; // r7
  nn__util__BinaryFileHeader *v4; // r7
  int v5; // r0

  result = FIELD_U8(a1, 40);
  if ( result )
  {
    v3 = FIELD_U32(a1, 56);
    sub_6083D2EC(FIELD_U32(v3, 128));
    sub_6083D48C(FIELD_U32(v3, 136));
    v4 = sub_60998E80(*(nn__util__BinaryFileHeader **)(a1 + 28));
    v5 = *((_DWORD *)v4 + 18);
    if ( v5 == *((_DWORD *)v4 + 16) )
      sub_60836614(v5);
    *((_DWORD *)v4 + 18) = 0;
    sub_608500C8(a1 + 24, 0, 12, 0, 0, 0, 1);
    FIELD_U32(a1, 48) = -1;
    FIELD_U32(a1, 52) = -1;
    FIELD_U8(a1, 40) = 0;
    return -1;
  }
  return result;
}
