/* sub_609131DC
 * address: 0x609131DC   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609131DC(int a1)
{
  _DWORD *v1; // r6
  _DWORD *v3; // r0
  int v4; // r1
  bool v5; // zf
  int v6; // r7
  char *v7; // r0

  v3 = *(_DWORD **)(a1 + 4);
  v4 = v3[11];
  v5 = v4 == 0;
  if ( v4 )
  {
    v1 = (_DWORD *)v3[10];
    v5 = v1 == v3 + 9;
  }
  if ( v5 )
    return 1;
  v6 = v3[12];
  v7 = (char *)v1 - v6;
  while ( (*(int (__fastcall **)(char *))(*(_DWORD *)v7 + 64))(v7) == 1 )
  {
    v1 = (_DWORD *)v1[1];
    v7 = (char *)v1 - v6;
    if ( (_DWORD *)((char *)v1 - v6) == (_DWORD *)(FIELD_U32(a1, 4) + 36 - *(_DWORD *)(FIELD_U32(a1, 4) + 48)) )
      return 1;
  }
  return 0;
}
