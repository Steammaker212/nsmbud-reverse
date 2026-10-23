/* sub_601DA074
 * address: 0x601DA074   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_601DA074(int a1)
{
  int v2; // r0
  int v4; // r0

  v2 = sub_601A443C(dword_60C89E18, *(_DWORD *)a1, FIELD_U32(a1, 4));
  if ( sub_60183038(v2, FIELD_U32(a1, 8), 1) )
    return 1;
  v4 = sub_601A443C(dword_60C89E18, *(_DWORD *)a1, FIELD_U32(a1, 4));
  return sub_60183038(v4, FIELD_U32(a1, 8), 2) != 0;
}
