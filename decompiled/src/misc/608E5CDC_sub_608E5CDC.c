/* sub_608E5CDC
 * address: 0x608E5CDC   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608E5CDC(int a1, size_t *a2, int a3, void *a4, size_t a5)
{
  _DWORD *v7; // r7
  size_t v8; // r5
  int v9; // r2
  unsigned int v10; // r1
  int result; // r0

  v7 = (_DWORD *)sub_608E78F8(a1, a3);
  v8 = a5;
  v9 = v7[3];
  v10 = v7[2];
  if ( v9 + a5 > v10 )
    v8 = v10 - v9;
  qmemcpy(a4, (const void *)(*v7 + v9), v8);
  v7[3] += v8;
  result = 1;
  if ( a2 )
    *a2 = v8;
  return result;
}
