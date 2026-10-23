/* sub_601D1248
 * address: 0x601D1248   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_601D1248(int a1, int a2, _DWORD *a3)
{
  _BOOL4 result; // r0
  int v6; // r3
  bool v7; // zf
  int v8; // r0
  bool v9; // zf

  result = 0;
  v6 = FIELD_U32(a1, 1032);
  v7 = v6 == 4;
  if ( v6 == 4 )
    v7 = FIELD_U32(a1, 1036) == 1;
  if ( v7 )
  {
    if ( *a3 == -1 )
      return sub_601DA8A8(a2) != 0;
    v8 = a3[1];
    v9 = v8 == -1;
    if ( v8 != -1 )
      v9 = a3[2] == -1;
    return (v9 || sub_601DA8E0(a3) == 1) && sub_601DA8A8(a2) != 0;
  }
  return result;
}
