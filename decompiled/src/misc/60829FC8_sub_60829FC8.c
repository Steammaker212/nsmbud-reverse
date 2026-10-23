/* sub_60829FC8
 * address: 0x60829FC8   size: 220   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60829FC8(int a1, unsigned int a2)
{
  int v4; // r7
  int v5; // r0
  int v6; // r0
  _DWORD *v7; // r0
  int v8; // r1
  int v9; // t1
  int v10; // r2
  char v11; // r0
  int result; // r0

  *(_BYTE *)(sub_603F7EE4(dword_60C99DC8, a2) + 2) = 1;
  v4 = FIELD_U32(a1, 40) + 2436 * a2;
  v5 = sub_603F7EE4(dword_60C99DC8, a2);
  sub_603F7D00(v5, v4 + 19748);
  v6 = FIELD_U32(a1, 40);
  v9 = FIELD_U32(v6, 44240);
  v7 = (_DWORD *)(v6 + 44240);
  v8 = v9;
  v10 = v9;
  if ( v9 != -1 )
    ++v10;
  *v7 = v10;
  v11 = FIELD_U8(a1, 48);
  if ( v8 != v10 )
    v11 |= 1u;
  FIELD_U8(a1, 48) = v11;
  result = FIELD_U32(a1, 24);
  if ( !result )
  {
    if ( FIELD_U8(dword_60C9C114, 5992) )
      *(_BYTE *)(FIELD_U32(a1, 40) + 44316) = sub_6042BAEC(dword_60C9C114, (char *)(FIELD_U32(a1, 40) + 44317));
    FIELD_U32(a1, 24) = 2;
    return (*(int (__fastcall **)(_DWORD, int, int))(**(_DWORD **)(a1 + 20) + 12))(FIELD_U32(a1, 20), 2, 1);
  }
  return result;
}
