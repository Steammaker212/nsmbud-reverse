/* sub_60181AB4
 * address: 0x60181AB4   size: 288   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60181AB4(int a1, _DWORD *a2)
{
  unsigned int v4; // r6
  unsigned int v5; // r0
  int v6; // r1
  char *v7; // r0
  char *v8; // r9
  int v9; // r1
  int i; // r2
  int (**v12)(); // [sp+4h] [bp-2Ch] BYREF
  char *v13; // [sp+8h] [bp-28h]

  if ( FIELD_S32(a1, 28) < 1 )
    return -1;
  v4 = 0;
  while ( 1 )
  {
    v5 = 0;
    if ( v4 < 0x100 )
      v5 = v4;
    v6 = a1 + 1096 * v5;
    v7 = &byte_60B3BA34;
    if ( FIELD_S32(v6, 52) >= 1 )
      v7 = *(char **)(v6 + 48);
    v12 = &sead__SafeStringBase__vtable;
    v13 = v7;
    (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
    (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
    v8 = (char *)a2[1];
    ((void (__fastcall *)(int (***)()))v12[3])(&v12);
    if ( v8 == v13 )
      break;
    v9 = a2[1];
    for ( i = 1; *(unsigned __int8 *)(v9 + i - 1) == (unsigned __int8)v13[i - 1]; i += 2 )
    {
      if ( !*(_BYTE *)(v9 + i - 1) )
        return v4;
      if ( i > 0x80000 || *(unsigned __int8 *)(v9 + i) != (unsigned __int8)v13[i] )
        break;
      if ( !*(_BYTE *)(v9 + i) )
        return v4;
    }
    if ( (signed int)++v4 >= FIELD_U32(a1, 28) )
      return -1;
  }
  return v4;
}
