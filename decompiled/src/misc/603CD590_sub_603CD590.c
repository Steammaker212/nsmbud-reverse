/* sub_603CD590
 * address: 0x603CD590   size: 152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603CD590(int a1, int a2)
{
  int v2; // r1
  int v3; // r4
  unsigned int U32; // r0

  v2 = FIELD_U32(a2, 8);
  if ( !v2 || (FIELD_U32(v2, 304) & 0xFFFFFF) != 0x18 || !FIELD_U8(a1, 4) && (FIELD_U8(v2, 137) & 0x18) != 0 )
    return 0;
  v3 = FIELD_U32(v2, 144);
  if ( !v3 || Actor__getProfileId(*(Actor **)(v2 + 144)) != 392 )
    return 0;
  U32 = sead__Random__getU32((void *)(dword_60C9CF0C + 1340));
  sub_602EE7B8(v3, U32 >> 31, 0xFFFFFFFF);
  return 0;
}
