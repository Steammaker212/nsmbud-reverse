/* sub_601DA824
 * address: 0x601DA824   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601DA824(int a1)
{
  int v2; // r8
  int v3; // r5
  int v4; // r6
  int v5; // r7
  int v6; // r6

  v2 = sub_601A443C(dword_60C89E18, *(_DWORD *)a1, FIELD_U32(a1, 4));
  v3 = *(_DWORD *)a1;
  v4 = dword_60AFD08C[*(_DWORD *)a1];
  v5 = sub_60183054(v2, FIELD_U32(a1, 8), v4);
  if ( v5 )
    v5 = v4;
  v6 = dword_60AFD0B0[v3];
  if ( sub_60183054(v2, FIELD_U32(a1, 8), v6) )
    return v5 | v6;
  return v5;
}
