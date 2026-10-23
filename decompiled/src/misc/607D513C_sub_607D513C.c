/* sub_607D513C
 * address: 0x607D513C   size: 200   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_607D513C(int a1)
{
  unsigned int v2; // r4
  int v3; // r5
  int v4; // r0
  int *v5; // r2
  unsigned int v6; // r1
  int *result; // r0
  int v8; // r6
  int v9; // r7
  int v10; // r0

  (*(void (__fastcall **)(_DWORD, int, float))(***(_DWORD ***)(a1 + 24) + 164))(**(_DWORD **)(a1 + 24), 1, 1.0);
  v2 = 0;
  (*(void (__fastcall **)(_DWORD, _DWORD, float))(***(_DWORD ***)(a1 + 24) + 164))(**(_DWORD **)(a1 + 24), 0, 1.0);
  v3 = (*(int (__fastcall **)(_DWORD))(***(_DWORD ***)(a1 + 24) + 92))(**(_DWORD **)(a1 + 24));
  v4 = FIELD_U32(a1, 24);
  v5 = *(int **)(v4 + 12);
  v6 = FIELD_U32(v4, 8);
  result = v5 + 1;
  v8 = *v5;
  if ( v6 <= 1 )
    result = v5;
  if ( v3 >= 1 )
  {
    v9 = *result;
    do
    {
      if ( v2 > 7 || v2 == 1 )
        v10 = v8;
      else
        v10 = v9;
      result = (int *)sub_60448AF4(v10, v2++);
    }
    while ( v3 != v2 );
  }
  return result;
}
