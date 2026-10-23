/* sub_609A6570
 * address: 0x609A6570   size: 244   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609A6570(int a1, const void **a2, int a3)
{
  _BYTE *v6; // r1
  size_t v7; // r5
  bool v8; // cc
  void *v9; // r7
  int result; // r0
  bool v11; // zf

  (*((void (__fastcall **)(const void **))*a2 + 3))(a2);
  v6 = a2[1];
  v7 = 0;
  while ( v6[v7] )
  {
    if ( !v6[v7 + 1] )
    {
      ++v7;
      break;
    }
    if ( !v6[v7 + 2] )
    {
      v7 += 2;
      break;
    }
    v8 = (int)(v7 + 2) < 0x80000;
    v7 += 3;
    if ( !v8 )
    {
      v7 = 0;
      break;
    }
  }
  v9 = (void *)operator_new_8DE2C8(v7 + 1, a3, 4);
  (*((void (__fastcall **)(const void **))*a2 + 3))(a2);
  qmemcpy(v9, a2[1], v7);
  *((_BYTE *)v9 + v7) = 0;
  result = FIELD_U32(a1, 96);
  if ( (void *)result != v9 )
  {
    v11 = result == 0;
    if ( result )
      v11 = FIELD_U8(a1, 104) == 0;
    if ( !v11 )
      operator_delete_8DE3FC((void *)result);
    FIELD_U8(a1, 104) = 1;
    FIELD_U32(a1, 96) = v9;
    FIELD_U32(a1, 100) = v7;
    return 1;
  }
  return result;
}
