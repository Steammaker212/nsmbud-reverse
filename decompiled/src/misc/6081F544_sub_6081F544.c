/* sub_6081F544
 * address: 0x6081F544   size: 148   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6081F544(int a1, unsigned int a2, unsigned int a3, unsigned int a4, _DWORD *a5)
{
  unsigned int v5; // r6
  int v6; // r1
  int v7; // r6
  void *v8; // r4
  int result; // r0
  const void *v10; // r1
  int v11; // r0
  size_t v12; // r5

  v5 = 0;
  if ( a2 >= 9 )
    a2 = 0;
  v6 = 9 * a2;
  if ( a3 >= 2 )
    a3 = 0;
  if ( a4 < 0x80 )
    v5 = a4;
  v7 = a1 + (v6 << 10) + 4608 * a3 + 36 * v5;
  v8 = *(void **)(v7 + 15544);
  result = (*(int (__fastcall **)(_DWORD *))(*a5 + 12))(a5);
  v10 = (const void *)a5[1];
  if ( v8 != v10 )
  {
    v11 = FIELD_U32(v7, 15548);
    v12 = v11 - 1;
    if ( v11 > 4 )
      v12 = 4;
    qmemcpy(v8, v10, v12);
    *((_BYTE *)v8 + v12) = 0;
    return 0;
  }
  return result;
}
