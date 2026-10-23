/* sub_608E5C48
 * address: 0x608E5C48   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608E5C48(int a1, int a2, int a3)
{
  bool v4; // zf
  int v6; // r4
  int *v7; // r7
  int v8; // r0

  v4 = a2 == 0;
  v6 = 0;
  if ( a2 )
    v4 = FIELD_U32(a1, 80) == 0;
  if ( !v4 )
  {
    v7 = (int *)sub_608E78F8(a1, a2);
    v8 = (*(int (__fastcall **)(_DWORD, int, int *))(**(_DWORD **)(a1 + 80) + 28))(FIELD_U32(a1, 80), a3, v7 + 1);
    if ( v8 )
    {
      *v7 = v8;
      v6 = a1;
      v7[3] = 0;
    }
  }
  return v6;
}
