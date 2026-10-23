/* sub_608BBF88
 * address: 0x608BBF88   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608BBF88(int a1)
{
  int result; // r0
  int v3; // r6
  int v4; // r5
  int *v5; // r1
  int v6; // r2
  int v7; // r6
  int v8; // t1

  result = FIELD_U8(a1, 574);
  if ( result )
  {
    FIELD_U8(a1, 574) = 0;
    sub_608AF040((_DWORD *)a1);
    v3 = FIELD_U32(a1, 440);
    v4 = a1 + 428;
    if ( a1 + 428 != v3 + 16 )
    {
      v5 = *(int **)(a1 + 432);
      v6 = *v5;
      *(_DWORD *)(FIELD_U32(a1, 428) + 4) = v5;
      *v5 = FIELD_U32(a1, 428);
      FIELD_U32(v6, 4) = v4;
      FIELD_U32(a1, 428) = v6;
    }
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 16))(a1);
    result = FIELD_U32(a1, 428);
    v8 = FIELD_U32(v3, 24);
    v7 = v3 + 24;
    FIELD_U32(a1, 428) = v8;
    FIELD_U32(result, 4) = v7;
    *(_DWORD *)(*(_DWORD *)v7 + 4) = v4;
    *(_DWORD *)v7 = result;
  }
  return result;
}
