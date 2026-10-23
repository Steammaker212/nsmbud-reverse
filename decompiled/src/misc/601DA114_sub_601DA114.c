/* sub_601DA114
 * address: 0x601DA114   size: 180   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_601DA114(int a1)
{
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int v6; // r0

  v2 = sub_601A443C(dword_60C89E18, *(_DWORD *)a1, FIELD_U32(a1, 4));
  if ( sub_60183054(v2, FIELD_U32(a1, 8), 4096) )
    return 1;
  v3 = sub_601A443C(dword_60C89E18, *(_DWORD *)a1, FIELD_U32(a1, 4));
  if ( sub_60183054(v3, FIELD_U32(a1, 8), 0x2000) )
    return 1;
  v4 = sub_601A443C(dword_60C89E18, *(_DWORD *)a1, FIELD_U32(a1, 4));
  if ( sub_60183054(v4, FIELD_U32(a1, 8), 0x4000) )
    return 1;
  v6 = sub_601A443C(dword_60C89E18, *(_DWORD *)a1, FIELD_U32(a1, 4));
  return sub_60183054(v6, FIELD_U32(a1, 8), 0x8000) != 0;
}
