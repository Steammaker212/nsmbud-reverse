/* sub_601E032C
 * address: 0x601E032C   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601E032C(int a1, unsigned int a2, _DWORD *a3)
{
  int v6; // r0
  int v7; // r0
  int v8; // r6
  _DWORD *v9; // r0

  v6 = sub_601A4454(dword_60C89E18, *(_DWORD *)a1, FIELD_U32(a1, 4));
  v7 = sub_60178780(v6, FIELD_U32(a1, 8));
  v8 = 0;
  if ( v7 )
  {
    v9 = (_DWORD *)sub_60178694(v7, a2);
    if ( v9 )
    {
      v8 = 1;
      *a3 = v9[21];
      a3[1] = v9[22];
      a3[2] = v9[24];
    }
  }
  return v8;
}
