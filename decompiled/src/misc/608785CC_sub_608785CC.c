/* sub_608785CC
 * address: 0x608785CC   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608785CC(int a1, int a2, int a3, int a4)
{
  int v4; // r4
  int result; // r0
  int v8; // r1
  int v9; // r6
  int v10; // r3

  v4 = a3;
  result = sub_608729E4(a2, a3);
  v8 = a4 << 30;
  do
  {
    v9 = FIELD_U32(a1, 56);
    v10 = (*(_DWORD *)(v9 + 4 * v4) >> 15) & 0x7FFF;
    if ( v10 != 0x7FFF )
    {
      *(_DWORD *)(v9 + 4 * v10) &= 0x3FFFFFFFu;
      *(_DWORD *)(FIELD_U32(a1, 56) + 4 * v10) |= v8;
    }
    ++v4;
  }
  while ( v4 < result );
  return result;
}
