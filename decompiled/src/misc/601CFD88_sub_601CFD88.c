/* sub_601CFD88
 * address: 0x601CFD88   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_601CFD88(int a1, int a2)
{
  int v2; // r1
  _BOOL4 result; // r0
  int v4; // r0
  int v5; // [sp+4h] [bp-Ch] BYREF

  v5 = a2;
  v2 = sub_601CFB8C(a1, &v5, 1);
  result = 0;
  if ( v2 == 1 )
  {
    v4 = sub_601FF340(dword_60C8C188, 0);
    return (FIELD_U32(v4, 272) & v5) != 0;
  }
  return result;
}
