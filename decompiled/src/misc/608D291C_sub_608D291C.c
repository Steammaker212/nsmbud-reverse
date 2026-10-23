/* sub_608D291C
 * address: 0x608D291C   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608D291C(_DWORD *a1, const void *a2, size_t a3, int a4, int a5, int a6)
{
  char v6; // r12
  unsigned int v8; // r5
  unsigned int v9; // r3
  int result; // r0
  int v11; // r6
  int v12; // r3
  int v14; // r1

  v8 = (unsigned int)(a1 + 2);
  v9 = (unsigned int)(a1 + 3);
  result = (unsigned int)(a1 + 2) | (1619863860 << v6);
  if ( result != (v9 | (1619863864 << v6)) )
  {
    v11 = v8 | (1619863876 << v6);
    v12 = *a1 + 16 * v11;
    FIELD_U32(v12, 8) = a5;
    FIELD_U32(v12, 12) = a6;
    qmemcpy(*(void **)(*a1 + 16 * v11), a2, a3);
    v14 = v11 + 1;
    if ( v11 + 1 >= a1[1] )
      v14 = 0;
    __asm { ORR             PC, R5, R1,LSL R12 }
  }
  return result;
}
