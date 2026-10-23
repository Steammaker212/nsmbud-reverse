/* sub_603FD94C
 * address: 0x603FD94C   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603FD94C(int *a1, unsigned int *a2, unsigned int *a3, unsigned int a4)
{
  int result; // r0
  int *v6; // r12
  int v7; // t1
  bool v8; // zf
  _DWORD *v9; // r3
  unsigned int v10; // r12
  unsigned int v11; // r3

  result = 0;
  v7 = *a1;
  v6 = &a1[24 * a4];
  v8 = a4 <= 0x42 && v7 != 0;
  v9 = v6 + 5;
  if ( v8 )
  {
    v10 = v6[25];
    if ( v10 <= 8 )
    {
      v11 = v9[19];
      if ( v11 <= 0x39 )
      {
        *a2 = v10;
        *a3 = v11;
        return 1;
      }
    }
  }
  return result;
}
