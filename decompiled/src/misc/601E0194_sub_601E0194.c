/* sub_601E0194
 * address: 0x601E0194   size: 168   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601E0194(int a1)
{
  int v2; // r0
  int v3; // r5
  int v4; // r4

  v2 = sub_601A4454(dword_60C89E18, *(_DWORD *)a1, FIELD_U32(a1, 4));
  v3 = sub_60178780(v2, FIELD_U32(a1, 8));
  v4 = sub_60178694(v3, 0) != 0;
  if ( sub_60178694(v3, 1u) )
    ++v4;
  if ( sub_60178694(v3, 2u) )
    ++v4;
  if ( sub_60178694(v3, 3u) )
    ++v4;
  if ( sub_60178694(v3, 4u) )
    ++v4;
  if ( sub_60178694(v3, 5u) )
    ++v4;
  return v4;
}
