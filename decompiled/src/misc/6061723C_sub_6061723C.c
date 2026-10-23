/* sub_6061723C
 * address: 0x6061723C   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6061723C(int a1)
{
  _BYTE *v2; // r0
  char v3; // r1
  int v4; // t1
  char v5; // r1
  __int64 v6; // r0
  int result; // r0
  int v8; // r5

  v4 = FIELD_U8(a1, 7080);
  v2 = (_BYTE *)(a1 + 7080);
  v3 = v4;
  if ( v4 )
  {
    v5 = v3 - 1;
    *v2 = v5;
    if ( v5 == 1 )
      sub_606C8B5C(a1);
  }
  v6 = sub_6072A6DC(EventMgr__instance, FIELD_U8(a1, 539), FIELD_U8(a1, 540));
  result = FIELD_U32(EventMgr__instance, 16) & v6
         | ((FIELD_U64(EventMgr__instance, 16) & (unsigned __int64)v6) >> 32);
  if ( result )
  {
    v8 = FIELD_U32(a1, 7184);
    result = sub_606C8B1C(a1);
    if ( v8 == result )
      return (*(int (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60CB3310);
  }
  return result;
}
