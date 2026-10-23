/* sub_60856AF0
 * address: 0x60856AF0   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60856AF0(int a1)
{
  int v2; // r0
  int result; // r0
  int v4; // r4
  int v5; // t1
  int v6; // r3

  v2 = dword_60CC7F88(36, 4, dword_60CC7F90);
  if ( !v2 )
    return 0;
  result = sub_60850328(v2);
  v5 = FIELD_U32(a1, 4);
  v4 = a1 + 4;
  v6 = FIELD_U32(result, 4);
  FIELD_U32(result, 4) = v5;
  FIELD_U32(v6, 4) = v4;
  *(_DWORD *)(*(_DWORD *)v4 + 4) = result + 4;
  *(_DWORD *)v4 = v6;
  return result;
}
