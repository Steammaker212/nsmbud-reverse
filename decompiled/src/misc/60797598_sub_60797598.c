/* sub_60797598
 * address: 0x60797598   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60797598(int a1)
{
  int v2; // r0
  unsigned int v3; // r0
  int v4; // r1
  int result; // r0
  int v6; // [sp+4h] [bp-Ch] BYREF

  v2 = FIELD_U32(a1, 1316);
  if ( v2 == 6 )
  {
    v3 = FIELD_U8(a1, 84);
    v4 = 0;
    if ( v3 < 6 )
      v4 = (char)v3;
    v6 = *(_DWORD *)(dword_60C99DD4 + 72 * v4 + 316);
    result = sub_60814F00(&v6);
  }
  else
  {
    result = dword_60B0C2E4[v2];
  }
  FIELD_U32(a1, 1148) = result;
  return result;
}
