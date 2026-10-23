/* sub_608D3E14
 * address: 0x608D3E14   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_608D3E14(int a1, int a2, int a3)
{
  int *v5; // r6
  int *result; // r0
  int v7; // r5
  int *v8; // r6
  int v9; // t1
  int *v10; // r4

  sub_608D3D58();
  v5 = (int *)dword_60CC9860;
  result = sub_608D3D58();
  if ( v5 != &dword_60CC985C )
  {
    v7 = a2 + a3;
    do
    {
      v9 = *(v5 - 1);
      v8 = v5 - 1;
      v10 = (int *)v8[2];
      (*(void (__fastcall **)(int *, int, int))(v9 + 8))(v8, a2, v7);
      result = sub_608D3D58();
      v5 = v10;
    }
    while ( v10 != &dword_60CC985C );
  }
  return result;
}
