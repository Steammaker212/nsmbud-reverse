/* sub_6081F5DC
 * address: 0x6081F5DC   size: 256   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6081F5DC(int a1, unsigned int a2, unsigned int a3, _DWORD *a4)
{
  int v5; // r4
  int v6; // r8
  int v7; // r6
  int *v8; // r6
  int v9; // t1
  int v10; // r0
  int v11; // r1
  int i; // r2

  v5 = 0;
  if ( a3 >= 2 )
    a3 = 0;
  if ( a2 >= 9 )
    a2 = 0;
  v6 = a1 + 9216 * a2 + 4608 * a3;
  while ( 1 )
  {
    v7 = v6 + 36 * v5;
    (*(void (__fastcall **)(int))(FIELD_U32(v7, 15540) + 12))(v7 + 15540);
    (*(void (__fastcall **)(int))(FIELD_U32(v7, 15540) + 12))(v7 + 15540);
    v9 = FIELD_U32(v7, 15544);
    v8 = (int *)(v7 + 15544);
    (*(void (__fastcall **)(_DWORD *))(*a4 + 12))(a4);
    v10 = a4[1];
    if ( v9 == v10 )
      break;
    v11 = *v8;
    for ( i = 1; *(unsigned __int8 *)(v11 + i - 1) == *(unsigned __int8 *)(v10 + i - 1); i += 2 )
    {
      if ( !*(_BYTE *)(v11 + i - 1) )
        return v5;
      if ( i > 0x80000 || *(unsigned __int8 *)(v11 + i) != *(unsigned __int8 *)(v10 + i) )
        break;
      if ( !*(_BYTE *)(v11 + i) )
        return v5;
    }
    if ( ++v5 >= 128 )
      return -1;
  }
  return v5;
}
