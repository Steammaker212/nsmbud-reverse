/* sub_6042B94C
 * address: 0x6042B94C   size: 324   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6042B94C(int a1, const void *a2)
{
  char *v4; // r9
  _DWORD **v5; // r8
  int v6; // r4
  char *v7; // r5
  int v8; // r7
  int v9; // r0
  int v10; // r1
  _DWORD *v11; // r4
  _DWORD *v12; // r0
  _DWORD *v13; // r5

  v4 = *(char **)(a1 + 20);
  v5 = (_DWORD **)(a1 + 16);
  if ( v4 == (char *)(a1 + 16) )
    goto LABEL_13;
  v6 = a1 - 72;
  v7 = v4 - 88;
  v8 = FIELD_U32(a1, 20);
  while ( memcmp(v7, a2, 0x58u) )
  {
    v8 = FIELD_U32(v8, 4);
    v7 = (char *)(v8 - 88);
    if ( v8 - 88 == v6 )
      goto LABEL_13;
  }
  if ( !v7 )
  {
LABEL_13:
    v9 = FIELD_U32(a1, 24);
    v10 = FIELD_U32(a1, 36);
    if ( v9 >= v10 )
    {
      if ( v9 < 1 )
        v11 = 0;
      else
        v11 = *v5;
      if ( v11 )
        v11 -= 22;
      sead__ListNode__erase(v11 + 22);
      --FIELD_U32(a1, 24);
      *v11 = FIELD_U32(a1, 28);
      FIELD_U32(a1, 28) = v11;
      v9 = FIELD_U32(a1, 24);
      v10 = FIELD_U32(a1, 36);
    }
    if ( v9 < v10 )
    {
      v12 = *(_DWORD **)(a1 + 28);
      v13 = 0;
      if ( v12 )
      {
        v13 = *(_DWORD **)(a1 + 28);
        FIELD_U32(a1, 28) = *v12;
      }
      qmemcpy(v13, a2, 0x58u);
      v13[22] = 0;
      v13[23] = 0;
      sub_608DE510(v5, v13 + 22);
      ++FIELD_U32(a1, 24);
    }
  }
  else
  {
    if ( FIELD_S32(a1, 24) <= 0 )
      v4 = 0;
    if ( v4 )
      v4 -= 88;
    if ( v7 != v4 )
      sub_608DE7A4(v5, v4 + 88, v8);
  }
  FIELD_U8(a1, 5992) = 1;
  return 5992;
}
